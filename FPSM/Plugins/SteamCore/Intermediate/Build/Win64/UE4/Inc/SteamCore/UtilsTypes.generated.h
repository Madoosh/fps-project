// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSteamShutdown;
struct FLowBatteryPower;
struct FIPCountry;
struct FGamepadTextInputDismissed;
struct FCheckFileSignature;
#ifdef STEAMCORE_UtilsTypes_generated_h
#error "UtilsTypes.generated.h already included, missing '#pragma once' in UtilsTypes.h"
#endif
#define STEAMCORE_UtilsTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Utils_UtilsTypes_h_115_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamShutdown_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamShutdown>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Utils_UtilsTypes_h_105_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIPCountry_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FIPCountry>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Utils_UtilsTypes_h_90_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLowBatteryPower_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FLowBatteryPower>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Utils_UtilsTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGamepadTextInputDismissed_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGamepadTextInputDismissed>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Utils_UtilsTypes_h_58_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCheckFileSignature_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FCheckFileSignature>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Utils_UtilsTypes_h_129_DELEGATE \
struct _Script_SteamCore_eventOnSteamShutdown_Parms \
{ \
	FSteamShutdown data; \
}; \
static inline void FOnSteamShutdown_DelegateWrapper(const FMulticastScriptDelegate& OnSteamShutdown, FSteamShutdown const& data) \
{ \
	_Script_SteamCore_eventOnSteamShutdown_Parms Parms; \
	Parms.data=data; \
	OnSteamShutdown.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Utils_UtilsTypes_h_128_DELEGATE \
struct _Script_SteamCore_eventOnLowBatteryPower_Parms \
{ \
	FLowBatteryPower data; \
}; \
static inline void FOnLowBatteryPower_DelegateWrapper(const FMulticastScriptDelegate& OnLowBatteryPower, FLowBatteryPower const& data) \
{ \
	_Script_SteamCore_eventOnLowBatteryPower_Parms Parms; \
	Parms.data=data; \
	OnLowBatteryPower.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Utils_UtilsTypes_h_127_DELEGATE \
struct _Script_SteamCore_eventOnIPCountry_Parms \
{ \
	FIPCountry data; \
}; \
static inline void FOnIPCountry_DelegateWrapper(const FMulticastScriptDelegate& OnIPCountry, FIPCountry const& data) \
{ \
	_Script_SteamCore_eventOnIPCountry_Parms Parms; \
	Parms.data=data; \
	OnIPCountry.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Utils_UtilsTypes_h_126_DELEGATE \
struct _Script_SteamCore_eventOnGamepadTextInputDismissed_Parms \
{ \
	FGamepadTextInputDismissed data; \
}; \
static inline void FOnGamepadTextInputDismissed_DelegateWrapper(const FMulticastScriptDelegate& OnGamepadTextInputDismissed, FGamepadTextInputDismissed const& data) \
{ \
	_Script_SteamCore_eventOnGamepadTextInputDismissed_Parms Parms; \
	Parms.data=data; \
	OnGamepadTextInputDismissed.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Utils_UtilsTypes_h_125_DELEGATE \
struct _Script_SteamCore_eventOnCheckFileSignature_Parms \
{ \
	FCheckFileSignature data; \
}; \
static inline void FOnCheckFileSignature_DelegateWrapper(const FMulticastScriptDelegate& OnCheckFileSignature, FCheckFileSignature const& data) \
{ \
	_Script_SteamCore_eventOnCheckFileSignature_Parms Parms; \
	Parms.data=data; \
	OnCheckFileSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_Utils_UtilsTypes_h


#define FOREACH_ENUM_ESTEAMUNIVERSE(op) \
	op(ESteamUniverse::Invalid) \
	op(ESteamUniverse::Public) \
	op(ESteamUniverse::Beta) \
	op(ESteamUniverse::Internal) \
	op(ESteamUniverse::Dev) \
	op(ESteamUniverse::Max) 

enum class ESteamUniverse : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamUniverse>();

#define FOREACH_ENUM_ESTEAMNOTIFICATIONPOSITION(op) \
	op(ESteamNotificationPosition::TopLeft) \
	op(ESteamNotificationPosition::TopRight) \
	op(ESteamNotificationPosition::BottomLeft) \
	op(ESteamNotificationPosition::BottomRight) 

enum class ESteamNotificationPosition : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamNotificationPosition>();

#define FOREACH_ENUM_ESTEAMGAMEPADTEXTINPUTMODE(op) \
	op(ESteamGamepadTextInputMode::Normal) \
	op(ESteamGamepadTextInputMode::Password) 

enum class ESteamGamepadTextInputMode : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamGamepadTextInputMode>();

#define FOREACH_ENUM_ESTEAMGAMEPADTEXTINPUTLINEMODE(op) \
	op(ESteamGamepadTextInputLineMode::SingleLine) \
	op(ESteamGamepadTextInputLineMode::MultipleLines) 

enum class ESteamGamepadTextInputLineMode : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamGamepadTextInputLineMode>();

#define FOREACH_ENUM_ESTEAMCHECKFILESIGNATURE(op) \
	op(ESteamCheckFileSignature::InvalidSignature) \
	op(ESteamCheckFileSignature::ValidSignature) \
	op(ESteamCheckFileSignature::FileNotFound) \
	op(ESteamCheckFileSignature::NoSignaturesFoundForThisApp) \
	op(ESteamCheckFileSignature::NoSignaturesFoundForThisFile) 

enum class ESteamCheckFileSignature : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamCheckFileSignature>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
