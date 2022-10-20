// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Arcanoid/Brick.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrick() {}
// Cross Module References
	ARCANOID_API UClass* Z_Construct_UClass_ABrick_NoRegister();
	ARCANOID_API UClass* Z_Construct_UClass_ABrick();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Arcanoid();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABrick::StaticRegisterNativesABrick()
	{
	}
	UClass* Z_Construct_UClass_ABrick_NoRegister()
	{
		return ABrick::StaticClass();
	}
	struct Z_Construct_UClass_ABrick_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SM_Brick_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SM_Brick;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABrick_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Arcanoid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrick_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Brick.h" },
		{ "ModuleRelativePath", "Brick.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABrick_Statics::NewProp_SM_Brick_MetaData[] = {
		{ "Category", "Brick" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Brick.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABrick_Statics::NewProp_SM_Brick = { "SM_Brick", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABrick, SM_Brick), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABrick_Statics::NewProp_SM_Brick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABrick_Statics::NewProp_SM_Brick_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABrick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABrick_Statics::NewProp_SM_Brick,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABrick_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABrick>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABrick_Statics::ClassParams = {
		&ABrick::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABrick_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABrick_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABrick_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABrick_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABrick()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABrick_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABrick, 890715490);
	template<> ARCANOID_API UClass* StaticClass<ABrick>()
	{
		return ABrick::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABrick(Z_Construct_UClass_ABrick, &ABrick::StaticClass, TEXT("/Script/Arcanoid"), TEXT("ABrick"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABrick);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
