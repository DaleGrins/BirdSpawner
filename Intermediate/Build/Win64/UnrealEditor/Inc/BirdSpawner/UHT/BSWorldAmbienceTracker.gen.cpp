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
	BIRDSPAWNER_API UClass* Z_Construct_UClass_ABSWorldAmbienceTracker();
	BIRDSPAWNER_API UClass* Z_Construct_UClass_ABSWorldAmbienceTracker_NoRegister();
	BIRDSPAWNER_API UScriptStruct* Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BirdSpawner();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct;
class UScriptStruct* FBSAmbienceTrackerStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct, (UObject*)Z_Construct_UPackage__Script_BirdSpawner(), TEXT("BSAmbienceTrackerStruct"));
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
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceZone = { "AmbienceZone", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBSAmbienceTrackerStruct, AmbienceZone), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceZone_MetaData), Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceZone_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceSound_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceSound = { "AmbienceSound", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBSAmbienceTrackerStruct, AmbienceSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceSound_MetaData), Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceSound_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceZone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewProp_AmbienceSound,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BirdSpawner,
		nullptr,
		&NewStructOps,
		"BSAmbienceTrackerStruct",
		Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::PropPointers),
		sizeof(FBSAmbienceTrackerStruct),
		alignof(FBSAmbienceTrackerStruct),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct.InnerSingleton, Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct.InnerSingleton;
	}
	void ABSWorldAmbienceTracker::StaticRegisterNativesABSWorldAmbienceTracker()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABSWorldAmbienceTracker);
	UClass* Z_Construct_UClass_ABSWorldAmbienceTracker_NoRegister()
	{
		return ABSWorldAmbienceTracker::StaticClass();
	}
	struct Z_Construct_UClass_ABSWorldAmbienceTracker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAreaAudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultAreaAudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAreaBackground_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultAreaBackground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BirdSpawner,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BSWorldAmbienceTracker.h" },
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaAudioComponent = { "DefaultAreaAudioComponent", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSWorldAmbienceTracker, DefaultAreaAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaAudioComponent_MetaData), Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaAudioComponent_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaBackground_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Default Background Audio" },
		{ "ModuleRelativePath", "Public/BSWorldAmbienceTracker.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaBackground = { "DefaultAreaBackground", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABSWorldAmbienceTracker, DefaultAreaBackground), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaBackground_MetaData), Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaBackground_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaAudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::NewProp_DefaultAreaBackground,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABSWorldAmbienceTracker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::ClassParams = {
		&ABSWorldAmbienceTracker::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::Class_MetaDataParams), Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABSWorldAmbienceTracker_Statics::PropPointers) < 2048);
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
	ABSWorldAmbienceTracker::~ABSWorldAmbienceTracker() {}
	struct Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_Statics::ScriptStructInfo[] = {
		{ FBSAmbienceTrackerStruct::StaticStruct, Z_Construct_UScriptStruct_FBSAmbienceTrackerStruct_Statics::NewStructOps, TEXT("BSAmbienceTrackerStruct"), &Z_Registration_Info_UScriptStruct_BSAmbienceTrackerStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBSAmbienceTrackerStruct), 988964502U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABSWorldAmbienceTracker, ABSWorldAmbienceTracker::StaticClass, TEXT("ABSWorldAmbienceTracker"), &Z_Registration_Info_UClass_ABSWorldAmbienceTracker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABSWorldAmbienceTracker), 1834479015U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_233733697(TEXT("/Script/BirdSpawner"),
		Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Pointers_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSWorldAmbienceTracker_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
