// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCore/SteamUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamUtilities() {}
// Cross Module References
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamMessageType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreIdentical();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreValid();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamUtilities_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
	STEAMCORE_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAccountType();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHostPingData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamMessage_Parms
		{
			ESteamMessageType type;
			FString message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamMessage_Parms, message), METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamMessage_Parms, type), Z_Construct_UEnum_SteamCore_ESteamMessageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::NewProp_type_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamMessage__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnSteamMessage_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ESteamCoreIdentical_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreIdentical, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreIdentical"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreIdentical>()
	{
		return ESteamCoreIdentical_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreIdentical(ESteamCoreIdentical_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreIdentical"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Hash() { return 1764611614U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreIdentical()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreIdentical"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreIdentical_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreIdentical::Identical", (int64)ESteamCoreIdentical::Identical },
				{ "ESteamCoreIdentical::NotIdentical", (int64)ESteamCoreIdentical::NotIdentical },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Identical.Name", "ESteamCoreIdentical::Identical" },
				{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
				{ "NotIdentical.Name", "ESteamCoreIdentical::NotIdentical" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreIdentical",
				"ESteamCoreIdentical",
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
	static UEnum* ESteamCoreValid_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamCoreValid, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamCoreValid"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreValid>()
	{
		return ESteamCoreValid_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamCoreValid(ESteamCoreValid_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamCoreValid"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamCoreValid_Hash() { return 1989838724U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamCoreValid()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamCoreValid"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamCoreValid_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamCoreValid::Valid", (int64)ESteamCoreValid::Valid },
				{ "ESteamCoreValid::NotValid", (int64)ESteamCoreValid::NotValid },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
				{ "NotValid.Name", "ESteamCoreValid::NotValid" },
				{ "Valid.Name", "ESteamCoreValid::Valid" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamCoreValid",
				"ESteamCoreValid",
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
	DEFINE_FUNCTION(USteamUtilities::execListenForSteamMessages)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::ListenForSteamMessages(FOnSteamMessage(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsRecalculatingPing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsRecalculatingPing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetPingFromHostData)
	{
		P_GET_STRUCT_REF(FHostPingData,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=USteamUtilities::GetPingFromHostData(Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetHostPingData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FHostPingData*)Z_Param__Result=USteamUtilities::GetHostPingData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsUsingP2PRelays)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsUsingP2PRelays();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execConstructServerFilter)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UServerFilter**)Z_Param__Result=USteamUtilities::ConstructServerFilter(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsSteamAvailable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsSteamAvailable();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsLobby(Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execGetAccountType)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamAccountType*)Z_Param__Result=USteamUtilities::GetAccountType(Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execPublishedFileID_NotEquals)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_a);
		P_GET_STRUCT(FPublishedFileID,Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::PublishedFileID_NotEquals(Z_Param_a,Z_Param_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execPublishedFileID_Equals_Exec)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_a);
		P_GET_STRUCT(FPublishedFileID,Z_Param_b);
		P_GET_ENUM_REF(ESteamCoreIdentical,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::PublishedFileID_Equals_Exec(Z_Param_a,Z_Param_b,(ESteamCoreIdentical&)(Z_Param_Out_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execPublishedFileID_Equals)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_a);
		P_GET_STRUCT(FPublishedFileID,Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::PublishedFileID_Equals(Z_Param_a,Z_Param_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execNotEqual)
	{
		P_GET_STRUCT(FSteamID,Z_Param_a);
		P_GET_STRUCT(FSteamID,Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::NotEqual(Z_Param_a,Z_Param_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execEqual_Exec)
	{
		P_GET_STRUCT(FSteamID,Z_Param_a);
		P_GET_STRUCT(FSteamID,Z_Param_b);
		P_GET_ENUM_REF(ESteamCoreIdentical,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::Equal_Exec(Z_Param_a,Z_Param_b,(ESteamCoreIdentical&)(Z_Param_Out_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execEqual)
	{
		P_GET_STRUCT(FSteamID,Z_Param_a);
		P_GET_STRUCT(FSteamID,Z_Param_b);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::Equal(Z_Param_a,Z_Param_b);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsSteamInventoryUpdateHandleValid_Exec)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_handle);
		P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::IsSteamInventoryUpdateHandleValid_Exec(Z_Param_handle,(ESteamCoreValid&)(Z_Param_Out_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsSteamInventoryUpdateHandleValid)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsSteamInventoryUpdateHandleValid(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsSteamTicketHandleValid_Exec)
	{
		P_GET_STRUCT(FSteamTicketHandle,Z_Param_handle);
		P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::IsSteamTicketHandleValid_Exec(Z_Param_handle,(ESteamCoreValid&)(Z_Param_Out_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsSteamTicketHandleValid)
	{
		P_GET_STRUCT(FSteamTicketHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsSteamTicketHandleValid(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsUGCHandleValid_Exec)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_handle);
		P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::IsUGCHandleValid_Exec(Z_Param_handle,(ESteamCoreValid&)(Z_Param_Out_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsUGCHandleValid)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsUGCHandleValid(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsGameIDValid_Exec)
	{
		P_GET_STRUCT(FSteamGameID,Z_Param_gameID);
		P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::IsGameIDValid_Exec(Z_Param_gameID,(ESteamCoreValid&)(Z_Param_Out_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsGameIDValid)
	{
		P_GET_STRUCT(FSteamGameID,Z_Param_gameID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsGameIDValid(Z_Param_gameID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsSteamIDValid_Exec)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_GET_ENUM_REF(ESteamCoreValid,Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		USteamUtilities::IsSteamIDValid_Exec(Z_Param_steamID,(ESteamCoreValid&)(Z_Param_Out_result));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execIsValid)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USteamUtilities::IsValid(Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakTicketHandle)
	{
		P_GET_STRUCT(FSteamTicketHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakTicketHandle(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakInventoryUpdateHandle)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakInventoryUpdateHandle(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakUGCHandle)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakUGCHandle(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakPublishedFileID)
	{
		P_GET_STRUCT(FPublishedFileID,Z_Param_fileID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakPublishedFileID(Z_Param_fileID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakSteamGameID)
	{
		P_GET_STRUCT(FSteamGameID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakSteamGameID(Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execBreakSteamID)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=USteamUtilities::BreakSteamID(Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeTicketHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamTicketHandle*)Z_Param__Result=USteamUtilities::MakeTicketHandle(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeInventoryUpdateHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamInventoryUpdateHandle*)Z_Param__Result=USteamUtilities::MakeInventoryUpdateHandle(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeUGCHandle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamUGCHandle*)Z_Param__Result=USteamUtilities::MakeUGCHandle(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakePublishedFileID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FPublishedFileID*)Z_Param__Result=USteamUtilities::MakePublishedFileID(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeSteamGameID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamGameID*)Z_Param__Result=USteamUtilities::MakeSteamGameID(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USteamUtilities::execMakeSteamID)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=USteamUtilities::MakeSteamID(Z_Param_value);
		P_NATIVE_END;
	}
	void USteamUtilities::StaticRegisterNativesUSteamUtilities()
	{
		UClass* Class = USteamUtilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BreakInventoryUpdateHandle", &USteamUtilities::execBreakInventoryUpdateHandle },
			{ "BreakPublishedFileID", &USteamUtilities::execBreakPublishedFileID },
			{ "BreakSteamGameID", &USteamUtilities::execBreakSteamGameID },
			{ "BreakSteamID", &USteamUtilities::execBreakSteamID },
			{ "BreakTicketHandle", &USteamUtilities::execBreakTicketHandle },
			{ "BreakUGCHandle", &USteamUtilities::execBreakUGCHandle },
			{ "ConstructServerFilter", &USteamUtilities::execConstructServerFilter },
			{ "Equal", &USteamUtilities::execEqual },
			{ "Equal_Exec", &USteamUtilities::execEqual_Exec },
			{ "GetAccountType", &USteamUtilities::execGetAccountType },
			{ "GetHostPingData", &USteamUtilities::execGetHostPingData },
			{ "GetPingFromHostData", &USteamUtilities::execGetPingFromHostData },
			{ "IsGameIDValid", &USteamUtilities::execIsGameIDValid },
			{ "IsGameIDValid_Exec", &USteamUtilities::execIsGameIDValid_Exec },
			{ "IsLobby", &USteamUtilities::execIsLobby },
			{ "IsRecalculatingPing", &USteamUtilities::execIsRecalculatingPing },
			{ "IsSteamAvailable", &USteamUtilities::execIsSteamAvailable },
			{ "IsSteamIDValid_Exec", &USteamUtilities::execIsSteamIDValid_Exec },
			{ "IsSteamInventoryUpdateHandleValid", &USteamUtilities::execIsSteamInventoryUpdateHandleValid },
			{ "IsSteamInventoryUpdateHandleValid_Exec", &USteamUtilities::execIsSteamInventoryUpdateHandleValid_Exec },
			{ "IsSteamTicketHandleValid", &USteamUtilities::execIsSteamTicketHandleValid },
			{ "IsSteamTicketHandleValid_Exec", &USteamUtilities::execIsSteamTicketHandleValid_Exec },
			{ "IsUGCHandleValid", &USteamUtilities::execIsUGCHandleValid },
			{ "IsUGCHandleValid_Exec", &USteamUtilities::execIsUGCHandleValid_Exec },
			{ "IsUsingP2PRelays", &USteamUtilities::execIsUsingP2PRelays },
			{ "IsValid", &USteamUtilities::execIsValid },
			{ "ListenForSteamMessages", &USteamUtilities::execListenForSteamMessages },
			{ "MakeInventoryUpdateHandle", &USteamUtilities::execMakeInventoryUpdateHandle },
			{ "MakePublishedFileID", &USteamUtilities::execMakePublishedFileID },
			{ "MakeSteamGameID", &USteamUtilities::execMakeSteamGameID },
			{ "MakeSteamID", &USteamUtilities::execMakeSteamID },
			{ "MakeTicketHandle", &USteamUtilities::execMakeTicketHandle },
			{ "MakeUGCHandle", &USteamUtilities::execMakeUGCHandle },
			{ "NotEqual", &USteamUtilities::execNotEqual },
			{ "PublishedFileID_Equals", &USteamUtilities::execPublishedFileID_Equals },
			{ "PublishedFileID_Equals_Exec", &USteamUtilities::execPublishedFileID_Equals_Exec },
			{ "PublishedFileID_NotEquals", &USteamUtilities::execPublishedFileID_NotEquals },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics
	{
		struct SteamUtilities_eventBreakInventoryUpdateHandle_Parms
		{
			FSteamInventoryUpdateHandle handle;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakInventoryUpdateHandle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakInventoryUpdateHandle_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakInventoryUpdateHandle", nullptr, nullptr, sizeof(SteamUtilities_eventBreakInventoryUpdateHandle_Parms), Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics
	{
		struct SteamUtilities_eventBreakPublishedFileID_Parms
		{
			FPublishedFileID fileID;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_fileID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakPublishedFileID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_fileID = { "fileID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakPublishedFileID_Parms, fileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::NewProp_fileID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakPublishedFileID", nullptr, nullptr, sizeof(SteamUtilities_eventBreakPublishedFileID_Parms), Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics
	{
		struct SteamUtilities_eventBreakSteamGameID_Parms
		{
			FSteamGameID steamID;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamGameID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamGameID_Parms, steamID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakSteamGameID", nullptr, nullptr, sizeof(SteamUtilities_eventBreakSteamGameID_Parms), Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakSteamGameID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakSteamGameID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics
	{
		struct SteamUtilities_eventBreakSteamID_Parms
		{
			FSteamID steamID;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakSteamID_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Native Break Functions\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Native Break Functions\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakSteamID", nullptr, nullptr, sizeof(SteamUtilities_eventBreakSteamID_Parms), Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics
	{
		struct SteamUtilities_eventBreakTicketHandle_Parms
		{
			FSteamTicketHandle handle;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakTicketHandle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakTicketHandle_Parms, handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakTicketHandle", nullptr, nullptr, sizeof(SteamUtilities_eventBreakTicketHandle_Parms), Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakTicketHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakTicketHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics
	{
		struct SteamUtilities_eventBreakUGCHandle_Parms
		{
			FSteamUGCHandle handle;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakUGCHandle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventBreakUGCHandle_Parms, handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeBreakFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "BreakUGCHandle", nullptr, nullptr, sizeof(SteamUtilities_eventBreakUGCHandle_Parms), Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_BreakUGCHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_BreakUGCHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics
	{
		struct SteamUtilities_eventConstructServerFilter_Parms
		{
			UObject* WorldContextObject;
			UServerFilter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventConstructServerFilter_Parms, ReturnValue), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventConstructServerFilter_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ConstructServerFilter", nullptr, nullptr, sizeof(SteamUtilities_eventConstructServerFilter_Parms), Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_ConstructServerFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_ConstructServerFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_Equal_Statics
	{
		struct SteamUtilities_eventEqual_Parms
		{
			FSteamID a;
			FSteamID b;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventEqual_Parms), &Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Parms, b), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Parms, a), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_Equal_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_Equal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "Equal", nullptr, nullptr, sizeof(SteamUtilities_eventEqual_Parms), Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_Equal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_Equal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_Equal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics
	{
		struct SteamUtilities_eventEqual_Exec_Parms
		{
			FSteamID a;
			FSteamID b;
			ESteamCoreIdentical result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, result), Z_Construct_UEnum_SteamCore_ESteamCoreIdentical, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, b), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventEqual_Exec_Parms, a), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ExpandEnumAsExecs", "result" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "Equal_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventEqual_Exec_Parms), Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_Equal_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_Equal_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics
	{
		struct SteamUtilities_eventGetAccountType_Parms
		{
			FSteamID steamID;
			ESteamAccountType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetAccountType_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamAccountType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetAccountType_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetAccountType", nullptr, nullptr, sizeof(SteamUtilities_eventGetAccountType_Parms), Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetAccountType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetAccountType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics
	{
		struct SteamUtilities_eventGetHostPingData_Parms
		{
			FHostPingData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetHostPingData_Parms, ReturnValue), Z_Construct_UScriptStruct_FHostPingData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
		{ "Comment", "/**\n\x09 * Returns the P2P relay ping information for the current machine. This information can be\n\x09 * serialized over the network and used to calculate the ping data between a client and a host.\n\x09 *\n\x09 * @return relay information blob stored as a string for relaying over the network.\n\x09 *         If an error occurred, the return is an empty string.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "Returns the P2P relay ping information for the current machine. This information can be\nserialized over the network and used to calculate the ping data between a client and a host.\n\n@return relay information blob stored as a string for relaying over the network.\n        If an error occurred, the return is an empty string." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetHostPingData", nullptr, nullptr, sizeof(SteamUtilities_eventGetHostPingData_Parms), Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetHostPingData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetHostPingData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics
	{
		struct SteamUtilities_eventGetPingFromHostData_Parms
		{
			FHostPingData data;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetPingFromHostData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventGetPingFromHostData_Parms, data), Z_Construct_UScriptStruct_FHostPingData, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
		{ "Comment", "/**\n\x09 * Calculates the ping of this client using the given host's ping data obtained from GetHostPingData.\n\x09 *\n\x09 * @param HostPingStr The relay information blob we got from the host. This information\n\x09 *                    should be directly serialized over the network and not tampered with.\n\x09 *\n\x09 * @return The ping value to the given host if it can be calculated, otherwise -1 on error.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "Calculates the ping of this client using the given host's ping data obtained from GetHostPingData.\n\n@param HostPingStr The relay information blob we got from the host. This information\n                   should be directly serialized over the network and not tampered with.\n\n@return The ping value to the given host if it can be calculated, otherwise -1 on error." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "GetPingFromHostData", nullptr, nullptr, sizeof(SteamUtilities_eventGetPingFromHostData_Parms), Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_GetPingFromHostData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_GetPingFromHostData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics
	{
		struct SteamUtilities_eventIsGameIDValid_Parms
		{
			FSteamGameID gameID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsGameIDValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsGameIDValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_gameID = { "gameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Parms, gameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::NewProp_gameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsGameIDValid", nullptr, nullptr, sizeof(SteamUtilities_eventIsGameIDValid_Parms), Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsGameIDValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics
	{
		struct SteamUtilities_eventIsGameIDValid_Exec_Parms
		{
			FSteamGameID gameID;
			ESteamCoreValid result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Exec_Parms, result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_gameID = { "gameID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsGameIDValid_Exec_Parms, gameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::NewProp_gameID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsGameIDValid_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventIsGameIDValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsLobby_Statics
	{
		struct SteamUtilities_eventIsLobby_Parms
		{
			FSteamID steamID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsLobby_Parms), &Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsLobby_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsLobby", nullptr, nullptr, sizeof(SteamUtilities_eventIsLobby_Parms), Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics
	{
		struct SteamUtilities_eventIsRecalculatingPing_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsRecalculatingPing_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsRecalculatingPing_Parms), &Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
		{ "Comment", "/**\n\x09* An informative member that allows us to check if we are recalculating our ping\n\x09* information over the Valve network. Data is additively modified during recalculation\n\x09* such that we do not need to block on this function returning false before using\n\x09* ping data.\n\x09*\n\x09* @return true if we're recalculating our ping within the Valve relay network.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "An informative member that allows us to check if we are recalculating our ping\ninformation over the Valve network. Data is additively modified during recalculation\nsuch that we do not need to block on this function returning false before using\nping data.\n\n@return true if we're recalculating our ping within the Valve relay network." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsRecalculatingPing", nullptr, nullptr, sizeof(SteamUtilities_eventIsRecalculatingPing_Parms), Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics
	{
		struct SteamUtilities_eventIsSteamAvailable_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsSteamAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsSteamAvailable_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamAvailable", nullptr, nullptr, sizeof(SteamUtilities_eventIsSteamAvailable_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics
	{
		struct SteamUtilities_eventIsSteamIDValid_Exec_Parms
		{
			FSteamID steamID;
			ESteamCoreValid result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamIDValid_Exec_Parms, result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamIDValid_Exec_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamIDValid_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventIsSteamIDValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics
	{
		struct SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms
		{
			FSteamInventoryUpdateHandle handle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamInventoryUpdateHandleValid", nullptr, nullptr, sizeof(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics
	{
		struct SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms
		{
			FSteamInventoryUpdateHandle handle;
			ESteamCoreValid result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms, result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamInventoryUpdateHandleValid_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventIsSteamInventoryUpdateHandleValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics
	{
		struct SteamUtilities_eventIsSteamTicketHandleValid_Parms
		{
			FSteamTicketHandle handle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsSteamTicketHandleValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsSteamTicketHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Parms, handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamTicketHandleValid", nullptr, nullptr, sizeof(SteamUtilities_eventIsSteamTicketHandleValid_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics
	{
		struct SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms
		{
			FSteamTicketHandle handle;
			ESteamCoreValid result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms, result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms, handle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsSteamTicketHandleValid_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventIsSteamTicketHandleValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics
	{
		struct SteamUtilities_eventIsUGCHandleValid_Parms
		{
			FSteamUGCHandle handle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsUGCHandleValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsUGCHandleValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Parms, handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUGCHandleValid", nullptr, nullptr, sizeof(SteamUtilities_eventIsUGCHandleValid_Parms), Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics
	{
		struct SteamUtilities_eventIsUGCHandleValid_Exec_Parms
		{
			FSteamUGCHandle handle;
			ESteamCoreValid result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Exec_Parms, result), Z_Construct_UEnum_SteamCore_ESteamCoreValid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsUGCHandleValid_Exec_Parms, handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "DisplayName", "Is Valid (Exec)" },
		{ "ExpandEnumAsExecs", "result" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUGCHandleValid_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventIsUGCHandleValid_Exec_Parms), Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics
	{
		struct SteamUtilities_eventIsUsingP2PRelays_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsUsingP2PRelays_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsUsingP2PRelays_Parms), &Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities|Ping" },
		{ "Comment", "/**\n\x09 * Returns if this application is set up to use the Steam P2P Relay Network\n\x09 * for communication.\n\x09 *\n\x09 * Uses OnlineSubsystemSteam.bAllowP2PPacketRelay\n\x09 *\n\x09 * @return true if relays are enabled for P2P connections.\n\x09 */" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "Returns if this application is set up to use the Steam P2P Relay Network\nfor communication.\n\nUses OnlineSubsystemSteam.bAllowP2PPacketRelay\n\n@return true if relays are enabled for P2P connections." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsUsingP2PRelays", nullptr, nullptr, sizeof(SteamUtilities_eventIsUsingP2PRelays_Parms), Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_IsValid_Statics
	{
		struct SteamUtilities_eventIsValid_Parms
		{
			FSteamID steamID;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventIsValid_Parms), &Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventIsValid_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_IsValid_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Is Valid\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Is Valid\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "IsValid", nullptr, nullptr, sizeof(SteamUtilities_eventIsValid_Parms), Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics
	{
		struct SteamUtilities_eventListenForSteamMessages_Parms
		{
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventListenForSteamMessages_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnSteamMessage__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "ListenForSteamMessages", nullptr, nullptr, sizeof(SteamUtilities_eventListenForSteamMessages_Parms), Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics
	{
		struct SteamUtilities_eventMakeInventoryUpdateHandle_Parms
		{
			FString value;
			FSteamInventoryUpdateHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeInventoryUpdateHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeInventoryUpdateHandle_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeInventoryUpdateHandle", nullptr, nullptr, sizeof(SteamUtilities_eventMakeInventoryUpdateHandle_Parms), Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics
	{
		struct SteamUtilities_eventMakePublishedFileID_Parms
		{
			FString value;
			FPublishedFileID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakePublishedFileID_Parms, ReturnValue), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakePublishedFileID_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakePublishedFileID", nullptr, nullptr, sizeof(SteamUtilities_eventMakePublishedFileID_Parms), Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakePublishedFileID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakePublishedFileID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics
	{
		struct SteamUtilities_eventMakeSteamGameID_Parms
		{
			FString value;
			FSteamGameID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamGameID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamGameID_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSteamGameID", nullptr, nullptr, sizeof(SteamUtilities_eventMakeSteamGameID_Parms), Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeSteamGameID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSteamGameID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics
	{
		struct SteamUtilities_eventMakeSteamID_Parms
		{
			FString value;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeSteamID_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Native Make Functions\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Native Make Functions\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeSteamID", nullptr, nullptr, sizeof(SteamUtilities_eventMakeSteamID_Parms), Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics
	{
		struct SteamUtilities_eventMakeTicketHandle_Parms
		{
			FString value;
			FSteamTicketHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeTicketHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeTicketHandle_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeTicketHandle", nullptr, nullptr, sizeof(SteamUtilities_eventMakeTicketHandle_Parms), Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeTicketHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeTicketHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics
	{
		struct SteamUtilities_eventMakeUGCHandle_Parms
		{
			FString value;
			FSteamUGCHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeUGCHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventMakeUGCHandle_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
		{ "NativeMakeFunc", "" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "MakeUGCHandle", nullptr, nullptr, sizeof(SteamUtilities_eventMakeUGCHandle_Parms), Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_MakeUGCHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_MakeUGCHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_NotEqual_Statics
	{
		struct SteamUtilities_eventNotEqual_Parms
		{
			FSteamID a;
			FSteamID b;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventNotEqual_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventNotEqual_Parms), &Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventNotEqual_Parms, b), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventNotEqual_Parms, a), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "!=" },
		{ "Keywords", "not equal != not identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "NotEqual", nullptr, nullptr, sizeof(SteamUtilities_eventNotEqual_Parms), Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_NotEqual()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_NotEqual_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics
	{
		struct SteamUtilities_eventPublishedFileID_Equals_Parms
		{
			FPublishedFileID a;
			FPublishedFileID b;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventPublishedFileID_Equals_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventPublishedFileID_Equals_Parms), &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Parms, b), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Parms, a), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "==" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_Equals", nullptr, nullptr, sizeof(SteamUtilities_eventPublishedFileID_Equals_Parms), Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics
	{
		struct SteamUtilities_eventPublishedFileID_Equals_Exec_Parms
		{
			FPublishedFileID a;
			FPublishedFileID b;
			ESteamCoreIdentical result;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_result_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, result), Z_Construct_UEnum_SteamCore_ESteamCoreIdentical, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, b), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms, a), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "ExpandEnumAsExecs", "result" },
		{ "Keywords", "equal == identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_Equals_Exec", nullptr, nullptr, sizeof(SteamUtilities_eventPublishedFileID_Equals_Exec_Parms), Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics
	{
		struct SteamUtilities_eventPublishedFileID_NotEquals_Parms
		{
			FPublishedFileID a;
			FPublishedFileID b;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_b;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_a;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SteamUtilities_eventPublishedFileID_NotEquals_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SteamUtilities_eventPublishedFileID_NotEquals_Parms), &Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_b = { "b", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_NotEquals_Parms, b), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_a = { "a", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SteamUtilities_eventPublishedFileID_NotEquals_Parms, a), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_b,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::NewProp_a,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Utilities" },
		{ "CompactNodeTitle", "!=" },
		{ "Keywords", "not equal != not identical" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamUtilities, nullptr, "PublishedFileID_NotEquals", nullptr, nullptr, sizeof(SteamUtilities_eventPublishedFileID_NotEquals_Parms), Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USteamUtilities_NoRegister()
	{
		return USteamUtilities::StaticClass();
	}
	struct Z_Construct_UClass_USteamUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamUtilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamUtilities_BreakInventoryUpdateHandle, "BreakInventoryUpdateHandle" }, // 3127966361
		{ &Z_Construct_UFunction_USteamUtilities_BreakPublishedFileID, "BreakPublishedFileID" }, // 1379384614
		{ &Z_Construct_UFunction_USteamUtilities_BreakSteamGameID, "BreakSteamGameID" }, // 2986081969
		{ &Z_Construct_UFunction_USteamUtilities_BreakSteamID, "BreakSteamID" }, // 3605777914
		{ &Z_Construct_UFunction_USteamUtilities_BreakTicketHandle, "BreakTicketHandle" }, // 648285823
		{ &Z_Construct_UFunction_USteamUtilities_BreakUGCHandle, "BreakUGCHandle" }, // 467559754
		{ &Z_Construct_UFunction_USteamUtilities_ConstructServerFilter, "ConstructServerFilter" }, // 3325689197
		{ &Z_Construct_UFunction_USteamUtilities_Equal, "Equal" }, // 2718252691
		{ &Z_Construct_UFunction_USteamUtilities_Equal_Exec, "Equal_Exec" }, // 4108238422
		{ &Z_Construct_UFunction_USteamUtilities_GetAccountType, "GetAccountType" }, // 466278370
		{ &Z_Construct_UFunction_USteamUtilities_GetHostPingData, "GetHostPingData" }, // 327001535
		{ &Z_Construct_UFunction_USteamUtilities_GetPingFromHostData, "GetPingFromHostData" }, // 2643530964
		{ &Z_Construct_UFunction_USteamUtilities_IsGameIDValid, "IsGameIDValid" }, // 608824801
		{ &Z_Construct_UFunction_USteamUtilities_IsGameIDValid_Exec, "IsGameIDValid_Exec" }, // 3459217757
		{ &Z_Construct_UFunction_USteamUtilities_IsLobby, "IsLobby" }, // 1398094784
		{ &Z_Construct_UFunction_USteamUtilities_IsRecalculatingPing, "IsRecalculatingPing" }, // 3930232939
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamAvailable, "IsSteamAvailable" }, // 530770108
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamIDValid_Exec, "IsSteamIDValid_Exec" }, // 2078073223
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid, "IsSteamInventoryUpdateHandleValid" }, // 2753224151
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamInventoryUpdateHandleValid_Exec, "IsSteamInventoryUpdateHandleValid_Exec" }, // 1747105698
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid, "IsSteamTicketHandleValid" }, // 2440648809
		{ &Z_Construct_UFunction_USteamUtilities_IsSteamTicketHandleValid_Exec, "IsSteamTicketHandleValid_Exec" }, // 1549152249
		{ &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid, "IsUGCHandleValid" }, // 1505063752
		{ &Z_Construct_UFunction_USteamUtilities_IsUGCHandleValid_Exec, "IsUGCHandleValid_Exec" }, // 558117994
		{ &Z_Construct_UFunction_USteamUtilities_IsUsingP2PRelays, "IsUsingP2PRelays" }, // 2982015582
		{ &Z_Construct_UFunction_USteamUtilities_IsValid, "IsValid" }, // 1233165259
		{ &Z_Construct_UFunction_USteamUtilities_ListenForSteamMessages, "ListenForSteamMessages" }, // 40372638
		{ &Z_Construct_UFunction_USteamUtilities_MakeInventoryUpdateHandle, "MakeInventoryUpdateHandle" }, // 3039281474
		{ &Z_Construct_UFunction_USteamUtilities_MakePublishedFileID, "MakePublishedFileID" }, // 70409061
		{ &Z_Construct_UFunction_USteamUtilities_MakeSteamGameID, "MakeSteamGameID" }, // 2852246890
		{ &Z_Construct_UFunction_USteamUtilities_MakeSteamID, "MakeSteamID" }, // 1191769333
		{ &Z_Construct_UFunction_USteamUtilities_MakeTicketHandle, "MakeTicketHandle" }, // 849768275
		{ &Z_Construct_UFunction_USteamUtilities_MakeUGCHandle, "MakeUGCHandle" }, // 1553048245
		{ &Z_Construct_UFunction_USteamUtilities_NotEqual, "NotEqual" }, // 2578648120
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals, "PublishedFileID_Equals" }, // 598443240
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_Equals_Exec, "PublishedFileID_Equals_Exec" }, // 2406252256
		{ &Z_Construct_UFunction_USteamUtilities_PublishedFileID_NotEquals, "PublishedFileID_NotEquals" }, // 630771150
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SteamCore/SteamUtilities.h" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USteamUtilities_Statics::ClassParams = {
		&USteamUtilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_USteamUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USteamUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USteamUtilities, 2246301349);
	template<> STEAMCORE_API UClass* StaticClass<USteamUtilities>()
	{
		return USteamUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USteamUtilities(Z_Construct_UClass_USteamUtilities, &USteamUtilities::StaticClass, TEXT("/Script/SteamCore"), TEXT("USteamUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
