// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGetVideoURLResult;
struct FGetOPFSettingsResult;
#ifdef STEAMCORE_VideoTypes_generated_h
#error "VideoTypes.generated.h already included, missing '#pragma once' in VideoTypes.h"
#endif
#define STEAMCORE_VideoTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_VideoTypes_h_48_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGetVideoURLResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGetVideoURLResult>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_VideoTypes_h_31_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGetOPFSettingsResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGetOPFSettingsResult>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_VideoTypes_h_68_DELEGATE \
struct _Script_SteamCore_eventOnGetVideoURLResult_Parms \
{ \
	FGetVideoURLResult data; \
}; \
static inline void FOnGetVideoURLResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetVideoURLResult, FGetVideoURLResult const& data) \
{ \
	_Script_SteamCore_eventOnGetVideoURLResult_Parms Parms; \
	Parms.data=data; \
	OnGetVideoURLResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_VideoTypes_h_67_DELEGATE \
struct _Script_SteamCore_eventOnGetOPFSettingsResult_Parms \
{ \
	FGetOPFSettingsResult data; \
}; \
static inline void FOnGetOPFSettingsResult_DelegateWrapper(const FMulticastScriptDelegate& OnGetOPFSettingsResult, FGetOPFSettingsResult const& data) \
{ \
	_Script_SteamCore_eventOnGetOPFSettingsResult_Parms Parms; \
	Parms.data=data; \
	OnGetOPFSettingsResult.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_Video_VideoTypes_h


#define FOREACH_ENUM_ESTEAMBROADCASTUPLOADRESULT(op) \
	op(ESteamBroadcastUploadResult::None) \
	op(ESteamBroadcastUploadResult::OK) \
	op(ESteamBroadcastUploadResult::InitFailed) \
	op(ESteamBroadcastUploadResult::FrameFailed) \
	op(ESteamBroadcastUploadResult::Timeout) \
	op(ESteamBroadcastUploadResult::BandwidthExceeded) \
	op(ESteamBroadcastUploadResult::LowFPS) \
	op(ESteamBroadcastUploadResult::MissingKeyFrames) \
	op(ESteamBroadcastUploadResult::NoConnection) \
	op(ESteamBroadcastUploadResult::RelayFailed) \
	op(ESteamBroadcastUploadResult::SettingsChanged) \
	op(ESteamBroadcastUploadResult::MissingAudio) \
	op(ESteamBroadcastUploadResult::TooFarBehind) \
	op(ESteamBroadcastUploadResult::TranscodeBehind) 

enum class ESteamBroadcastUploadResult : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamBroadcastUploadResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
