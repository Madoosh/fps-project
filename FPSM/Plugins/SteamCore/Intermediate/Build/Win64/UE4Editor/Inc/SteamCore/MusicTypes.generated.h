// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVolumeHasChanged;
struct FPlaybackStatusHasChanged;
#ifdef STEAMCORE_MusicTypes_generated_h
#error "MusicTypes.generated.h already included, missing '#pragma once' in MusicTypes.h"
#endif
#define STEAMCORE_MusicTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Music_MusicTypes_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVolumeHasChanged_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FVolumeHasChanged>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Music_MusicTypes_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FPlaybackStatusHasChanged_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FPlaybackStatusHasChanged>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Music_MusicTypes_h_55_DELEGATE \
struct _Script_SteamCore_eventOnVolumeHasChanged_Parms \
{ \
	FVolumeHasChanged data; \
}; \
static inline void FOnVolumeHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnVolumeHasChanged, FVolumeHasChanged const& data) \
{ \
	_Script_SteamCore_eventOnVolumeHasChanged_Parms Parms; \
	Parms.data=data; \
	OnVolumeHasChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Music_MusicTypes_h_54_DELEGATE \
struct _Script_SteamCore_eventOnPlaybackStatusHasChanged_Parms \
{ \
	FPlaybackStatusHasChanged data; \
}; \
static inline void FOnPlaybackStatusHasChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPlaybackStatusHasChanged, FPlaybackStatusHasChanged const& data) \
{ \
	_Script_SteamCore_eventOnPlaybackStatusHasChanged_Parms Parms; \
	Parms.data=data; \
	OnPlaybackStatusHasChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_Music_MusicTypes_h


#define FOREACH_ENUM_ESTEAMAUDIOPLAYBACKSTATUS(op) \
	op(ESteamAudioPlaybackStatus::Undefined) \
	op(ESteamAudioPlaybackStatus::Playing) \
	op(ESteamAudioPlaybackStatus::Paused) \
	op(ESteamAudioPlaybackStatus::Idle) 

enum class ESteamAudioPlaybackStatus : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamAudioPlaybackStatus>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
