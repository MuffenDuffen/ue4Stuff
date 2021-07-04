// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue4Test1/ue4Test1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeue4Test1GameMode() {}
// Cross Module References
	UE4TEST1_API UClass* Z_Construct_UClass_Aue4Test1GameMode_NoRegister();
	UE4TEST1_API UClass* Z_Construct_UClass_Aue4Test1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ue4Test1();
// End Cross Module References
	void Aue4Test1GameMode::StaticRegisterNativesAue4Test1GameMode()
	{
	}
	UClass* Z_Construct_UClass_Aue4Test1GameMode_NoRegister()
	{
		return Aue4Test1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_Aue4Test1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aue4Test1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ue4Test1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aue4Test1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ue4Test1GameMode.h" },
		{ "ModuleRelativePath", "ue4Test1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aue4Test1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aue4Test1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aue4Test1GameMode_Statics::ClassParams = {
		&Aue4Test1GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aue4Test1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aue4Test1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aue4Test1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aue4Test1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aue4Test1GameMode, 3685016424);
	template<> UE4TEST1_API UClass* StaticClass<Aue4Test1GameMode>()
	{
		return Aue4Test1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aue4Test1GameMode(Z_Construct_UClass_Aue4Test1GameMode, &Aue4Test1GameMode::StaticClass, TEXT("/Script/ue4Test1"), TEXT("Aue4Test1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aue4Test1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
