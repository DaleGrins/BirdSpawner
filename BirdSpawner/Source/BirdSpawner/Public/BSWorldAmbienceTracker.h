// Copyright 2023 Dale Grinsell. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "BSWorldAmbienceTracker.generated.h"

USTRUCT()
struct FBSAmbienceTrackerStruct
{
	GENERATED_BODY()

	UPROPERTY()
	FName AmbienceZone;

	UPROPERTY()
	class UAudioComponent* AmbienceSound;
};

UCLASS()
class BIRDSPAWNER_API ABSWorldAmbienceTracker : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABSWorldAmbienceTracker();

	UPROPERTY()
	TArray<FBSAmbienceTrackerStruct> OverlappedZones;

	UPROPERTY()
	FTimerHandle AssessZoneHandle;

	UPROPERTY()
	FTimerHandle InitialiseLoadOverlaps;

	UFUNCTION()
	void ZoneTimeHandleControl();

	UFUNCTION()
	void AddOverlappedZone(FName OverlappedZoneName, class UAudioComponent* OverlappedSound);

	UFUNCTION()
	void RemoveOverlappedZone(FName OverlappedZoneName);

	UFUNCTION()
	void AssessZoneArray();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY()
	class UAudioComponent* DefaultAreaAudioComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Default Background Audio", meta = (AllowPrivateAccess = "true"))
	class USoundBase* DefaultAreaBackground;

	UPROPERTY()
	FBSAmbienceTrackerStruct PlayingZoneStruct {"Empty", NULL};

	UFUNCTION()
	void LoadOverlaps();
	
};
