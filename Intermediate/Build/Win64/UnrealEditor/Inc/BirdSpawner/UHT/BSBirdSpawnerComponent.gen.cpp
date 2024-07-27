// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BirdSpawner/Public/BSBirdSpawnerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBSBirdSpawnerComponent() {}
// Cross Module References
	BIRDSPAWNER_API UClass* Z_Construct_UClass_ABSBirdActor_NoRegister();
	BIRDSPAWNER_API UClass* Z_Construct_UClass_UBSBirdSpawnerComponent();
	BIRDSPAWNER_API UClass* Z_Construct_UClass_UBSBirdSpawnerComponent_NoRegister();
	BIRDSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FBSBirdStruct();
	BIRDSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FBSZoneSpecifier();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_BirdSpawner();
// End Cross Module References

static_assert(std::is_polymorphic<FBSBirdStruct>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBSBirdStruct cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BSBirdStruct;
class UScriptStruct* FBSBirdStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BSBirdStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BSBirdStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBSBirdStruct, (UObject*)Z_Construct_UPackage__Script_BirdSpawner(), TEXT("BSBirdStruct"));
	}
	return Z_Registration_Info_UScriptStruct_BSBirdStruct.OuterSingleton;
}
template<> BIRDSPAWNER_API UScriptStruct* StaticStruct<FBSBirdStruct>()
{
	return FBSBirdStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBSBirdStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BirdActor_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_BirdActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBSBirdStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//struct that defines the structure of the bird data tables\n//this means the FBSBirdStruct inherits from FTableRowBase\n" },
#endif
		{ "ModuleRelativePath", "Public/BSBirdSpawnerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "struct that defines the structure of the bird data tables\nthis means the FBSBirdStruct inherits from FTableRowBase" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FBSBirdStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBSBirdStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBSBirdStruct_Statics::NewProp_BirdActor_MetaData[] = {
		{ "Category", "Bird Actor" },
		{ "ModuleRelativePath", "Public/BSBirdSpawnerComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FBSBirdStruct_Statics::NewProp_BirdActor = { "BirdActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBSBirdStruct, BirdActor), Z_Construct_UClass_UClass, Z_Construct_UClass_ABSBirdActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSBirdStruct_Statics::NewProp_BirdActor_MetaData), Z_Construct_UScriptStruct_FBSBirdStruct_Statics::NewProp_BirdActor_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBSBirdStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBSBirdStruct_Statics::NewProp_BirdActor,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBSBirdStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BirdSpawner,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BSBirdStruct",
		Z_Construct_UScriptStruct_FBSBirdStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSBirdStruct_Statics::PropPointers),
		sizeof(FBSBirdStruct),
		alignof(FBSBirdStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSBirdStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBSBirdStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSBirdStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBSBirdStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_BSBirdStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BSBirdStruct.InnerSingleton, Z_Construct_UScriptStruct_FBSBirdStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BSBirdStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FBSZoneSpecifier>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FBSZoneSpecifier cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BSZoneSpecifier;
class UScriptStruct* FBSZoneSpecifier::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BSZoneSpecifier.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BSZoneSpecifier.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBSZoneSpecifier, (UObject*)Z_Construct_UPackage__Script_BirdSpawner(), TEXT("BSZoneSpecifier"));
	}
	return Z_Registration_Info_UScriptStruct_BSZoneSpecifier.OuterSingleton;
}
template<> BIRDSPAWNER_API UScriptStruct* StaticStruct<FBSZoneSpecifier>()
{
	return FBSZoneSpecifier::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Zone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Zone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BirdDataTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BirdDataTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bZoneHasBirds_MetaData[];
#endif
		static void NewProp_bZoneHasBirds_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bZoneHasBirds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxBirdCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBirdCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSingleBirdInstance_MetaData[];
#endif
		static void NewProp_bSingleBirdInstance_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleBirdInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//struct that enables the player to set zones names and bird data tables\n" },
#endif
		{ "ModuleRelativePath", "Public/BSBirdSpawnerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "struct that enables the player to set zones names and bird data tables" },
#endif
	};
#endif
	void* Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBSZoneSpecifier>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_Zone_MetaData[] = {
		{ "Category", "Bird Spawner Zone" },
		{ "ModuleRelativePath", "Public/BSBirdSpawnerComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_Zone = { "Zone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBSZoneSpecifier, Zone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_Zone_MetaData), Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_Zone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_BirdDataTable_MetaData[] = {
		{ "Category", "Bird Spawner Zone" },
		{ "ModuleRelativePath", "Public/BSBirdSpawnerComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_BirdDataTable = { "BirdDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBSZoneSpecifier, BirdDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_BirdDataTable_MetaData), Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_BirdDataTable_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_bZoneHasBirds_MetaData[] = {
		{ "Category", "Bird Spawner Zone" },
		{ "ModuleRelativePath", "Public/BSBirdSpawnerComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_bZoneHasBirds_SetBit(void* Obj)
	{
		((FBSZoneSpecifier*)Obj)->bZoneHasBirds = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_bZoneHasBirds = { "bZoneHasBirds", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBSZoneSpecifier), &Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_bZoneHasBirds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_bZoneHasBirds_MetaData), Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_bZoneHasBirds_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_MaxBirdCount_MetaData[] = {
		{ "Category", "Bird Spawner Zone" },
		{ "ModuleRelativePath", "Public/BSBirdSpawnerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_MaxBirdCount = { "MaxBirdCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBSZoneSpecifier, MaxBirdCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_MaxBirdCount_MetaData), Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_MaxBirdCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_bSingleBirdInstance_MetaData[] = {
		{ "Category", "Bird Spawner Zone" },
		{ "ModuleRelativePath", "Public/BSBirdSpawnerComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_bSingleBirdInstance_SetBit(void* Obj)
	{
		((FBSZoneSpecifier*)Obj)->bSingleBirdInstance = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_bSingleBirdInstance = { "bSingleBirdInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FBSZoneSpecifier), &Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_bSingleBirdInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_bSingleBirdInstance_MetaData), Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_bSingleBirdInstance_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_Zone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_BirdDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_bZoneHasBirds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_MaxBirdCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewProp_bSingleBirdInstance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BirdSpawner,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"BSZoneSpecifier",
		Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::PropPointers),
		sizeof(FBSZoneSpecifier),
		alignof(FBSZoneSpecifier),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBSZoneSpecifier()
	{
		if (!Z_Registration_Info_UScriptStruct_BSZoneSpecifier.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BSZoneSpecifier.InnerSingleton, Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BSZoneSpecifier.InnerSingleton;
	}
	void UBSBirdSpawnerComponent::StaticRegisterNativesUBSBirdSpawnerComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBSBirdSpawnerComponent);
	UClass* Z_Construct_UClass_UBSBirdSpawnerComponent_NoRegister()
	{
		return UBSBirdSpawnerComponent::StaticClass();
	}
	struct Z_Construct_UClass_UBSBirdSpawnerComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BirdKillDistance_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_BirdKillDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnableLandscapeDetection_MetaData[];
#endif
		static void NewProp_EnableLandscapeDetection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_EnableLandscapeDetection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeObjectType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_LandscapeObjectType;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Zones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Zones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Zones;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_BirdSpawner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "BSBirdSpawnerComponent.h" },
		{ "ModuleRelativePath", "Public/BSBirdSpawnerComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_SpawnInterval_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bird Spawner Data" },
		{ "ModuleRelativePath", "Public/BSBirdSpawnerComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBSBirdSpawnerComponent, SpawnInterval), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_SpawnInterval_MetaData), Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_SpawnInterval_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_BirdKillDistance_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bird Spawner Data" },
		{ "ModuleRelativePath", "Public/BSBirdSpawnerComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_BirdKillDistance = { "BirdKillDistance", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBSBirdSpawnerComponent, BirdKillDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_BirdKillDistance_MetaData), Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_BirdKillDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_EnableLandscapeDetection_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bird Spawner Data" },
		{ "ModuleRelativePath", "Public/BSBirdSpawnerComponent.h" },
	};
#endif
	void Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_EnableLandscapeDetection_SetBit(void* Obj)
	{
		((UBSBirdSpawnerComponent*)Obj)->EnableLandscapeDetection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_EnableLandscapeDetection = { "EnableLandscapeDetection", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UBSBirdSpawnerComponent), &Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_EnableLandscapeDetection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_EnableLandscapeDetection_MetaData), Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_EnableLandscapeDetection_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_LandscapeObjectType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bird Spawner Data" },
		{ "EditCondition", "EnableLandscapeDetection" },
		{ "ModuleRelativePath", "Public/BSBirdSpawnerComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_LandscapeObjectType = { "LandscapeObjectType", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBSBirdSpawnerComponent, LandscapeObjectType), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_LandscapeObjectType_MetaData), Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_LandscapeObjectType_MetaData) }; // 1822723181
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_Zones_Inner = { "Zones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBSZoneSpecifier, METADATA_PARAMS(0, nullptr) }; // 892150983
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_Zones_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Bird Spawner Data" },
		{ "ModuleRelativePath", "Public/BSBirdSpawnerComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_Zones = { "Zones", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBSBirdSpawnerComponent, Zones), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_Zones_MetaData), Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_Zones_MetaData) }; // 892150983
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_SpawnInterval,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_BirdKillDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_EnableLandscapeDetection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_LandscapeObjectType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_Zones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::NewProp_Zones,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBSBirdSpawnerComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::ClassParams = {
		&UBSBirdSpawnerComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBSBirdSpawnerComponent()
	{
		if (!Z_Registration_Info_UClass_UBSBirdSpawnerComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBSBirdSpawnerComponent.OuterSingleton, Z_Construct_UClass_UBSBirdSpawnerComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBSBirdSpawnerComponent.OuterSingleton;
	}
	template<> BIRDSPAWNER_API UClass* StaticClass<UBSBirdSpawnerComponent>()
	{
		return UBSBirdSpawnerComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBSBirdSpawnerComponent);
	UBSBirdSpawnerComponent::~UBSBirdSpawnerComponent() {}
	struct Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSBirdSpawnerComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSBirdSpawnerComponent_h_Statics::ScriptStructInfo[] = {
		{ FBSBirdStruct::StaticStruct, Z_Construct_UScriptStruct_FBSBirdStruct_Statics::NewStructOps, TEXT("BSBirdStruct"), &Z_Registration_Info_UScriptStruct_BSBirdStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBSBirdStruct), 3121745257U) },
		{ FBSZoneSpecifier::StaticStruct, Z_Construct_UScriptStruct_FBSZoneSpecifier_Statics::NewStructOps, TEXT("BSZoneSpecifier"), &Z_Registration_Info_UScriptStruct_BSZoneSpecifier, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBSZoneSpecifier), 892150983U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSBirdSpawnerComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBSBirdSpawnerComponent, UBSBirdSpawnerComponent::StaticClass, TEXT("UBSBirdSpawnerComponent"), &Z_Registration_Info_UClass_UBSBirdSpawnerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBSBirdSpawnerComponent), 1688918990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSBirdSpawnerComponent_h_3778311321(TEXT("/Script/BirdSpawner"),
		Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSBirdSpawnerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSBirdSpawnerComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSBirdSpawnerComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSBirdSpawnerComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
