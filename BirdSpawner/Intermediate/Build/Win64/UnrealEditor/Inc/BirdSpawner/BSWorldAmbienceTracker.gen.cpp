// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BirdSpawner/Public/BSWorldAmbienceTracker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBSWorldAmbienceTracker() {}
// Cross Module References
	BIRDSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct();
	UPackage* Z_Construct_UPackage__Script_BirdSpawner();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	BIRDSPAWNER_API UClass* Z_Construct_UClass_ABSWorldAmbienceTracker_NoRegister();
	BIRDSPAWNER_API UClass* Z_Construct_UClass_ABSWorldAmbienceTracker();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct;
class UScriptStruct* FBSAmbienceTrackerStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct, Z_Construct_UPackage__Script_BirdSpawner(), TEXT("BSAmbienceTrackerStruct"));
	}
	return Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct.OuterSingleton;
}
template<> BIRDSPAWNER_API UScriptStruct* StaticStruct<FBSAmbienceTrackerStruct>()
{
	return FBSAmbienceTrackerStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbienceZone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AmbienceZone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AmbienceSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AmbienceSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBSAmbienceTrackerStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceZone_MetaData[] = {
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceZone = { "AmbienceZone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBSAmbienceTrackerStruct, AmbienceZone), METADATA_PARAMS(Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceZone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceZone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceSound_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceSound = { "AmbienceSound", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBSAmbienceTrackerStruct, AmbienceSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceSound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BirdSpawner,
		nullptr,
		&NewStructOps,
		"BSAmbienceTrackerStruct",
		sizeof(FBSAmbienceTrackerStruct),
		alignof(FBSAmbienceTrackerStruct),
		Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct.InnerSingleton, Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct.InnerSingleton;
	}
	DEFINE_FUNCTION(ABSWorldAmbienceTracker::execLoadOverlaps)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadOverlaps();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABSWorldAmbienceTracker::execAssessZoneArray)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssessZoneArray();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABSWorldAmbienceTracker::execRemoveOverlappedZone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_OverlappedZoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveOverlappedZone(Z_Param_OverlappedZoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABSWorldAmbienceTracker::execAddOverlappedZone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_OverlappedZoneName);
		P_GET_OBJECT(UAudioComponent,Z_Param_OverlappedSound);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddOverlappedZone(Z_Param_OverlappedZoneName,Z_Param_OverlappedSound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABSWorldAmbienceTracker::execZoneTimeHandleControl)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ZoneTimeHandleControl();
		P_NATIVE_END;
	}
	void ABSWorldAmbienceTracker::StaticRegisterNativesABSWorldAmbienceTracker()
	{
		UClass* Class = ABSWorldAmbienceTracker::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOverlappedZone", &ABSWorldAmbienceTracker::execAddOverlappedZone },
			{ "AssessZoneArray", &ABSWorldAmbienceTracker::execAssessZoneArray },
			{ "LoadOverlaps", &ABSWorldAmbienceTracker::execLoadOverlaps },
			{ "RemoveOverlappedZone", &ABSWorldAmbienceTracker::execRemoveOverlappedZone },
			{ "ZoneTimeHandleControl", &ABSWorldAmbienceTracker::execZoneTimeHandleControl },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics
	{
		struct BSWorldAmbienceTracker_eventAddOverlappedZone_Parms
		{
			FName OverlappedZoneName;
			UAudioComponent* OverlappedSound;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverlappedZoneName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedSound;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::NewProp_OverlappedZoneName = { "OverlappedZoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BSWorldAmbienceTracker_eventAddOverlappedZone_Parms, OverlappedZoneName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::NewProp_OverlappedSound_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::NewProp_OverlappedSound = { "OverlappedSound", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BSWorldAmbienceTracker_eventAddOverlappedZone_Parms, OverlappedSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::NewProp_OverlappedSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::NewProp_OverlappedSound_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::NewProp_OverlappedZoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::NewProp_OverlappedSound,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABSWorldAmbienceTracker, nullptr, "AddOverlappedZone", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::BSWorldAmbienceTracker_eventAddOverlappedZone_Parms), Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABSWorldAmbienceTracker_AssessZoneArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABSWorldAmbienceTracker_AssessZoneArray_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABSWorldAmbienceTracker_AssessZoneArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABSWorldAmbienceTracker, nullptr, "AssessZoneArray", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABSWorldAmbienceTracker_AssessZoneArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABSWorldAmbienceTracker_AssessZoneArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABSWorldAmbienceTracker_AssessZoneArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABSWorldAmbienceTracker_AssessZoneArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABSWorldAmbienceTracker_LoadOverlaps_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABSWorldAmbienceTracker_LoadOverlaps_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABSWorldAmbienceTracker_LoadOverlaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABSWorldAmbienceTracker, nullptr, "LoadOverlaps", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABSWorldAmbienceTracker_LoadOverlaps_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABSWorldAmbienceTracker_LoadOverlaps_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABSWorldAmbienceTracker_LoadOverlaps()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABSWorldAmbienceTracker_LoadOverlaps_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABSWorldAmbienceTracker_RemoveOverlappedZone_Statics
	{
		struct BSWorldAmbienceTracker_eventRemoveOverlappedZone_Parms
		{
			FName OverlappedZoneName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverlappedZoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ABSWorldAmbienceTracker_RemoveOverlappedZone_Statics::NewProp_OverlappedZoneName = { "OverlappedZoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BSWorldAmbienceTracker_eventRemoveOverlappedZone_Parms, OverlappedZoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABSWorldAmbienceTracker_RemoveOverlappedZone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABSWorldAmbienceTracker_RemoveOverlappedZone_Statics::NewProp_OverlappedZoneName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABSWorldAmbienceTracker_RemoveOverlappedZone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABSWorldAmbienceTracker_RemoveOverlappedZone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABSWorldAmbienceTracker, nullptr, "RemoveOverlappedZone", nullptr, nullptr, sizeof(Z_Construct_UFunction_ABSWorldAmbienceTracker_RemoveOverlappedZone_Statics::BSWorldAmbienceTracker_eventRemoveOverlappedZone_Parms), Z_Construct_UFunction_ABSWorldAmbienceTracker_RemoveOverlappedZone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABSWorldAmbienceTracker_RemoveOverlappedZone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABSWorldAmbienceTracker_RemoveOverlappedZone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABSWorldAmbienceTracker_RemoveOverlappedZone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABSWorldAmbienceTracker_RemoveOverlappedZone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABSWorldAmbienceTracker_RemoveOverlappedZone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABSWorldAmbienceTracker_ZoneTimeHandleControl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABSWorldAmbienceTracker_ZoneTimeHandleControl_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABSWorldAmbienceTracker_ZoneTimeHandleControl_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABSWorldAmbienceTracker, nullptr, "ZoneTimeHandleControl", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABSWorldAmbienceTracker_ZoneTimeHandleControl_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABSWorldAmbienceTracker_ZoneTimeHandleControl_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABSWorldAmbienceTracker_ZoneTimeHandleControl()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABSWorldAmbienceTracker_ZoneTimeHandleControl_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABSWorldAmbienceTracker);
	UClass* Z_Construct_UClass_ABSWorldAmbienceTracker_NoRegister()
	{
		return ABSWorldAmbienceTracker::StaticClass();
	}
	struct Z_Construct_UClass_ABSWorldAmbienceTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OverlappedZones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedZones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappedZones;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssessZoneHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssessZoneHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialiseLoadOverlaps_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialiseLoadOverlaps;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAreaAudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultAreaAudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAreaBackground_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultAreaBackground;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayingZoneStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PlayingZoneStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BirdSpawner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABSWorldAmbienceTracker_AddOverlappedZone, "AddOverlappedZone" }, // 2607359627
		{ &Z_Construct_UFunction_ABSWorldAmbienceTracker_AssessZoneArray, "AssessZoneArray" }, // 141035497
		{ &Z_Construct_UFunction_ABSWorldAmbienceTracker_LoadOverlaps, "LoadOverlaps" }, // 2845400017
		{ &Z_Construct_UFunction_ABSWorldAmbienceTracker_RemoveOverlappedZone, "RemoveOverlappedZone" }, // 3875795382
		{ &Z_Construct_UFunction_ABSWorldAmbienceTracker_ZoneTimeHandleControl, "ZoneTimeHandleControl" }, // 3916245619
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BSWorldAmbienceTracker.h" },
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_OverlappedZones_Inner = { "OverlappedZones", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct, METADATA_PARAMS(nullptr, 0) }; // 2873908852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_OverlappedZones_MetaData[] = {
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_OverlappedZones = { "OverlappedZones", nullptr, (EPropertyFlags)0x0010008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSWorldAmbienceTracker, OverlappedZones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_OverlappedZones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_OverlappedZones_MetaData)) }; // 2873908852
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_AssessZoneHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_AssessZoneHandle = { "AssessZoneHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSWorldAmbienceTracker, AssessZoneHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_AssessZoneHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_AssessZoneHandle_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_InitialiseLoadOverlaps_MetaData[] = {
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_InitialiseLoadOverlaps = { "InitialiseLoadOverlaps", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSWorldAmbienceTracker, InitialiseLoadOverlaps), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_InitialiseLoadOverlaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_InitialiseLoadOverlaps_MetaData)) }; // 589591453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaAudioComponent = { "DefaultAreaAudioComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSWorldAmbienceTracker, DefaultAreaAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaAudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaAudioComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaBackground_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default Background Audio" },
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaBackground = { "DefaultAreaBackground", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSWorldAmbienceTracker, DefaultAreaBackground), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaBackground_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_PlayingZoneStruct_MetaData[] = {
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_PlayingZoneStruct = { "PlayingZoneStruct", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSWorldAmbienceTracker, PlayingZoneStruct), Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct, METADATA_PARAMS(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_PlayingZoneStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_PlayingZoneStruct_MetaData)) }; // 2873908852
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_OverlappedZones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_OverlappedZones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_AssessZoneHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_InitialiseLoadOverlaps,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaAudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaBackground,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_PlayingZoneStruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABSWorldAmbienceTracker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::ClassParams = {
		&ABSWorldAmbienceTracker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABSWorldAmbienceTracker()
	{
		if (!Z_Registration_Info_UClass_ABSWorldAmbienceTracker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABSWorldAmbienceTracker.OuterSingleton, Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABSWorldAmbienceTracker.OuterSingleton;
	}
	template<> BIRDSPAWNER_API UClass* StaticClass<ABSWorldAmbienceTracker>()
	{
		return ABSWorldAmbienceTracker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABSWorldAmbienceTracker);
	struct Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_Statics::ScriptStructInfo[] = {
		{ FBSAmbienceTrackerStruct::StaticStruct, Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewStructOps, TEXT("BSAmbienceTrackerStruct"), &Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBSAmbienceTrackerStruct), 2873908852U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABSWorldAmbienceTracker, ABSWorldAmbienceTracker::StaticClass, TEXT("ABSWorldAmbienceTracker"), &Z_Registration_Info_UClass_ABSWorldAmbienceTracker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABSWorldAmbienceTracker), 32525857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_2433097385(TEXT("/Script/BirdSpawner"),
		Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
