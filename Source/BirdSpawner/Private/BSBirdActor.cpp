// Copyright 2023 Dale Grinsell. All rights reserved.


#include "BSBirdActor.h"
#include "Math/UnrealMathUtility.h"
#include "Components/AudioComponent.h"
#include "TimerManager.h"


ABSBirdActor::ABSBirdActor()
{
	PrimaryActorTick.bCanEverTick = false;
	PrimaryActorTick.bStartWithTickEnabled = false;

	BirdMetaSound = CreateDefaultSubobject<UAudioComponent>(TEXT("BirdSound"));
	RootComponent = BirdMetaSound;

	BirdMetaSound->SetComponentTickEnabled(false);

	BirdMetaSound->bAutoActivate = false;
}

void ABSBirdActor::BeginPlay()
{
	Super::BeginPlay();

	//set timer to play a bird sound after a random time set by min and max variables
	GetWorld()->GetTimerManager().SetTimer(InitialBirdTimer, this, &ABSBirdActor::PlayBird, FMath::RandRange(InitBirdSpawnMinTime, InitBirdSpawnMaxTime), false);
}

void ABSBirdActor::EndPlay(EEndPlayReason::Type Reason)
{
	GetWorld()->GetTimerManager().ClearTimer(BirdTimer);
	GetWorld()->GetTimerManager().ClearTimer(InitialBirdTimer);
}

void ABSBirdActor::PlayBird()
{

	//if the bird has been marked for destroy by the bird spawner component, destroy the actor. If not, play bird sound
	if(bIsBirdMarkedForDestroy)
	{
		Destroy();
	}
	else
	{
		if (BirdMetaSound->Sound)
		{
			BirdMetaSound->Play();
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("Bird Spawner: A bird sound has not been set in the audio component of %s"), *GetName());
		}
	}

	GetWorld()->GetTimerManager().ClearTimer(InitialBirdTimer);

	//set timer to play this function again
	GetWorld()->GetTimerManager().SetTimer(BirdTimer, this, &ABSBirdActor::PlayBird, FMath::RandRange(BirdSpawnMinTime, BirdSpawnMaxTime), false);
}

