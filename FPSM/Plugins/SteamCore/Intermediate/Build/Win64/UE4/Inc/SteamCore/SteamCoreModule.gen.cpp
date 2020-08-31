// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCore/SteamCoreModule.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamCoreModule() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCore_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCore();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
// End Cross Module References
	void USteamCore::StaticRegisterNativesUSteamCore()
	{
	}
	UClass* Z_Construct_UClass_USteamCore_NoRegister()
	{
		return USteamCore::StaticClass();
	}
	struct Z_Construct_UClass_USteamCore_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCore_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCore_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCore/SteamCoreModule.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreModule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCore_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCore>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCore_Statics::ClassParams = {
		&USteamCore::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCore_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCore_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCore()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCore_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCore, 812841354);
	template<> STEAMCORE_API UClass* StaticClass<USteamCore>()
	{
		return USteamCore::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCore(Z_Construct_UClass_USteamCore, &USteamCore::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCore"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCore);
	void USteamCoreSubsystem::StaticRegisterNativesUSteamCoreSubsystem()
	{
	}
	UClass* Z_Construct_UClass_USteamCoreSubsystem_NoRegister()
	{
		return USteamCoreSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_USteamCoreSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamCoreSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamCoreSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCore/SteamCoreModule.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamCoreModule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamCoreSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamCoreSubsystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamCoreSubsystem_Statics::ClassParams = {
		&USteamCoreSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USteamCoreSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamCoreSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamCoreSubsystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamCoreSubsystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamCoreSubsystem, 1003338199);
	template<> STEAMCORE_API UClass* StaticClass<USteamCoreSubsystem>()
	{
		return USteamCoreSubsystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamCoreSubsystem(Z_Construct_UClass_USteamCoreSubsystem, &USteamCoreSubsystem::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamCoreSubsystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamCoreSubsystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
