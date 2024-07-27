// Copyright 2023 Dale Grinsell. All rights reserved.


#include "BSAmbientZone.h"
#include "Components/BoxComponent.h"
#include "Sound/SoundBase.h"
#include "Kismet/GameplayStatics.h"
#include "Components/AudioComponent.h"
#include "BSBirdSpawnerComponent.h"
#include "BSWorldAmbienceTracker.h"
#include "Kismet/GameplayStatics.h"

ABSAmbientZone::ABSAmbientZone()
{
	PrimaryActorTick.bCanEverTick = true;

	AmbientArea = CreateDefaultSubobject<UBoxComponent>(TEXT("AmbientArea"));
	RootComponent = AmbientArea;

	AmbientAreaBackground = CreateDefaultSubobject<UAudioComponent>(TEXT("AmbientAreaBackground"));

	AmbientAreaBackground->bAutoActivate = false;
}

void ABSAmbientZone::BeginPlay()
{
	Super::BeginPlay();

	TArray<AActor*> WorldAmbienceTrackerArray;
	UGameplayStatics::GetAllActorsOfClass(this, ABSWorldAmbienceTracker::StaticClass(), WorldAmbienceTrackerArray);
	if (WorldAmbienceTrackerArray.Num() == 1)
	{
		AmbienceTrackerRef = Cast<ABSWorldAmbienceTracker>(WorldAmbienceTrackerArray[0]);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Bird Spawner: There is either no ambience tracker or more than one ambience tracker in the world"));
	}

	AmbientArea->OnComponentBeginOverlap.AddDynamic(this, &ABSAmbientZone::OnOverlapBegin);
	AmbientArea->OnComponentEndOverlap.AddDynamic(this, &ABSAmbientZone::OnOverlapEnd);
}

void ABSAmbientZone::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABSAmbientZone::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	APawn* PlayerControllerCheck = Cast<APawn>(OtherActor);

	if (PlayerControllerCheck && PlayerControllerCheck->IsPlayerControlled())
	{
		//Add the ambience zone to the ambience tracker
		if(AmbientAreaBackground->Sound)
		{
			AmbienceTrackerRef->AddOverlappedZone(AmbientZoneName, AmbientAreaBackground);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Bird Spawner: Ambient area has no background sound!"));
		}

		//If the pawn is player controlled and it has a bird spawner component then...
		if(IsValid(PlayerControllerCheck->GetComponentByClass(UBSBirdSpawnerComponent::StaticClass()))) //PlayerControllerCheck->OwnsComponent(UBirdSpawnerComponent::UBirdSpawnerComponent)
		{
			//Cast the returned UActorComponent to a UBirdSpawnerComponent and store its ref in a variable.
			UBSBirdSpawnerComponent* PawnsBirdSpawner = Cast<UBSBirdSpawnerComponent>(PlayerControllerCheck->GetComponentByClass(UBSBirdSpawnerComponent::StaticClass()));
			PawnsBirdSpawner->ActiveZoneArray.Add(AmbientZoneName);
		}
	}
}

void ABSAmbientZone::OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex)
{
	APawn* PlayerControllerCheck = Cast<APawn>(OtherActor);

	if (PlayerControllerCheck && PlayerControllerCheck->IsPlayerControlled())
	{
		// Remove this zone from the world ambience tracker.
		if(AmbientAreaBackground->Sound)
		{
			AmbienceTrackerRef->RemoveOverlappedZone(AmbientZoneName);;
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Bird Spawner: Ambient area the player just left has no background sound!"));
		}

		//Does the pawn have a bird spawner....
		if(IsValid(PlayerControllerCheck->GetComponentByClass(UBSBirdSpawnerComponent::StaticClass())))
		{
			//Cast the returned UActorComponent to a UBirdSpawnerComponent and store its ref in a variable.
			UBSBirdSpawnerComponent* PawnsBirdSpawner = Cast<UBSBirdSpawnerComponent>(PlayerControllerCheck->GetComponentByClass(UBSBirdSpawnerComponent::StaticClass()));
			PawnsBirdSpawner->ActiveZoneArray.RemoveSingle(AmbientZoneName);
		}
	}
}


