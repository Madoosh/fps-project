// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FP2PSessionConnectFail;
struct FP2PSessionRequest;
#ifdef STEAMCORE_NetworkingTypes_generated_h
#error "NetworkingTypes.generated.h already included, missing '#pragma once' in NetworkingTypes.h"
#endif
#define STEAMCORE_NetworkingTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Networking_NetworkingTypes_h_77_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FP2PSessionConnectFail_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FP2PSessionConnectFail>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Networking_NetworkingTypes_h_64_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FP2PSessionRequest_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FP2PSessionRequest>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Networking_NetworkingTypes_h_35_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamP2PSessionState_Statics; \
	static class UScriptStruct* StaticStruct(); \
	FORCEINLINE static uint32 __PPO__bConnectionActive() { return STRUCT_OFFSET(FSteamP2PSessionState, bConnectionActive); } \
	FORCEINLINE static uint32 __PPO__bConnecting() { return STRUCT_OFFSET(FSteamP2PSessionState, bConnecting); } \
	FORCEINLINE static uint32 __PPO__P2PSessionError() { return STRUCT_OFFSET(FSteamP2PSessionState, P2PSessionError); } \
	FORCEINLINE static uint32 __PPO__bUsingRelay() { return STRUCT_OFFSET(FSteamP2PSessionState, bUsingRelay); } \
	FORCEINLINE static uint32 __PPO__BytesQueuedForSend() { return STRUCT_OFFSET(FSteamP2PSessionState, BytesQueuedForSend); } \
	FORCEINLINE static uint32 __PPO__PacketsQueuedForSend() { return STRUCT_OFFSET(FSteamP2PSessionState, PacketsQueuedForSend); } \
	FORCEINLINE static uint32 __PPO__RemoteIP() { return STRUCT_OFFSET(FSteamP2PSessionState, RemoteIP); } \
	FORCEINLINE static uint32 __PPO__RemotePort() { return STRUCT_OFFSET(FSteamP2PSessionState, RemotePort); }


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamP2PSessionState>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Networking_NetworkingTypes_h_93_DELEGATE \
struct _Script_SteamCore_eventOnP2PSessionConnectFail_Parms \
{ \
	FP2PSessionConnectFail data; \
}; \
static inline void FOnP2PSessionConnectFail_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionConnectFail, FP2PSessionConnectFail const& data) \
{ \
	_Script_SteamCore_eventOnP2PSessionConnectFail_Parms Parms; \
	Parms.data=data; \
	OnP2PSessionConnectFail.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Networking_NetworkingTypes_h_92_DELEGATE \
struct _Script_SteamCore_eventOnP2PSessionRequest_Parms \
{ \
	FP2PSessionRequest data; \
}; \
static inline void FOnP2PSessionRequest_DelegateWrapper(const FMulticastScriptDelegate& OnP2PSessionRequest, FP2PSessionRequest const& data) \
{ \
	_Script_SteamCore_eventOnP2PSessionRequest_Parms Parms; \
	Parms.data=data; \
	OnP2PSessionRequest.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_Networking_NetworkingTypes_h


#define FOREACH_ENUM_ESTEAMP2PSESSIONERROR(op) \
	op(ESteamP2PSessionError::None) \
	op(ESteamP2PSessionError::NotRunningApp) \
	op(ESteamP2PSessionError::NoRightsToApp) \
	op(ESteamP2PSessionError::DestinationNotLoggedIn) \
	op(ESteamP2PSessionError::Timeout) \
	op(ESteamP2PSessionError::Max) 

enum class ESteamP2PSessionError : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamP2PSessionError>();

#define FOREACH_ENUM_ESTEAMP2PSEND(op) \
	op(ESteamP2PSend::Unreliable) \
	op(ESteamP2PSend::UnreliableNoDelay) \
	op(ESteamP2PSend::Reliable) \
	op(ESteamP2PSend::ReliableWithBuffering) 

enum class ESteamP2PSend : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamP2PSend>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
