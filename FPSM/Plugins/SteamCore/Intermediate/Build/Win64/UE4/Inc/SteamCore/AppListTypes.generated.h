// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamAppUninstalled;
struct FSteamAppInstalled;
#ifdef STEAMCORE_AppListTypes_generated_h
#error "AppListTypes.generated.h already included, missing '#pragma once' in AppListTypes.h"
#endif
#define STEAMCORE_AppListTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_AppList_AppListTypes_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamAppUninstalled_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamAppUninstalled>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_AppList_AppListTypes_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamAppInstalled_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamAppInstalled>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_AppList_AppListTypes_h_50_DELEGATE \
struct _Script_SteamCore_eventOnSteamAppUninstalled_Parms \
{ \
	FSteamAppUninstalled data; \
}; \
static inline void FOnSteamAppUninstalled_DelegateWrapper(const FMulticastScriptDelegate& OnSteamAppUninstalled, FSteamAppUninstalled const& data) \
{ \
	_Script_SteamCore_eventOnSteamAppUninstalled_Parms Parms; \
	Parms.data=data; \
	OnSteamAppUninstalled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_AppList_AppListTypes_h_49_DELEGATE \
struct _Script_SteamCore_eventOnSteamAppInstalled_Parms \
{ \
	FSteamAppInstalled data; \
}; \
static inline void FOnSteamAppInstalled_DelegateWrapper(const FMulticastScriptDelegate& OnSteamAppInstalled, FSteamAppInstalled const& data) \
{ \
	_Script_SteamCore_eventOnSteamAppInstalled_Parms Parms; \
	Parms.data=data; \
	OnSteamAppInstalled.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_AppList_AppListTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
