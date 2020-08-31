// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGSClientDeny;
struct FGSClientApprove;
struct FValidateAuthTicketResponse;
struct FGSClientGroupStatus;
struct FGSPolicyResponse;
struct FComputeNewPlayerCompatibilityResult;
struct FAssociateWithClanResult;
#ifdef STEAMCORE_GameServerTypes_generated_h
#error "GameServerTypes.generated.h already included, missing '#pragma once' in GameServerTypes.h"
#endif
#define STEAMCORE_GameServerTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServer_GameServerTypes_h_111_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSClientDeny_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGSClientDeny>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServer_GameServerTypes_h_95_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSClientApprove_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGSClientApprove>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServer_GameServerTypes_h_73_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FComputeNewPlayerCompatibilityResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FComputeNewPlayerCompatibilityResult>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServer_GameServerTypes_h_59_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAssociateWithClanResult_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FAssociateWithClanResult>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServer_GameServerTypes_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSClientGroupStatus_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGSClientGroupStatus>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServer_GameServerTypes_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGSPolicyResponse_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGSPolicyResponse>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServer_GameServerTypes_h_137_DELEGATE \
struct _Script_SteamCore_eventOnGSClientDeny_Parms \
{ \
	FGSClientDeny data; \
}; \
static inline void FOnGSClientDeny_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientDeny, FGSClientDeny const& data) \
{ \
	_Script_SteamCore_eventOnGSClientDeny_Parms Parms; \
	Parms.data=data; \
	OnGSClientDeny.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServer_GameServerTypes_h_136_DELEGATE \
struct _Script_SteamCore_eventOnGSClientApprove_Parms \
{ \
	FGSClientApprove data; \
}; \
static inline void FOnGSClientApprove_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientApprove, FGSClientApprove const& data) \
{ \
	_Script_SteamCore_eventOnGSClientApprove_Parms Parms; \
	Parms.data=data; \
	OnGSClientApprove.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServer_GameServerTypes_h_135_DELEGATE \
struct _Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms \
{ \
	FValidateAuthTicketResponse data; \
}; \
static inline void FOnGSValidateAuthTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGSValidateAuthTicketResponse, FValidateAuthTicketResponse const& data) \
{ \
	_Script_SteamCore_eventOnGSValidateAuthTicketResponse_Parms Parms; \
	Parms.data=data; \
	OnGSValidateAuthTicketResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServer_GameServerTypes_h_134_DELEGATE \
struct _Script_SteamCore_eventOnGSClientGroupStatus_Parms \
{ \
	FGSClientGroupStatus data; \
}; \
static inline void FOnGSClientGroupStatus_DelegateWrapper(const FMulticastScriptDelegate& OnGSClientGroupStatus, FGSClientGroupStatus const& data) \
{ \
	_Script_SteamCore_eventOnGSClientGroupStatus_Parms Parms; \
	Parms.data=data; \
	OnGSClientGroupStatus.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServer_GameServerTypes_h_133_DELEGATE \
struct _Script_SteamCore_eventOnGSPolicyResponse_Parms \
{ \
	FGSPolicyResponse data; \
}; \
static inline void FOnGSPolicyResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGSPolicyResponse, FGSPolicyResponse const& data) \
{ \
	_Script_SteamCore_eventOnGSPolicyResponse_Parms Parms; \
	Parms.data=data; \
	OnGSPolicyResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServer_GameServerTypes_h_131_DELEGATE \
struct _Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms \
{ \
	FComputeNewPlayerCompatibilityResult data; \
	bool bWasSuccessful; \
}; \
static inline void FOnComputeNewPlayerCompatibility_DelegateWrapper(const FScriptDelegate& OnComputeNewPlayerCompatibility, FComputeNewPlayerCompatibilityResult const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnComputeNewPlayerCompatibility_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnComputeNewPlayerCompatibility.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServer_GameServerTypes_h_130_DELEGATE \
struct _Script_SteamCore_eventOnAssociateWithClan_Parms \
{ \
	FAssociateWithClanResult data; \
	bool bWasSuccessful; \
}; \
static inline void FOnAssociateWithClan_DelegateWrapper(const FScriptDelegate& OnAssociateWithClan, FAssociateWithClanResult const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnAssociateWithClan_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnAssociateWithClan.ProcessDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_GameServer_GameServerTypes_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
