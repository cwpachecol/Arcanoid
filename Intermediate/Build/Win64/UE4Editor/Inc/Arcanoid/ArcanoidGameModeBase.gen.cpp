// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/ArcanoidGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArcanoidGameModeBase() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_AArcanoidGameModeBase_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_AArcanoidGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
// End Cross Module References
	void AArcanoidGameModeBase::StaticRegisterNativesAArcanoidGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AArcanoidGameModeBase_NoRegister()
	{
		return AArcanoidGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AArcanoidGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArcanoidGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArcanoidGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ArcanoidGameModeBase.h" },
		{ "ModuleRelativePath", "ArcanoidGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArcanoidGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArcanoidGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AArcanoidGameModeBase_Statics::ClassParams = {
		&AArcanoidGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AArcanoidGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArcanoidGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArcanoidGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AArcanoidGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AArcanoidGameModeBase, 1770543619);
	template<> ARCANOID_API UClass* StaticClass<AArcanoidGameModeBase>()
	{
		return AArcanoidGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AArcanoidGameModeBase(Z_Construct_UClass_AArcanoidGameModeBase, &AArcanoidGameModeBase::StaticClass, TEXT("/Script/Arcanoid"), TEXT("AArcanoidGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArcanoidGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
