// Copyright 2023 Dale Grinsell. All rights reserved.


#include "BSBirdSpawnerComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "AudioDeviceManager.h"
#include "AudioDevice.h"
#include "Sound/SoundBase.h"
#include "Components/AudioComponent.h"
#include "BSAmbientZone.h"
#include "BSBirdActor.h"
#include "Engine/DataTable.h"
#include "TimerManager.h"

UBSBirdSpawnerComponent::UBSBirdSpawnerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.TickInterval = SpawnInterval;

	//add the default zone to the array to make it the first entry.
	ActiveZoneArray.Add(TEXT("DefaultZone"));

	// add an entry to the struct called DefaultZone when component is added
	FBSZoneSpecifier DefaultZone;
	DefaultZone.Zone = TEXT("DefaultZone");
	DefaultZone.BirdDataTable = nullptr;
	DefaultZone.bZoneHasBirds = false;
	DefaultZone.MaxBirdCount = 5;
	Zones.Add(DefaultZone);
}

void UBSBirdSpawnerComponent::BeginPlay()
{
	Super::BeginPlay();

	BirdSpawnerOwner = Cast<APawn>(GetOwner());
	
	//Component tick which defines how often birds are spawned
	SetComponentTickInterval(SpawnInterval);

	//Sets a timer to register if the player is overlapping a zone on beginplay. This allows all actors to load before it runs checks.
	GetOwner()->GetWorldTimerManager().SetTimer(AssessBirdZones, this, &UBSBirdSpawnerComponent::LoadBirdOverlaps, 1.0f, false);
}	

void UBSBirdSpawnerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	
	//Iterate through the bird array to find any birds that are now out of range and remove and stop the sound.
	if(BirdArray.Num() != 0)
	{
		TArray<ABSBirdActor*> BirdDestroyList;
		for (ABSBirdActor* BirdDistanceCheck : BirdArray)
		{
			if(FVector::Dist(GetOwner()->GetActorLocation(), BirdDistanceCheck->GetActorLocation()) > BirdKillDistance)
			{
				BirdDestroyList.Add(BirdDistanceCheck);
			}
		}

		if(BirdDestroyList.Num() !=0)
		{
			for (ABSBirdActor* BirdToDestroy : BirdDestroyList)
			{
				BirdArray.Remove(BirdToDestroy);
				BirdToDestroy->bIsBirdMarkedForDestroy = true;
			}
		}

		if(BirdDestroyList.Num() !=0)
		{
			BirdDestroyList.Empty();
		}
	}

	//If zones do not equal zero, iterate through the zones on the bird spawner to find a matching zone.
	if(Zones.Num() !=0)
	{
		for (FBSZoneSpecifier ZoneSearch : Zones)
		{
			if (ZoneSearch.Zone == ActiveZoneArray[ActiveZoneArray.Num() - 1])
			{
				if(ZoneSearch.bZoneHasBirds)
				{
					//If a matching zone is found, call PopulateBirdArray passing in the relevant bird table
					if(ZoneSearch.BirdDataTable)
					{
						PopulateBirdArray(ZoneSearch.BirdDataTable, ZoneSearch.MaxBirdCount, ZoneSearch.bSingleBirdInstance);
					}
					else
					{
						//If the zone should have birds but there is no bird table, warning.
						if (!ZoneSearch.BirdDataTable)
						{
							UE_LOG(LogTemp, Warning, TEXT("Bird Spawner: There is no bird data table set for the current zone"))
						}
					}
				}
				bIsMatchingZoneToActiveZoneFound = true;
				break;
			}
		}
		//If there is no zone name in the bird spawner matching the active zone, warning.
		if (bIsMatchingZoneToActiveZoneFound != true)
		{
			UE_LOG(LogTemp, Warning, TEXT("Bird Spawner: There is no specified matching zone to the active zone in the Bird Spawner Component"))
		}
	}
	//If there are no zone entries in the bird spawner, log warning.
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Bird Spawner: There are no zones specified in the Bird Spawner Component!"))
	}
}

FVector UBSBirdSpawnerComponent::GetBirdSpawnLocation()
{
	FVector BirdLocation;

	if (!EnableLandscapeDetection)
	{
		//Get a random location above and around the player.
		BirdLocation =  FVector(
		BirdSpawnerOwner->GetActorLocation().X  + FMath::RandRange(-2500.f, 2500.f), 
		BirdSpawnerOwner->GetActorLocation().Y + FMath::RandRange(-2500.f, 2500.f), 
		BirdSpawnerOwner->GetActorLocation().Z + FMath::RandRange(800.f, 1000.f)
		);

		return BirdLocation;
	}

	else
	{
		//Line trace to ensure the birds are not spawner below ground.
		BirdLocation =  FVector(
		BirdSpawnerOwner->GetActorLocation().X  + FMath::RandRange(-2500.f, 2500.f), 
		BirdSpawnerOwner->GetActorLocation().Y + FMath::RandRange(-2500.f, 2500.f), 
		BirdSpawnerOwner->GetActorLocation().Z + 4000.f
		);

		FVector LineTraceEnd(BirdLocation.X, BirdLocation.Y, BirdLocation.Z - 8000.f);

		FCollisionQueryParams TraceParams(FName(TEXT("Floor Trace")), false, GetOwner());
		FHitResult HitResult;
		GetWorld()->UWorld::LineTraceSingleByObjectType
			(HitResult,
			BirdLocation,
			LineTraceEnd,
			FCollisionObjectQueryParams (LandscapeObjectType),
			TraceParams
			);

		if(HitResult.bBlockingHit != true)
		{
			UE_LOG(LogTemp, Warning, TEXT("Bird Spawner: Line trace from the player to get the landscape position did not hit anything! Check the landscape collision channel is set to the correct channel or set EnableLandscapeDetection to false."))
			BirdLocation.Z = BirdSpawnerOwner->GetActorLocation().Z + FMath::RandRange(800.f, 1000.f);
			return BirdLocation;
		}

		//Set the bird's location to a point above the floor.
		BirdLocation.Z = HitResult.ImpactPoint.Z + 1000 + FMath::RandRange(-50.f, 300.f);

		return BirdLocation;
	}
}

void UBSBirdSpawnerComponent::LoadBirdOverlaps()
{
	//Check if the player has spawned inside a zone on begin play. If so, add to active zone list.
	TArray<AActor*> OutActors;
	GetOwner()->GetOverlappingActors(OutActors, ABSAmbientZone::StaticClass());
	if (OutActors.Num() != 0)
	{
		for (AActor* Actor : OutActors)
		{
			if (ABSAmbientZone* ReturnedAmbientZone = Cast<ABSAmbientZone>(Actor))
			{
				ActiveZoneArray.Add(ReturnedAmbientZone->AmbientZoneName);
			}
		}
	}
}

void UBSBirdSpawnerComponent::PopulateBirdArray(class UDataTable* BirdDataTable, int MaxBirds, bool bSingleBirdInstance)
{
	//do this if multiple instances of each bird can be spawned
	if (!bSingleBirdInstance)
	{
		TArray<FBSBirdStruct*> OutBirdRows;
		BirdDataTable->GetAllRows<FBSBirdStruct>(FString (""), OutBirdRows);
		while (BirdArray.Num() < MaxBirds)
		{
			BirdArray.Add(GetWorld()->SpawnActor<ABSBirdActor>(OutBirdRows[FMath::RandRange(0, OutBirdRows.Max()-1)]->BirdActor, GetBirdSpawnLocation(), FRotator(0,0,0)));
		}
	}

	//do this if only one instance of each bird can be spawned
	else
	{
		TArray<FBSBirdStruct*> AvailableBirds;
		TArray<FBSBirdStruct*> OutBirdRows;
		BirdDataTable->GetAllRows<FBSBirdStruct>(FString (""), OutBirdRows);
		AvailableBirds = OutBirdRows;
		for (ABSBirdActor *BirdActorCheck : BirdArray)
		{
			for (FBSBirdStruct *BirdRowCheck : OutBirdRows)
			{
				if (BirdActorCheck->GetClass() == BirdRowCheck->BirdActor.Get())
				{
					AvailableBirds.Remove(BirdRowCheck);
				}
			}
		}

		//if (AvailableBirds.Num() == 0)
		//{
			//UE_LOG(LogTemp, Warning, TEXT("Bird Spawner: All bird instances spawned. Add more birds to the data table or uncheck single bird instance bool"));
			//return;
		//}

		while (BirdArray.Num() < MaxBirds)
		{
			if (AvailableBirds.Num() != 0)
			{
				int32 BirdSelection = FMath::RandRange(0, AvailableBirds.Num()-1);
				BirdArray.Add(GetWorld()->SpawnActor<ABSBirdActor>(AvailableBirds[BirdSelection]->BirdActor, GetBirdSpawnLocation(), FRotator(0,0,0)));
				AvailableBirds.RemoveAt(BirdSelection);
			}
			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Bird Spawner: All bird instances spawned. Add more birds to the data table or uncheck single bird instance bool"));
				return;				
			}
		}
	}
}


