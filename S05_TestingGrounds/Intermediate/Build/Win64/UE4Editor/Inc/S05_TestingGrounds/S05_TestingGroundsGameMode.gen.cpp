// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "S05_TestingGrounds/S05_TestingGroundsGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS05_TestingGroundsGameMode() {}
// Cross Module References
	S05_TESTINGGROUNDS_API UClass* Z_Construct_UClass_AS05_TestingGroundsGameMode_NoRegister();
	S05_TESTINGGROUNDS_API UClass* Z_Construct_UClass_AS05_TestingGroundsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_S05_TestingGrounds();
// End Cross Module References
	void AS05_TestingGroundsGameMode::StaticRegisterNativesAS05_TestingGroundsGameMode()
	{
	}
	UClass* Z_Construct_UClass_AS05_TestingGroundsGameMode_NoRegister()
	{
		return AS05_TestingGroundsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AS05_TestingGroundsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AS05_TestingGroundsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_S05_TestingGrounds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS05_TestingGroundsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "S05_TestingGroundsGameMode.h" },
		{ "ModuleRelativePath", "S05_TestingGroundsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AS05_TestingGroundsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AS05_TestingGroundsGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AS05_TestingGroundsGameMode_Statics::ClassParams = {
		&AS05_TestingGroundsGameMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802A8u,
		METADATA_PARAMS(Z_Construct_UClass_AS05_TestingGroundsGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AS05_TestingGroundsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AS05_TestingGroundsGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AS05_TestingGroundsGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AS05_TestingGroundsGameMode, 965193231);
	template<> S05_TESTINGGROUNDS_API UClass* StaticClass<AS05_TestingGroundsGameMode>()
	{
		return AS05_TestingGroundsGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AS05_TestingGroundsGameMode(Z_Construct_UClass_AS05_TestingGroundsGameMode, &AS05_TestingGroundsGameMode::StaticClass, TEXT("/Script/S05_TestingGrounds"), TEXT("AS05_TestingGroundsGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AS05_TestingGroundsGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
