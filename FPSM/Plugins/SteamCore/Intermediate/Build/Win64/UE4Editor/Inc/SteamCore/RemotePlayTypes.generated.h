// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamRemotePlaySessionDisconnected;
struct FSteamRemotePlaySessionConnected;
#ifdef STEAMCORE_RemotePlayTypes_generated_h
#error "RemotePlayTypes.generated.h already included, missing '#pragma once' in RemotePlayTypes.h"
#endif
#define STEAMCORE_RemotePlayTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemotePlay_RemotePlayTypes_h_56_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionDisconnected_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamRemotePlaySessionDisconnected>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemotePlay_RemotePlayTypes_h_37_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamRemotePlaySessionConnected_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamRemotePlaySessionConnected>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemotePlay_RemotePlayTypes_h_78_DELEGATE \
struct _Script_SteamCore_eventOnSteamRemotePlaySessionDisconnected_Parms \
{ \
	FSteamRemotePlaySessionDisconnected data; \
}; \
static inline void FOnSteamRemotePlaySessionDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionDisconnected, FSteamRemotePlaySessionDisconnected const& data) \
{ \
	_Script_SteamCore_eventOnSteamRemotePlaySessionDisconnected_Parms Parms; \
	Parms.data=data; \
	OnSteamRemotePlaySessionDisconnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemotePlay_RemotePlayTypes_h_77_DELEGATE \
struct _Script_SteamCore_eventOnSteamRemotePlaySessionConnected_Parms \
{ \
	FSteamRemotePlaySessionConnected data; \
}; \
static inline void FOnSteamRemotePlaySessionConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamRemotePlaySessionConnected, FSteamRemotePlaySessionConnected const& data) \
{ \
	_Script_SteamCore_eventOnSteamRemotePlaySessionConnected_Parms Parms; \
	Parms.data=data; \
	OnSteamRemotePlaySessionConnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_RemotePlay_RemotePlayTypes_h


#define FOREACH_ENUM_ESTEAMCOREDEVICEFORMFACTOR(op) \
	op(ESteamCoreDeviceFormFactor::Unknown) \
	op(ESteamCoreDeviceFormFactor::Phone) \
	op(ESteamCoreDeviceFormFactor::Tablet) \
	op(ESteamCoreDeviceFormFactor::Computer) \
	op(ESteamCoreDeviceFormFactor::TV) 

enum class ESteamCoreDeviceFormFactor : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCoreDeviceFormFactor>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
