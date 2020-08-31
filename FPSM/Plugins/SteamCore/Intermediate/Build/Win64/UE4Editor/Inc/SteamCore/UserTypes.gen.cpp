// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/User/UserTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserTypes() {}
// Cross Module References
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FStoreAuthURLResponse();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FEncryptedAppTicketResponse();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FValidateAuthTicketResponse();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServersDisconnected();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServerConnectFailure();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamServersConnected();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FLicensesUpdated();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FIPCFailure();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGameWebCallback();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FClientGameServerDeny();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFailureType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamVoiceResult();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamDenyReason();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnStoreAuthURLResponse_Parms
		{
			FStoreAuthURLResponse data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
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
	void Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnStoreAuthURLResponse_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnStoreAuthURLResponse_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnStoreAuthURLResponse_Parms, data), Z_Construct_UScriptStruct_FStoreAuthURLResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnStoreAuthURLResponse__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnStoreAuthURLResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms
		{
			FEncryptedAppTicketResponse data;
			bool bWasSuccessful;
		};
		static void NewProp_bWasSuccessful_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
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
	void Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms, data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestEncryptedAppTicket__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRequestEncryptedAppTicketResponse_Parms
		{
			FEncryptedAppTicketResponse data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRequestEncryptedAppTicketResponse_Parms, data), Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRequestEncryptedAppTicketResponse__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnRequestEncryptedAppTicketResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnValidateAuthTicketResponse_Parms
		{
			FValidateAuthTicketResponse data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnValidateAuthTicketResponse_Parms, data), Z_Construct_UScriptStruct_FValidateAuthTicketResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnValidateAuthTicketResponse__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnValidateAuthTicketResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamServersDisconnected_Parms
		{
			FSteamServersDisconnected data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamServersDisconnected_Parms, data), Z_Construct_UScriptStruct_FSteamServersDisconnected, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamServersDisconnected__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnSteamServersDisconnected_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamServerConnectFailure_Parms
		{
			FSteamServerConnectFailure data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamServerConnectFailure_Parms, data), Z_Construct_UScriptStruct_FSteamServerConnectFailure, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamServerConnectFailure__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnSteamServerConnectFailure_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnSteamServersConnected_Parms
		{
			FSteamServersConnected data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnSteamServersConnected_Parms, data), Z_Construct_UScriptStruct_FSteamServersConnected, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnSteamServersConnected__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnSteamServersConnected_Parms), Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnMicroTxnAuthorizationResponse_Parms
		{
			FMicroTxnAuthorizationResponse data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnMicroTxnAuthorizationResponse_Parms, data), Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnMicroTxnAuthorizationResponse__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnMicroTxnAuthorizationResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnLicensesUpdated_Parms
		{
			FLicensesUpdated data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnLicensesUpdated_Parms, data), Z_Construct_UScriptStruct_FLicensesUpdated, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnLicensesUpdated__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnLicensesUpdated_Parms), Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnIPCFailure_Parms
		{
			FIPCFailure data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnIPCFailure_Parms, data), Z_Construct_UScriptStruct_FIPCFailure, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnIPCFailure__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnIPCFailure_Parms), Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGetAuthSessionTicketResponse_Parms
		{
			FGetAuthSessionTicketResponse data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGetAuthSessionTicketResponse_Parms, data), Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGetAuthSessionTicketResponse__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnGetAuthSessionTicketResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGameWebCallback_Parms
		{
			FGameWebCallback data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGameWebCallback_Parms, data), Z_Construct_UScriptStruct_FGameWebCallback, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGameWebCallback__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnGameWebCallback_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnClientGameServerDeny_Parms
		{
			FClientGameServerDeny data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnClientGameServerDeny_Parms, data), Z_Construct_UScriptStruct_FClientGameServerDeny, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnClientGameServerDeny__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnClientGameServerDeny_Parms), Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ESteamFailureType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamFailureType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamFailureType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamFailureType>()
	{
		return ESteamFailureType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamFailureType(ESteamFailureType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamFailureType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamFailureType_Hash() { return 3613990823U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamFailureType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamFailureType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamFailureType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamFailureType::FlushedCallbackQueue", (int64)ESteamFailureType::FlushedCallbackQueue },
				{ "ESteamFailureType::PipeFail", (int64)ESteamFailureType::PipeFail },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "FlushedCallbackQueue.Name", "ESteamFailureType::FlushedCallbackQueue" },
				{ "ModuleRelativePath", "Public/User/UserTypes.h" },
				{ "PipeFail.Name", "ESteamFailureType::PipeFail" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamFailureType",
				"ESteamFailureType",
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
	static UEnum* ESteamVoiceResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamVoiceResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamVoiceResult"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamVoiceResult>()
	{
		return ESteamVoiceResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamVoiceResult(ESteamVoiceResult_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamVoiceResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamVoiceResult_Hash() { return 1667914714U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamVoiceResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamVoiceResult"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamVoiceResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamVoiceResult::OK", (int64)ESteamVoiceResult::OK },
				{ "ESteamVoiceResult::NotInitialized", (int64)ESteamVoiceResult::NotInitialized },
				{ "ESteamVoiceResult::NotRecording", (int64)ESteamVoiceResult::NotRecording },
				{ "ESteamVoiceResult::NoData", (int64)ESteamVoiceResult::NoData },
				{ "ESteamVoiceResult::BufferTooSmall", (int64)ESteamVoiceResult::BufferTooSmall },
				{ "ESteamVoiceResult::DataCorrupted", (int64)ESteamVoiceResult::DataCorrupted },
				{ "ESteamVoiceResult::Restricted", (int64)ESteamVoiceResult::Restricted },
				{ "ESteamVoiceResult::UnsupportedCodec", (int64)ESteamVoiceResult::UnsupportedCodec },
				{ "ESteamVoiceResult::ReceiverOutOfDate", (int64)ESteamVoiceResult::ReceiverOutOfDate },
				{ "ESteamVoiceResult::ReceiverDidNotAnswer", (int64)ESteamVoiceResult::ReceiverDidNotAnswer },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "BufferTooSmall.Name", "ESteamVoiceResult::BufferTooSmall" },
				{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
				{ "DataCorrupted.Name", "ESteamVoiceResult::DataCorrupted" },
				{ "ModuleRelativePath", "Public/User/UserTypes.h" },
				{ "NoData.Name", "ESteamVoiceResult::NoData" },
				{ "NotInitialized.Name", "ESteamVoiceResult::NotInitialized" },
				{ "NotRecording.Name", "ESteamVoiceResult::NotRecording" },
				{ "OK.Name", "ESteamVoiceResult::OK" },
				{ "ReceiverDidNotAnswer.Name", "ESteamVoiceResult::ReceiverDidNotAnswer" },
				{ "ReceiverOutOfDate.Name", "ESteamVoiceResult::ReceiverOutOfDate" },
				{ "Restricted.Name", "ESteamVoiceResult::Restricted" },
				{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
				{ "UnsupportedCodec.Name", "ESteamVoiceResult::UnsupportedCodec" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamVoiceResult",
				"ESteamVoiceResult",
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
class UScriptStruct* FStoreAuthURLResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FStoreAuthURLResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoreAuthURLResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("StoreAuthURLResponse"), sizeof(FStoreAuthURLResponse), Get_Z_Construct_UScriptStruct_FStoreAuthURLResponse_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FStoreAuthURLResponse>()
{
	return FStoreAuthURLResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStoreAuthURLResponse(FStoreAuthURLResponse::StaticStruct, TEXT("/Script/SteamCore"), TEXT("StoreAuthURLResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFStoreAuthURLResponse
{
	FScriptStruct_SteamCore_StaticRegisterNativesFStoreAuthURLResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StoreAuthURLResponse")),new UScriptStruct::TCppStructOps<FStoreAuthURLResponse>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFStoreAuthURLResponse;
	struct Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoreAuthURLResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreAuthURLResponse, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::NewProp_URL,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"StoreAuthURLResponse",
		sizeof(FStoreAuthURLResponse),
		alignof(FStoreAuthURLResponse),
		Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoreAuthURLResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStoreAuthURLResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StoreAuthURLResponse"), sizeof(FStoreAuthURLResponse), Get_Z_Construct_UScriptStruct_FStoreAuthURLResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStoreAuthURLResponse_Hash() { return 2868987007U; }
class UScriptStruct* FEncryptedAppTicketResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("EncryptedAppTicketResponse"), sizeof(FEncryptedAppTicketResponse), Get_Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FEncryptedAppTicketResponse>()
{
	return FEncryptedAppTicketResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEncryptedAppTicketResponse(FEncryptedAppTicketResponse::StaticStruct, TEXT("/Script/SteamCore"), TEXT("EncryptedAppTicketResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFEncryptedAppTicketResponse
{
	FScriptStruct_SteamCore_StaticRegisterNativesFEncryptedAppTicketResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EncryptedAppTicketResponse")),new UScriptStruct::TCppStructOps<FEncryptedAppTicketResponse>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFEncryptedAppTicketResponse;
	struct Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEncryptedAppTicketResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEncryptedAppTicketResponse, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::NewProp_Result_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"EncryptedAppTicketResponse",
		sizeof(FEncryptedAppTicketResponse),
		alignof(FEncryptedAppTicketResponse),
		Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEncryptedAppTicketResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EncryptedAppTicketResponse"), sizeof(FEncryptedAppTicketResponse), Get_Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Hash() { return 2713662348U; }
class UScriptStruct* FSteamServersDisconnected::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamServersDisconnected_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServersDisconnected, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamServersDisconnected"), sizeof(FSteamServersDisconnected), Get_Z_Construct_UScriptStruct_FSteamServersDisconnected_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamServersDisconnected>()
{
	return FSteamServersDisconnected::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamServersDisconnected(FSteamServersDisconnected::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamServersDisconnected"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamServersDisconnected
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamServersDisconnected()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamServersDisconnected")),new UScriptStruct::TCppStructOps<FSteamServersDisconnected>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamServersDisconnected;
	struct Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServersDisconnected>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamServersDisconnected, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::NewProp_Result_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamServersDisconnected",
		sizeof(FSteamServersDisconnected),
		alignof(FSteamServersDisconnected),
		Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamServersDisconnected()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamServersDisconnected_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamServersDisconnected"), sizeof(FSteamServersDisconnected), Get_Z_Construct_UScriptStruct_FSteamServersDisconnected_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamServersDisconnected_Hash() { return 1468971095U; }
class UScriptStruct* FSteamServerConnectFailure::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamServerConnectFailure_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServerConnectFailure, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamServerConnectFailure"), sizeof(FSteamServerConnectFailure), Get_Z_Construct_UScriptStruct_FSteamServerConnectFailure_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamServerConnectFailure>()
{
	return FSteamServerConnectFailure::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamServerConnectFailure(FSteamServerConnectFailure::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamServerConnectFailure"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamServerConnectFailure
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamServerConnectFailure()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamServerConnectFailure")),new UScriptStruct::TCppStructOps<FSteamServerConnectFailure>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamServerConnectFailure;
	struct Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStillRetrying_MetaData[];
#endif
		static void NewProp_bStillRetrying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStillRetrying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServerConnectFailure>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_SetBit(void* Obj)
	{
		((FSteamServerConnectFailure*)Obj)->bStillRetrying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying = { "bStillRetrying", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSteamServerConnectFailure), &Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSteamServerConnectFailure, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_bStillRetrying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::NewProp_Result_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamServerConnectFailure",
		sizeof(FSteamServerConnectFailure),
		alignof(FSteamServerConnectFailure),
		Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamServerConnectFailure()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamServerConnectFailure_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamServerConnectFailure"), sizeof(FSteamServerConnectFailure), Get_Z_Construct_UScriptStruct_FSteamServerConnectFailure_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamServerConnectFailure_Hash() { return 3545879311U; }
class UScriptStruct* FSteamServersConnected::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamServersConnected_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamServersConnected, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamServersConnected"), sizeof(FSteamServersConnected), Get_Z_Construct_UScriptStruct_FSteamServersConnected_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamServersConnected>()
{
	return FSteamServersConnected::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamServersConnected(FSteamServersConnected::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamServersConnected"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamServersConnected
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamServersConnected()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamServersConnected")),new UScriptStruct::TCppStructOps<FSteamServersConnected>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamServersConnected;
	struct Z_Construct_UScriptStruct_FSteamServersConnected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamServersConnected_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamServersConnected_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamServersConnected>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamServersConnected_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamServersConnected",
		sizeof(FSteamServersConnected),
		alignof(FSteamServersConnected),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamServersConnected_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamServersConnected_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamServersConnected()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamServersConnected_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamServersConnected"), sizeof(FSteamServersConnected), Get_Z_Construct_UScriptStruct_FSteamServersConnected_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamServersConnected_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamServersConnected_Hash() { return 2160719249U; }
class UScriptStruct* FMicroTxnAuthorizationResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("MicroTxnAuthorizationResponse"), sizeof(FMicroTxnAuthorizationResponse), Get_Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FMicroTxnAuthorizationResponse>()
{
	return FMicroTxnAuthorizationResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMicroTxnAuthorizationResponse(FMicroTxnAuthorizationResponse::StaticStruct, TEXT("/Script/SteamCore"), TEXT("MicroTxnAuthorizationResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFMicroTxnAuthorizationResponse
{
	FScriptStruct_SteamCore_StaticRegisterNativesFMicroTxnAuthorizationResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MicroTxnAuthorizationResponse")),new UScriptStruct::TCppStructOps<FMicroTxnAuthorizationResponse>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFMicroTxnAuthorizationResponse;
	struct Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAuthorized_MetaData[];
#endif
		static void NewProp_bAuthorized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAuthorized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OrderID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMicroTxnAuthorizationResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_SetBit(void* Obj)
	{
		((FMicroTxnAuthorizationResponse*)Obj)->bAuthorized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized = { "bAuthorized", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMicroTxnAuthorizationResponse), &Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderID_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderID = { "OrderID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMicroTxnAuthorizationResponse, OrderID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMicroTxnAuthorizationResponse, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_bAuthorized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_OrderID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::NewProp_AppID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"MicroTxnAuthorizationResponse",
		sizeof(FMicroTxnAuthorizationResponse),
		alignof(FMicroTxnAuthorizationResponse),
		Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MicroTxnAuthorizationResponse"), sizeof(FMicroTxnAuthorizationResponse), Get_Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Hash() { return 3954840633U; }
class UScriptStruct* FLicensesUpdated::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FLicensesUpdated_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLicensesUpdated, Z_Construct_UPackage__Script_SteamCore(), TEXT("LicensesUpdated"), sizeof(FLicensesUpdated), Get_Z_Construct_UScriptStruct_FLicensesUpdated_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FLicensesUpdated>()
{
	return FLicensesUpdated::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLicensesUpdated(FLicensesUpdated::StaticStruct, TEXT("/Script/SteamCore"), TEXT("LicensesUpdated"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFLicensesUpdated
{
	FScriptStruct_SteamCore_StaticRegisterNativesFLicensesUpdated()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LicensesUpdated")),new UScriptStruct::TCppStructOps<FLicensesUpdated>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFLicensesUpdated;
	struct Z_Construct_UScriptStruct_FLicensesUpdated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLicensesUpdated_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLicensesUpdated_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLicensesUpdated>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLicensesUpdated_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"LicensesUpdated",
		sizeof(FLicensesUpdated),
		alignof(FLicensesUpdated),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLicensesUpdated_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLicensesUpdated_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLicensesUpdated()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLicensesUpdated_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LicensesUpdated"), sizeof(FLicensesUpdated), Get_Z_Construct_UScriptStruct_FLicensesUpdated_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLicensesUpdated_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLicensesUpdated_Hash() { return 3308878810U; }
class UScriptStruct* FIPCFailure::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FIPCFailure_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FIPCFailure, Z_Construct_UPackage__Script_SteamCore(), TEXT("IPCFailure"), sizeof(FIPCFailure), Get_Z_Construct_UScriptStruct_FIPCFailure_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FIPCFailure>()
{
	return FIPCFailure::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FIPCFailure(FIPCFailure::StaticStruct, TEXT("/Script/SteamCore"), TEXT("IPCFailure"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFIPCFailure
{
	FScriptStruct_SteamCore_StaticRegisterNativesFIPCFailure()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("IPCFailure")),new UScriptStruct::TCppStructOps<FIPCFailure>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFIPCFailure;
	struct Z_Construct_UScriptStruct_FIPCFailure_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FailureType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FailureType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FailureType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIPCFailure_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FIPCFailure_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FIPCFailure>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FIPCFailure, FailureType), Z_Construct_UEnum_SteamCore_ESteamFailureType, METADATA_PARAMS(Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FIPCFailure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FIPCFailure_Statics::NewProp_FailureType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FIPCFailure_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"IPCFailure",
		sizeof(FIPCFailure),
		alignof(FIPCFailure),
		Z_Construct_UScriptStruct_FIPCFailure_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCFailure_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FIPCFailure_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FIPCFailure_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FIPCFailure()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FIPCFailure_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("IPCFailure"), sizeof(FIPCFailure), Get_Z_Construct_UScriptStruct_FIPCFailure_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FIPCFailure_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FIPCFailure_Hash() { return 2242697328U; }
class UScriptStruct* FGetAuthSessionTicketResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("GetAuthSessionTicketResponse"), sizeof(FGetAuthSessionTicketResponse), Get_Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGetAuthSessionTicketResponse>()
{
	return FGetAuthSessionTicketResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGetAuthSessionTicketResponse(FGetAuthSessionTicketResponse::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GetAuthSessionTicketResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGetAuthSessionTicketResponse
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGetAuthSessionTicketResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GetAuthSessionTicketResponse")),new UScriptStruct::TCppStructOps<FGetAuthSessionTicketResponse>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGetAuthSessionTicketResponse;
	struct Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthTicket_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AuthTicket;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGetAuthSessionTicketResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetAuthSessionTicketResponse, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket = { "AuthTicket", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGetAuthSessionTicketResponse, AuthTicket), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_Result_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::NewProp_AuthTicket,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GetAuthSessionTicketResponse",
		sizeof(FGetAuthSessionTicketResponse),
		alignof(FGetAuthSessionTicketResponse),
		Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GetAuthSessionTicketResponse"), sizeof(FGetAuthSessionTicketResponse), Get_Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Hash() { return 3590365942U; }
class UScriptStruct* FGameWebCallback::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGameWebCallback_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameWebCallback, Z_Construct_UPackage__Script_SteamCore(), TEXT("GameWebCallback"), sizeof(FGameWebCallback), Get_Z_Construct_UScriptStruct_FGameWebCallback_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGameWebCallback>()
{
	return FGameWebCallback::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameWebCallback(FGameWebCallback::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GameWebCallback"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGameWebCallback
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGameWebCallback()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameWebCallback")),new UScriptStruct::TCppStructOps<FGameWebCallback>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGameWebCallback;
	struct Z_Construct_UScriptStruct_FGameWebCallback_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameWebCallback_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameWebCallback>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewProp_URL_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameWebCallback, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameWebCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameWebCallback_Statics::NewProp_URL,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameWebCallback_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GameWebCallback",
		sizeof(FGameWebCallback),
		alignof(FGameWebCallback),
		Z_Construct_UScriptStruct_FGameWebCallback_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameWebCallback_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameWebCallback_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameWebCallback_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameWebCallback()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameWebCallback_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameWebCallback"), sizeof(FGameWebCallback), Get_Z_Construct_UScriptStruct_FGameWebCallback_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameWebCallback_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameWebCallback_Hash() { return 1388454124U; }
class UScriptStruct* FClientGameServerDeny::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FClientGameServerDeny_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientGameServerDeny, Z_Construct_UPackage__Script_SteamCore(), TEXT("ClientGameServerDeny"), sizeof(FClientGameServerDeny), Get_Z_Construct_UScriptStruct_FClientGameServerDeny_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FClientGameServerDeny>()
{
	return FClientGameServerDeny::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClientGameServerDeny(FClientGameServerDeny::StaticStruct, TEXT("/Script/SteamCore"), TEXT("ClientGameServerDeny"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFClientGameServerDeny
{
	FScriptStruct_SteamCore_StaticRegisterNativesFClientGameServerDeny()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClientGameServerDeny")),new UScriptStruct::TCppStructOps<FClientGameServerDeny>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFClientGameServerDeny;
	struct Z_Construct_UScriptStruct_FClientGameServerDeny_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Reason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Reason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSecure_MetaData[];
#endif
		static void NewProp_bSecure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerPort_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_GameServerPort;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerIP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_GameServerIP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientGameServerDeny>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGameServerDeny, Reason), Z_Construct_UEnum_SteamCore_ESteamDenyReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure_SetBit(void* Obj)
	{
		((FClientGameServerDeny*)Obj)->bSecure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure = { "bSecure", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClientGameServerDeny), &Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort = { "GameServerPort", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGameServerDeny, GameServerPort), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP = { "GameServerIP", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGameServerDeny, GameServerIP), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "User" },
		{ "ModuleRelativePath", "Public/User/UserTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClientGameServerDeny, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_Reason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_bSecure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_GameServerIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::NewProp_AppID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"ClientGameServerDeny",
		sizeof(FClientGameServerDeny),
		alignof(FClientGameServerDeny),
		Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientGameServerDeny()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClientGameServerDeny_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClientGameServerDeny"), sizeof(FClientGameServerDeny), Get_Z_Construct_UScriptStruct_FClientGameServerDeny_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClientGameServerDeny_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClientGameServerDeny_Hash() { return 3146182566U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
