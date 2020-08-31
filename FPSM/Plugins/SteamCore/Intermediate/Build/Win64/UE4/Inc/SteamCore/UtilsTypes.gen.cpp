// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Utils/UtilsTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUtilsTypes() {}
// Cross Module References
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamShutdown();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLowBatteryPower();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FIPCountry();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGamepadTextInputDismissed();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FCheckFileSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUniverse();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamNotificationPosition();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamShutdown_Parms
		{
			FSteamShutdown data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamShutdown_Parms, data), Z_Construct_UScriptStruct_FSteamShutdown, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamShutdown__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnSteamShutdown_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamShutdown__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLowBatteryPower_Parms
		{
			FLowBatteryPower data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLowBatteryPower_Parms, data), Z_Construct_UScriptStruct_FLowBatteryPower, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLowBatteryPower__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnLowBatteryPower_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLowBatteryPower__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnIPCountry_Parms
		{
			FIPCountry data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnIPCountry_Parms, data), Z_Construct_UScriptStruct_FIPCountry, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnIPCountry__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnIPCountry_Parms), Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnIPCountry__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGamepadTextInputDismissed_Parms
		{
			FGamepadTextInputDismissed data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGamepadTextInputDismissed_Parms, data), Z_Construct_UScriptStruct_FGamepadTextInputDismissed, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGamepadTextInputDismissed__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnGamepadTextInputDismissed_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGamepadTextInputDismissed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnCheckFileSignature_Parms
		{
			FCheckFileSignature data;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnCheckFileSignature_Parms, data), Z_Construct_UScriptStruct_FCheckFileSignature, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnCheckFileSignature__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnCheckFileSignature_Parms), Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnCheckFileSignature__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ESteamUniverse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamUniverse, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamUniverse"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamUniverse>()
	{
		return ESteamUniverse_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamUniverse(ESteamUniverse_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamUniverse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamUniverse_Hash() { return 86101435U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamUniverse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamUniverse"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamUniverse_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamUniverse::Invalid", (int64)ESteamUniverse::Invalid },
				{ "ESteamUniverse::Public", (int64)ESteamUniverse::Public },
				{ "ESteamUniverse::Beta", (int64)ESteamUniverse::Beta },
				{ "ESteamUniverse::Internal", (int64)ESteamUniverse::Internal },
				{ "ESteamUniverse::Dev", (int64)ESteamUniverse::Dev },
				{ "ESteamUniverse::Max", (int64)ESteamUniverse::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Beta.Name", "ESteamUniverse::Beta" },
				{ "BlueprintType", "true" },
				{ "Dev.Name", "ESteamUniverse::Dev" },
				{ "Internal.Name", "ESteamUniverse::Internal" },
				{ "Invalid.Name", "ESteamUniverse::Invalid" },
				{ "Max.Name", "ESteamUniverse::Max" },
				{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
				{ "Public.Name", "ESteamUniverse::Public" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamUniverse",
				"ESteamUniverse",
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
	static UEnum* ESteamNotificationPosition_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamNotificationPosition, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamNotificationPosition"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamNotificationPosition>()
	{
		return ESteamNotificationPosition_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamNotificationPosition(ESteamNotificationPosition_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamNotificationPosition"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Hash() { return 3534179416U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamNotificationPosition()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamNotificationPosition"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamNotificationPosition_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamNotificationPosition::TopLeft", (int64)ESteamNotificationPosition::TopLeft },
				{ "ESteamNotificationPosition::TopRight", (int64)ESteamNotificationPosition::TopRight },
				{ "ESteamNotificationPosition::BottomLeft", (int64)ESteamNotificationPosition::BottomLeft },
				{ "ESteamNotificationPosition::BottomRight", (int64)ESteamNotificationPosition::BottomRight },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BottomLeft.Name", "ESteamNotificationPosition::BottomLeft" },
				{ "BottomRight.Name", "ESteamNotificationPosition::BottomRight" },
				{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
				{ "TopLeft.Name", "ESteamNotificationPosition::TopLeft" },
				{ "TopRight.Name", "ESteamNotificationPosition::TopRight" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamNotificationPosition",
				"ESteamNotificationPosition",
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
	static UEnum* ESteamGamepadTextInputMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamGamepadTextInputMode"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamGamepadTextInputMode>()
	{
		return ESteamGamepadTextInputMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamGamepadTextInputMode(ESteamGamepadTextInputMode_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamGamepadTextInputMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Hash() { return 1329336721U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamGamepadTextInputMode"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamGamepadTextInputMode::Normal", (int64)ESteamGamepadTextInputMode::Normal },
				{ "ESteamGamepadTextInputMode::Password", (int64)ESteamGamepadTextInputMode::Password },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
				{ "Normal.Name", "ESteamGamepadTextInputMode::Normal" },
				{ "Password.Name", "ESteamGamepadTextInputMode::Password" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamGamepadTextInputMode",
				"ESteamGamepadTextInputMode",
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
	static UEnum* ESteamGamepadTextInputLineMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamGamepadTextInputLineMode"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamGamepadTextInputLineMode>()
	{
		return ESteamGamepadTextInputLineMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamGamepadTextInputLineMode(ESteamGamepadTextInputLineMode_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamGamepadTextInputLineMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Hash() { return 3875054639U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamGamepadTextInputLineMode"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamGamepadTextInputLineMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamGamepadTextInputLineMode::SingleLine", (int64)ESteamGamepadTextInputLineMode::SingleLine },
				{ "ESteamGamepadTextInputLineMode::MultipleLines", (int64)ESteamGamepadTextInputLineMode::MultipleLines },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
				{ "MultipleLines.Name", "ESteamGamepadTextInputLineMode::MultipleLines" },
				{ "SingleLine.Name", "ESteamGamepadTextInputLineMode::SingleLine" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamGamepadTextInputLineMode",
				"ESteamGamepadTextInputLineMode",
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
	static UEnum* ESteamCheckFileSignature_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCheckFileSignature"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCheckFileSignature>()
	{
		return ESteamCheckFileSignature_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCheckFileSignature(ESteamCheckFileSignature_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCheckFileSignature"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Hash() { return 2646265821U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCheckFileSignature"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCheckFileSignature::InvalidSignature", (int64)ESteamCheckFileSignature::InvalidSignature },
				{ "ESteamCheckFileSignature::ValidSignature", (int64)ESteamCheckFileSignature::ValidSignature },
				{ "ESteamCheckFileSignature::FileNotFound", (int64)ESteamCheckFileSignature::FileNotFound },
				{ "ESteamCheckFileSignature::NoSignaturesFoundForThisApp", (int64)ESteamCheckFileSignature::NoSignaturesFoundForThisApp },
				{ "ESteamCheckFileSignature::NoSignaturesFoundForThisFile", (int64)ESteamCheckFileSignature::NoSignaturesFoundForThisFile },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
				{ "FileNotFound.Name", "ESteamCheckFileSignature::FileNotFound" },
				{ "InvalidSignature.Name", "ESteamCheckFileSignature::InvalidSignature" },
				{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
				{ "NoSignaturesFoundForThisApp.Name", "ESteamCheckFileSignature::NoSignaturesFoundForThisApp" },
				{ "NoSignaturesFoundForThisFile.Name", "ESteamCheckFileSignature::NoSignaturesFoundForThisFile" },
				{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
				{ "ValidSignature.Name", "ESteamCheckFileSignature::ValidSignature" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCheckFileSignature",
				"ESteamCheckFileSignature",
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
class UScriptStruct* FSteamShutdown::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamShutdown_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamShutdown, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamShutdown"), sizeof(FSteamShutdown), Get_Z_Construct_UScriptStruct_FSteamShutdown_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamShutdown>()
{
	return FSteamShutdown::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamShutdown(FSteamShutdown::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamShutdown"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamShutdown
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamShutdown()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamShutdown")),new UScriptStruct::TCppStructOps<FSteamShutdown>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamShutdown;
	struct Z_Construct_UScriptStruct_FSteamShutdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamShutdown_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamShutdown_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamShutdown>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamShutdown_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamShutdown",
		sizeof(FSteamShutdown),
		alignof(FSteamShutdown),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamShutdown_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamShutdown_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamShutdown()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamShutdown_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamShutdown"), sizeof(FSteamShutdown), Get_Z_Construct_UScriptStruct_FSteamShutdown_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamShutdown_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamShutdown_Hash() { return 1390241233U; }
class UScriptStruct* FIPCountry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FIPCountry_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIPCountry, Z_Construct_UPackage__Script_SteamCore(), TEXT("IPCountry"), sizeof(FIPCountry), Get_Z_Construct_UScriptStruct_FIPCountry_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FIPCountry>()
{
	return FIPCountry::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIPCountry(FIPCountry::StaticStruct, TEXT("/Script/SteamCore"), TEXT("IPCountry"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFIPCountry
{
	FScriptStruct_SteamCore_StaticRegisterNativesFIPCountry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IPCountry")),new UScriptStruct::TCppStructOps<FIPCountry>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFIPCountry;
	struct Z_Construct_UScriptStruct_FIPCountry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIPCountry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIPCountry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIPCountry>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIPCountry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"IPCountry",
		sizeof(FIPCountry),
		alignof(FIPCountry),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIPCountry_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCountry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIPCountry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIPCountry_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IPCountry"), sizeof(FIPCountry), Get_Z_Construct_UScriptStruct_FIPCountry_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIPCountry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIPCountry_Hash() { return 2512762562U; }
class UScriptStruct* FLowBatteryPower::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLowBatteryPower_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLowBatteryPower, Z_Construct_UPackage__Script_SteamCore(), TEXT("LowBatteryPower"), sizeof(FLowBatteryPower), Get_Z_Construct_UScriptStruct_FLowBatteryPower_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLowBatteryPower>()
{
	return FLowBatteryPower::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLowBatteryPower(FLowBatteryPower::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LowBatteryPower"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLowBatteryPower
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLowBatteryPower()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LowBatteryPower")),new UScriptStruct::TCppStructOps<FLowBatteryPower>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLowBatteryPower;
	struct Z_Construct_UScriptStruct_FLowBatteryPower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinutesBatteryLeft_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MinutesBatteryLeft;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowBatteryPower_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLowBatteryPower>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft = { "MinutesBatteryLeft", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLowBatteryPower, MinutesBatteryLeft), METADATA_PARAMS(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLowBatteryPower_Statics::NewProp_MinutesBatteryLeft,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLowBatteryPower_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LowBatteryPower",
		sizeof(FLowBatteryPower),
		alignof(FLowBatteryPower),
		Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLowBatteryPower_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLowBatteryPower()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLowBatteryPower_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LowBatteryPower"), sizeof(FLowBatteryPower), Get_Z_Construct_UScriptStruct_FLowBatteryPower_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLowBatteryPower_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLowBatteryPower_Hash() { return 3561637515U; }
class UScriptStruct* FGamepadTextInputDismissed::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGamepadTextInputDismissed, Z_Construct_UPackage__Script_SteamCore(), TEXT("GamepadTextInputDismissed"), sizeof(FGamepadTextInputDismissed), Get_Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGamepadTextInputDismissed>()
{
	return FGamepadTextInputDismissed::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGamepadTextInputDismissed(FGamepadTextInputDismissed::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GamepadTextInputDismissed"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGamepadTextInputDismissed
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGamepadTextInputDismissed()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GamepadTextInputDismissed")),new UScriptStruct::TCppStructOps<FGamepadTextInputDismissed>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGamepadTextInputDismissed;
	struct Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubmittedText_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubmittedText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSubmitted_MetaData[];
#endif
		static void NewProp_bSubmitted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSubmitted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGamepadTextInputDismissed>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText = { "SubmittedText", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGamepadTextInputDismissed, SubmittedText), METADATA_PARAMS(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_SetBit(void* Obj)
	{
		((FGamepadTextInputDismissed*)Obj)->bSubmitted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted = { "bSubmitted", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGamepadTextInputDismissed), &Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_SubmittedText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::NewProp_bSubmitted,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GamepadTextInputDismissed",
		sizeof(FGamepadTextInputDismissed),
		alignof(FGamepadTextInputDismissed),
		Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGamepadTextInputDismissed()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GamepadTextInputDismissed"), sizeof(FGamepadTextInputDismissed), Get_Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Hash() { return 1128669205U; }
class UScriptStruct* FCheckFileSignature::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FCheckFileSignature_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCheckFileSignature, Z_Construct_UPackage__Script_SteamCore(), TEXT("CheckFileSignature"), sizeof(FCheckFileSignature), Get_Z_Construct_UScriptStruct_FCheckFileSignature_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FCheckFileSignature>()
{
	return FCheckFileSignature::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCheckFileSignature(FCheckFileSignature::StaticStruct, TEXT("/Script/SteamCore"), TEXT("CheckFileSignature"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFCheckFileSignature
{
	FScriptStruct_SteamCore_StaticRegisterNativesFCheckFileSignature()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CheckFileSignature")),new UScriptStruct::TCppStructOps<FCheckFileSignature>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFCheckFileSignature;
	struct Z_Construct_UScriptStruct_FCheckFileSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CheckFileSignature_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CheckFileSignature;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CheckFileSignature_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckFileSignature_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCheckFileSignature>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_MetaData[] = {
		{ "Category", "Utils" },
		{ "ModuleRelativePath", "Public/Utils/UtilsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature = { "CheckFileSignature", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCheckFileSignature, CheckFileSignature), Z_Construct_UEnum_SteamCore_ESteamCheckFileSignature, METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCheckFileSignature_Statics::NewProp_CheckFileSignature_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCheckFileSignature_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"CheckFileSignature",
		sizeof(FCheckFileSignature),
		alignof(FCheckFileSignature),
		Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCheckFileSignature_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCheckFileSignature()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCheckFileSignature_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CheckFileSignature"), sizeof(FCheckFileSignature), Get_Z_Construct_UScriptStruct_FCheckFileSignature_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCheckFileSignature_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCheckFileSignature_Hash() { return 2712321532U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
