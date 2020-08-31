// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStoreAuthURLResponse;
struct FEncryptedAppTicketResponse;
struct FValidateAuthTicketResponse;
struct FSteamServersDisconnected;
struct FSteamServerConnectFailure;
struct FSteamServersConnected;
struct FMicroTxnAuthorizationResponse;
struct FLicensesUpdated;
struct FIPCFailure;
struct FGetAuthSessionTicketResponse;
struct FGameWebCallback;
struct FClientGameServerDeny;
#ifdef STEAMCORE_UserTypes_generated_h
#error "UserTypes.generated.h already included, missing '#pragma once' in UserTypes.h"
#endif
#define STEAMCORE_UserTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_190_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStoreAuthURLResponse_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FStoreAuthURLResponse>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_176_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FEncryptedAppTicketResponse_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FEncryptedAppTicketResponse>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_162_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamServersDisconnected_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamServersDisconnected>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_146_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamServerConnectFailure_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamServerConnectFailure>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_135_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSteamServersConnected_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FSteamServersConnected>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_117_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMicroTxnAuthorizationResponse_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FMicroTxnAuthorizationResponse>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_106_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLicensesUpdated_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FLicensesUpdated>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_92_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FIPCFailure_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FIPCFailure>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_76_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGetAuthSessionTicketResponse_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGetAuthSessionTicketResponse>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_62_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FGameWebCallback_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FGameWebCallback>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_40_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FClientGameServerDeny_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FClientGameServerDeny>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_220_DELEGATE \
struct _Script_SteamCore_eventOnStoreAuthURLResponse_Parms \
{ \
	FStoreAuthURLResponse data; \
	bool bWasSuccessful; \
}; \
static inline void FOnStoreAuthURLResponse_DelegateWrapper(const FScriptDelegate& OnStoreAuthURLResponse, FStoreAuthURLResponse const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnStoreAuthURLResponse_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnStoreAuthURLResponse.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_219_DELEGATE \
struct _Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms \
{ \
	FEncryptedAppTicketResponse data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestEncryptedAppTicket_DelegateWrapper(const FScriptDelegate& OnRequestEncryptedAppTicket, FEncryptedAppTicketResponse const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestEncryptedAppTicket_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestEncryptedAppTicket.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_217_DELEGATE \
struct _Script_SteamCore_eventOnRequestEncryptedAppTicketResponse_Parms \
{ \
	FEncryptedAppTicketResponse data; \
}; \
static inline void FOnRequestEncryptedAppTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEncryptedAppTicketResponse, FEncryptedAppTicketResponse const& data) \
{ \
	_Script_SteamCore_eventOnRequestEncryptedAppTicketResponse_Parms Parms; \
	Parms.data=data; \
	OnRequestEncryptedAppTicketResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_216_DELEGATE \
struct _Script_SteamCore_eventOnValidateAuthTicketResponse_Parms \
{ \
	FValidateAuthTicketResponse data; \
}; \
static inline void FOnValidateAuthTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnValidateAuthTicketResponse, FValidateAuthTicketResponse const& data) \
{ \
	_Script_SteamCore_eventOnValidateAuthTicketResponse_Parms Parms; \
	Parms.data=data; \
	OnValidateAuthTicketResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_215_DELEGATE \
struct _Script_SteamCore_eventOnSteamServersDisconnected_Parms \
{ \
	FSteamServersDisconnected data; \
}; \
static inline void FOnSteamServersDisconnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServersDisconnected, FSteamServersDisconnected const& data) \
{ \
	_Script_SteamCore_eventOnSteamServersDisconnected_Parms Parms; \
	Parms.data=data; \
	OnSteamServersDisconnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_214_DELEGATE \
struct _Script_SteamCore_eventOnSteamServerConnectFailure_Parms \
{ \
	FSteamServerConnectFailure data; \
}; \
static inline void FOnSteamServerConnectFailure_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServerConnectFailure, FSteamServerConnectFailure const& data) \
{ \
	_Script_SteamCore_eventOnSteamServerConnectFailure_Parms Parms; \
	Parms.data=data; \
	OnSteamServerConnectFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_213_DELEGATE \
struct _Script_SteamCore_eventOnSteamServersConnected_Parms \
{ \
	FSteamServersConnected data; \
}; \
static inline void FOnSteamServersConnected_DelegateWrapper(const FMulticastScriptDelegate& OnSteamServersConnected, FSteamServersConnected const& data) \
{ \
	_Script_SteamCore_eventOnSteamServersConnected_Parms Parms; \
	Parms.data=data; \
	OnSteamServersConnected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_212_DELEGATE \
struct _Script_SteamCore_eventOnMicroTxnAuthorizationResponse_Parms \
{ \
	FMicroTxnAuthorizationResponse data; \
}; \
static inline void FOnMicroTxnAuthorizationResponse_DelegateWrapper(const FMulticastScriptDelegate& OnMicroTxnAuthorizationResponse, FMicroTxnAuthorizationResponse const& data) \
{ \
	_Script_SteamCore_eventOnMicroTxnAuthorizationResponse_Parms Parms; \
	Parms.data=data; \
	OnMicroTxnAuthorizationResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_211_DELEGATE \
struct _Script_SteamCore_eventOnLicensesUpdated_Parms \
{ \
	FLicensesUpdated data; \
}; \
static inline void FOnLicensesUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnLicensesUpdated, FLicensesUpdated const& data) \
{ \
	_Script_SteamCore_eventOnLicensesUpdated_Parms Parms; \
	Parms.data=data; \
	OnLicensesUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_210_DELEGATE \
struct _Script_SteamCore_eventOnIPCFailure_Parms \
{ \
	FIPCFailure data; \
}; \
static inline void FOnIPCFailure_DelegateWrapper(const FMulticastScriptDelegate& OnIPCFailure, FIPCFailure const& data) \
{ \
	_Script_SteamCore_eventOnIPCFailure_Parms Parms; \
	Parms.data=data; \
	OnIPCFailure.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_209_DELEGATE \
struct _Script_SteamCore_eventOnGetAuthSessionTicketResponse_Parms \
{ \
	FGetAuthSessionTicketResponse data; \
}; \
static inline void FOnGetAuthSessionTicketResponse_DelegateWrapper(const FMulticastScriptDelegate& OnGetAuthSessionTicketResponse, FGetAuthSessionTicketResponse const& data) \
{ \
	_Script_SteamCore_eventOnGetAuthSessionTicketResponse_Parms Parms; \
	Parms.data=data; \
	OnGetAuthSessionTicketResponse.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_208_DELEGATE \
struct _Script_SteamCore_eventOnGameWebCallback_Parms \
{ \
	FGameWebCallback data; \
}; \
static inline void FOnGameWebCallback_DelegateWrapper(const FMulticastScriptDelegate& OnGameWebCallback, FGameWebCallback const& data) \
{ \
	_Script_SteamCore_eventOnGameWebCallback_Parms Parms; \
	Parms.data=data; \
	OnGameWebCallback.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h_207_DELEGATE \
struct _Script_SteamCore_eventOnClientGameServerDeny_Parms \
{ \
	FClientGameServerDeny data; \
}; \
static inline void FOnClientGameServerDeny_DelegateWrapper(const FMulticastScriptDelegate& OnClientGameServerDeny, FClientGameServerDeny const& data) \
{ \
	_Script_SteamCore_eventOnClientGameServerDeny_Parms Parms; \
	Parms.data=data; \
	OnClientGameServerDeny.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_User_UserTypes_h


#define FOREACH_ENUM_ESTEAMFAILURETYPE(op) \
	op(ESteamFailureType::FlushedCallbackQueue) \
	op(ESteamFailureType::PipeFail) 

enum class ESteamFailureType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamFailureType>();

#define FOREACH_ENUM_ESTEAMVOICERESULT(op) \
	op(ESteamVoiceResult::OK) \
	op(ESteamVoiceResult::NotInitialized) \
	op(ESteamVoiceResult::NotRecording) \
	op(ESteamVoiceResult::NoData) \
	op(ESteamVoiceResult::BufferTooSmall) \
	op(ESteamVoiceResult::DataCorrupted) \
	op(ESteamVoiceResult::Restricted) \
	op(ESteamVoiceResult::UnsupportedCodec) \
	op(ESteamVoiceResult::ReceiverOutOfDate) \
	op(ESteamVoiceResult::ReceiverDidNotAnswer) 

enum class ESteamVoiceResult : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamVoiceResult>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
