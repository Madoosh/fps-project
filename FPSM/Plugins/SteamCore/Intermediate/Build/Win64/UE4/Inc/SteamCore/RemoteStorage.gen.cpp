// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/RemoteStorage/RemoteStorage.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteStorage() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_URemoteStorage_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_URemoteStorage();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(URemoteStorage::execSetSyncPlatforms)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_GET_ENUM(ESteamRemoteStoragePlatform,Z_Param_remoteStoragePlatform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::SetSyncPlatforms(Z_Param_file,ESteamRemoteStoragePlatform(Z_Param_remoteStoragePlatform));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execSetCloudEnabledForApp)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		URemoteStorage::SetCloudEnabledForApp(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execIsCloudEnabledForApp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::IsCloudEnabledForApp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execIsCloudEnabledForAccount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::IsCloudEnabledForAccount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetUGCDownloadProgress)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_handle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bytesDownloaded);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bytesExpected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::GetUGCDownloadProgress(Z_Param_handle,Z_Param_Out_bytesDownloaded,Z_Param_Out_bytesExpected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetUGCDetails)
	{
		P_GET_STRUCT(FSteamUGCHandle,Z_Param_handle);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_appID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_fileSizeInBytes);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_steamIDOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::GetUGCDetails(Z_Param_handle,Z_Param_Out_appID,Z_Param_Out_name,Z_Param_Out_fileSizeInBytes,Z_Param_Out_steamIDOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetSyncPlatforms)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamRemoteStoragePlatform*)Z_Param__Result=URemoteStorage::GetSyncPlatforms(Z_Param_file);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetQuota)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_totalBytes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_availableBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::GetQuota(Z_Param_Out_totalBytes,Z_Param_Out_availableBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetFileTimestamp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::GetFileTimestamp(Z_Param_file);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetFileSize)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::GetFileSize(Z_Param_file);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetFileNameAndSize)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_file);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_fileSizeInBytes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=URemoteStorage::GetFileNameAndSize(Z_Param_file,Z_Param_Out_fileSizeInBytes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetFileCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::GetFileCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetCachedUGCHandle)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_iCachedContent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamUGCHandle*)Z_Param__Result=URemoteStorage::GetCachedUGCHandle(Z_Param_iCachedContent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execGetCachedUGCCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::GetCachedUGCCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteStreamWriteChunk)
	{
		P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_handle);
		P_GET_TARRAY(uint8,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileWriteStreamWriteChunk(Z_Param_handle,Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteStreamOpen)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FUGCFileWriteStreamHandle*)Z_Param__Result=URemoteStorage::FileWriteStreamOpen(Z_Param_file);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteStreamClose)
	{
		P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileWriteStreamClose(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteStreamCancel)
	{
		P_GET_STRUCT(FUGCFileWriteStreamHandle,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileWriteStreamCancel(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWriteAsync)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_GET_TARRAY(uint8,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FileWriteAsync(FOnFileWriteAsync(Z_Param_Out_callback),Z_Param_file,Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileWrite)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_GET_TARRAY(uint8,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileWrite(Z_Param_file,Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileShare)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FileShare(FOnFileShareAsync(Z_Param_Out_callback),Z_Param_file);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileReadAsyncComplete)
	{
		P_GET_STRUCT(FRemoteStorageFileReadAsyncComplete,Z_Param_readCall);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_buffer);
		P_GET_PROPERTY(FIntProperty,Z_Param_bytesToRead);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileReadAsyncComplete(Z_Param_readCall,Z_Param_Out_buffer,Z_Param_bytesToRead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileReadAsync)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_GET_PROPERTY(FIntProperty,Z_Param_offset);
		P_GET_PROPERTY(FIntProperty,Z_Param_bytesToRead);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FileReadAsync(FOnFileReadAsync(Z_Param_Out_callback),Z_Param_file,Z_Param_offset,Z_Param_bytesToRead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileRead)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_buffer);
		P_GET_PROPERTY(FIntProperty,Z_Param_dataToRead);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=URemoteStorage::FileRead(Z_Param_file,Z_Param_Out_buffer,Z_Param_dataToRead);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFilePersisted)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FilePersisted(Z_Param_file);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileForget)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileForget(Z_Param_file);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileExists)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileExists(Z_Param_file);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URemoteStorage::execFileDelete)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_file);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=URemoteStorage::FileDelete(Z_Param_file);
		P_NATIVE_END;
	}
	void URemoteStorage::StaticRegisterNativesURemoteStorage()
	{
		UClass* Class = URemoteStorage::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FileDelete", &URemoteStorage::execFileDelete },
			{ "FileExists", &URemoteStorage::execFileExists },
			{ "FileForget", &URemoteStorage::execFileForget },
			{ "FilePersisted", &URemoteStorage::execFilePersisted },
			{ "FileRead", &URemoteStorage::execFileRead },
			{ "FileReadAsync", &URemoteStorage::execFileReadAsync },
			{ "FileReadAsyncComplete", &URemoteStorage::execFileReadAsyncComplete },
			{ "FileShare", &URemoteStorage::execFileShare },
			{ "FileWrite", &URemoteStorage::execFileWrite },
			{ "FileWriteAsync", &URemoteStorage::execFileWriteAsync },
			{ "FileWriteStreamCancel", &URemoteStorage::execFileWriteStreamCancel },
			{ "FileWriteStreamClose", &URemoteStorage::execFileWriteStreamClose },
			{ "FileWriteStreamOpen", &URemoteStorage::execFileWriteStreamOpen },
			{ "FileWriteStreamWriteChunk", &URemoteStorage::execFileWriteStreamWriteChunk },
			{ "GetCachedUGCCount", &URemoteStorage::execGetCachedUGCCount },
			{ "GetCachedUGCHandle", &URemoteStorage::execGetCachedUGCHandle },
			{ "GetFileCount", &URemoteStorage::execGetFileCount },
			{ "GetFileNameAndSize", &URemoteStorage::execGetFileNameAndSize },
			{ "GetFileSize", &URemoteStorage::execGetFileSize },
			{ "GetFileTimestamp", &URemoteStorage::execGetFileTimestamp },
			{ "GetQuota", &URemoteStorage::execGetQuota },
			{ "GetSyncPlatforms", &URemoteStorage::execGetSyncPlatforms },
			{ "GetUGCDetails", &URemoteStorage::execGetUGCDetails },
			{ "GetUGCDownloadProgress", &URemoteStorage::execGetUGCDownloadProgress },
			{ "IsCloudEnabledForAccount", &URemoteStorage::execIsCloudEnabledForAccount },
			{ "IsCloudEnabledForApp", &URemoteStorage::execIsCloudEnabledForApp },
			{ "SetCloudEnabledForApp", &URemoteStorage::execSetCloudEnabledForApp },
			{ "SetSyncPlatforms", &URemoteStorage::execSetSyncPlatforms },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URemoteStorage_FileDelete_Statics
	{
		struct RemoteStorage_eventFileDelete_Parms
		{
			FString file;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileDelete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileDelete_Parms), &Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileDelete_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::NewProp_file,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Deletes a file from the local disk, and propagates that delete to the cloud.\n\x09*\n\x09* This is meant to be used when a user actively deletes a file. Use FileForget if you want to remove a file from the Steam Cloud but retain it on the users local disk.\n\x09* When a file has been deleted it can be re-written with FileWrite to reupload it to the Steam Cloud.\n\x09*\n\x09* @param\x09""file\x09The name of the file that will be deleted.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Deletes a file from the local disk, and propagates that delete to the cloud.\n\nThis is meant to be used when a user actively deletes a file. Use FileForget if you want to remove a file from the Steam Cloud but retain it on the users local disk.\nWhen a file has been deleted it can be re-written with FileWrite to reupload it to the Steam Cloud.\n\n@param        file    The name of the file that will be deleted." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileDelete", nullptr, nullptr, sizeof(RemoteStorage_eventFileDelete_Parms), Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileExists_Statics
	{
		struct RemoteStorage_eventFileExists_Parms
		{
			FString file;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileExists_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileExists_Parms), &Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileExists_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileExists_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileExists_Statics::NewProp_file,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileExists_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Checks whether the specified file exists.\n\x09*\n\x09* @param\x09""file\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Checks whether the specified file exists.\n\n@param        file    The name of the file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileExists_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileExists", nullptr, nullptr, sizeof(RemoteStorage_eventFileExists_Parms), Z_Construct_UFunction_URemoteStorage_FileExists_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileExists_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileExists_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileExists_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileExists()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileExists_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileForget_Statics
	{
		struct RemoteStorage_eventFileForget_Parms
		{
			FString file;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileForget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileForget_Parms), &Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileForget_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileForget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileForget_Statics::NewProp_file,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileForget_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Deletes the file from remote storage, but leaves it on the local disk and remains accessible from the API.\n\x09*\n\x09* When you are out of Cloud space, this can be used to allow calls to FileWrite to keep working without needing to make the user delete files.\n\x09* How you decide which files to forget are up to you. It could be a simple Least Recently Used (LRU) queue or something more complicated.\n\x09* Requiring the user to manage their Cloud-ized files for a game, while is possible to do, it is never recommended. \n\x09* For instance, \"Which file would you like to delete so that you may store this new one?\" removes a significant advantage of using the Cloud in the first place: its transparency.\n\x09* Once a file has been deleted or forgotten, calling FileWrite will resynchronize it in the Cloud. Rewriting a forgotten file is the only way to make it persisted again.\n\x09*\n\x09* @param\x09""file\x09The name of the file that will be forgotten.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Deletes the file from remote storage, but leaves it on the local disk and remains accessible from the API.\n\nWhen you are out of Cloud space, this can be used to allow calls to FileWrite to keep working without needing to make the user delete files.\nHow you decide which files to forget are up to you. It could be a simple Least Recently Used (LRU) queue or something more complicated.\nRequiring the user to manage their Cloud-ized files for a game, while is possible to do, it is never recommended.\nFor instance, \"Which file would you like to delete so that you may store this new one?\" removes a significant advantage of using the Cloud in the first place: its transparency.\nOnce a file has been deleted or forgotten, calling FileWrite will resynchronize it in the Cloud. Rewriting a forgotten file is the only way to make it persisted again.\n\n@param        file    The name of the file that will be forgotten." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileForget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileForget", nullptr, nullptr, sizeof(RemoteStorage_eventFileForget_Parms), Z_Construct_UFunction_URemoteStorage_FileForget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileForget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileForget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileForget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileForget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileForget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics
	{
		struct RemoteStorage_eventFilePersisted_Parms
		{
			FString file;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFilePersisted_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFilePersisted_Parms), &Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFilePersisted_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::NewProp_file,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Checks if a specific file is persisted in the steam cloud.\n\x09*\n\x09* @param\x09""file\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Checks if a specific file is persisted in the steam cloud.\n\n@param        file    The name of the file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FilePersisted", nullptr, nullptr, sizeof(RemoteStorage_eventFilePersisted_Parms), Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FilePersisted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FilePersisted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileRead_Statics
	{
		struct RemoteStorage_eventFileRead_Parms
		{
			FString file;
			TArray<uint8> buffer;
			int32 dataToRead;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_dataToRead;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_buffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_buffer_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileRead_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_dataToRead = { "dataToRead", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileRead_Parms, dataToRead), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_buffer = { "buffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileRead_Parms, buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_buffer_Inner = { "buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileRead_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileRead_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_dataToRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileRead_Statics::NewProp_file,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileRead_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Opens a binary file, reads the contents of the file into a byte array, and then closes the file.\n\x09*\n\x09* NOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block.\n\x09* To avoid \"hitching\" due to a busy disk on the client machine using FileReadAsync, the asynchronous version of this API is recommended.\n\x09*\n\x09* @param\x09""file\x09\x09\x09The name of the file to read from.\n\x09* @param\x09""buffer\x09\x09\x09The buffer that the file will be read into. This buffer must be at least the same size provided to cubDataToRead.\n\x09* @param\x09""dataToRead\x09\x09The amount of bytes to read. Generally obtained from GetFileSize or GetFileTimestamp.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Opens a binary file, reads the contents of the file into a byte array, and then closes the file.\n\nNOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block.\nTo avoid \"hitching\" due to a busy disk on the client machine using FileReadAsync, the asynchronous version of this API is recommended.\n\n@param        file                    The name of the file to read from.\n@param        buffer                  The buffer that the file will be read into. This buffer must be at least the same size provided to cubDataToRead.\n@param        dataToRead              The amount of bytes to read. Generally obtained from GetFileSize or GetFileTimestamp." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileRead_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileRead", nullptr, nullptr, sizeof(RemoteStorage_eventFileRead_Parms), Z_Construct_UFunction_URemoteStorage_FileRead_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileRead_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileRead_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileRead_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileRead()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileRead_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics
	{
		struct RemoteStorage_eventFileReadAsync_Parms
		{
			FScriptDelegate callback;
			FString file;
			int32 offset;
			int32 bytesToRead;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bytesToRead;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_offset;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_bytesToRead = { "bytesToRead", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileReadAsync_Parms, bytesToRead), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileReadAsync_Parms, offset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileReadAsync_Parms, file), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileReadAsync_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnFileReadAsync__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_bytesToRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_file,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Starts an asynchronous read from a file.\n\x09*\n\x09* The offset and amount to read should be valid for the size of the file, as indicated by GetFileSize or GetFileTimestamp.\n\x09*\n\x09* Returns k_uAPICallInvalid under the following conditions:\n\x09* You tried to read from invalid path or filename. Because Steam Cloud is cross platform the files need to have valid names on all supported OSes and file systems. See Microsoft's documentation on Naming Files, Paths, and Namespaces.\n\x09* The file doesn't exist.\n\x09* cubDataToRead is <= 0 bytes. You need to be able to read something!\n\x09* The combination of pvData and cubDataToRead would read past the end of the file.\n\x09* You have an async read in progress on this file already.\n\x09*\n\x09* Upon completion of the read request you will receive the call result, if the value of m_eResult within the call result is k_EResultOK you can then call FileReadAsyncComplete to read the requested data into your buffer.\n\x09* The hReadCall parameter should match the return value of this function, and the amount to read should generally be equal to the amount requested as indicated by m_nOffset and m_cubRead.\n\x09*\n\x09* @param\x09""file\x09\x09\x09\x09The name of the file to read from.\n\x09* @param\x09offset\x09\x09\x09\x09The offset in bytes into the file where the read will start from. 0 if you're reading the whole file in one chunk.\n\x09* @param\x09""bytesToRead\x09\x09\x09The amount of bytes to read starting from nOffset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Starts an asynchronous read from a file.\n\nThe offset and amount to read should be valid for the size of the file, as indicated by GetFileSize or GetFileTimestamp.\n\nReturns k_uAPICallInvalid under the following conditions:\nYou tried to read from invalid path or filename. Because Steam Cloud is cross platform the files need to have valid names on all supported OSes and file systems. See Microsoft's documentation on Naming Files, Paths, and Namespaces.\nThe file doesn't exist.\ncubDataToRead is <= 0 bytes. You need to be able to read something!\nThe combination of pvData and cubDataToRead would read past the end of the file.\nYou have an async read in progress on this file already.\n\nUpon completion of the read request you will receive the call result, if the value of m_eResult within the call result is k_EResultOK you can then call FileReadAsyncComplete to read the requested data into your buffer.\nThe hReadCall parameter should match the return value of this function, and the amount to read should generally be equal to the amount requested as indicated by m_nOffset and m_cubRead.\n\n@param        file                            The name of the file to read from.\n@param        offset                          The offset in bytes into the file where the read will start from. 0 if you're reading the whole file in one chunk.\n@param        bytesToRead                     The amount of bytes to read starting from nOffset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileReadAsync", nullptr, nullptr, sizeof(RemoteStorage_eventFileReadAsync_Parms), Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileReadAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileReadAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics
	{
		struct RemoteStorage_eventFileReadAsyncComplete_Parms
		{
			FRemoteStorageFileReadAsyncComplete readCall;
			TArray<uint8> buffer;
			int32 bytesToRead;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bytesToRead;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_buffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_buffer_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_readCall;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileReadAsyncComplete_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileReadAsyncComplete_Parms), &Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_bytesToRead = { "bytesToRead", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileReadAsyncComplete_Parms, bytesToRead), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_buffer = { "buffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileReadAsyncComplete_Parms, buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_buffer_Inner = { "buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_readCall = { "readCall", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileReadAsyncComplete_Parms, readCall), Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_bytesToRead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::NewProp_readCall,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Copies the bytes from a file which was asynchronously read with FileReadAsync into a byte array.\n\x09*\n\x09* This should never be called outside of the context of a RemoteStorageFileReadAsyncComplete_t call result.\n\x09*\n\x09* @param\x09readCall\x09\x09\x09The call result handle obtained from RemoteStorageFileReadAsyncComplete_t.\n\x09* @param\x09""buffer\x09\x09\x09\x09The buffer that the file will be read into.\n\x09* @param\x09""bytesToRead\x09\x09\x09The number of bytes to copy. This should usually be the m_cubRead value from RemoteStorageFileReadAsyncComplete_t\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Copies the bytes from a file which was asynchronously read with FileReadAsync into a byte array.\n\nThis should never be called outside of the context of a RemoteStorageFileReadAsyncComplete_t call result.\n\n@param        readCall                        The call result handle obtained from RemoteStorageFileReadAsyncComplete_t.\n@param        buffer                          The buffer that the file will be read into.\n@param        bytesToRead                     The number of bytes to copy. This should usually be the m_cubRead value from RemoteStorageFileReadAsyncComplete_t" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileReadAsyncComplete", nullptr, nullptr, sizeof(RemoteStorage_eventFileReadAsyncComplete_Parms), Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileShare_Statics
	{
		struct RemoteStorage_eventFileShare_Parms
		{
			FScriptDelegate callback;
			FString file;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileShare_Parms, file), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileShare_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnFileShareAsync__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileShare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_file,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileShare_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileShare_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Copies the bytes from a file which was asynchronously read with FileReadAsync into a byte array.\n\x09*\n\x09* This should never be called outside of the context of a RemoteStorageFileReadAsyncComplete_t call result.\n\x09*\n\x09* @param\x09""file\x09\x09\x09The name of the file to share.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Copies the bytes from a file which was asynchronously read with FileReadAsync into a byte array.\n\nThis should never be called outside of the context of a RemoteStorageFileReadAsyncComplete_t call result.\n\n@param        file                    The name of the file to share." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileShare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileShare", nullptr, nullptr, sizeof(RemoteStorage_eventFileShare_Parms), Z_Construct_UFunction_URemoteStorage_FileShare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileShare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileShare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileShare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWrite_Statics
	{
		struct RemoteStorage_eventFileWrite_Parms
		{
			FString file;
			TArray<uint8> data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_data_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileWrite_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileWrite_Parms), &Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWrite_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWrite_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::NewProp_file,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Creates a new file, writes the bytes to the file, and then closes the file. If the target file already exists, it is overwritten.\n\x09*\n\x09* NOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block. \n\x09* To avoid \"hitching\" due to a busy disk on the client machine using FileWriteAsync, the asynchronous version of this API is recommended.\n\x09*\n\x09* @param\x09""file\x09\x09The name of the file to write to.\n\x09* @param\x09""data\x09\x09The bytes to write to the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Creates a new file, writes the bytes to the file, and then closes the file. If the target file already exists, it is overwritten.\n\nNOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block.\nTo avoid \"hitching\" due to a busy disk on the client machine using FileWriteAsync, the asynchronous version of this API is recommended.\n\n@param        file            The name of the file to write to.\n@param        data            The bytes to write to the file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWrite", nullptr, nullptr, sizeof(RemoteStorage_eventFileWrite_Parms), Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWrite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWrite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics
	{
		struct RemoteStorage_eventFileWriteAsync_Parms
		{
			FScriptDelegate callback;
			FString file;
			TArray<uint8> data;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_data_Inner;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteAsync_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteAsync_Parms, file), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteAsync_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnFileWriteAsync__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_file,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Creates a new file and asynchronously writes the raw byte data to the Steam Cloud, and then closes the file. If the target file already exists, it is overwritten.\n\x09*\n\x09* @param\x09""file\x09\x09The name of the file to write to.\n\x09* @param\x09""data\x09\x09The bytes to write to the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Creates a new file and asynchronously writes the raw byte data to the Steam Cloud, and then closes the file. If the target file already exists, it is overwritten.\n\n@param        file            The name of the file to write to.\n@param        data            The bytes to write to the file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteAsync", nullptr, nullptr, sizeof(RemoteStorage_eventFileWriteAsync_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics
	{
		struct RemoteStorage_eventFileWriteStreamCancel_Parms
		{
			FUGCFileWriteStreamHandle handle;
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
	void Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileWriteStreamCancel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileWriteStreamCancel_Parms), &Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamCancel_Parms, handle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Cancels a file write stream that was started by FileWriteStreamOpen.\n\x09*\n\x09* This trashes all of the data written and closes the write stream, but if there was an existing file with this name, it remains untouched.\n\x09*\n\x09* @param\x09handle\x09\x09The file write stream to cancel.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Cancels a file write stream that was started by FileWriteStreamOpen.\n\nThis trashes all of the data written and closes the write stream, but if there was an existing file with this name, it remains untouched.\n\n@param        handle          The file write stream to cancel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteStreamCancel", nullptr, nullptr, sizeof(RemoteStorage_eventFileWriteStreamCancel_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics
	{
		struct RemoteStorage_eventFileWriteStreamClose_Parms
		{
			FUGCFileWriteStreamHandle handle;
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
	void Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileWriteStreamClose_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileWriteStreamClose_Parms), &Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamClose_Parms, handle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Closes a file write stream that was started by FileWriteStreamOpen.\n\x09*\n\x09* This flushes the stream to the disk, overwriting the existing file if there was one.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The file write stream to close.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Closes a file write stream that was started by FileWriteStreamOpen.\n\nThis flushes the stream to the disk, overwriting the existing file if there was one.\n\n@param        handle                  The file write stream to close." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteStreamClose", nullptr, nullptr, sizeof(RemoteStorage_eventFileWriteStreamClose_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics
	{
		struct RemoteStorage_eventFileWriteStreamOpen_Parms
		{
			FString file;
			FUGCFileWriteStreamHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamOpen_Parms, ReturnValue), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamOpen_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::NewProp_file,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Creates a new file output stream allowing you to stream out data to the Steam Cloud file in chunks. If the target file already exists, it is not overwritten until FileWriteStreamClose has been called.\n\x09*\n\x09* To write data out to this stream you can use FileWriteStreamWriteChunk, and then to close or cancel you use FileWriteStreamClose and FileWriteStreamCancel respectively.\n\x09*\n\x09* @param\x09""file\x09The name of the file to write to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Creates a new file output stream allowing you to stream out data to the Steam Cloud file in chunks. If the target file already exists, it is not overwritten until FileWriteStreamClose has been called.\n\nTo write data out to this stream you can use FileWriteStreamWriteChunk, and then to close or cancel you use FileWriteStreamClose and FileWriteStreamCancel respectively.\n\n@param        file    The name of the file to write to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteStreamOpen", nullptr, nullptr, sizeof(RemoteStorage_eventFileWriteStreamOpen_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics
	{
		struct RemoteStorage_eventFileWriteStreamWriteChunk_Parms
		{
			FUGCFileWriteStreamHandle handle;
			TArray<uint8> data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_data_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventFileWriteStreamWriteChunk_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventFileWriteStreamWriteChunk_Parms), &Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamWriteChunk_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventFileWriteStreamWriteChunk_Parms, handle), Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Writes a blob of data to the file write stream.\n\x09*\n\x09* @param\x09handle\x09\x09The file write stream to write to.\n\x09* @param\x09""data\x09\x09The data to write to the stream.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Writes a blob of data to the file write stream.\n\n@param        handle          The file write stream to write to.\n@param        data            The data to write to the stream." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "FileWriteStreamWriteChunk", nullptr, nullptr, sizeof(RemoteStorage_eventFileWriteStreamWriteChunk_Parms), Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics
	{
		struct RemoteStorage_eventGetCachedUGCCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetCachedUGCCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetCachedUGCCount", nullptr, nullptr, sizeof(RemoteStorage_eventGetCachedUGCCount_Parms), Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics
	{
		struct RemoteStorage_eventGetCachedUGCHandle_Parms
		{
			int32 iCachedContent;
			FSteamUGCHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iCachedContent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetCachedUGCHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::NewProp_iCachedContent = { "iCachedContent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetCachedUGCHandle_Parms, iCachedContent), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::NewProp_iCachedContent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetCachedUGCHandle", nullptr, nullptr, sizeof(RemoteStorage_eventGetCachedUGCHandle_Parms), Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics
	{
		struct RemoteStorage_eventGetFileCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the total number of local files synchronized by Steam Cloud.\n\x09*\n\x09* Used for enumeration with GetFileNameAndSize.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Gets the total number of local files synchronized by Steam Cloud.\n\nUsed for enumeration with GetFileNameAndSize." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetFileCount", nullptr, nullptr, sizeof(RemoteStorage_eventGetFileCount_Parms), Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetFileCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetFileCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics
	{
		struct RemoteStorage_eventGetFileNameAndSize_Parms
		{
			int32 file;
			int32 fileSizeInBytes;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fileSizeInBytes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileNameAndSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_fileSizeInBytes = { "fileSizeInBytes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileNameAndSize_Parms, fileSizeInBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileNameAndSize_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_fileSizeInBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::NewProp_file,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the file name and size of a file from the index.\n\x09*\n\x09* @param\x09""file\x09\x09\x09\x09The index of the file, this should be between 0 and GetFileCount.\n\x09* @param\x09""fileSizeInBytes\x09\x09Returns the file size in bytes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Gets the file name and size of a file from the index.\n\n@param        file                            The index of the file, this should be between 0 and GetFileCount.\n@param        fileSizeInBytes         Returns the file size in bytes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetFileNameAndSize", nullptr, nullptr, sizeof(RemoteStorage_eventGetFileNameAndSize_Parms), Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics
	{
		struct RemoteStorage_eventGetFileSize_Parms
		{
			FString file;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileSize_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileSize_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::NewProp_file,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the specified files size in bytes.\n\x09*\n\x09* @param\x09""file\x09\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Gets the specified files size in bytes.\n\n@param        file            The name of the file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetFileSize", nullptr, nullptr, sizeof(RemoteStorage_eventGetFileSize_Parms), Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetFileSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetFileSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics
	{
		struct RemoteStorage_eventGetFileTimestamp_Parms
		{
			FString file;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetFileTimestamp_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::NewProp_file,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the specified file's last modified timestamp in Unix epoch format (seconds since Jan 1st 1970).\n\x09*\n\x09* @param\x09""file\x09\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Gets the specified file's last modified timestamp in Unix epoch format (seconds since Jan 1st 1970).\n\n@param        file            The name of the file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetFileTimestamp", nullptr, nullptr, sizeof(RemoteStorage_eventGetFileTimestamp_Parms), Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetFileTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetFileTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetQuota_Statics
	{
		struct RemoteStorage_eventGetQuota_Parms
		{
			int32 totalBytes;
			int32 availableBytes;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_availableBytes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_totalBytes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventGetQuota_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventGetQuota_Parms), &Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_availableBytes = { "availableBytes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetQuota_Parms, availableBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_totalBytes = { "totalBytes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetQuota_Parms, totalBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_availableBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::NewProp_totalBytes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the number of bytes available, and used on the users Steam Cloud storage.\n\x09*\n\x09* @param\x09totalBytes\n\x09* @param\x09""availableBytes\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Gets the number of bytes available, and used on the users Steam Cloud storage.\n\n@param        totalBytes\n@param        availableBytes" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetQuota", nullptr, nullptr, sizeof(RemoteStorage_eventGetQuota_Parms), Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetQuota()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetQuota_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics
	{
		struct RemoteStorage_eventGetSyncPlatforms_Parms
		{
			FString file;
			ESteamRemoteStoragePlatform ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetSyncPlatforms_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetSyncPlatforms_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::NewProp_file,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Obtains the platforms that the specified file will syncronize to.\n\x09*\n\x09* @param\x09""file\x09The name of the file.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Obtains the platforms that the specified file will syncronize to.\n\n@param        file    The name of the file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetSyncPlatforms", nullptr, nullptr, sizeof(RemoteStorage_eventGetSyncPlatforms_Parms), Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics
	{
		struct RemoteStorage_eventGetUGCDetails_Parms
		{
			FSteamUGCHandle handle;
			int32 appID;
			FString name;
			int32 fileSizeInBytes;
			FSteamID steamIDOwner;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDOwner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_fileSizeInBytes;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventGetUGCDetails_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventGetUGCDetails_Parms), &Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_steamIDOwner = { "steamIDOwner", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, steamIDOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_fileSizeInBytes = { "fileSizeInBytes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, fileSizeInBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDetails_Parms, handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_steamIDOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_fileSizeInBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets metadata for a file after it has been downloaded. \n\x09*\n\x09* This is the same metadata given in the RemoteStorageDownloadUGCResult_t call result\n\x09*\n\x09* @param\x09handle\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Gets metadata for a file after it has been downloaded.\n\nThis is the same metadata given in the RemoteStorageDownloadUGCResult_t call result\n\n@param        handle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetUGCDetails", nullptr, nullptr, sizeof(RemoteStorage_eventGetUGCDetails_Parms), Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetUGCDetails()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetUGCDetails_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics
	{
		struct RemoteStorage_eventGetUGCDownloadProgress_Parms
		{
			FSteamUGCHandle handle;
			int32 bytesDownloaded;
			int32 bytesExpected;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bytesExpected;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bytesDownloaded;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventGetUGCDownloadProgress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventGetUGCDownloadProgress_Parms), &Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_bytesExpected = { "bytesExpected", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDownloadProgress_Parms, bytesExpected), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_bytesDownloaded = { "bytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDownloadProgress_Parms, bytesDownloaded), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventGetUGCDownloadProgress_Parms, handle), Z_Construct_UScriptStruct_FSteamUGCHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_bytesExpected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_bytesDownloaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Gets the amount of data downloaded so far for a piece of content. pnBytesExpected can be 0 if function returns false\n\x09* or if the transfer hasn't started yet, so be careful to check for that before dividing to get a percentage\n\x09*\n\x09* @param\x09handle\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Gets the amount of data downloaded so far for a piece of content. pnBytesExpected can be 0 if function returns false\nor if the transfer hasn't started yet, so be careful to check for that before dividing to get a percentage\n\n@param        handle" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "GetUGCDownloadProgress", nullptr, nullptr, sizeof(RemoteStorage_eventGetUGCDownloadProgress_Parms), Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics
	{
		struct RemoteStorage_eventIsCloudEnabledForAccount_Parms
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
	void Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventIsCloudEnabledForAccount_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventIsCloudEnabledForAccount_Parms), &Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Checks if the account wide Steam Cloud setting is enabled for this user; or if they disabled it in the Settings->Cloud dialog.\n\x09*\n\x09* Ensure that you are also checking IsCloudEnabledForApp, as these two options are mutually exclusive.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Checks if the account wide Steam Cloud setting is enabled for this user; or if they disabled it in the Settings->Cloud dialog.\n\nEnsure that you are also checking IsCloudEnabledForApp, as these two options are mutually exclusive." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "IsCloudEnabledForAccount", nullptr, nullptr, sizeof(RemoteStorage_eventIsCloudEnabledForAccount_Parms), Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics
	{
		struct RemoteStorage_eventIsCloudEnabledForApp_Parms
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
	void Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventIsCloudEnabledForApp_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventIsCloudEnabledForApp_Parms), &Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Checks if the per game Steam Cloud setting is enabled for this user; or if they disabled it in the Game Properties->Update dialog.\n\x09*\n\x09* Ensure that you are also checking IsCloudEnabledForAccount, as these two options are mutually exclusive.\n\x09* It's generally recommended that you allow the user to toggle this setting within your in-game options, you can toggle it with SetCloudEnabledForApp.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Checks if the per game Steam Cloud setting is enabled for this user; or if they disabled it in the Game Properties->Update dialog.\n\nEnsure that you are also checking IsCloudEnabledForAccount, as these two options are mutually exclusive.\nIt's generally recommended that you allow the user to toggle this setting within your in-game options, you can toggle it with SetCloudEnabledForApp." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "IsCloudEnabledForApp", nullptr, nullptr, sizeof(RemoteStorage_eventIsCloudEnabledForApp_Parms), Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics
	{
		struct RemoteStorage_eventSetCloudEnabledForApp_Parms
		{
			bool bEnabled;
		};
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((RemoteStorage_eventSetCloudEnabledForApp_Parms*)Obj)->bEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventSetCloudEnabledForApp_Parms), &Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Toggles whether the Steam Cloud is enabled for your application.\n\x09*\n\x09* This setting can be queried with IsCloudEnabledForApp.\n\x09*\n\x09* @param\x09""bEnabled\x09""Enable (true) or disable (false) the Steam Cloud for this application?\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Toggles whether the Steam Cloud is enabled for your application.\n\nThis setting can be queried with IsCloudEnabledForApp.\n\n@param        bEnabled        Enable (true) or disable (false) the Steam Cloud for this application?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "SetCloudEnabledForApp", nullptr, nullptr, sizeof(RemoteStorage_eventSetCloudEnabledForApp_Parms), Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics
	{
		struct RemoteStorage_eventSetSyncPlatforms_Parms
		{
			FString file;
			ESteamRemoteStoragePlatform remoteStoragePlatform;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_remoteStoragePlatform;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_remoteStoragePlatform_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_file;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RemoteStorage_eventSetSyncPlatforms_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(RemoteStorage_eventSetSyncPlatforms_Parms), &Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_remoteStoragePlatform = { "remoteStoragePlatform", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventSetSyncPlatforms_Parms, remoteStoragePlatform), Z_Construct_UEnum_SteamCore_ESteamRemoteStoragePlatform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_remoteStoragePlatform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_file = { "file", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(RemoteStorage_eventSetSyncPlatforms_Parms, file), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_remoteStoragePlatform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_remoteStoragePlatform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::NewProp_file,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|RemoteStorage" },
		{ "Comment", "/**\n\x09* Allows you to specify which operating systems a file will be synchronized to.\n\x09*\n\x09* Use this if you have a multiplatform game but have data which is incompatible between platforms.\n\x09* Files default to k_ERemoteStoragePlatformAll when they are first created. You can use the bitwise OR operator, \"|\" to specify multiple platforms.\n\x09*\n\x09* @param\x09""file\x09\x09\x09\x09\x09\x09The name of the file.\n\x09* @param\x09remoteStoragePlatform\x09\x09The platforms that the file will be syncronized to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
		{ "ToolTip", "Allows you to specify which operating systems a file will be synchronized to.\n\nUse this if you have a multiplatform game but have data which is incompatible between platforms.\nFiles default to k_ERemoteStoragePlatformAll when they are first created. You can use the bitwise OR operator, \"|\" to specify multiple platforms.\n\n@param        file                                            The name of the file.\n@param        remoteStoragePlatform           The platforms that the file will be syncronized to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URemoteStorage, nullptr, "SetSyncPlatforms", nullptr, nullptr, sizeof(RemoteStorage_eventSetSyncPlatforms_Parms), Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_URemoteStorage_NoRegister()
	{
		return URemoteStorage::StaticClass();
	}
	struct Z_Construct_UClass_URemoteStorage_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteStoragePublishedFileSubscribed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStoragePublishedFileSubscribed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStoragePublishedFileUnsubscribed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteStorageSubscribePublishedFileResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStorageSubscribePublishedFileResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_RemoteStorageUnsubscribePublishedFileResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteStorage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URemoteStorage_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URemoteStorage_FileDelete, "FileDelete" }, // 1535845344
		{ &Z_Construct_UFunction_URemoteStorage_FileExists, "FileExists" }, // 2307692635
		{ &Z_Construct_UFunction_URemoteStorage_FileForget, "FileForget" }, // 919840243
		{ &Z_Construct_UFunction_URemoteStorage_FilePersisted, "FilePersisted" }, // 1312639106
		{ &Z_Construct_UFunction_URemoteStorage_FileRead, "FileRead" }, // 1930498883
		{ &Z_Construct_UFunction_URemoteStorage_FileReadAsync, "FileReadAsync" }, // 3830609636
		{ &Z_Construct_UFunction_URemoteStorage_FileReadAsyncComplete, "FileReadAsyncComplete" }, // 1817197870
		{ &Z_Construct_UFunction_URemoteStorage_FileShare, "FileShare" }, // 1393045167
		{ &Z_Construct_UFunction_URemoteStorage_FileWrite, "FileWrite" }, // 325801970
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteAsync, "FileWriteAsync" }, // 1575961838
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteStreamCancel, "FileWriteStreamCancel" }, // 2376465957
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteStreamClose, "FileWriteStreamClose" }, // 1557390038
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteStreamOpen, "FileWriteStreamOpen" }, // 1516984391
		{ &Z_Construct_UFunction_URemoteStorage_FileWriteStreamWriteChunk, "FileWriteStreamWriteChunk" }, // 15572505
		{ &Z_Construct_UFunction_URemoteStorage_GetCachedUGCCount, "GetCachedUGCCount" }, // 2044709331
		{ &Z_Construct_UFunction_URemoteStorage_GetCachedUGCHandle, "GetCachedUGCHandle" }, // 252375197
		{ &Z_Construct_UFunction_URemoteStorage_GetFileCount, "GetFileCount" }, // 3669036448
		{ &Z_Construct_UFunction_URemoteStorage_GetFileNameAndSize, "GetFileNameAndSize" }, // 1989682527
		{ &Z_Construct_UFunction_URemoteStorage_GetFileSize, "GetFileSize" }, // 2058152495
		{ &Z_Construct_UFunction_URemoteStorage_GetFileTimestamp, "GetFileTimestamp" }, // 2330545312
		{ &Z_Construct_UFunction_URemoteStorage_GetQuota, "GetQuota" }, // 3643755611
		{ &Z_Construct_UFunction_URemoteStorage_GetSyncPlatforms, "GetSyncPlatforms" }, // 1114811993
		{ &Z_Construct_UFunction_URemoteStorage_GetUGCDetails, "GetUGCDetails" }, // 444158569
		{ &Z_Construct_UFunction_URemoteStorage_GetUGCDownloadProgress, "GetUGCDownloadProgress" }, // 1809544491
		{ &Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForAccount, "IsCloudEnabledForAccount" }, // 1193090993
		{ &Z_Construct_UFunction_URemoteStorage_IsCloudEnabledForApp, "IsCloudEnabledForApp" }, // 3119613363
		{ &Z_Construct_UFunction_URemoteStorage_SetCloudEnabledForApp, "SetCloudEnabledForApp" }, // 2459485048
		{ &Z_Construct_UFunction_URemoteStorage_SetSyncPlatforms, "SetSyncPlatforms" }, // 2174960391
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RemoteStorage/RemoteStorage.h" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed = { "RemoteStoragePublishedFileSubscribed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteStorage, RemoteStoragePublishedFileSubscribed), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileSubscribed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed = { "RemoteStoragePublishedFileUnsubscribed", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteStorage, RemoteStoragePublishedFileUnsubscribed), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStoragePublishedFileUnsubscribed__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult = { "RemoteStorageSubscribePublishedFileResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteStorage, RemoteStorageSubscribePublishedFileResult), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageSubscribePublishedFileResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData[] = {
		{ "Category", "SteamCore|UserStats|Delegates" },
		{ "ModuleRelativePath", "Public/RemoteStorage/RemoteStorage.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult = { "RemoteStorageUnsubscribePublishedFileResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URemoteStorage, RemoteStorageUnsubscribePublishedFileResult), Z_Construct_UDelegateFunction_SteamCore_OnRemoteStorageUnsubscribePublishedFileResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteStorage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileSubscribed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStoragePublishedFileUnsubscribed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageSubscribePublishedFileResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteStorage_Statics::NewProp_RemoteStorageUnsubscribePublishedFileResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteStorage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteStorage>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URemoteStorage_Statics::ClassParams = {
		&URemoteStorage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URemoteStorage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteStorage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteStorage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteStorage()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URemoteStorage_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URemoteStorage, 2939795437);
	template<> STEAMCORE_API UClass* StaticClass<URemoteStorage>()
	{
		return URemoteStorage::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URemoteStorage(Z_Construct_UClass_URemoteStorage, &URemoteStorage::StaticClass, TEXT("/Script/SteamCore"), TEXT("URemoteStorage"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteStorage);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
