// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BirdSpawner/Public/BSBirdActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBSBirdActor() {}
// Cross Module References
	BIRDSPAWNER_API UClass* Z_Construct_UClass_ABSBirdActor_NoRegister();
	BIRDSPAWNER_API UClass* Z_Construct_UClass_ABSBirdActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_BirdSpawner();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABSBirdActor::execPlayBird)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayBird();
		P_NATIVE_END;
	}
	void ABSBirdActor::StaticRegisterNativesABSBirdActor()
	{
		UClass* Class = ABSBirdActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayBird", &ABSBirdActor::execPlayBird },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABSBirdActor_PlayBird_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABSBirdActor_PlayBird_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BSBirdActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABSBirdActor_PlayBird_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABSBirdActor, nullptr, "PlayBird", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABSBirdActor_PlayBird_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABSBirdActor_PlayBird_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABSBirdActor_PlayBird()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABSBirdActor_PlayBird_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABSBirdActor);
	UClass* Z_Construct_UClass_ABSBirdActor_NoRegister()
	{
		return ABSBirdActor::StaticClass();
	}
	struct Z_Construct_UClass_ABSBirdActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsBirdMarkedForDestroy_MetaData[];
#endif
		static void NewProp_bIsBirdMarkedForDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBirdMarkedForDestroy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BirdMetaSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BirdMetaSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitBirdSpawnMinTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitBirdSpawnMinTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitBirdSpawnMaxTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitBirdSpawnMaxTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BirdSpawnMinTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BirdSpawnMinTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BirdSpawnMaxTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BirdSpawnMaxTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABSBirdActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_BirdSpawner,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABSBirdActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABSBirdActor_PlayBird, "PlayBird" }, // 2125532536
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSBirdActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BSBirdActor.h" },
		{ "ModuleRelativePath", "Public/BSBirdActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSBirdActor_Statics::NewProp_bIsBirdMarkedForDestroy_MetaData[] = {
		{ "ModuleRelativePath", "Public/BSBirdActor.h" },
	};
#endif
	void Z_Construct_UClass_ABSBirdActor_Statics::NewProp_bIsBirdMarkedForDestroy_SetBit(void* Obj)
	{
		((ABSBirdActor*)Obj)->bIsBirdMarkedForDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ABSBirdActor_Statics::NewProp_bIsBirdMarkedForDestroy = { "bIsBirdMarkedForDestroy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ABSBirdActor), &Z_Construct_UClass_ABSBirdActor_Statics::NewProp_bIsBirdMarkedForDestroy_SetBit, METADATA_PARAMS(Z_Construct_UClass_ABSBirdActor_Statics::NewProp_bIsBirdMarkedForDestroy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABSBirdActor_Statics::NewProp_bIsBirdMarkedForDestroy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdMetaSound_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BirdSound" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BSBirdActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdMetaSound = { "BirdMetaSound", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSBirdActor, BirdMetaSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdMetaSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdMetaSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSBirdActor_Statics::NewProp_InitBirdSpawnMinTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BirdData" },
		{ "ModuleRelativePath", "Public/BSBirdActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABSBirdActor_Statics::NewProp_InitBirdSpawnMinTime = { "InitBirdSpawnMinTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSBirdActor, InitBirdSpawnMinTime), METADATA_PARAMS(Z_Construct_UClass_ABSBirdActor_Statics::NewProp_InitBirdSpawnMinTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABSBirdActor_Statics::NewProp_InitBirdSpawnMinTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSBirdActor_Statics::NewProp_InitBirdSpawnMaxTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BirdData" },
		{ "ModuleRelativePath", "Public/BSBirdActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABSBirdActor_Statics::NewProp_InitBirdSpawnMaxTime = { "InitBirdSpawnMaxTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSBirdActor, InitBirdSpawnMaxTime), METADATA_PARAMS(Z_Construct_UClass_ABSBirdActor_Statics::NewProp_InitBirdSpawnMaxTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABSBirdActor_Statics::NewProp_InitBirdSpawnMaxTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdSpawnMinTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BirdData" },
		{ "ModuleRelativePath", "Public/BSBirdActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdSpawnMinTime = { "BirdSpawnMinTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSBirdActor, BirdSpawnMinTime), METADATA_PARAMS(Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdSpawnMinTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdSpawnMinTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdSpawnMaxTime_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "BirdData" },
		{ "ModuleRelativePath", "Public/BSBirdActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdSpawnMaxTime = { "BirdSpawnMaxTime", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABSBirdActor, BirdSpawnMaxTime), METADATA_PARAMS(Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdSpawnMaxTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdSpawnMaxTime_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABSBirdActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSBirdActor_Statics::NewProp_bIsBirdMarkedForDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdMetaSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSBirdActor_Statics::NewProp_InitBirdSpawnMinTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSBirdActor_Statics::NewProp_InitBirdSpawnMaxTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdSpawnMinTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABSBirdActor_Statics::NewProp_BirdSpawnMaxTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABSBirdActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABSBirdActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABSBirdActor_Statics::ClassParams = {
		&ABSBirdActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABSBirdActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABSBirdActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABSBirdActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABSBirdActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABSBirdActor()
	{
		if (!Z_Registration_Info_UClass_ABSBirdActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABSBirdActor.OuterSingleton, Z_Construct_UClass_ABSBirdActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABSBirdActor.OuterSingleton;
	}
	template<> BIRDSPAWNER_API UClass* StaticClass<ABSBirdActor>()
	{
		return ABSBirdActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABSBirdActor);
	struct Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSBirdActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSBirdActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABSBirdActor, ABSBirdActor::StaticClass, TEXT("ABSBirdActor"), &Z_Registration_Info_UClass_ABSBirdActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABSBirdActor), 2306049967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSBirdActor_h_3085243037(TEXT("/Script/BirdSpawner"),
		Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSBirdActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_DemoForest_Plugins_BirdSpawner_Source_BirdSpawner_Public_BSBirdActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
