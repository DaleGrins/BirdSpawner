// Copyright 2023 Dale Grinsell. All rights reserved.


#include "BSWorldAmbienceTracker.h"
#include "BSAmbientZone.h"
#include "Components/AudioComponent.h"
#include "Sound/SoundBase.h"
#include "TimerManager.h"

// Sets default values
ABSWorldAmbienceTracker::ABSWorldAmbienceTracker()
{
	PrimaryActorTick.bCanEverTick = false;

	DefaultAreaAudioComponent = CreateDefaultSubobject<UAudioComponent>(TEXT("Default Area Audio"));
	RootComponent = DefaultAreaAudioComponent;
	DefaultAreaAudioComponent->bAutoActivate = false;
}

void ABSWorldAmbienceTracker::BeginPlay()
{
	Super::BeginPlay();

	//Adding the default area background sound as the first element in the array
	FBSAmbienceTrackerStruct DefaultAreaStruct;
	if(DefaultAreaBackground)
	{
		DefaultAreaAudioComponent->Sound = DefaultAreaBackground;
		DefaultAreaStruct.AmbienceZone = TEXT("DefaultArea");
		DefaultAreaStruct.AmbienceSound = DefaultAreaAudioComponent;
		OverlappedZones.Add(DefaultAreaStruct);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Bird Spawner: The default area background sound is empty in the world ambience tracker!"));
	}

	//Sets a timer to register if the player is overlapping a zone on beginplay. This allows all actors to load before it runs checks.
	GetWorldTimerManager().SetTimer(InitialiseLoadOverlaps, this, &ABSWorldAmbienceTracker::LoadOverlaps, 1.0f, false);
}

// Called every frame
void ABSWorldAmbienceTracker::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABSWorldAmbienceTracker::LoadOverlaps()
{
	//Looking for any overlapping zones on begin play and adding them to the array if any are found
	TArray<AActor*> OutActors;
	GetWorld()->GetFirstPlayerController()->GetPawn()->GetOverlappingActors(OutActors, ABSAmbientZone::StaticClass());

	if(OutActors.Num() > 0)
	{
		for (AActor* Actor : OutActors)
		{
			if(ABSAmbientZone* ReturnedZone = Cast<ABSAmbientZone>(Actor))
			{
				FBSAmbienceTrackerStruct StartingZone;
				StartingZone.AmbienceZone = ReturnedZone->AmbientZoneName;
				StartingZone.AmbienceSound = ReturnedZone->AmbientAreaBackground;

				OverlappedZones.Add(StartingZone);
			}
		}
	}

	if(OverlappedZones.Num() > 0)
	{
		AssessZoneArray();
	}
}

// if a zone has been overlapped, this function is called from the ambient zone actor
void ABSWorldAmbienceTracker::AddOverlappedZone(FName OverlappedZoneName, class UAudioComponent* OverlappedSound)
{
	FBSAmbienceTrackerStruct AddedZoneStruct;
	AddedZoneStruct.AmbienceZone = OverlappedZoneName;
	AddedZoneStruct.AmbienceSound = OverlappedSound;

	OverlappedZones.Add(AddedZoneStruct);

	ZoneTimeHandleControl();

	return;
}

// if an overlap has ended, this function is called from the ambient zone actor
void ABSWorldAmbienceTracker::RemoveOverlappedZone(FName OverlappedZoneName)
{
	int32 FoundArrayIndex = 0;
	bool bIsZoneFound = false;
	if(OverlappedZones.Num() !=0)
	{
		//iterate over array from last to first to get the most recently added matching zone
		for (int i = OverlappedZones.Num(); i > 1; i--)
		{
			if (OverlappedZones[i - 1].AmbienceZone == OverlappedZoneName)
			{
				bIsZoneFound = true;
				FoundArrayIndex = i - 1;
				break;
			}
		}

		//if a zone is found, remove it from the array, if not, warning.
		if(bIsZoneFound)
		{
			OverlappedZones.RemoveAt(FoundArrayIndex);
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Bird Spawner: Tried to remove a zone that does not exist in the world ambience tracker zone array"));
		}

		ZoneTimeHandleControl();

		return;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Bird Spawner: Called 'RemoveOverlappedZone' when the OverlappedZones array is empty in the world ambience tracker"));
		return;
	}
}

// finds the most recently added zone and plays that zone's sound if it does not match the currently playing zone's name
void ABSWorldAmbienceTracker::AssessZoneArray()
{
	//do this if there is only one zone in the array which will be the default zone
	if(OverlappedZones.Num() == 1)
	{
		if(PlayingZoneStruct.AmbienceZone != "Empty" && PlayingZoneStruct.AmbienceSound->IsPlaying() == true)
		{
			PlayingZoneStruct.AmbienceSound->FadeOut(4.0f, 0.f, EAudioFaderCurve::Sin);
		}

		OverlappedZones.Last().AmbienceSound->FadeIn(4.0f, 1.0f, 0.0f, EAudioFaderCurve::Sin);
		PlayingZoneStruct = OverlappedZones.Last();
		return;
	}

	//if the last element in the array's zone name matches the currently playing zone's name, don't do anything.
	if(PlayingZoneStruct.AmbienceZone != "Empty" && PlayingZoneStruct.AmbienceSound->IsPlaying() == true && PlayingZoneStruct.AmbienceZone == OverlappedZones.Last().AmbienceZone)
	{
		return;
	}

	//if the last element in the array's zone name doesn't match the currently playing zone's name, fade out the currently playing zone.
	if(PlayingZoneStruct.AmbienceZone != "Empty" && PlayingZoneStruct.AmbienceSound->IsPlaying() == true)
	{
		PlayingZoneStruct.AmbienceSound->FadeOut(4.0f, 0.f, EAudioFaderCurve::Sin);
	}

	OverlappedZones.Last().AmbienceSound->FadeIn(4.0f, 1.0f, 0.0f, EAudioFaderCurve::Sin);
	PlayingZoneStruct = OverlappedZones.Last();
}

//will assess the zone array after a timer of 4 seconds so zones don't keep fading in and out if a player hovers on the zone's bondary triggering multiple begin/end overlaps
void ABSWorldAmbienceTracker::ZoneTimeHandleControl()
{
	if(GetWorldTimerManager().IsTimerActive(AssessZoneHandle))
	{
		GetWorldTimerManager().ClearTimer(AssessZoneHandle);
	}

	GetWorldTimerManager().SetTimer(AssessZoneHandle, this, &ABSWorldAmbienceTracker::AssessZoneArray, 4.0f, false);
}
