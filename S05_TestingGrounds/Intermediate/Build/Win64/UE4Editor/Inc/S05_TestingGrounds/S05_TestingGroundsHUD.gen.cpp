// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "S05_TestingGrounds/S05_TestingGroundsHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS05_TestingGroundsHUD() {}
// Cross Module References
	S05_TESTINGGROUNDS_API UClass* Z_Construct_UClass_AS05_TestingGroundsHUD_NoRegister();
	S05_TESTINGGROUNDS_API UClass* Z_Construct_UClass_AS05_TestingGroundsHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_S05_TestingGrounds();
// End Cross Module References
	void AS05_TestingGroundsHUD::StaticRegisterNativesAS05_TestingGroundsHUD()
	{
	}
	UClass* Z_Construct_UClass_AS05_TestingGroundsHUD_NoRegister()
	{
		return AS05_TestingGroundsHUD::StaticClass();
	}
	struct Z_Construct_UClass_AS05_TestingGroundsHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AS05_TestingGroundsHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_S05_TestingGrounds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AS05_TestingGroundsHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "S05_TestingGroundsHUD.h" },
		{ "ModuleRelativePath", "S05_TestingGroundsHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AS05_TestingGroundsHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AS05_TestingGroundsHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AS05_TestingGroundsHUD_Statics::ClassParams = {
		&AS05_TestingGroundsHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AS05_TestingGroundsHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AS05_TestingGroundsHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AS05_TestingGroundsHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AS05_TestingGroundsHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AS05_TestingGroundsHUD, 2681778699);
	template<> S05_TESTINGGROUNDS_API UClass* StaticClass<AS05_TestingGroundsHUD>()
	{
		return AS05_TestingGroundsHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AS05_TestingGroundsHUD(Z_Construct_UClass_AS05_TestingGroundsHUD, &AS05_TestingGroundsHUD::StaticClass, TEXT("/Script/S05_TestingGrounds"), TEXT("AS05_TestingGroundsHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AS05_TestingGroundsHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
