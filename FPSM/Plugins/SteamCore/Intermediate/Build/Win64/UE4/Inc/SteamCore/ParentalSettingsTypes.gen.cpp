// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/ParentalSettings/ParentalSettingsTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentalSettingsTypes() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamParentalFeature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamParentalSettingsChanged();
// End Cross Module References
	static UEnum* ESteamParentalFeature_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamParentalFeature, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamParentalFeature"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamParentalFeature>()
	{
		return ESteamParentalFeature_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamParentalFeature(ESteamParentalFeature_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamParentalFeature"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Hash() { return 3465930896U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamParentalFeature()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamParentalFeature"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamParentalFeature_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamParentalFeature::Invalid", (int64)ESteamParentalFeature::Invalid },
				{ "ESteamParentalFeature::Store", (int64)ESteamParentalFeature::Store },
				{ "ESteamParentalFeature::Community", (int64)ESteamParentalFeature::Community },
				{ "ESteamParentalFeature::Profile", (int64)ESteamParentalFeature::Profile },
				{ "ESteamParentalFeature::Friends", (int64)ESteamParentalFeature::Friends },
				{ "ESteamParentalFeature::News", (int64)ESteamParentalFeature::News },
				{ "ESteamParentalFeature::Trading", (int64)ESteamParentalFeature::Trading },
				{ "ESteamParentalFeature::Settings", (int64)ESteamParentalFeature::Settings },
				{ "ESteamParentalFeature::Console", (int64)ESteamParentalFeature::Console },
				{ "ESteamParentalFeature::Browser", (int64)ESteamParentalFeature::Browser },
				{ "ESteamParentalFeature::ParentalSetup", (int64)ESteamParentalFeature::ParentalSetup },
				{ "ESteamParentalFeature::Library", (int64)ESteamParentalFeature::Library },
				{ "ESteamParentalFeature::Test", (int64)ESteamParentalFeature::Test },
				{ "ESteamParentalFeature::Max", (int64)ESteamParentalFeature::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Browser.Name", "ESteamParentalFeature::Browser" },
				{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
				{ "Community.Name", "ESteamParentalFeature::Community" },
				{ "Console.Name", "ESteamParentalFeature::Console" },
				{ "Friends.Name", "ESteamParentalFeature::Friends" },
				{ "Invalid.Name", "ESteamParentalFeature::Invalid" },
				{ "Library.Name", "ESteamParentalFeature::Library" },
				{ "Max.Name", "ESteamParentalFeature::Max" },
				{ "ModuleRelativePath", "Public/ParentalSettings/ParentalSettingsTypes.h" },
				{ "News.Name", "ESteamParentalFeature::News" },
				{ "ParentalSetup.Name", "ESteamParentalFeature::ParentalSetup" },
				{ "Profile.Name", "ESteamParentalFeature::Profile" },
				{ "Settings.Name", "ESteamParentalFeature::Settings" },
				{ "Store.Name", "ESteamParentalFeature::Store" },
				{ "Test.Name", "ESteamParentalFeature::Test" },
				{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
				{ "Trading.Name", "ESteamParentalFeature::Trading" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamParentalFeature",
				"ESteamParentalFeature",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FSteamParentalSettingsChanged::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamParentalSettingsChanged, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamParentalSettingsChanged"), sizeof(FSteamParentalSettingsChanged), Get_Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamParentalSettingsChanged>()
{
	return FSteamParentalSettingsChanged::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamParentalSettingsChanged(FSteamParentalSettingsChanged::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamParentalSettingsChanged"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamParentalSettingsChanged
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamParentalSettingsChanged()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamParentalSettingsChanged")),new UScriptStruct::TCppStructOps<FSteamParentalSettingsChanged>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamParentalSettingsChanged;
	struct Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/ParentalSettings/ParentalSettingsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamParentalSettingsChanged>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamParentalSettingsChanged",
		sizeof(FSteamParentalSettingsChanged),
		alignof(FSteamParentalSettingsChanged),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamParentalSettingsChanged()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamParentalSettingsChanged"), sizeof(FSteamParentalSettingsChanged), Get_Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamParentalSettingsChanged_Hash() { return 453684120U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
