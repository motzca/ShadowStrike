// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShadowStrike/ShadowStrikeGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShadowStrikeGameMode() {}
// Cross Module References
	SHADOWSTRIKE_API UClass* Z_Construct_UClass_AShadowStrikeGameMode_NoRegister();
	SHADOWSTRIKE_API UClass* Z_Construct_UClass_AShadowStrikeGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShadowStrike();
// End Cross Module References
	void AShadowStrikeGameMode::StaticRegisterNativesAShadowStrikeGameMode()
	{
	}
	UClass* Z_Construct_UClass_AShadowStrikeGameMode_NoRegister()
	{
		return AShadowStrikeGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShadowStrikeGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShadowStrikeGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShadowStrike,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShadowStrikeGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ShadowStrikeGameMode.h" },
		{ "ModuleRelativePath", "ShadowStrikeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShadowStrikeGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShadowStrikeGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShadowStrikeGameMode_Statics::ClassParams = {
		&AShadowStrikeGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AShadowStrikeGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShadowStrikeGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShadowStrikeGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShadowStrikeGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShadowStrikeGameMode, 168046798);
	template<> SHADOWSTRIKE_API UClass* StaticClass<AShadowStrikeGameMode>()
	{
		return AShadowStrikeGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShadowStrikeGameMode(Z_Construct_UClass_AShadowStrikeGameMode, &AShadowStrikeGameMode::StaticClass, TEXT("/Script/ShadowStrike"), TEXT("AShadowStrikeGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShadowStrikeGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
