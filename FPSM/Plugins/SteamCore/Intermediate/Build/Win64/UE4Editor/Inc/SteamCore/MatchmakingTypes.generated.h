// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FBlueprintSessionResult;
struct FJoinLobbyData;
struct FCreateLobbyData;
struct FLobbyMatchList;
struct FLobbyKickedData;
struct FLobbyInviteData;
struct FLobbyGameCreated;
struct FLobbyEnterData;
struct FLobbyDataUpdate;
struct FLobbyChatUpdate;
struct FLobbyChatMsg;
struct FFavoritesListChanged;
struct FFavoritesListAccountsUpdated;
#ifdef STEAMCORE_MatchmakingTypes_generated_h
#error "MatchmakingTypes.generated.h already included, missing '#pragma once' in MatchmakingTypes.h"
#endif
#define STEAMCORE_MatchmakingTypes_generated_h

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_308_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FJoinLobbyData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FJoinLobbyData>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_291_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FCreateLobbyData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FCreateLobbyData>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_276_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyMatchList_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FLobbyMatchList>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_257_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyKickedData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FLobbyKickedData>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_238_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyInviteData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FLobbyInviteData>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyGameCreated_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FLobbyGameCreated>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_198_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyEnterData_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FLobbyEnterData>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_179_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyDataUpdate_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FLobbyDataUpdate>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_151_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyChatUpdate_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FLobbyChatUpdate>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_130_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLobbyChatMsg_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FLobbyChatMsg>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_97_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFavoritesListChanged_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FFavoritesListChanged>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_82_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FFavoritesListAccountsUpdated_Statics; \
	STEAMCORE_API static class UScriptStruct* StaticStruct();


template<> STEAMCORE_API UScriptStruct* StaticStruct<struct FFavoritesListAccountsUpdated>();

#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_345_DELEGATE \
struct _Script_SteamCore_eventOnFindSessions_Parms \
{ \
	TArray<FBlueprintSessionResult> data; \
	bool bWasSuccessful; \
}; \
static inline void FOnFindSessions_DelegateWrapper(const FScriptDelegate& OnFindSessions, TArray<FBlueprintSessionResult> const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnFindSessions_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnFindSessions.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_344_DELEGATE \
struct _Script_SteamCore_eventOnJoinLobby_Parms \
{ \
	FJoinLobbyData data; \
	bool bWasSuccessful; \
}; \
static inline void FOnJoinLobby_DelegateWrapper(const FScriptDelegate& OnJoinLobby, FJoinLobbyData const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnJoinLobby_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnJoinLobby.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_343_DELEGATE \
struct _Script_SteamCore_eventOnCreateLobby_Parms \
{ \
	FCreateLobbyData data; \
	bool bWasSuccessful; \
}; \
static inline void FOnCreateLobby_DelegateWrapper(const FScriptDelegate& OnCreateLobby, FCreateLobbyData const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnCreateLobby_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnCreateLobby.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_342_DELEGATE \
struct _Script_SteamCore_eventOnRequestLobbyList_Parms \
{ \
	FLobbyMatchList data; \
	bool bWasSuccessful; \
}; \
static inline void FOnRequestLobbyList_DelegateWrapper(const FScriptDelegate& OnRequestLobbyList, FLobbyMatchList const& data, bool bWasSuccessful) \
{ \
	_Script_SteamCore_eventOnRequestLobbyList_Parms Parms; \
	Parms.data=data; \
	Parms.bWasSuccessful=bWasSuccessful ? true : false; \
	OnRequestLobbyList.ProcessDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_340_DELEGATE \
struct _Script_SteamCore_eventOnLobbyKicked_Parms \
{ \
	FLobbyKickedData data; \
}; \
static inline void FOnLobbyKicked_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyKicked, FLobbyKickedData const& data) \
{ \
	_Script_SteamCore_eventOnLobbyKicked_Parms Parms; \
	Parms.data=data; \
	OnLobbyKicked.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_339_DELEGATE \
struct _Script_SteamCore_eventOnLobbyInvite_Parms \
{ \
	FLobbyInviteData data; \
}; \
static inline void FOnLobbyInvite_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyInvite, FLobbyInviteData const& data) \
{ \
	_Script_SteamCore_eventOnLobbyInvite_Parms Parms; \
	Parms.data=data; \
	OnLobbyInvite.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_338_DELEGATE \
struct _Script_SteamCore_eventOnLobbyGameCreated_Parms \
{ \
	FLobbyGameCreated data; \
}; \
static inline void FOnLobbyGameCreated_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyGameCreated, FLobbyGameCreated const& data) \
{ \
	_Script_SteamCore_eventOnLobbyGameCreated_Parms Parms; \
	Parms.data=data; \
	OnLobbyGameCreated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_337_DELEGATE \
struct _Script_SteamCore_eventOnLobbyEnter_Parms \
{ \
	FLobbyEnterData data; \
}; \
static inline void FOnLobbyEnter_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyEnter, FLobbyEnterData const& data) \
{ \
	_Script_SteamCore_eventOnLobbyEnter_Parms Parms; \
	Parms.data=data; \
	OnLobbyEnter.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_336_DELEGATE \
struct _Script_SteamCore_eventOnLobbyDataUpdate_Parms \
{ \
	FLobbyDataUpdate data; \
}; \
static inline void FOnLobbyDataUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyDataUpdate, FLobbyDataUpdate data) \
{ \
	_Script_SteamCore_eventOnLobbyDataUpdate_Parms Parms; \
	Parms.data=data; \
	OnLobbyDataUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_335_DELEGATE \
struct _Script_SteamCore_eventOnLobbyChatUpdate_Parms \
{ \
	FLobbyChatUpdate data; \
}; \
static inline void FOnLobbyChatUpdate_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatUpdate, FLobbyChatUpdate const& data) \
{ \
	_Script_SteamCore_eventOnLobbyChatUpdate_Parms Parms; \
	Parms.data=data; \
	OnLobbyChatUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_334_DELEGATE \
struct _Script_SteamCore_eventOnLobbyChatMsg_Parms \
{ \
	FLobbyChatMsg data; \
}; \
static inline void FOnLobbyChatMsg_DelegateWrapper(const FMulticastScriptDelegate& OnLobbyChatMsg, FLobbyChatMsg const& data) \
{ \
	_Script_SteamCore_eventOnLobbyChatMsg_Parms Parms; \
	Parms.data=data; \
	OnLobbyChatMsg.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_333_DELEGATE \
struct _Script_SteamCore_eventOnFavoritesListChanged_Parms \
{ \
	FFavoritesListChanged data; \
}; \
static inline void FOnFavoritesListChanged_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListChanged, FFavoritesListChanged const& data) \
{ \
	_Script_SteamCore_eventOnFavoritesListChanged_Parms Parms; \
	Parms.data=data; \
	OnFavoritesListChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h_332_DELEGATE \
struct _Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms \
{ \
	FFavoritesListAccountsUpdated data; \
}; \
static inline void FOnFavoritesListAccountsUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnFavoritesListAccountsUpdated, FFavoritesListAccountsUpdated const& data) \
{ \
	_Script_SteamCore_eventOnFavoritesListAccountsUpdated_Parms Parms; \
	Parms.data=data; \
	OnFavoritesListAccountsUpdated.ProcessMulticastDelegate<UObject>(&Parms); \
}


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_SteamCore_Source_SteamCore_Public_Matchmaking_MatchmakingTypes_h


#define FOREACH_ENUM_ESTEAMFAVORITEFLAGS(op) \
	op(ESteamFavoriteFlags::None) \
	op(ESteamFavoriteFlags::Favorite) \
	op(ESteamFavoriteFlags::History) 

enum class ESteamFavoriteFlags : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamFavoriteFlags>();

#define FOREACH_ENUM_ESTEAMCHATMEMBERSTATECHANGE(op) \
	op(ESteamChatMemberStateChange::None) \
	op(ESteamChatMemberStateChange::Entered) \
	op(ESteamChatMemberStateChange::Left) \
	op(ESteamChatMemberStateChange::Disconnected) \
	op(ESteamChatMemberStateChange::Kicked) \
	op(ESteamChatMemberStateChange::Banned) 

enum class ESteamChatMemberStateChange : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamChatMemberStateChange>();

#define FOREACH_ENUM_ESTEAMLOBBYDISTANCEFILTER(op) \
	op(ESteamLobbyDistanceFilter::Close) \
	op(ESteamLobbyDistanceFilter::Default) \
	op(ESteamLobbyDistanceFilter::Far) \
	op(ESteamLobbyDistanceFilter::Worldwide) 

enum class ESteamLobbyDistanceFilter : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyDistanceFilter>();

#define FOREACH_ENUM_ESTEAMLOBBYCOMPARISON(op) \
	op(ESteamLobbyComparison::EqualToOrLessThan) \
	op(ESteamLobbyComparison::LessThan) \
	op(ESteamLobbyComparison::Equal) \
	op(ESteamLobbyComparison::GreaterThan) \
	op(ESteamLobbyComparison::EqualToOrGreaterThan) \
	op(ESteamLobbyComparison::NotEqual) 

enum class ESteamLobbyComparison : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyComparison>();

#define FOREACH_ENUM_ESTEAMLOBBYTYPE(op) \
	op(ESteamLobbyType::Private) \
	op(ESteamLobbyType::FriendsOnly) \
	op(ESteamLobbyType::Public) \
	op(ESteamLobbyType::Invisible) 

enum class ESteamLobbyType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamLobbyType>();

#define FOREACH_ENUM_ESTEAMSESSIONFINDTYPE(op) \
	op(ESteamSessionFindType::Listen) \
	op(ESteamSessionFindType::Dedicated) 

enum class ESteamSessionFindType : uint8;
template<> STEAMCORE_API UEnum* StaticEnum<ESteamSessionFindType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
