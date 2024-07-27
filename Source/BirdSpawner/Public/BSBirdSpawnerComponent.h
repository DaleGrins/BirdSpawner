// Copyright 2023 Dale Grinsell. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/DataTable.h"
#include "Engine/EngineTypes.h"
#include "BSBirdSpawnerComponent.generated.h"

USTRUCT(BlueprintType) //struct that defines the structure of the bird data tables
struct FBSBirdStruct : public FTableRowBase //this means the FBSBirdStruct inherits from FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bird Actor")
	TSubclassOf<class ABSBirdActor> BirdActor;
};

USTRUCT(BlueprintType) //struct that enables the player to set zones names and bird data tables
struct FBSZoneSpecifier : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bird Spawner Zone")
	FName Zone;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bird Spawner Zone")
	class UDataTable* BirdDataTable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bird Spawner Zone")
	bool bZoneHasBirds = true;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bird Spawner Zone")
	int32 MaxBirdCount = 5;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Bird Spawner Zone")
	bool bSingleBirdInstance = false;
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BIRDSPAWNER_API UBSBirdSpawnerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UBSBirdSpawnerComponent();

protected:
	virtual void BeginPlay() override;

public:	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	TArray<FName> ActiveZoneArray;

private:

	class APawn* BirdSpawnerOwner;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bird Spawner Data", meta = (AllowPrivateAccess = "true"))
	float SpawnInterval = 3.f;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bird Spawner Data", meta = (AllowPrivateAccess = "true"))
	int32 BirdKillDistance = 3000;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bird Spawner Data", meta = (AllowPrivateAccess = "true"))
	bool EnableLandscapeDetection = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bird Spawner Data", meta = (AllowPrivateAccess = "true"), meta = (EditCondition = "EnableLandscapeDetection"))
	TEnumAsByte <ECollisionChannel> LandscapeObjectType = ECC_WorldStatic;

	TArray<class ABSBirdActor*> BirdArray;

	bool bIsMatchingZoneToActiveZoneFound;

	FVector GetBirdSpawnLocation();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bird Spawner Data", meta = (AllowPrivateAccess = "true"))
	TArray<FBSZoneSpecifier> Zones;

	void PopulateBirdArray(class UDataTable* BirdDataTable, int32 MaxBirds, bool bSingleBirdInstance);

	void LoadBirdOverlaps();

	FTimerHandle AssessBirdZones;

};
