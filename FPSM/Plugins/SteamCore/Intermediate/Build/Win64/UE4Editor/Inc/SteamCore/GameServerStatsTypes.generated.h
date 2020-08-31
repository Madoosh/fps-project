// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGSStatsUnloaded;
struct FGSStatsStored;
struct FGSStatsReceived;
#ifdef STEAMCORE_GameServerStatsTypes_generated_h
#error "GameServerStatsTypes.generated.h already included, missing '#pragma once' in GameServerStatsTypes.h"
#endif
#define STEAMCORE_GameServerStatsTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServerStats_GameServerStatsTypes_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSStatsUnloaded_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGSStatsUnloaded>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServerStats_GameServerStatsTypes_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSStatsStored_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGSStatsStored>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServerStats_GameServerStatsTypes_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSStatsReceived_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGSStatsReceived>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServerStats_GameServerStatsTypes_h_75_DELEGATE \
struct _Script_SteamCore_eventOnGSStatsUnloaded_Parms \
{ \
	FGSStatsUnloaded data; \
}; \
static inline void FOnGSStatsUnloaded_DelegateWrapper(const FMulticastScriptDelegate& OnGSStatsUnloaded, FGSStatsUnloaded const& data) \
{ \
	_Script_SteamCore_eventOnGSStatsUnloaded_Parms Parms; \
	Parms.data=data; \
	OnGSStatsUnloaded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServerStats_GameServerStatsTypes_h_73_DELEGATE \
struct _Script_SteamCore_eventOnServerStoreUserStats_Parms \
{ \
	FGSStatsStored data; \
	bool bWasSuccessful; \
}; \
static inline void FOnServerStoreUserStats_DelegateWrapper(const FScriptDelegate& OnServerStoreUserStats, FGSStatsStored const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnServerStoreUserStats_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnServerStoreUserStats.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServerStats_GameServerStatsTypes_h_72_DELEGATE \
struct _Script_SteamCore_eventOnServerRequestUserStats_Parms \
{ \
	FGSStatsReceived data; \
	bool bWasSuccessful; \
}; \
static inline void FOnServerRequestUserStats_DelegateWrapper(const FScriptDelegate& OnServerRequestUserStats, FGSStatsReceived const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnServerRequestUserStats_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnServerRequestUserStats.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServerStats_GameServerStatsTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
