// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFileDetailsResult;
struct FDLCInstalled;
#ifdef STEAMCORE_AppsTypes_generated_h
#error "AppsTypes.generated.h already included, missing '#pragma once' in AppsTypes.h"
#endif
#define STEAMCORE_AppsTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsTypes_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDLCInstalled_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FDLCInstalled>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsTypes_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFileDetailsResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FFileDetailsResult>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsTypes_h_67_DELEGATE \
struct _Script_SteamCore_eventOnFileDetailsResultDelegate_Parms \
{ \
	FFileDetailsResult data; \
}; \
static inline void FOnFileDetailsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnFileDetailsResultDelegate, FFileDetailsResult const& data) \
{ \
	_Script_SteamCore_eventOnFileDetailsResultDelegate_Parms Parms; \
	Parms.data=data; \
	OnFileDetailsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsTypes_h_66_DELEGATE \
struct _Script_SteamCore_eventOnDLCInstalled_Parms \
{ \
	FDLCInstalled data; \
}; \
static inline void FOnDLCInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnDLCInstalled, FDLCInstalled const& data) \
{ \
	_Script_SteamCore_eventOnDLCInstalled_Parms Parms; \
	Parms.data=data; \
	OnDLCInstalled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsTypes_h_64_DELEGATE \
struct _Script_SteamCore_eventOnFileDetailsResult_Parms \
{ \
	FFileDetailsResult data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFileDetailsResult_DelegateWrapper(const FScriptDelegate& OnFileDetailsResult, FFileDetailsResult const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFileDetailsResult_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFileDetailsResult.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_Apps_AppsTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
