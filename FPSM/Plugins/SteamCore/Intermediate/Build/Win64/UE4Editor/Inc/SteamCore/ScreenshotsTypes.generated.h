// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FScreenshotRequested;
struct FScreenshotReady;
#ifdef STEAMCORE_ScreenshotsTypes_generated_h
#error "ScreenshotsTypes.generated.h already included, missing '#pragma once' in ScreenshotsTypes.h"
#endif
#define STEAMCORE_ScreenshotsTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Screenshots_ScreenshotsTypes_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScreenshotRequested_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FScreenshotRequested>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Screenshots_ScreenshotsTypes_h_45_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScreenshotReady_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FScreenshotReady>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Screenshots_ScreenshotsTypes_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FScreenshotHandle_Statics; \
	static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FScreenshotHandle>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Screenshots_ScreenshotsTypes_h_72_DELEGATE \
struct _Script_SteamCore_eventOnScreenshotRequested_Parms \
{ \
	FScreenshotRequested data; \
}; \
static inline void FOnScreenshotRequested_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotRequested, FScreenshotRequested const& data) \
{ \
	_Script_SteamCore_eventOnScreenshotRequested_Parms Parms; \
	Parms.data=data; \
	OnScreenshotRequested.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Screenshots_ScreenshotsTypes_h_71_DELEGATE \
struct _Script_SteamCore_eventOnScreenshotReady_Parms \
{ \
	FScreenshotReady data; \
}; \
static inline void FOnScreenshotReady_DelegateWrapper(const FMulticastScriptDelegate& OnScreenshotReady, FScreenshotReady const& data) \
{ \
	_Script_SteamCore_eventOnScreenshotReady_Parms Parms; \
	Parms.data=data; \
	OnScreenshotReady.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_Screenshots_ScreenshotsTypes_h


#define FOREACH_ENUM_ESTEAMVRSCREENSHOTTYPE(op) \
	op(ESteamVRScreenshotType::None) \
	op(ESteamVRScreenshotType::Mono) \
	op(ESteamVRScreenshotType::Stereo) \
	op(ESteamVRScreenshotType::MonoCubemap) \
	op(ESteamVRScreenshotType::MonoPanorama) \
	op(ESteamVRScreenshotType::StereoPanorama) 

enum class ESteamVRScreenshotType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamVRScreenshotType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
