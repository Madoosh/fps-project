// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/RemoteStorage/RemoteStorageTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteStorageTypes() {}
// Cross Module References
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileShareResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFileShareAsync_Parms
		{
			FRemoteStorageFileShareResult data;
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
	void Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnFileShareAsync_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnFileShareAsync_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFileShareAsync_Parms, data), Z_Construct_UScriptStruct_FRemoteStorageFileShareResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFileShareAsync__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnFileShareAsync_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFileReadAsync_Parms
		{
			FRemoteStorageFileReadAsyncComplete data;
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
	void Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnFileReadAsync_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnFileReadAsync_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFileReadAsync_Parms, data), Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFileReadAsync__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnFileReadAsync_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnFileWriteAsync_Parms
		{
			FRemoteStorageFileWriteAsyncComplete data;
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
	void Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
	{
		((_Script_SteamCore_eventOnFileWriteAsync_Parms*)Obj)->bWasSuccessful = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(_Script_SteamCore_eventOnFileWriteAsync_Parms), &Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnFileWriteAsync_Parms, data), Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_bWasSuccessful,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnFileWriteAsync__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnFileWriteAsync_Parms), Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRemoteStoragePublishedFileSubscribed_Parms
		{
			FRemoteStoragePublishedFileSubscribed data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRemoteStoragePublishedFileSubscribed_Parms, data), Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRemoteStoragePublishedFileSubscribed__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnRemoteStoragePublishedFileSubscribed_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRemoteStoragePublishedFileUnsubscribed_Parms
		{
			FRemoteStoragePublishedFileUnsubscribed data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRemoteStoragePublishedFileUnsubscribed_Parms, data), Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnRemoteStoragePublishedFileUnsubscribed_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRemoteStorageSubscribePublishedFileResult_Parms
		{
			FRemoteStorageSubscribePublishedFileResult data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRemoteStorageSubscribePublishedFileResult_Parms, data), Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRemoteStorageSubscribePublishedFileResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnRemoteStorageSubscribePublishedFileResult_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics
	{
		struct _Script_SteamCore_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms
		{
			FRemoteStorageUnsubscribePublishedFileResult data;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_SteamCore_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms, data), Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Delegate declarations\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Delegate declarations\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamCore, nullptr, "OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature", nullptr, nullptr, sizeof(_Script_SteamCore_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	static UEnum* ESteamRemoteStoragePlatform_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamRemoteStoragePlatform"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamRemoteStoragePlatform>()
	{
		return ESteamRemoteStoragePlatform_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamRemoteStoragePlatform(ESteamRemoteStoragePlatform_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamRemoteStoragePlatform"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform_Hash() { return 411884309U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamRemoteStoragePlatform"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamRemoteStoragePlatform::None", (int64)ESteamRemoteStoragePlatform::None },
				{ "ESteamRemoteStoragePlatform::Windows", (int64)ESteamRemoteStoragePlatform::Windows },
				{ "ESteamRemoteStoragePlatform::OSX", (int64)ESteamRemoteStoragePlatform::OSX },
				{ "ESteamRemoteStoragePlatform::PS3", (int64)ESteamRemoteStoragePlatform::PS3 },
				{ "ESteamRemoteStoragePlatform::Linux", (int64)ESteamRemoteStoragePlatform::Linux },
				{ "ESteamRemoteStoragePlatform::Reserved2", (int64)ESteamRemoteStoragePlatform::Reserved2 },
				{ "ESteamRemoteStoragePlatform::All", (int64)ESteamRemoteStoragePlatform::All },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ESteamRemoteStoragePlatform::All" },
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09""Enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
				{ "Linux.Name", "ESteamRemoteStoragePlatform::Linux" },
				{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
				{ "None.Name", "ESteamRemoteStoragePlatform::None" },
				{ "OSX.Name", "ESteamRemoteStoragePlatform::OSX" },
				{ "PS3.Name", "ESteamRemoteStoragePlatform::PS3" },
				{ "Reserved2.Name", "ESteamRemoteStoragePlatform::Reserved2" },
				{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
				{ "Windows.Name", "ESteamRemoteStoragePlatform::Windows" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamRemoteStoragePlatform",
				"ESteamRemoteStoragePlatform",
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
class UScriptStruct* FRemoteStoragePublishedFileSubscribed::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed, Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStoragePublishedFileSubscribed"), sizeof(FRemoteStoragePublishedFileSubscribed), Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStoragePublishedFileSubscribed>()
{
	return FRemoteStoragePublishedFileSubscribed::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteStoragePublishedFileSubscribed(FRemoteStoragePublishedFileSubscribed::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RemoteStoragePublishedFileSubscribed"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStoragePublishedFileSubscribed
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStoragePublishedFileSubscribed()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RemoteStoragePublishedFileSubscribed")),new UScriptStruct::TCppStructOps<FRemoteStoragePublishedFileSubscribed>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRemoteStoragePublishedFileSubscribed;
	struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStoragePublishedFileSubscribed>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStoragePublishedFileSubscribed, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileId_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStoragePublishedFileSubscribed, PublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::NewProp_PublishedFileId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStoragePublishedFileSubscribed",
		sizeof(FRemoteStoragePublishedFileSubscribed),
		alignof(FRemoteStoragePublishedFileSubscribed),
		Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteStoragePublishedFileSubscribed"), sizeof(FRemoteStoragePublishedFileSubscribed), Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Hash() { return 1240741972U; }
class UScriptStruct* FRemoteStoragePublishedFileUnsubscribed::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed, Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStoragePublishedFileUnsubscribed"), sizeof(FRemoteStoragePublishedFileUnsubscribed), Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStoragePublishedFileUnsubscribed>()
{
	return FRemoteStoragePublishedFileUnsubscribed::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed(FRemoteStoragePublishedFileUnsubscribed::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RemoteStoragePublishedFileUnsubscribed"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStoragePublishedFileUnsubscribed
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStoragePublishedFileUnsubscribed()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RemoteStoragePublishedFileUnsubscribed")),new UScriptStruct::TCppStructOps<FRemoteStoragePublishedFileUnsubscribed>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRemoteStoragePublishedFileUnsubscribed;
	struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AppID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AppID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStoragePublishedFileUnsubscribed>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStoragePublishedFileUnsubscribed, AppID), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileId_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStoragePublishedFileUnsubscribed, PublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_AppID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::NewProp_PublishedFileId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStoragePublishedFileUnsubscribed",
		sizeof(FRemoteStoragePublishedFileUnsubscribed),
		alignof(FRemoteStoragePublishedFileUnsubscribed),
		Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteStoragePublishedFileUnsubscribed"), sizeof(FRemoteStoragePublishedFileUnsubscribed), Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Hash() { return 1603731594U; }
class UScriptStruct* FRemoteStorageUnsubscribePublishedFileResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStorageUnsubscribePublishedFileResult"), sizeof(FRemoteStorageUnsubscribePublishedFileResult), Get_Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStorageUnsubscribePublishedFileResult>()
{
	return FRemoteStorageUnsubscribePublishedFileResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult(FRemoteStorageUnsubscribePublishedFileResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RemoteStorageUnsubscribePublishedFileResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageUnsubscribePublishedFileResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageUnsubscribePublishedFileResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RemoteStorageUnsubscribePublishedFileResult")),new UScriptStruct::TCppStructOps<FRemoteStorageUnsubscribePublishedFileResult>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageUnsubscribePublishedFileResult;
	struct Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageUnsubscribePublishedFileResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_PublishedFileId_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageUnsubscribePublishedFileResult, PublishedFileId), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_PublishedFileId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_PublishedFileId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageUnsubscribePublishedFileResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_PublishedFileId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::NewProp_Result_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStorageUnsubscribePublishedFileResult",
		sizeof(FRemoteStorageUnsubscribePublishedFileResult),
		alignof(FRemoteStorageUnsubscribePublishedFileResult),
		Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteStorageUnsubscribePublishedFileResult"), sizeof(FRemoteStorageUnsubscribePublishedFileResult), Get_Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Hash() { return 2570857123U; }
class UScriptStruct* FRemoteStorageFileShareResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStorageFileShareResult"), sizeof(FRemoteStorageFileShareResult), Get_Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStorageFileShareResult>()
{
	return FRemoteStorageFileShareResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteStorageFileShareResult(FRemoteStorageFileShareResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RemoteStorageFileShareResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileShareResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileShareResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RemoteStorageFileShareResult")),new UScriptStruct::TCppStructOps<FRemoteStorageFileShareResult>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileShareResult;
	struct Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_File_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_File;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageFileShareResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageFileShareResult, Filename), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File = { "File", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageFileShareResult, File), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageFileShareResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Filename,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_File,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::NewProp_Result_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStorageFileShareResult",
		sizeof(FRemoteStorageFileShareResult),
		alignof(FRemoteStorageFileShareResult),
		Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileShareResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteStorageFileShareResult"), sizeof(FRemoteStorageFileShareResult), Get_Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Hash() { return 1541129403U; }
class UScriptStruct* FRemoteStorageFileReadAsyncComplete::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete, Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStorageFileReadAsyncComplete"), sizeof(FRemoteStorageFileReadAsyncComplete), Get_Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStorageFileReadAsyncComplete>()
{
	return FRemoteStorageFileReadAsyncComplete::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteStorageFileReadAsyncComplete(FRemoteStorageFileReadAsyncComplete::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RemoteStorageFileReadAsyncComplete"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileReadAsyncComplete
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileReadAsyncComplete()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RemoteStorageFileReadAsyncComplete")),new UScriptStruct::TCppStructOps<FRemoteStorageFileReadAsyncComplete>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileReadAsyncComplete;
	struct Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Read_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Read;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageFileReadAsyncComplete>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read = { "Read", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageFileReadAsyncComplete, Read), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageFileReadAsyncComplete, Offset), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageFileReadAsyncComplete, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Read,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::NewProp_Result_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStorageFileReadAsyncComplete",
		sizeof(FRemoteStorageFileReadAsyncComplete),
		alignof(FRemoteStorageFileReadAsyncComplete),
		Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteStorageFileReadAsyncComplete"), sizeof(FRemoteStorageFileReadAsyncComplete), Get_Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Hash() { return 1425332842U; }
class UScriptStruct* FRemoteStorageFileWriteAsyncComplete::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete, Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStorageFileWriteAsyncComplete"), sizeof(FRemoteStorageFileWriteAsyncComplete), Get_Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStorageFileWriteAsyncComplete>()
{
	return FRemoteStorageFileWriteAsyncComplete::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete(FRemoteStorageFileWriteAsyncComplete::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RemoteStorageFileWriteAsyncComplete"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileWriteAsyncComplete
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileWriteAsyncComplete()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RemoteStorageFileWriteAsyncComplete")),new UScriptStruct::TCppStructOps<FRemoteStorageFileWriteAsyncComplete>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageFileWriteAsyncComplete;
	struct Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageFileWriteAsyncComplete>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "RemoteStorage" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageFileWriteAsyncComplete, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::NewProp_Result_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStorageFileWriteAsyncComplete",
		sizeof(FRemoteStorageFileWriteAsyncComplete),
		alignof(FRemoteStorageFileWriteAsyncComplete),
		Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteStorageFileWriteAsyncComplete"), sizeof(FRemoteStorageFileWriteAsyncComplete), Get_Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Hash() { return 1555984133U; }
class UScriptStruct* FUGCFileWriteStreamHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, Z_Construct_UPackage__Script_SteamCore(), TEXT("UGCFileWriteStreamHandle"), sizeof(FUGCFileWriteStreamHandle), Get_Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FUGCFileWriteStreamHandle>()
{
	return FUGCFileWriteStreamHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUGCFileWriteStreamHandle(FUGCFileWriteStreamHandle::StaticStruct, TEXT("/Script/SteamCore"), TEXT("UGCFileWriteStreamHandle"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFUGCFileWriteStreamHandle
{
	FScriptStruct_SteamCore_StaticRegisterNativesFUGCFileWriteStreamHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UGCFileWriteStreamHandle")),new UScriptStruct::TCppStructOps<FUGCFileWriteStreamHandle>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFUGCFileWriteStreamHandle;
	struct Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorageTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUGCFileWriteStreamHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"UGCFileWriteStreamHandle",
		sizeof(FUGCFileWriteStreamHandle),
		alignof(FUGCFileWriteStreamHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UGCFileWriteStreamHandle"), sizeof(FUGCFileWriteStreamHandle), Get_Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Hash() { return 614657316U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
