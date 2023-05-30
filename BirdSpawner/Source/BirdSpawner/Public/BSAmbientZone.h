// Copyright 2023 Dale Grinsell. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BSBirdSpawnerComponent.h"
#include "BSAmbientZone.generated.h"

UCLASS()
class BIRDSPAWNER_API ABSAmbientZone : public AActor
{
	GENERATED_BODY()
	
public:	
	ABSAmbientZone();

protected:
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex);

public:	
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AmbientZoneData")
	FName AmbientZoneName;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AmbientZoneData", meta = (AllowPrivateAccess = "true"))
	class UAudioComponent* AmbientAreaBackground;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "AmbientZoneData", meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* AmbientArea;

	UPROPERTY()
	class ABSWorldAmbienceTracker* AmbienceTrackerRef;

};
