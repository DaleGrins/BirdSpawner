// Copyright 2023 Dale Grinsell. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BSBirdActor.generated.h"

UCLASS()
class BIRDSPAWNER_API ABSBirdActor : public AActor
{
	GENERATED_BODY()
	
public:	
	ABSBirdActor();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(EEndPlayReason::Type Reason) override;

public:	

	bool bIsBirdMarkedForDestroy = false;

private:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BirdSound", meta = (AllowPrivateAccess = "true"))
	class UAudioComponent* BirdMetaSound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdData", meta = (AllowPrivateAccess = "true"))
	float InitBirdSpawnMinTime = 1.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdData", meta = (AllowPrivateAccess = "true"))
	float InitBirdSpawnMaxTime = 10.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdData", meta = (AllowPrivateAccess = "true"))
	float BirdSpawnMinTime = 5.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "BirdData", meta = (AllowPrivateAccess = "true"))
	float BirdSpawnMaxTime = 30.f;

	FTimerHandle BirdTimer;

	FTimerHandle InitialBirdTimer;

	void PlayBird();

};
