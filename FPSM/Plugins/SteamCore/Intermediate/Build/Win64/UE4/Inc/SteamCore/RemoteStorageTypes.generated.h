// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FRemoteStorageFileShareResult;
struct FRemoteStorageFileReadAsyncComplete;
struct FRemoteStorageFileWriteAsyncComplete;
struct FRemoteStoragePublishedFileSubscribed;
struct FRemoteStoragePublishedFileUnsubscribed;
struct FRemoteStorageSubscribePublishedFileResult;
struct FRemoteStorageUnsubscribePublishedFileResult;
#ifdef STEAMCORE_RemoteStorageTypes_generated_h
#error "RemoteStorageTypes.generated.h already included, missing '#pragma once' in RemoteStorageTypes.h"
#endif
#define STEAMCORE_RemoteStorageTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h_143_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileSubscribed_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStoragePublishedFileSubscribed>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h_127_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStoragePublishedFileUnsubscribed_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStoragePublishedFileUnsubscribed>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h_110_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageUnsubscribePublishedFileResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageUnsubscribePublishedFileResult>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageFileShareResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageFileShareResult>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h_70_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageFileReadAsyncComplete_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageFileReadAsyncComplete>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRemoteStorageFileWriteAsyncComplete_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FRemoteStorageFileWriteAsyncComplete>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h_38_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUGCFileWriteStreamHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FUGCFileWriteStreamHandle>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h_167_DELEGATE \
struct _Script_SteamCore_eventOnFileShareAsync_Parms \
{ \
	FRemoteStorageFileShareResult data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFileShareAsync_DelegateWrapper(const FScriptDelegate& OnFileShareAsync, FRemoteStorageFileShareResult const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFileShareAsync_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFileShareAsync.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h_166_DELEGATE \
struct _Script_SteamCore_eventOnFileReadAsync_Parms \
{ \
	FRemoteStorageFileReadAsyncComplete data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFileReadAsync_DelegateWrapper(const FScriptDelegate& OnFileReadAsync, FRemoteStorageFileReadAsyncComplete const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFileReadAsync_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFileReadAsync.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h_165_DELEGATE \
struct _Script_SteamCore_eventOnFileWriteAsync_Parms \
{ \
	FRemoteStorageFileWriteAsyncComplete data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFileWriteAsync_DelegateWrapper(const FScriptDelegate& OnFileWriteAsync, FRemoteStorageFileWriteAsyncComplete const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFileWriteAsync_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFileWriteAsync.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h_163_DELEGATE \
struct _Script_SteamCore_eventOnRemoteStoragePublishedFileSubscribed_Parms \
{ \
	FRemoteStoragePublishedFileSubscribed data; \
}; \
static inline void FOnRemoteStoragePublishedFileSubscribed_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileSubscribed, FRemoteStoragePublishedFileSubscribed const& data) \
{ \
	_Script_SteamCore_eventOnRemoteStoragePublishedFileSubscribed_Parms Parms; \
	Parms.data=data; \
	OnRemoteStoragePublishedFileSubscribed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h_162_DELEGATE \
struct _Script_SteamCore_eventOnRemoteStoragePublishedFileUnsubscribed_Parms \
{ \
	FRemoteStoragePublishedFileUnsubscribed data; \
}; \
static inline void FOnRemoteStoragePublishedFileUnsubscribed_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStoragePublishedFileUnsubscribed, FRemoteStoragePublishedFileUnsubscribed const& data) \
{ \
	_Script_SteamCore_eventOnRemoteStoragePublishedFileUnsubscribed_Parms Parms; \
	Parms.data=data; \
	OnRemoteStoragePublishedFileUnsubscribed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h_161_DELEGATE \
struct _Script_SteamCore_eventOnRemoteStorageSubscribePublishedFileResult_Parms \
{ \
	FRemoteStorageSubscribePublishedFileResult data; \
}; \
static inline void FOnRemoteStorageSubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageSubscribePublishedFileResult, FRemoteStorageSubscribePublishedFileResult const& data) \
{ \
	_Script_SteamCore_eventOnRemoteStorageSubscribePublishedFileResult_Parms Parms; \
	Parms.data=data; \
	OnRemoteStorageSubscribePublishedFileResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h_160_DELEGATE \
struct _Script_SteamCore_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms \
{ \
	FRemoteStorageUnsubscribePublishedFileResult data; \
}; \
static inline void FOnRemoteStorageUnsubscribePublishedFileResult_DelegateWrapper(const FMulticastScriptDelegate& OnRemoteStorageUnsubscribePublishedFileResult, FRemoteStorageUnsubscribePublishedFileResult const& data) \
{ \
	_Script_SteamCore_eventOnRemoteStorageUnsubscribePublishedFileResult_Parms Parms; \
	Parms.data=data; \
	OnRemoteStorageUnsubscribePublishedFileResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemoteStorage_RemoteStorageTypes_h


#define FOREACH_ENUM_ESTEAMREMOTESTORAGEPLATFORM(op) \
	op(ESteamRemoteStoragePlatform::None) \
	op(ESteamRemoteStoragePlatform::Windows) \
	op(ESteamRemoteStoragePlatform::OSX) \
	op(ESteamRemoteStoragePlatform::PS3) \
	op(ESteamRemoteStoragePlatform::Linux) \
	op(ESteamRemoteStoragePlatform::Reserved2) \
	op(ESteamRemoteStoragePlatform::All) 

enum class ESteamRemoteStoragePlatform : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamRemoteStoragePlatform>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
