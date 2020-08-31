// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GameServer/GameServerTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameServerTypes() {}
// Cross Module References
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSClientDeny();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSClientApprove();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FValidateAuthTicketResponse();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSClientGroupStatus();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FGSPolicyResponse();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAssociateWithClanResult();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamDenyReason();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGSClientDeny_Parms
		{
			FGSClientDeny data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGSClientDeny_Parms, data), Z_Construct_UScriptStruct_FGSClientDeny, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSClientDeny__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnGSClientDeny_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGSClientApprove_Parms
		{
			FGSClientApprove data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGSClientApprove_Parms, data), Z_Construct_UScriptStruct_FGSClientApprove, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSClientApprove__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnGSClientApprove_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms, data), Z_Construct_UScriptStruct_FValidateAuthTicketResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSValidateAuthTicketResponse__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGSClientGroupStatus_Parms
		{
			FGSClientGroupStatus data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGSClientGroupStatus_Parms, data), Z_Construct_UScriptStruct_FGSClientGroupStatus, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSClientGroupStatus__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnGSClientGroupStatus_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnGSPolicyResponse_Parms
		{
			FGSPolicyResponse data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnGSPolicyResponse_Parms, data), Z_Construct_UScriptStruct_FGSPolicyResponse, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnGSPolicyResponse__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnGSPolicyResponse_Parms), Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms
		{
			FComputeNewPlayerCompatibilityResult data;
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
	void Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms, data), Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnComputeNewPlayerCompatibility__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms), Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnAssociateWithClan_Parms
		{
			FAssociateWithClanResult data;
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
	void Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnAssociateWithClan_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnAssociateWithClan_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnAssociateWithClan_Parms, data), Z_Construct_UScriptStruct_FAssociateWithClanResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnAssociateWithClan__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnAssociateWithClan_Parms), Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FGSClientDeny::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGSClientDeny_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSClientDeny, Z_Construct_UPackage__Script_SteamCore(), TEXT("GSClientDeny"), sizeof(FGSClientDeny), Get_Z_Construct_UScriptStruct_FGSClientDeny_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSClientDeny>()
{
	return FGSClientDeny::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGSClientDeny(FGSClientDeny::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GSClientDeny"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGSClientDeny
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGSClientDeny()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GSClientDeny")),new UScriptStruct::TCppStructOps<FGSClientDeny>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGSClientDeny;
	struct Z_Construct_UScriptStruct_FGSClientDeny_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OptionalText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OptionalText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DenyReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DenyReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DenyReason_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientDeny_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSClientDeny>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText = { "OptionalText", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSClientDeny, OptionalText), METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason = { "DenyReason", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSClientDeny, DenyReason), Z_Construct_UEnum_SteamCore_ESteamDenyReason, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSClientDeny, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSClientDeny_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_OptionalText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_DenyReason_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientDeny_Statics::NewProp_SteamID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSClientDeny_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSClientDeny",
		sizeof(FGSClientDeny),
		alignof(FGSClientDeny),
		Z_Construct_UScriptStruct_FGSClientDeny_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientDeny_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientDeny_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSClientDeny()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGSClientDeny_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GSClientDeny"), sizeof(FGSClientDeny), Get_Z_Construct_UScriptStruct_FGSClientDeny_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGSClientDeny_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGSClientDeny_Hash() { return 1800117002U; }
class UScriptStruct* FGSClientApprove::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGSClientApprove_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSClientApprove, Z_Construct_UPackage__Script_SteamCore(), TEXT("GSClientApprove"), sizeof(FGSClientApprove), Get_Z_Construct_UScriptStruct_FGSClientApprove_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSClientApprove>()
{
	return FGSClientApprove::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGSClientApprove(FGSClientApprove::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GSClientApprove"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGSClientApprove
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGSClientApprove()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GSClientApprove")),new UScriptStruct::TCppStructOps<FGSClientApprove>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGSClientApprove;
	struct Z_Construct_UScriptStruct_FGSClientApprove_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerSteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnerSteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientApprove_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSClientApprove>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID = { "OwnerSteamID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSClientApprove, OwnerSteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSClientApprove, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSClientApprove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_OwnerSteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientApprove_Statics::NewProp_SteamID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSClientApprove_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSClientApprove",
		sizeof(FGSClientApprove),
		alignof(FGSClientApprove),
		Z_Construct_UScriptStruct_FGSClientApprove_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientApprove_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientApprove_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSClientApprove()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGSClientApprove_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GSClientApprove"), sizeof(FGSClientApprove), Get_Z_Construct_UScriptStruct_FGSClientApprove_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGSClientApprove_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGSClientApprove_Hash() { return 3015612885U; }
class UScriptStruct* FComputeNewPlayerCompatibilityResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("ComputeNewPlayerCompatibilityResult"), sizeof(FComputeNewPlayerCompatibilityResult), Get_Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FComputeNewPlayerCompatibilityResult>()
{
	return FComputeNewPlayerCompatibilityResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FComputeNewPlayerCompatibilityResult(FComputeNewPlayerCompatibilityResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("ComputeNewPlayerCompatibilityResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFComputeNewPlayerCompatibilityResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFComputeNewPlayerCompatibilityResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ComputeNewPlayerCompatibilityResult")),new UScriptStruct::TCppStructOps<FComputeNewPlayerCompatibilityResult>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFComputeNewPlayerCompatibilityResult;
	struct Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDCandidate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDCandidate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClanPlayersThatDontLikeCandidate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ClanPlayersThatDontLikeCandidate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersThatCandidateDoesntLike_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayersThatCandidateDoesntLike;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayersThatDontLikeCandidate_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PlayersThatDontLikeCandidate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComputeNewPlayerCompatibilityResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate = { "SteamIDCandidate", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, SteamIDCandidate), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate = { "ClanPlayersThatDontLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, ClanPlayersThatDontLikeCandidate), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike = { "PlayersThatCandidateDoesntLike", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, PlayersThatCandidateDoesntLike), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate = { "PlayersThatDontLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, PlayersThatDontLikeCandidate), METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FComputeNewPlayerCompatibilityResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_SteamIDCandidate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_ClanPlayersThatDontLikeCandidate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatCandidateDoesntLike,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_PlayersThatDontLikeCandidate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::NewProp_Result_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"ComputeNewPlayerCompatibilityResult",
		sizeof(FComputeNewPlayerCompatibilityResult),
		alignof(FComputeNewPlayerCompatibilityResult),
		Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ComputeNewPlayerCompatibilityResult"), sizeof(FComputeNewPlayerCompatibilityResult), Get_Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Hash() { return 2052534195U; }
class UScriptStruct* FAssociateWithClanResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FAssociateWithClanResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssociateWithClanResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("AssociateWithClanResult"), sizeof(FAssociateWithClanResult), Get_Z_Construct_UScriptStruct_FAssociateWithClanResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FAssociateWithClanResult>()
{
	return FAssociateWithClanResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssociateWithClanResult(FAssociateWithClanResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("AssociateWithClanResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFAssociateWithClanResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFAssociateWithClanResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssociateWithClanResult")),new UScriptStruct::TCppStructOps<FAssociateWithClanResult>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFAssociateWithClanResult;
	struct Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssociateWithClanResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssociateWithClanResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::NewProp_Result_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"AssociateWithClanResult",
		sizeof(FAssociateWithClanResult),
		alignof(FAssociateWithClanResult),
		Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssociateWithClanResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssociateWithClanResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssociateWithClanResult"), sizeof(FAssociateWithClanResult), Get_Z_Construct_UScriptStruct_FAssociateWithClanResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssociateWithClanResult_Hash() { return 4257572887U; }
class UScriptStruct* FGSClientGroupStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGSClientGroupStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSClientGroupStatus, Z_Construct_UPackage__Script_SteamCore(), TEXT("GSClientGroupStatus"), sizeof(FGSClientGroupStatus), Get_Z_Construct_UScriptStruct_FGSClientGroupStatus_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSClientGroupStatus>()
{
	return FGSClientGroupStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGSClientGroupStatus(FGSClientGroupStatus::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GSClientGroupStatus"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGSClientGroupStatus
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGSClientGroupStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GSClientGroupStatus")),new UScriptStruct::TCppStructOps<FGSClientGroupStatus>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGSClientGroupStatus;
	struct Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOfficer_MetaData[];
#endif
		static void NewProp_bOfficer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOfficer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMember_MetaData[];
#endif
		static void NewProp_bMember_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMember;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamIDUser_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSClientGroupStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_SetBit(void* Obj)
	{
		((FGSClientGroupStatus*)Obj)->bOfficer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer = { "bOfficer", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSClientGroupStatus), &Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_SetBit(void* Obj)
	{
		((FGSClientGroupStatus*)Obj)->bMember = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember = { "bMember", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSClientGroupStatus), &Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup = { "SteamIDGroup", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSClientGroupStatus, SteamIDGroup), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser = { "SteamIDUser", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGSClientGroupStatus, SteamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bOfficer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_bMember,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::NewProp_SteamIDUser,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSClientGroupStatus",
		sizeof(FGSClientGroupStatus),
		alignof(FGSClientGroupStatus),
		Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSClientGroupStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGSClientGroupStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GSClientGroupStatus"), sizeof(FGSClientGroupStatus), Get_Z_Construct_UScriptStruct_FGSClientGroupStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGSClientGroupStatus_Hash() { return 3152132677U; }
class UScriptStruct* FGSPolicyResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FGSPolicyResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGSPolicyResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("GSPolicyResponse"), sizeof(FGSPolicyResponse), Get_Z_Construct_UScriptStruct_FGSPolicyResponse_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FGSPolicyResponse>()
{
	return FGSPolicyResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGSPolicyResponse(FGSPolicyResponse::StaticStruct, TEXT("/Script/SteamCore"), TEXT("GSPolicyResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFGSPolicyResponse
{
	FScriptStruct_SteamCore_StaticRegisterNativesFGSPolicyResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GSPolicyResponse")),new UScriptStruct::TCppStructOps<FGSPolicyResponse>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFGSPolicyResponse;
	struct Z_Construct_UScriptStruct_FGSPolicyResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSecure_MetaData[];
#endif
		static void NewProp_bSecure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSecure;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGSPolicyResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/GameServer/GameServerTypes.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure_SetBit(void* Obj)
	{
		((FGSPolicyResponse*)Obj)->bSecure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure = { "bSecure", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FGSPolicyResponse), &Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::NewProp_bSecure,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"GSPolicyResponse",
		sizeof(FGSPolicyResponse),
		alignof(FGSPolicyResponse),
		Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGSPolicyResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGSPolicyResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GSPolicyResponse"), sizeof(FGSPolicyResponse), Get_Z_Construct_UScriptStruct_FGSPolicyResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGSPolicyResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGSPolicyResponse_Hash() { return 199772583U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
