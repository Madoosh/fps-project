// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Friends/Friends.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriends() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UFriends_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UFriends();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamOverlayToStoreFlag();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamActivateGameOverlayToWebPageMode();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCounts__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingList__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCount__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFriendFlags();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamPersonaState();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFriendRelationship();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamFriendsGroupID();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserRestriction();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIsFollowing__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoom__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerList__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaName__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnClanOfficerListResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomCompletionResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnPersonaStateChange__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameServerChangeRequested__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameRichPresenceJoinRequested__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameOverlayActivated__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameLobbyJoinRequested__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedFriendChatMsg__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedClanChatMsg__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedChatLeave__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedChatJoin__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFriendRichPresenceUpdate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAvatarImageLoaded__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UFriends::execSetRichPresence)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::SetRichPresence(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSetPlayedWith)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUserPlayedWith);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::SetPlayedWith(Z_Param_steamIDUserPlayedWith);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSetPersonaName)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPersonaName(FOnSetPersonaName(Z_Param_Out_callback),Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSetListenForFriendsMessages)
	{
		P_GET_UBOOL(Z_Param_bInterceptEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::SetListenForFriendsMessages(Z_Param_bInterceptEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSetInGameVoiceSpeaking)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_UBOOL(Z_Param_bSpeaking);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::SetInGameVoiceSpeaking(Z_Param_steamIDUser,Z_Param_bSpeaking);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execSendClanChatMessage)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClanChat);
		P_GET_PROPERTY(FStrProperty,Z_Param_text);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::SendClanChatMessage(Z_Param_steamIDClanChat,Z_Param_text);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execRequestUserInformation)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_UBOOL(Z_Param_bRequireNameOnly);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::RequestUserInformation(Z_Param_steamIDUser,Z_Param_bRequireNameOnly);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execRequestFriendRichPresence)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::RequestFriendRichPresence(Z_Param_steamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execRequestClanOfficerList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestClanOfficerList(FOnRequestClanOfficerList(Z_Param_Out_callback),Z_Param_steamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execReplyToFriendMessage)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_GET_PROPERTY(FStrProperty,Z_Param_msgToSend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::ReplyToFriendMessage(Z_Param_steamIDFriend,Z_Param_msgToSend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execOpenClanChatWindowInSteam)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClanChat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::OpenClanChatWindowInSteam(Z_Param_steamIDClanChat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execLeaveClanChatRoom)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::LeaveClanChatRoom(Z_Param_steamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execJoinClanChatRoom)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinClanChatRoom(FOnJoinClanChatRoom(Z_Param_Out_callback),Z_Param_steamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsUserInSource)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsUserInSource(Z_Param_steamIDUser,Z_Param_steamIDSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsFollowing)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IsFollowing(FOnIsFollowing(Z_Param_Out_callback),Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsClanChatWindowOpenInSteam)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClanChat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsClanChatWindowOpenInSteam(Z_Param_steamIDClanChat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsClanOfficialGameGroup)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsClanOfficialGameGroup(Z_Param_steamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsClanPublic)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsClanPublic(Z_Param_steamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execIsClanChatAdmin)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClanChat);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::IsClanChatAdmin(Z_Param_steamIDClanChat,Z_Param_steamIDUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execInviteUserToGame)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_GET_PROPERTY(FStrProperty,Z_Param_connectString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::InviteUserToGame(Z_Param_steamIDFriend,Z_Param_connectString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execHasFriend)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_GET_TARRAY(ESteamFriendFlags,Z_Param_flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::HasFriend(Z_Param_steamIDFriend,Z_Param_flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetUserRestrictions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ESteamUserRestriction>*)Z_Param__Result=UFriends::GetUserRestrictions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetSmallFriendAvatar)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UFriends::GetSmallFriendAvatar(Z_Param_steamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPlayerNickname)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetPlayerNickname(Z_Param_steamIDPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPlayerNickname_Pure)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetPlayerNickname_Pure(Z_Param_steamIDPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPersonaState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamPersonaState*)Z_Param__Result=UFriends::GetPersonaState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPersonaState_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamPersonaState*)Z_Param__Result=UFriends::GetPersonaState_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPersonaName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetPersonaName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetPersonaName_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetPersonaName_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetMediumFriendAvatar)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UFriends::GetMediumFriendAvatar(Z_Param_steamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetLargeFriendAvatar)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=UFriends::GetLargeFriendAvatar(Z_Param_steamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendSteamLevel)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendSteamLevel(Z_Param_steamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupName)
	{
		P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_friendsGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendsGroupName(Z_Param_friendsGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupMembersList)
	{
		P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_friendsGroupID);
		P_GET_TARRAY_REF(FSteamID,Z_Param_Out_steamIDMembers);
		P_GET_PROPERTY(FIntProperty,Z_Param_membersCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::GetFriendsGroupMembersList(Z_Param_friendsGroupID,Z_Param_Out_steamIDMembers,Z_Param_membersCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupMembersCount)
	{
		P_GET_STRUCT(FSteamFriendsGroupID,Z_Param_friendsGroupID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendsGroupMembersCount(Z_Param_friendsGroupID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupIDByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_friendGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamFriendsGroupID*)Z_Param__Result=UFriends::GetFriendsGroupIDByIndex(Z_Param_friendGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendsGroupCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendsGroupCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendRichPresenceKeyCount)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendRichPresenceKeyCount(Z_Param_steamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendRichPresenceKeyByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_GET_PROPERTY(FIntProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendRichPresenceKeyByIndex(Z_Param_steamIDFriend,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendRichPresence)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendRichPresence(Z_Param_steamIDFriend,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendRelationship)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamFriendRelationship*)Z_Param__Result=UFriends::GetFriendRelationship(Z_Param_steamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendPersonaState)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamPersonaState*)Z_Param__Result=UFriends::GetFriendPersonaState(Z_Param_steamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendPersonaNameHistory)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_GET_PROPERTY(FIntProperty,Z_Param_personaName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendPersonaNameHistory(Z_Param_steamIDFriend,Z_Param_personaName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendPersonaName)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetFriendPersonaName(Z_Param_steamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendMessage)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_GET_PROPERTY(FIntProperty,Z_Param_messageID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_text);
		P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_chatEntryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendMessage(Z_Param_steamIDFriend,Z_Param_messageID,Z_Param_Out_text,(ESteamChatEntryType&)(Z_Param_Out_chatEntryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendGamePlayed)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_GET_STRUCT_REF(FSteamGameID,Z_Param_Out_gameID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_gameIP);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_connectionPort);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_queryPort);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_steamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::GetFriendGamePlayed(Z_Param_steamIDFriend,Z_Param_Out_gameID,Z_Param_Out_gameIP,Z_Param_Out_connectionPort,Z_Param_Out_queryPort,Z_Param_Out_steamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendFromSourceByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDSource);
		P_GET_PROPERTY(FIntProperty,Z_Param_ifriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetFriendFromSourceByIndex(Z_Param_steamIDSource,Z_Param_ifriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendCountFromSource)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendCountFromSource(Z_Param_steamIDSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendCount)
	{
		P_GET_TARRAY(ESteamFriendFlags,Z_Param_flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendCount(Z_Param_flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendCoplayTime)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendCoplayTime(Z_Param_steamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendCoplayGame)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetFriendCoplayGame(Z_Param_steamIDFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFriendByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ifriend);
		P_GET_TARRAY(ESteamFriendFlags,Z_Param_flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetFriendByIndex(Z_Param_ifriend,Z_Param_flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetFollowerCount)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetFollowerCount(FOnGetFollowerCount(Z_Param_Out_callback),Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetCoplayFriendCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetCoplayFriendCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetCoplayFriend)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_coplayFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetCoplayFriend(Z_Param_coplayFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanTag)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetClanTag(Z_Param_steamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanOwner)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetClanOwner(Z_Param_steamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanOfficerCount)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetClanOfficerCount(Z_Param_steamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanOfficerByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClan);
		P_GET_PROPERTY(FIntProperty,Z_Param_officer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetClanOfficerByIndex(Z_Param_steamIDClan,Z_Param_officer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanName)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UFriends::GetClanName(Z_Param_steamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetClanCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanChatMessage)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClanChat);
		P_GET_PROPERTY(FIntProperty,Z_Param_messageID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_text);
		P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_chatEntryType);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_steamIDChatter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetClanChatMessage(Z_Param_steamIDClanChat,Z_Param_messageID,Z_Param_Out_text,(ESteamChatEntryType&)(Z_Param_Out_chatEntryType),Z_Param_Out_steamIDChatter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanChatMemberCount)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UFriends::GetClanChatMemberCount(Z_Param_steamIDClan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_clan);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetClanByIndex(Z_Param_clan);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetClanActivityCounts)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClan);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_online);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_inGame);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_chatting);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::GetClanActivityCounts(Z_Param_steamIDClan,Z_Param_Out_online,Z_Param_Out_inGame,Z_Param_Out_chatting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execGetChatMemberByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClan);
		P_GET_PROPERTY(FIntProperty,Z_Param_user);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UFriends::GetChatMemberByIndex(Z_Param_steamIDClan,Z_Param_user);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execEnumerateFollowingList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FIntProperty,Z_Param_startIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnumerateFollowingList(FOnEnumerateFollowingList(Z_Param_Out_callback),Z_Param_startIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execDownloadClanActivityCounts)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_TARRAY(FSteamID,Z_Param_steamIDClans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DownloadClanActivityCounts(FOnDownloadClanActivityCounts(Z_Param_Out_callback),Z_Param_steamIDClans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execCloseClanChatWindowInSteam)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClanChat);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UFriends::CloseClanChatWindowInSteam(Z_Param_steamIDClanChat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execClearRichPresence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ClearRichPresence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlayToWebPage)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_url);
		P_GET_ENUM(ESteamActivateGameOverlayToWebPageMode,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlayToWebPage(Z_Param_url,ESteamActivateGameOverlayToWebPageMode(Z_Param_mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlayToUser)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_dialog);
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlayToUser(Z_Param_dialog,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlayToStore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_ENUM(ESteamOverlayToStoreFlag,Z_Param_flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlayToStore(Z_Param_appID,ESteamOverlayToStoreFlag(Z_Param_flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlayInvitedialog)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlayInvitedialog(Z_Param_steamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFriends::execActivateGameOverlay)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_dialog);
		P_FINISH;
		P_NATIVE_BEGIN;
		UFriends::ActivateGameOverlay(Z_Param_dialog);
		P_NATIVE_END;
	}
	void UFriends::StaticRegisterNativesUFriends()
	{
		UClass* Class = UFriends::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActivateGameOverlay", &UFriends::execActivateGameOverlay },
			{ "ActivateGameOverlayInvitedialog", &UFriends::execActivateGameOverlayInvitedialog },
			{ "ActivateGameOverlayToStore", &UFriends::execActivateGameOverlayToStore },
			{ "ActivateGameOverlayToUser", &UFriends::execActivateGameOverlayToUser },
			{ "ActivateGameOverlayToWebPage", &UFriends::execActivateGameOverlayToWebPage },
			{ "ClearRichPresence", &UFriends::execClearRichPresence },
			{ "CloseClanChatWindowInSteam", &UFriends::execCloseClanChatWindowInSteam },
			{ "DownloadClanActivityCounts", &UFriends::execDownloadClanActivityCounts },
			{ "EnumerateFollowingList", &UFriends::execEnumerateFollowingList },
			{ "GetChatMemberByIndex", &UFriends::execGetChatMemberByIndex },
			{ "GetClanActivityCounts", &UFriends::execGetClanActivityCounts },
			{ "GetClanByIndex", &UFriends::execGetClanByIndex },
			{ "GetClanChatMemberCount", &UFriends::execGetClanChatMemberCount },
			{ "GetClanChatMessage", &UFriends::execGetClanChatMessage },
			{ "GetClanCount", &UFriends::execGetClanCount },
			{ "GetClanName", &UFriends::execGetClanName },
			{ "GetClanOfficerByIndex", &UFriends::execGetClanOfficerByIndex },
			{ "GetClanOfficerCount", &UFriends::execGetClanOfficerCount },
			{ "GetClanOwner", &UFriends::execGetClanOwner },
			{ "GetClanTag", &UFriends::execGetClanTag },
			{ "GetCoplayFriend", &UFriends::execGetCoplayFriend },
			{ "GetCoplayFriendCount", &UFriends::execGetCoplayFriendCount },
			{ "GetFollowerCount", &UFriends::execGetFollowerCount },
			{ "GetFriendByIndex", &UFriends::execGetFriendByIndex },
			{ "GetFriendCoplayGame", &UFriends::execGetFriendCoplayGame },
			{ "GetFriendCoplayTime", &UFriends::execGetFriendCoplayTime },
			{ "GetFriendCount", &UFriends::execGetFriendCount },
			{ "GetFriendCountFromSource", &UFriends::execGetFriendCountFromSource },
			{ "GetFriendFromSourceByIndex", &UFriends::execGetFriendFromSourceByIndex },
			{ "GetFriendGamePlayed", &UFriends::execGetFriendGamePlayed },
			{ "GetFriendMessage", &UFriends::execGetFriendMessage },
			{ "GetFriendPersonaName", &UFriends::execGetFriendPersonaName },
			{ "GetFriendPersonaNameHistory", &UFriends::execGetFriendPersonaNameHistory },
			{ "GetFriendPersonaState", &UFriends::execGetFriendPersonaState },
			{ "GetFriendRelationship", &UFriends::execGetFriendRelationship },
			{ "GetFriendRichPresence", &UFriends::execGetFriendRichPresence },
			{ "GetFriendRichPresenceKeyByIndex", &UFriends::execGetFriendRichPresenceKeyByIndex },
			{ "GetFriendRichPresenceKeyCount", &UFriends::execGetFriendRichPresenceKeyCount },
			{ "GetFriendsGroupCount", &UFriends::execGetFriendsGroupCount },
			{ "GetFriendsGroupIDByIndex", &UFriends::execGetFriendsGroupIDByIndex },
			{ "GetFriendsGroupMembersCount", &UFriends::execGetFriendsGroupMembersCount },
			{ "GetFriendsGroupMembersList", &UFriends::execGetFriendsGroupMembersList },
			{ "GetFriendsGroupName", &UFriends::execGetFriendsGroupName },
			{ "GetFriendSteamLevel", &UFriends::execGetFriendSteamLevel },
			{ "GetLargeFriendAvatar", &UFriends::execGetLargeFriendAvatar },
			{ "GetMediumFriendAvatar", &UFriends::execGetMediumFriendAvatar },
			{ "GetPersonaName", &UFriends::execGetPersonaName },
			{ "GetPersonaName_Pure", &UFriends::execGetPersonaName_Pure },
			{ "GetPersonaState", &UFriends::execGetPersonaState },
			{ "GetPersonaState_Pure", &UFriends::execGetPersonaState_Pure },
			{ "GetPlayerNickname", &UFriends::execGetPlayerNickname },
			{ "GetPlayerNickname_Pure", &UFriends::execGetPlayerNickname_Pure },
			{ "GetSmallFriendAvatar", &UFriends::execGetSmallFriendAvatar },
			{ "GetUserRestrictions", &UFriends::execGetUserRestrictions },
			{ "HasFriend", &UFriends::execHasFriend },
			{ "InviteUserToGame", &UFriends::execInviteUserToGame },
			{ "IsClanChatAdmin", &UFriends::execIsClanChatAdmin },
			{ "IsClanChatWindowOpenInSteam", &UFriends::execIsClanChatWindowOpenInSteam },
			{ "IsClanOfficialGameGroup", &UFriends::execIsClanOfficialGameGroup },
			{ "IsClanPublic", &UFriends::execIsClanPublic },
			{ "IsFollowing", &UFriends::execIsFollowing },
			{ "IsUserInSource", &UFriends::execIsUserInSource },
			{ "JoinClanChatRoom", &UFriends::execJoinClanChatRoom },
			{ "LeaveClanChatRoom", &UFriends::execLeaveClanChatRoom },
			{ "OpenClanChatWindowInSteam", &UFriends::execOpenClanChatWindowInSteam },
			{ "ReplyToFriendMessage", &UFriends::execReplyToFriendMessage },
			{ "RequestClanOfficerList", &UFriends::execRequestClanOfficerList },
			{ "RequestFriendRichPresence", &UFriends::execRequestFriendRichPresence },
			{ "RequestUserInformation", &UFriends::execRequestUserInformation },
			{ "SendClanChatMessage", &UFriends::execSendClanChatMessage },
			{ "SetInGameVoiceSpeaking", &UFriends::execSetInGameVoiceSpeaking },
			{ "SetListenForFriendsMessages", &UFriends::execSetListenForFriendsMessages },
			{ "SetPersonaName", &UFriends::execSetPersonaName },
			{ "SetPlayedWith", &UFriends::execSetPlayedWith },
			{ "SetRichPresence", &UFriends::execSetRichPresence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics
	{
		struct Friends_eventActivateGameOverlay_Parms
		{
			FString dialog;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dialog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::NewProp_dialog = { "dialog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlay_Parms, dialog), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::NewProp_dialog,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates the Steam Overlay to a specific dialog.\n\x09*\n\x09* @param\x09""dialog\x09The dialog to open. Valid options are: \"friends\", \"community\", \"players\", \"settings\", \"officialgamegroup\", \"stats\", \"achievements\".\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Activates the Steam Overlay to a specific dialog.\n\n@param        dialog  The dialog to open. Valid options are: \"friends\", \"community\", \"players\", \"settings\", \"officialgamegroup\", \"stats\", \"achievements\"." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlay", nullptr, nullptr, sizeof(Friends_eventActivateGameOverlay_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics
	{
		struct Friends_eventActivateGameOverlayInvitedialog_Parms
		{
			FSteamID steamIDLobby;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayInvitedialog_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates the Steam Overlay to open the invite dialog.\n\x09*\n\x09* Invitations sent from this dialog will be for the provided lobby.\n\x09*\n\x09* @param\x09steamIDLobby\x09The Steam ID of the lobby that selected users will be invited to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Activates the Steam Overlay to open the invite dialog.\n\nInvitations sent from this dialog will be for the provided lobby.\n\n@param        steamIDLobby    The Steam ID of the lobby that selected users will be invited to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlayInvitedialog", nullptr, nullptr, sizeof(Friends_eventActivateGameOverlayInvitedialog_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics
	{
		struct Friends_eventActivateGameOverlayToStore_Parms
		{
			int32 appID;
			ESteamOverlayToStoreFlag flag;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_flag;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_flag_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_flag = { "flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayToStore_Parms, flag), Z_Construct_UEnum_SteamCore_ESteamOverlayToStoreFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayToStore_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates the Steam Overlay to the Steam store page for the provided app.\n\x09*\n\x09* Using k_uAppIdInvalid brings the user to the front page of the Steam store.\n\x09*\n\x09* @param\x09""appID\x09The app ID to show the store page of.\n\x09* @param\x09""flag\x09""Flags to modify the behavior when the page opens.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Activates the Steam Overlay to the Steam store page for the provided app.\n\nUsing k_uAppIdInvalid brings the user to the front page of the Steam store.\n\n@param        appID   The app ID to show the store page of.\n@param        flag    Flags to modify the behavior when the page opens." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlayToStore", nullptr, nullptr, sizeof(Friends_eventActivateGameOverlayToStore_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics
	{
		struct Friends_eventActivateGameOverlayToUser_Parms
		{
			FString dialog;
			FSteamID steamID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_dialog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayToUser_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_dialog = { "dialog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayToUser_Parms, dialog), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::NewProp_dialog,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates Steam Overlay to a specific dialog.\n\x09*\n\x09* \"steamid\" - Opens the overlay web browser to the specified user or groups profile.\n\x09* \"chat\" - Opens a chat window to the specified user, or joins the group chat.\n\x09* \"jointrade\" - Opens a window to a Steam Trading session that was started with the ISteamEconomy/StartTrade Web API.\n\x09* \"stats\" - Opens the overlay web browser to the specified user's stats.\n\x09* \"achievements\" - Opens the overlay web browser to the specified user's achievements.\n\x09* \"friendadd\" - Opens the overlay in minimal mode prompting the user to add the target user as a friend.\n\x09* \"friendremove\" - Opens the overlay in minimal mode prompting the user to remove the target friend.\n\x09* \"friendrequestaccept\" - Opens the overlay in minimal mode prompting the user to accept an incoming friend invite.\n\x09* \"friendrequestignore\" - Opens the overlay in minimal mode prompting the user to ignore an incoming friend invite.\n\x09*\n\x09* @param\x09""dialog\x09\x09The dialog to open.\n\x09* @param\x09steamID\x09\x09The Steam ID of the context to open this dialog to.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Activates Steam Overlay to a specific dialog.\n\n\"steamid\" - Opens the overlay web browser to the specified user or groups profile.\n\"chat\" - Opens a chat window to the specified user, or joins the group chat.\n\"jointrade\" - Opens a window to a Steam Trading session that was started with the ISteamEconomy/StartTrade Web API.\n\"stats\" - Opens the overlay web browser to the specified user's stats.\n\"achievements\" - Opens the overlay web browser to the specified user's achievements.\n\"friendadd\" - Opens the overlay in minimal mode prompting the user to add the target user as a friend.\n\"friendremove\" - Opens the overlay in minimal mode prompting the user to remove the target friend.\n\"friendrequestaccept\" - Opens the overlay in minimal mode prompting the user to accept an incoming friend invite.\n\"friendrequestignore\" - Opens the overlay in minimal mode prompting the user to ignore an incoming friend invite.\n\n@param        dialog          The dialog to open.\n@param        steamID         The Steam ID of the context to open this dialog to." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlayToUser", nullptr, nullptr, sizeof(Friends_eventActivateGameOverlayToUser_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics
	{
		struct Friends_eventActivateGameOverlayToWebPage_Parms
		{
			FString url;
			ESteamActivateGameOverlayToWebPageMode mode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_url;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayToWebPage_Parms, mode), Z_Construct_UEnum_SteamCore_ESteamActivateGameOverlayToWebPageMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_url = { "url", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventActivateGameOverlayToWebPage_Parms, url), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_mode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::NewProp_url,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Activates Steam Overlay web browser directly to the specified URL.\n\x09*\n\x09* @param\x09url\x09\x09The webpage to open. (A fully qualified address with the protocol is required, e.g. \"http://www.steampowered.com\")\n\x09* @param\x09mode\x09(SDK 1.46+ only)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Activates Steam Overlay web browser directly to the specified URL.\n\n@param        url             The webpage to open. (A fully qualified address with the protocol is required, e.g. \"http://www.steampowered.com\")\n@param        mode    (SDK 1.46+ only)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ActivateGameOverlayToWebPage", nullptr, nullptr, sizeof(Friends_eventActivateGameOverlayToWebPage_Parms), Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ClearRichPresence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Clears all of the current user's Rich Presence key/values.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Clears all of the current user's Rich Presence key/values." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ClearRichPresence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ClearRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ClearRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics
	{
		struct Friends_eventCloseClanChatWindowInSteam_Parms
		{
			FSteamID steamIDClanChat;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClanChat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventCloseClanChatWindowInSteam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventCloseClanChatWindowInSteam_Parms), &Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_steamIDClanChat = { "steamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventCloseClanChatWindowInSteam_Parms, steamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::NewProp_steamIDClanChat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Closes the specified Steam group chat room in the Steam UI.\n\x09*\n\x09* @param\x09steamIDClanChat\x09\x09The Steam ID of the Steam group chat room to close.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Closes the specified Steam group chat room in the Steam UI.\n\n@param        steamIDClanChat         The Steam ID of the Steam group chat room to close." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "CloseClanChatWindowInSteam", nullptr, nullptr, sizeof(Friends_eventCloseClanChatWindowInSteam_Parms), Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics
	{
		struct Friends_eventDownloadClanActivityCounts_Parms
		{
			FScriptDelegate callback;
			TArray<FSteamID> steamIDClans;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_steamIDClans;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClans_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_steamIDClans = { "steamIDClans", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventDownloadClanActivityCounts_Parms, steamIDClans), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_steamIDClans_Inner = { "steamIDClans", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventDownloadClanActivityCounts_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCounts__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_steamIDClans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_steamIDClans_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Refresh the Steam Group activity data or get the data from groups other than one that the current user is a member.\n\x09*\n\x09* After receiving the callback you can then use GetClanActivityCounts to get the up to date user counts.\n\x09*\n\x09* @param\x09steamIDClans\x09""A list of steam groups to get the updated data for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Refresh the Steam Group activity data or get the data from groups other than one that the current user is a member.\n\nAfter receiving the callback you can then use GetClanActivityCounts to get the up to date user counts.\n\n@param        steamIDClans    A list of steam groups to get the updated data for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "DownloadClanActivityCounts", nullptr, nullptr, sizeof(Friends_eventDownloadClanActivityCounts_Parms), Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_DownloadClanActivityCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_DownloadClanActivityCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics
	{
		struct Friends_eventEnumerateFollowingList_Parms
		{
			FScriptDelegate callback;
			int32 startIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_startIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_startIndex = { "startIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventEnumerateFollowingList_Parms, startIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventEnumerateFollowingList_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnEnumerateFollowingList__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_startIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the list of users that the current user is following.\n\x09*\n\x09* You can be following people that are not your friends. \n\x09* Following allows you to receive updates when the person does things like \n\x09* post a new piece of content to the Steam Workshop.\n\x09*\n\x09* @param\x09startIndex\x09The index to start receiving followers from. This should be 0 on the initial call.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the list of users that the current user is following.\n\nYou can be following people that are not your friends.\nFollowing allows you to receive updates when the person does things like\npost a new piece of content to the Steam Workshop.\n\n@param        startIndex      The index to start receiving followers from. This should be 0 on the initial call." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "EnumerateFollowingList", nullptr, nullptr, sizeof(Friends_eventEnumerateFollowingList_Parms), Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_EnumerateFollowingList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_EnumerateFollowingList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics
	{
		struct Friends_eventGetChatMemberByIndex_Parms
		{
			FSteamID steamIDClan;
			int32 user;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_user;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetChatMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_user = { "user", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetChatMemberByIndex_Parms, user), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_steamIDClan = { "steamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetChatMemberByIndex_Parms, steamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_user,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::NewProp_steamIDClan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID at the given index in a Steam group chat.\n\x09*\n\x09* You must call GetClanChatMemberCount before calling this.\n\x09* \n\x09* @param\x09steamIDClan\x09\x09This MUST be the same source used in the previous call to GetClanChatMemberCount!\n\x09* @param\x09user\x09\x09\x09""An index between 0 and GetClanChatMemberCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the Steam ID at the given index in a Steam group chat.\n\nYou must call GetClanChatMemberCount before calling this.\n\n@param        steamIDClan             This MUST be the same source used in the previous call to GetClanChatMemberCount!\n@param        user                    An index between 0 and GetClanChatMemberCount." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetChatMemberByIndex", nullptr, nullptr, sizeof(Friends_eventGetChatMemberByIndex_Parms), Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetChatMemberByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetChatMemberByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics
	{
		struct Friends_eventGetClanActivityCounts_Parms
		{
			FSteamID steamIDClan;
			int32 online;
			int32 inGame;
			int32 chatting;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_chatting;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_inGame;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_online;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventGetClanActivityCounts_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventGetClanActivityCounts_Parms), &Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_chatting = { "chatting", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanActivityCounts_Parms, chatting), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_inGame = { "inGame", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanActivityCounts_Parms, inGame), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_online = { "online", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanActivityCounts_Parms, online), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_steamIDClan = { "steamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanActivityCounts_Parms, steamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_chatting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_inGame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_online,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::NewProp_steamIDClan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the most recent information we have about what the users in a Steam Group are doing.\n\x09*\n\x09* This can only retrieve data that the local client knows about. \n\x09* To refresh the data or get data from a group other than one that the current \n\x09* user is a member of you must call DownloadClanActivityCounts.\n\x09*\n\x09* @param\x09steamIDClan\x09\x09The Steam group to get the activity of.\n\x09* @param\x09online\x09\x09\x09Returns the number of members that are online.\n\x09* @param\x09inGame\x09\x09\x09Returns the number members that are in game (excluding those with their status set to offline).\n\x09* @param\x09""chatting\x09\x09Returns the number of members in the group chat room.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the most recent information we have about what the users in a Steam Group are doing.\n\nThis can only retrieve data that the local client knows about.\nTo refresh the data or get data from a group other than one that the current\nuser is a member of you must call DownloadClanActivityCounts.\n\n@param        steamIDClan             The Steam group to get the activity of.\n@param        online                  Returns the number of members that are online.\n@param        inGame                  Returns the number members that are in game (excluding those with their status set to offline).\n@param        chatting                Returns the number of members in the group chat room." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanActivityCounts", nullptr, nullptr, sizeof(Friends_eventGetClanActivityCounts_Parms), Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanActivityCounts()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanActivityCounts_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanByIndex_Statics
	{
		struct Friends_eventGetClanByIndex_Parms
		{
			int32 clan;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_clan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::NewProp_clan = { "clan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanByIndex_Parms, clan), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::NewProp_clan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam group's Steam ID at the given index.\n\x09*\n\x09* You must call GetClanCount before calling this.\n\x09*\n\x09* @param\x09""clan\x09""An index between 0 and GetClanCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the Steam group's Steam ID at the given index.\n\nYou must call GetClanCount before calling this.\n\n@param        clan    An index between 0 and GetClanCount." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanByIndex", nullptr, nullptr, sizeof(Friends_eventGetClanByIndex_Parms), Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics
	{
		struct Friends_eventGetClanChatMemberCount_Parms
		{
			FSteamID steamIDClan;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMemberCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::NewProp_steamIDClan = { "steamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMemberCount_Parms, steamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::NewProp_steamIDClan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Get the number of users in a Steam group chat.\n\x09*\n\x09* Large steam groups cannot be iterated by the local user.\n\x09* The current user must be in a lobby to retrieve the Steam IDs of other users in that lobby.\n\x09* This is used for iteration, after calling this then GetChatMemberByIndex can \n\x09* be used to get the Steam ID of each person in the chat.\n\x09*\n\x09* @param\x09steamIDClan\x09\x09The Steam group to get the chat count of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Get the number of users in a Steam group chat.\n\nLarge steam groups cannot be iterated by the local user.\nThe current user must be in a lobby to retrieve the Steam IDs of other users in that lobby.\nThis is used for iteration, after calling this then GetChatMemberByIndex can\nbe used to get the Steam ID of each person in the chat.\n\n@param        steamIDClan             The Steam group to get the chat count of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanChatMemberCount", nullptr, nullptr, sizeof(Friends_eventGetClanChatMemberCount_Parms), Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanChatMemberCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanChatMemberCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics
	{
		struct Friends_eventGetClanChatMessage_Parms
		{
			FSteamID steamIDClanChat;
			int32 messageID;
			FString text;
			ESteamChatEntryType chatEntryType;
			FSteamID steamIDChatter;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDChatter;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_chatEntryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_chatEntryType_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_messageID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClanChat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_steamIDChatter = { "steamIDChatter", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, steamIDChatter), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_chatEntryType = { "chatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, chatEntryType), Z_Construct_UEnum_SteamCore_ESteamChatEntryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_chatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_messageID = { "messageID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, messageID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_steamIDClanChat = { "steamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanChatMessage_Parms, steamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_steamIDChatter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_chatEntryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_chatEntryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_messageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::NewProp_steamIDClanChat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the data from a Steam group chat room message.\n\x09*\n\x09* This should only ever be called in response to a GameConnectedClanChatMsg_t callback.\n\x09*\n\x09* @param\x09steamIDClanChat\x09\x09The Steam ID of the Steam group chat room.\n\x09* @param\x09messageID\x09\x09\x09The index of the message. This should be the m_iMessageID field of GameConnectedClanChatMsg_t.\n\x09* @param\x09text\x09\x09\x09\x09The buffer where the chat message will be copied into. (Should be big enough to hold 2048 UTF-8 characters. So 8192 bytes + 1 for '\\0')\n\x09* @param\x09""chatEntryType\x09\x09Returns the type of chat entry that was received.\n\x09* @param\x09steamIDChatter\x09\x09Returns the Steam ID of the user that sent the message.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the data from a Steam group chat room message.\n\nThis should only ever be called in response to a GameConnectedClanChatMsg_t callback.\n\n@param        steamIDClanChat         The Steam ID of the Steam group chat room.\n@param        messageID                       The index of the message. This should be the m_iMessageID field of GameConnectedClanChatMsg_t.\n@param        text                            The buffer where the chat message will be copied into. (Should be big enough to hold 2048 UTF-8 characters. So 8192 bytes + 1 for '\\0')\n@param        chatEntryType           Returns the type of chat entry that was received.\n@param        steamIDChatter          Returns the Steam ID of the user that sent the message." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanChatMessage", nullptr, nullptr, sizeof(Friends_eventGetClanChatMessage_Parms), Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanCount_Statics
	{
		struct Friends_eventGetClanCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of Steam groups that the current user is a member of.\n\x09*\n\x09* This is used for iteration, after calling this then GetClanByIndex can be used to get the Steam ID of each Steam group.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the number of Steam groups that the current user is a member of.\n\nThis is used for iteration, after calling this then GetClanByIndex can be used to get the Steam ID of each Steam group." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanCount", nullptr, nullptr, sizeof(Friends_eventGetClanCount_Parms), Z_Construct_UFunction_UFriends_GetClanCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanName_Statics
	{
		struct Friends_eventGetClanName_Parms
		{
			FSteamID steamIDClan;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetClanName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanName_Statics::NewProp_steamIDClan = { "steamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanName_Parms, steamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanName_Statics::NewProp_steamIDClan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the display name for the specified Steam group; if the local client knows about it.\n\x09*\n\x09* @param\x09steamIDClan\x09\x09The Steam group to get the name of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the display name for the specified Steam group; if the local client knows about it.\n\n@param        steamIDClan             The Steam group to get the name of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanName", nullptr, nullptr, sizeof(Friends_eventGetClanName_Parms), Z_Construct_UFunction_UFriends_GetClanName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics
	{
		struct Friends_eventGetClanOfficerByIndex_Parms
		{
			FSteamID steamIDClan;
			int32 officer;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_officer;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanOfficerByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_officer = { "officer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanOfficerByIndex_Parms, officer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_steamIDClan = { "steamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanOfficerByIndex_Parms, steamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_officer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::NewProp_steamIDClan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the officer at the given index in a Steam group.\n\x09*\n\x09* You must call GetClanOfficerCount before calling this.\n\x09*\x09\n\x09* @param\x09steamIDClan\x09\x09This must be the same steam group used in the previous call to GetClanOfficerCount!\n\x09* @param\x09officer\x09\x09\x09""An index between 0 and GetClanOfficerCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the Steam ID of the officer at the given index in a Steam group.\n\nYou must call GetClanOfficerCount before calling this.\n\n@param        steamIDClan             This must be the same steam group used in the previous call to GetClanOfficerCount!\n@param        officer                 An index between 0 and GetClanOfficerCount." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanOfficerByIndex", nullptr, nullptr, sizeof(Friends_eventGetClanOfficerByIndex_Parms), Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanOfficerByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanOfficerByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics
	{
		struct Friends_eventGetClanOfficerCount_Parms
		{
			FSteamID steamIDClan;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanOfficerCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::NewProp_steamIDClan = { "steamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanOfficerCount_Parms, steamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::NewProp_steamIDClan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of officers (administrators and moderators) in a specified Steam group.\n\x09*\n\x09* This also includes the owner of the Steam group.\n\x09* This is used for iteration, after calling this then GetClanOfficerByIndex can be used to get the Steam ID of each officer.\n\x09*\n\x09* @param\x09steamIDClan\x09\x09The Steam group to get the officer count of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the number of officers (administrators and moderators) in a specified Steam group.\n\nThis also includes the owner of the Steam group.\nThis is used for iteration, after calling this then GetClanOfficerByIndex can be used to get the Steam ID of each officer.\n\n@param        steamIDClan             The Steam group to get the officer count of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanOfficerCount", nullptr, nullptr, sizeof(Friends_eventGetClanOfficerCount_Parms), Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanOfficerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanOfficerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanOwner_Statics
	{
		struct Friends_eventGetClanOwner_Parms
		{
			FSteamID steamIDClan;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanOwner_Statics::NewProp_steamIDClan = { "steamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanOwner_Parms, steamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOwner_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanOwner_Statics::NewProp_steamIDClan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the owner of a Steam Group.\n\x09*\n\x09* You must call RequestClanOfficerList before this to get the required data!\n\x09*\n\x09* @param\x09steamIDClan\x09\x09The Steam ID of the Steam group to get the owner for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the owner of a Steam Group.\n\nYou must call RequestClanOfficerList before this to get the required data!\n\n@param        steamIDClan             The Steam ID of the Steam group to get the owner for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanOwner", nullptr, nullptr, sizeof(Friends_eventGetClanOwner_Parms), Z_Construct_UFunction_UFriends_GetClanOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetClanTag_Statics
	{
		struct Friends_eventGetClanTag_Parms
		{
			FSteamID steamIDClan;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetClanTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetClanTag_Statics::NewProp_steamIDClan = { "steamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetClanTag_Parms, steamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetClanTag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanTag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetClanTag_Statics::NewProp_steamIDClan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetClanTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the unique tag (abbreviation) for the specified Steam group; If the local client knows about it.\n\x09*\n\x09* The Steam group abbreviation is a unique way for people to identify the group and is limited to 12 characters. \n\x09* In some games this will appear next to the name of group members.\n\x09*\n\x09* @param\x09steamIDClan\x09\x09The Steam group to get the tag of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the unique tag (abbreviation) for the specified Steam group; If the local client knows about it.\n\nThe Steam group abbreviation is a unique way for people to identify the group and is limited to 12 characters.\nIn some games this will appear next to the name of group members.\n\n@param        steamIDClan             The Steam group to get the tag of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetClanTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetClanTag", nullptr, nullptr, sizeof(Friends_eventGetClanTag_Parms), Z_Construct_UFunction_UFriends_GetClanTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetClanTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetClanTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetClanTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetClanTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics
	{
		struct Friends_eventGetCoplayFriend_Parms
		{
			int32 coplayFriend;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_coplayFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetCoplayFriend_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::NewProp_coplayFriend = { "coplayFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetCoplayFriend_Parms, coplayFriend), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::NewProp_coplayFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the recently played with user at the given index.\n\x09*\n\x09* You must call GetCoplayFriendCount before calling this.\n\x09*\n\x09* @param\x09""coplayFriend\x09\x09""An index between 0 and GetCoplayFriendCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the Steam ID of the recently played with user at the given index.\n\nYou must call GetCoplayFriendCount before calling this.\n\n@param        coplayFriend            An index between 0 and GetCoplayFriendCount." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetCoplayFriend", nullptr, nullptr, sizeof(Friends_eventGetCoplayFriend_Parms), Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetCoplayFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetCoplayFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics
	{
		struct Friends_eventGetCoplayFriendCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetCoplayFriendCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of players that the current users has recently played with, across all games.\n\x09*\n\x09* This is used for iteration, after calling this then GetCoplayFriend can be used to get the Steam ID of each player.\n\x09* These players are have been set with previous calls to SetPlayedWith.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the number of players that the current users has recently played with, across all games.\n\nThis is used for iteration, after calling this then GetCoplayFriend can be used to get the Steam ID of each player.\nThese players are have been set with previous calls to SetPlayedWith." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetCoplayFriendCount", nullptr, nullptr, sizeof(Friends_eventGetCoplayFriendCount_Parms), Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetCoplayFriendCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetCoplayFriendCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFollowerCount_Statics
	{
		struct Friends_eventGetFollowerCount_Parms
		{
			FScriptDelegate callback;
			FSteamID steamID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFollowerCount_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFollowerCount_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnGetFollowerCount__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of users following the specified user.\n\x09*\n\x09* @param\x09steamID\x09\x09The user to get the follower count for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the number of users following the specified user.\n\n@param        steamID         The user to get the follower count for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFollowerCount", nullptr, nullptr, sizeof(Friends_eventGetFollowerCount_Parms), Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFollowerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFollowerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics
	{
		struct Friends_eventGetFriendByIndex_Parms
		{
			int32 ifriend;
			TArray<ESteamFriendFlags> flags;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_flags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_flags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_flags_Inner_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ifriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_flags = { "flags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendByIndex_Parms, flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_flags_Inner = { "flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFriendFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_ifriend = { "ifriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendByIndex_Parms, ifriend), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::NewProp_ifriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the user at the given index.\n\x09*\n\x09* You must call GetFriendCount before calling this.\n\x09*\n\x09* @param\x09ifriend\x09\x09\x09""An index between 0 and GetFriendCount.\n\x09* @param\x09""flags\x09\x09""A combined union (binary \"or\") of EFriendFlags. This must be the same value as used in the previous call to GetFriendCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the Steam ID of the user at the given index.\n\nYou must call GetFriendCount before calling this.\n\n@param        ifriend                 An index between 0 and GetFriendCount.\n@param        flags           A combined union (binary \"or\") of EFriendFlags. This must be the same value as used in the previous call to GetFriendCount." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendByIndex", nullptr, nullptr, sizeof(Friends_eventGetFriendByIndex_Parms), Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics
	{
		struct Friends_eventGetFriendCoplayGame_Parms
		{
			FSteamID steamIDFriend;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCoplayGame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCoplayGame_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the app ID of the game that user played with someone on their recently-played-with list.\n\x09*\n\x09* @param\x09steamIDFriend\x09\x09The Steam ID of the user on the recently-played-with list to get the game played.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the app ID of the game that user played with someone on their recently-played-with list.\n\n@param        steamIDFriend           The Steam ID of the user on the recently-played-with list to get the game played." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendCoplayGame", nullptr, nullptr, sizeof(Friends_eventGetFriendCoplayGame_Parms), Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendCoplayGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendCoplayGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics
	{
		struct Friends_eventGetFriendCoplayTime_Parms
		{
			FSteamID steamIDFriend;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCoplayTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCoplayTime_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the timestamp of when the user played with someone on their recently-played-with list.\n\x09*\n\x09* @param\x09steamIDFriend\x09\x09The Steam ID of the user on the recently-played-with list to get the game played.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the timestamp of when the user played with someone on their recently-played-with list.\n\n@param        steamIDFriend           The Steam ID of the user on the recently-played-with list to get the game played." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendCoplayTime", nullptr, nullptr, sizeof(Friends_eventGetFriendCoplayTime_Parms), Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendCoplayTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendCoplayTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendCount_Statics
	{
		struct Friends_eventGetFriendCount_Parms
		{
			TArray<ESteamFriendFlags> flags;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_flags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_flags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_flags_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_flags = { "flags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCount_Parms, flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_flags_Inner = { "flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFriendFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCount_Statics::NewProp_flags_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of users the client knows about who meet a specified criteria. (Friends, blocked, users on the same server, etc)\n\x09*\n\x09* This can be used to iterate over all of the users by calling GetFriendByIndex to get the Steam IDs of each user.\n\x09*\n\x09* @param\x09""flags\x09\x09""A combined union (binary \"or\") of one or more EFriendFlags.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the number of users the client knows about who meet a specified criteria. (Friends, blocked, users on the same server, etc)\n\nThis can be used to iterate over all of the users by calling GetFriendByIndex to get the Steam IDs of each user.\n\n@param        flags           A combined union (binary \"or\") of one or more EFriendFlags." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendCount", nullptr, nullptr, sizeof(Friends_eventGetFriendCount_Parms), Z_Construct_UFunction_UFriends_GetFriendCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics
	{
		struct Friends_eventGetFriendCountFromSource_Parms
		{
			FSteamID steamIDSource;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCountFromSource_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::NewProp_steamIDSource = { "steamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendCountFromSource_Parms, steamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::NewProp_steamIDSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Get the number of users in a source (Steam group, chat room, lobby, or game server).\n\x09*\n\x09* Large Steam groups cannot be iterated by the local user.\n\x09* If you're getting the number of lobby members then you should use ISteamMatchmaking::GetNumLobbyMembers instead.\n\x09* This is used for iteration, after calling this then GetFriendFromSourceByIndex can be used to get the Steam ID of each person in the source.\n\x09*\n\x09* @param\x09steamIDSource\x09The Steam group, chat room, lobby or game server to get the user count of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Get the number of users in a source (Steam group, chat room, lobby, or game server).\n\nLarge Steam groups cannot be iterated by the local user.\nIf you're getting the number of lobby members then you should use ISteamMatchmaking::GetNumLobbyMembers instead.\nThis is used for iteration, after calling this then GetFriendFromSourceByIndex can be used to get the Steam ID of each person in the source.\n\n@param        steamIDSource   The Steam group, chat room, lobby or game server to get the user count of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendCountFromSource", nullptr, nullptr, sizeof(Friends_eventGetFriendCountFromSource_Parms), Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendCountFromSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendCountFromSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics
	{
		struct Friends_eventGetFriendFromSourceByIndex_Parms
		{
			FSteamID steamIDSource;
			int32 ifriend;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ifriend;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendFromSourceByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_ifriend = { "ifriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendFromSourceByIndex_Parms, ifriend), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_steamIDSource = { "steamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendFromSourceByIndex_Parms, steamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_ifriend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::NewProp_steamIDSource,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam ID at the given index from a source (Steam group, chat room, lobby, or game server).\n\x09*\n\x09* You must call GetFriendCountFromSource before calling this.\n\x09*\n\x09* @param\x09steamIDSource\x09\x09This MUST be the same source used in the previous call to GetFriendCountFromSource!\n\x09* @param\x09ifriend\x09\x09\x09\x09""An index between 0 and GetFriendCountFromSource.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the Steam ID at the given index from a source (Steam group, chat room, lobby, or game server).\n\nYou must call GetFriendCountFromSource before calling this.\n\n@param        steamIDSource           This MUST be the same source used in the previous call to GetFriendCountFromSource!\n@param        ifriend                         An index between 0 and GetFriendCountFromSource." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendFromSourceByIndex", nullptr, nullptr, sizeof(Friends_eventGetFriendFromSourceByIndex_Parms), Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics
	{
		struct Friends_eventGetFriendGamePlayed_Parms
		{
			FSteamID steamIDFriend;
			FSteamGameID gameID;
			FString gameIP;
			int32 connectionPort;
			int32 queryPort;
			FSteamID steamIDLobby;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_queryPort;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_connectionPort;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameIP;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventGetFriendGamePlayed_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventGetFriendGamePlayed_Parms), &Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_queryPort = { "queryPort", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, queryPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_connectionPort = { "connectionPort", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, connectionPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_gameIP = { "gameIP", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, gameIP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_gameID = { "gameID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, gameID), Z_Construct_UScriptStruct_FSteamGameID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendGamePlayed_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_steamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_queryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_connectionPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_gameIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_gameID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the specified friend is in a game, and gets info about the game if they are.\n\x09*\n\x09* @param\x09steamIDFriend\x09\x09The Steam ID of the other user.\n\x09* @param\x09gameID\x09\x09\x09\x09Game information\n\x09* @param\x09gameIP\x09\x09\x09\x09Game information\n\x09* @param\x09""connectionPort\x09\x09Game information\n\x09* @param\x09queryPort\x09\x09\x09Game information\n\x09* @param\x09steamIDLobby\x09\x09Game information\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Checks if the specified friend is in a game, and gets info about the game if they are.\n\n@param        steamIDFriend           The Steam ID of the other user.\n@param        gameID                          Game information\n@param        gameIP                          Game information\n@param        connectionPort          Game information\n@param        queryPort                       Game information\n@param        steamIDLobby            Game information" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendGamePlayed", nullptr, nullptr, sizeof(Friends_eventGetFriendGamePlayed_Parms), Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendGamePlayed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendGamePlayed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendMessage_Statics
	{
		struct Friends_eventGetFriendMessage_Parms
		{
			FSteamID steamIDFriend;
			int32 messageID;
			FString text;
			ESteamChatEntryType chatEntryType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_chatEntryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_chatEntryType_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_messageID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_chatEntryType = { "chatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, chatEntryType), Z_Construct_UEnum_SteamCore_ESteamChatEntryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_chatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_messageID = { "messageID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, messageID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendMessage_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_chatEntryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_chatEntryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_messageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the data from a Steam friends message.\n\x09*\n\x09* This should only ever be called in response to a GameConnectedFriendChatMsg_t callback.\n\x09*\n\x09* @param\x09steamIDFriend\x09\x09The Steam ID of the friend that sent this message.\n\x09* @param\x09messageID\x09\x09\x09The index of the message. This should be the m_iMessageID field of GameConnectedFriendChatMsg_t.\n\x09* @param\x09text\x09\x09\x09\x09The buffer where the chat message will be copied into.\n\x09* @param\x09""chatEntryType\x09\x09Returns the type of chat entry that was received.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the data from a Steam friends message.\n\nThis should only ever be called in response to a GameConnectedFriendChatMsg_t callback.\n\n@param        steamIDFriend           The Steam ID of the friend that sent this message.\n@param        messageID                       The index of the message. This should be the m_iMessageID field of GameConnectedFriendChatMsg_t.\n@param        text                            The buffer where the chat message will be copied into.\n@param        chatEntryType           Returns the type of chat entry that was received." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendMessage", nullptr, nullptr, sizeof(Friends_eventGetFriendMessage_Parms), Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics
	{
		struct Friends_eventGetFriendPersonaName_Parms
		{
			FSteamID steamIDFriend;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendPersonaName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendPersonaName_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the specified user's persona (display) name.\n\x09*\n\x09* This will only be known to the current user if the other user is in their friends list, on the same game server, \n\x09* in a chat room or lobby, or in a small Steam group with the local user.\n\x09* Upon on first joining a lobby, chat room, or game server the current user will not known the name \n\x09* of the other users automatically; that information will arrive asynchronously via PersonaStateChange_t callbacks.\n\x09* To get the persona name of the current user use GetPersonaName.\n\x09*\n\x09* @param\x09steamIDFriend\x09The Steam ID of the other user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the specified user's persona (display) name.\n\nThis will only be known to the current user if the other user is in their friends list, on the same game server,\nin a chat room or lobby, or in a small Steam group with the local user.\nUpon on first joining a lobby, chat room, or game server the current user will not known the name\nof the other users automatically; that information will arrive asynchronously via PersonaStateChange_t callbacks.\nTo get the persona name of the current user use GetPersonaName.\n\n@param        steamIDFriend   The Steam ID of the other user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendPersonaName", nullptr, nullptr, sizeof(Friends_eventGetFriendPersonaName_Parms), Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendPersonaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendPersonaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics
	{
		struct Friends_eventGetFriendPersonaNameHistory_Parms
		{
			FSteamID steamIDFriend;
			int32 personaName;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_personaName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendPersonaNameHistory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_personaName = { "personaName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendPersonaNameHistory_Parms, personaName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendPersonaNameHistory_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_personaName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets one of the previous display names for the specified user.\n\x09*\n\x09* This only works for display names that the current user has seen on the local computer.\n\x09*\n\x09* @param\x09steamIDFriend\x09\x09The Steam ID of the other user.\n\x09* @param\x09personaName\x09\x09\x09The index of the history to receive. 0 is their current persona name, 1 is their most recent before they changed it, etc.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets one of the previous display names for the specified user.\n\nThis only works for display names that the current user has seen on the local computer.\n\n@param        steamIDFriend           The Steam ID of the other user.\n@param        personaName                     The index of the history to receive. 0 is their current persona name, 1 is their most recent before they changed it, etc." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendPersonaNameHistory", nullptr, nullptr, sizeof(Friends_eventGetFriendPersonaNameHistory_Parms), Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics
	{
		struct Friends_eventGetFriendPersonaState_Parms
		{
			FSteamID steamIDFriend;
			ESteamPersonaState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendPersonaState_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamPersonaState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendPersonaState_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the current status of the specified user.\n\x09*\n\x09* This will only be known to the current user if the other user is in their friends list, \n\x09* on the same game server, in a chat room or lobby, or in a small Steam group with the local user.\n\x09* To get the state of the current user use GetPersonaState.\n\x09*\n\x09* @param\x09steamIDFriend\x09The Steam ID of the other user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the current status of the specified user.\n\nThis will only be known to the current user if the other user is in their friends list,\non the same game server, in a chat room or lobby, or in a small Steam group with the local user.\nTo get the state of the current user use GetPersonaState.\n\n@param        steamIDFriend   The Steam ID of the other user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendPersonaState", nullptr, nullptr, sizeof(Friends_eventGetFriendPersonaState_Parms), Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendPersonaState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendPersonaState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics
	{
		struct Friends_eventGetFriendRelationship_Parms
		{
			FSteamID steamIDFriend;
			ESteamFriendRelationship ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRelationship_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamFriendRelationship, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRelationship_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a relationship to a specified user.\n\x09*\n\x09* @param\x09steamIDFriend\x09The Steam ID of the other user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets a relationship to a specified user.\n\n@param        steamIDFriend   The Steam ID of the other user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendRelationship", nullptr, nullptr, sizeof(Friends_eventGetFriendRelationship_Parms), Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendRelationship()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendRelationship_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics
	{
		struct Friends_eventGetFriendRichPresence_Parms
		{
			FSteamID steamIDFriend;
			FString key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresence_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresence_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresence_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Get a Rich Presence value from a specified friend.\n\x09*\n\x09* @param\x09steamIDFriend\x09The friend to get the Rich Presence value for.\n\x09* @param\x09key\x09\x09\x09\x09The Rich Presence key to request.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Get a Rich Presence value from a specified friend.\n\n@param        steamIDFriend   The friend to get the Rich Presence value for.\n@param        key                             The Rich Presence key to request." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendRichPresence", nullptr, nullptr, sizeof(Friends_eventGetFriendRichPresence_Parms), Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics
	{
		struct Friends_eventGetFriendRichPresenceKeyByIndex_Parms
		{
			FSteamID steamIDFriend;
			int32 key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyByIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyByIndex_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyByIndex_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a Rich Presence key by index.\n\x09*\n\x09* @param\x09steamIDFriend\x09This should be the same user provided to the previous call to GetFriendRichPresenceKeyCount!\n\x09* @param\x09key\x09\x09\x09\x09""An index between 0 and GetFriendRichPresenceKeyCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets a Rich Presence key by index.\n\n@param        steamIDFriend   This should be the same user provided to the previous call to GetFriendRichPresenceKeyCount!\n@param        key                             An index between 0 and GetFriendRichPresenceKeyCount." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendRichPresenceKeyByIndex", nullptr, nullptr, sizeof(Friends_eventGetFriendRichPresenceKeyByIndex_Parms), Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics
	{
		struct Friends_eventGetFriendRichPresenceKeyCount_Parms
		{
			FSteamID steamIDFriend;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendRichPresenceKeyCount_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of Rich Presence keys that are set on the specified user.\n\x09*\n\x09* This is used for iteration, after calling this then GetFriendRichPresenceKeyByIndex to get the rich presence keys.\n\x09* This is typically only ever used for debugging purposes.\n\x09*\n\x09* @param\x09steamIDFriend\x09The Steam ID of the user to get the Rich Presence Key Count of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the number of Rich Presence keys that are set on the specified user.\n\nThis is used for iteration, after calling this then GetFriendRichPresenceKeyByIndex to get the rich presence keys.\nThis is typically only ever used for debugging purposes.\n\n@param        steamIDFriend   The Steam ID of the user to get the Rich Presence Key Count of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendRichPresenceKeyCount", nullptr, nullptr, sizeof(Friends_eventGetFriendRichPresenceKeyCount_Parms), Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics
	{
		struct Friends_eventGetFriendsGroupCount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of friends groups (tags) the user has created.\n\x09*\n\x09* This is used for iteration, after calling this then GetFriendsGroupIDByIndex can be used to get the ID of each friend group.\n\x09* This is not to be confused with Steam groups. Those can be obtained with GetClanCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the number of friends groups (tags) the user has created.\n\nThis is used for iteration, after calling this then GetFriendsGroupIDByIndex can be used to get the ID of each friend group.\nThis is not to be confused with Steam groups. Those can be obtained with GetClanCount." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupCount", nullptr, nullptr, sizeof(Friends_eventGetFriendsGroupCount_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics
	{
		struct Friends_eventGetFriendsGroupIDByIndex_Parms
		{
			int32 friendGroup;
			FSteamFriendsGroupID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_friendGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupIDByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::NewProp_friendGroup = { "friendGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupIDByIndex_Parms, friendGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::NewProp_friendGroup,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the friends group ID for the given index.\n\x09*\n\x09* @param\x09""friendGroup\x09\x09""An index between 0 and GetFriendsGroupCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the friends group ID for the given index.\n\n@param        friendGroup             An index between 0 and GetFriendsGroupCount." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupIDByIndex", nullptr, nullptr, sizeof(Friends_eventGetFriendsGroupIDByIndex_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics
	{
		struct Friends_eventGetFriendsGroupMembersCount_Parms
		{
			FSteamFriendsGroupID friendsGroupID;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_friendsGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::NewProp_friendsGroupID = { "friendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersCount_Parms, friendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::NewProp_friendsGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of friends in a given friends group.\n\x09*\n\x09* This should be called before getting the list of friends with GetFriendsGroupMembersList.\n\x09*\n\x09* @param\x09""friendsGroupID\x09\x09The friends group ID to get the number of friends in.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the number of friends in a given friends group.\n\nThis should be called before getting the list of friends with GetFriendsGroupMembersList.\n\n@param        friendsGroupID          The friends group ID to get the number of friends in." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupMembersCount", nullptr, nullptr, sizeof(Friends_eventGetFriendsGroupMembersCount_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics
	{
		struct Friends_eventGetFriendsGroupMembersList_Parms
		{
			FSteamFriendsGroupID friendsGroupID;
			TArray<FSteamID> steamIDMembers;
			int32 membersCount;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_membersCount;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_steamIDMembers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDMembers_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_friendsGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_membersCount = { "membersCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersList_Parms, membersCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_steamIDMembers = { "steamIDMembers", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersList_Parms, steamIDMembers), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_steamIDMembers_Inner = { "steamIDMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_friendsGroupID = { "friendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupMembersList_Parms, friendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_membersCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_steamIDMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_steamIDMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::NewProp_friendsGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the number of friends in the given friends group.\n\x09*\n\x09* If fewer friends exist than requested those positions' Steam IDs will be invalid.\n\x09* You must call GetFriendsGroupMembersCount before calling this to set up the pOutSteamIDMembers array with an appropriate size!\n\x09*\n\x09* @param\x09""friendsGroupID\x09\x09The friends group ID to get the members list of.\n\x09* @param\x09steamIDMembers\x09\x09Returns the Steam IDs of the friends by setting them in this array.\n\x09* @param\x09membersCount\x09\x09This should match the number of elements allocated pOutSteamIDMembers and the value returned by GetFriendsGroupMembersCount.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the number of friends in the given friends group.\n\nIf fewer friends exist than requested those positions' Steam IDs will be invalid.\nYou must call GetFriendsGroupMembersCount before calling this to set up the pOutSteamIDMembers array with an appropriate size!\n\n@param        friendsGroupID          The friends group ID to get the members list of.\n@param        steamIDMembers          Returns the Steam IDs of the friends by setting them in this array.\n@param        membersCount            This should match the number of elements allocated pOutSteamIDMembers and the value returned by GetFriendsGroupMembersCount." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupMembersList", nullptr, nullptr, sizeof(Friends_eventGetFriendsGroupMembersList_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics
	{
		struct Friends_eventGetFriendsGroupName_Parms
		{
			FSteamFriendsGroupID friendsGroupID;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_friendsGroupID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::NewProp_friendsGroupID = { "friendsGroupID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendsGroupName_Parms, friendsGroupID), Z_Construct_UScriptStruct_FSteamFriendsGroupID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::NewProp_friendsGroupID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the name for the given friends group.\n\x09*\n\x09* @param\x09""friendsGroupID\x09\x09The friends group ID to get the name of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the name for the given friends group.\n\n@param        friendsGroupID          The friends group ID to get the name of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendsGroupName", nullptr, nullptr, sizeof(Friends_eventGetFriendsGroupName_Parms), Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendsGroupName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendsGroupName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics
	{
		struct Friends_eventGetFriendSteamLevel_Parms
		{
			FSteamID steamIDFriend;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendSteamLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetFriendSteamLevel_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the Steam level of the specified user.\n\x09*\n\x09* You can use the local users Steam ID (ISteamUser::GetSteamID) to get their level.\n\x09*\n\x09* @param\x09steamIDFriend\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the Steam level of the specified user.\n\nYou can use the local users Steam ID (ISteamUser::GetSteamID) to get their level.\n\n@param        steamIDFriend   The Steam ID of the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetFriendSteamLevel", nullptr, nullptr, sizeof(Friends_eventGetFriendSteamLevel_Parms), Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetFriendSteamLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetFriendSteamLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics
	{
		struct Friends_eventGetLargeFriendAvatar_Parms
		{
			FSteamID steamIDFriend;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetLargeFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetLargeFriendAvatar_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a handle to the large (128*128px) avatar for the specified user.\n\x09*\n\x09* You can pass in ISteamUser::GetSteamID to get the current users avatar.\n\x09* This only works for users that the local user knows about. They will automatically know about their friends, \n\x09* people on leaderboards they've requested, or people in the same source as them \n\x09* (Steam group, chat room, lobby, or game server). If they don't know about them then you must call \n\x09* RequestUserInformation to cache the avatar locally.\n\x09*\n\x09* @param\x09steamIDFriend\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets a handle to the large (128*128px) avatar for the specified user.\n\nYou can pass in ISteamUser::GetSteamID to get the current users avatar.\nThis only works for users that the local user knows about. They will automatically know about their friends,\npeople on leaderboards they've requested, or people in the same source as them\n(Steam group, chat room, lobby, or game server). If they don't know about them then you must call\nRequestUserInformation to cache the avatar locally.\n\n@param        steamIDFriend   The Steam ID of the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetLargeFriendAvatar", nullptr, nullptr, sizeof(Friends_eventGetLargeFriendAvatar_Parms), Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetLargeFriendAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetLargeFriendAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics
	{
		struct Friends_eventGetMediumFriendAvatar_Parms
		{
			FSteamID steamIDFriend;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetMediumFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetMediumFriendAvatar_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a handle to the large (64*64px) avatar for the specified user.\n\x09*\n\x09* You can pass in ISteamUser::GetSteamID to get the current users avatar.\n\x09* This only works for users that the local user knows about. They will automatically know about their friends,\n\x09* people on leaderboards they've requested, or people in the same source as them\n\x09* (Steam group, chat room, lobby, or game server). If they don't know about them then you must call\n\x09* RequestUserInformation to cache the avatar locally.\n\x09*\n\x09* @param\x09steamIDFriend\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets a handle to the large (64*64px) avatar for the specified user.\n\nYou can pass in ISteamUser::GetSteamID to get the current users avatar.\nThis only works for users that the local user knows about. They will automatically know about their friends,\npeople on leaderboards they've requested, or people in the same source as them\n(Steam group, chat room, lobby, or game server). If they don't know about them then you must call\nRequestUserInformation to cache the avatar locally.\n\n@param        steamIDFriend   The Steam ID of the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetMediumFriendAvatar", nullptr, nullptr, sizeof(Friends_eventGetMediumFriendAvatar_Parms), Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetMediumFriendAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetMediumFriendAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPersonaName_Statics
	{
		struct Friends_eventGetPersonaName_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPersonaName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPersonaName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPersonaName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the current users persona (display) name.\n\x09*\n\x09* This is the same name that is displayed the users community profile page.\n\x09* To get the persona name of other users use GetFriendPersonaName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the current users persona (display) name.\n\nThis is the same name that is displayed the users community profile page.\nTo get the persona name of other users use GetFriendPersonaName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPersonaName", nullptr, nullptr, sizeof(Friends_eventGetPersonaName_Parms), Z_Construct_UFunction_UFriends_GetPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPersonaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPersonaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetPersonaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics
	{
		struct Friends_eventGetPersonaName_Pure_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPersonaName_Pure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the current users persona (display) name.\n\x09*\n\x09* This is the same name that is displayed the users community profile page.\n\x09* To get the persona name of other users use GetFriendPersonaName.\n\x09*/" },
		{ "DisplayName", "Get Persona Name (Pure)" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the current users persona (display) name.\n\nThis is the same name that is displayed the users community profile page.\nTo get the persona name of other users use GetFriendPersonaName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPersonaName_Pure", nullptr, nullptr, sizeof(Friends_eventGetPersonaName_Pure_Parms), Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPersonaName_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetPersonaName_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPersonaState_Statics
	{
		struct Friends_eventGetPersonaState_Parms
		{
			ESteamPersonaState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetPersonaState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPersonaState_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamPersonaState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetPersonaState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPersonaState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPersonaState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the friend status of the current user.\n\x09*\n\x09* To get the state of other users use GetFriendPersonaState.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the friend status of the current user.\n\nTo get the state of other users use GetFriendPersonaState." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPersonaState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPersonaState", nullptr, nullptr, sizeof(Friends_eventGetPersonaState_Parms), Z_Construct_UFunction_UFriends_GetPersonaState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPersonaState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPersonaState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetPersonaState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics
	{
		struct Friends_eventGetPersonaState_Pure_Parms
		{
			ESteamPersonaState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPersonaState_Pure_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamPersonaState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the friend status of the current user.\n\x09*\n\x09* To get the state of other users use GetFriendPersonaState.\n\x09*/" },
		{ "DisplayName", "Get Persona State (Pure)" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the friend status of the current user.\n\nTo get the state of other users use GetFriendPersonaState." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPersonaState_Pure", nullptr, nullptr, sizeof(Friends_eventGetPersonaState_Pure_Parms), Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPersonaState_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetPersonaState_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics
	{
		struct Friends_eventGetPlayerNickname_Parms
		{
			FSteamID steamIDPlayer;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPlayerNickname_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::NewProp_steamIDPlayer = { "steamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPlayerNickname_Parms, steamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::NewProp_steamIDPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the nickname that the current user has set for the specified user.\n\x09*\n\x09* @param\x09steamIDPlayer\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the nickname that the current user has set for the specified user.\n\n@param        steamIDPlayer   The Steam ID of the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPlayerNickname", nullptr, nullptr, sizeof(Friends_eventGetPlayerNickname_Parms), Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPlayerNickname()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetPlayerNickname_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics
	{
		struct Friends_eventGetPlayerNickname_Pure_Parms
		{
			FSteamID steamIDPlayer;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPlayerNickname_Pure_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::NewProp_steamIDPlayer = { "steamIDPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetPlayerNickname_Pure_Parms, steamIDPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::NewProp_steamIDPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets the nickname that the current user has set for the specified user.\n\x09*\n\x09* @param\x09steamIDPlayer\x09The Steam ID of the user.\n\x09*/" },
		{ "DisplayName", "Get Player Nickname (Pure)" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets the nickname that the current user has set for the specified user.\n\n@param        steamIDPlayer   The Steam ID of the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetPlayerNickname_Pure", nullptr, nullptr, sizeof(Friends_eventGetPlayerNickname_Pure_Parms), Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics
	{
		struct Friends_eventGetSmallFriendAvatar_Parms
		{
			FSteamID steamIDFriend;
			UTexture2D* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetSmallFriendAvatar_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetSmallFriendAvatar_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Gets a handle to the large (32*32px) avatar for the specified user.\n\x09*\n\x09* You can pass in ISteamUser::GetSteamID to get the current users avatar.\n\x09* This only works for users that the local user knows about. They will automatically know about their friends,\n\x09* people on leaderboards they've requested, or people in the same source as them\n\x09* (Steam group, chat room, lobby, or game server). If they don't know about them then you must call\n\x09* RequestUserInformation to cache the avatar locally.\n\x09*\n\x09* @param\x09steamIDFriend\x09The Steam ID of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Gets a handle to the large (32*32px) avatar for the specified user.\n\nYou can pass in ISteamUser::GetSteamID to get the current users avatar.\nThis only works for users that the local user knows about. They will automatically know about their friends,\npeople on leaderboards they've requested, or people in the same source as them\n(Steam group, chat room, lobby, or game server). If they don't know about them then you must call\nRequestUserInformation to cache the avatar locally.\n\n@param        steamIDFriend   The Steam ID of the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetSmallFriendAvatar", nullptr, nullptr, sizeof(Friends_eventGetSmallFriendAvatar_Parms), Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetSmallFriendAvatar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetSmallFriendAvatar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics
	{
		struct Friends_eventGetUserRestrictions_Parms
		{
			TArray<ESteamUserRestriction> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventGetUserRestrictions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamUserRestriction, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::NewProp_ReturnValue_Inner_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if current user is chat restricted.\n\x09*\n\x09* If they are restricted, then they can't send or receive any text/voice chat messages, can't see custom avatars.\n\x09* A chat restricted user can't add friends or join any groups.\n\x09* Restricted users can still be online and send/receive game invites.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Checks if current user is chat restricted.\n\nIf they are restricted, then they can't send or receive any text/voice chat messages, can't see custom avatars.\nA chat restricted user can't add friends or join any groups.\nRestricted users can still be online and send/receive game invites." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "GetUserRestrictions", nullptr, nullptr, sizeof(Friends_eventGetUserRestrictions_Parms), Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_GetUserRestrictions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_GetUserRestrictions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_HasFriend_Statics
	{
		struct Friends_eventHasFriend_Parms
		{
			FSteamID steamIDFriend;
			TArray<ESteamFriendFlags> flags;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_flags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_flags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_flags_Inner_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventHasFriend_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventHasFriend_Parms), &Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_flags = { "flags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventHasFriend_Parms, flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_flags_Inner = { "flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFriendFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventHasFriend_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_HasFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_HasFriend_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_HasFriend_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the user meets the specified criteria. (Friends, blocked, users on the same server, etc)\n\x09*\n\x09* @param\x09steamIDFriend\x09The Steam user to check the friend status of.\n\x09* @param\x09""flags\x09\x09""A combined union (binary \"or\") of one or more EFriendFlags.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Checks if the user meets the specified criteria. (Friends, blocked, users on the same server, etc)\n\n@param        steamIDFriend   The Steam user to check the friend status of.\n@param        flags           A combined union (binary \"or\") of one or more EFriendFlags." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_HasFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "HasFriend", nullptr, nullptr, sizeof(Friends_eventHasFriend_Parms), Z_Construct_UFunction_UFriends_HasFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_HasFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_HasFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_HasFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_HasFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_HasFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_InviteUserToGame_Statics
	{
		struct Friends_eventInviteUserToGame_Parms
		{
			FSteamID steamIDFriend;
			FString connectString;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_connectString;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventInviteUserToGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventInviteUserToGame_Parms), &Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_connectString = { "connectString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventInviteUserToGame_Parms, connectString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventInviteUserToGame_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_connectString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Invites a friend or clan member to the current game using a special invite string.\n\x09*\n\x09* If the target user accepts the invite then the pchConnectString gets added to the command-line when launching the game.\n\x09* If the game is already running for that user, then they will receive a GameRichPresenceJoinRequested_t callback with the connect string.\n\x09*\n\x09* @param\x09steamIDFriend\x09The Steam ID of the friend to invite.\n\x09* @param\x09""connectString\x09""A string that lets the friend know how to join the game (I.E. the game server IP). This can not be longer than specified in k_cchMaxRichPresenceValueLength\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Invites a friend or clan member to the current game using a special invite string.\n\nIf the target user accepts the invite then the pchConnectString gets added to the command-line when launching the game.\nIf the game is already running for that user, then they will receive a GameRichPresenceJoinRequested_t callback with the connect string.\n\n@param        steamIDFriend   The Steam ID of the friend to invite.\n@param        connectString   A string that lets the friend know how to join the game (I.E. the game server IP). This can not be longer than specified in k_cchMaxRichPresenceValueLength" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "InviteUserToGame", nullptr, nullptr, sizeof(Friends_eventInviteUserToGame_Parms), Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_InviteUserToGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_InviteUserToGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics
	{
		struct Friends_eventIsClanChatAdmin_Parms
		{
			FSteamID steamIDClanChat;
			FSteamID steamIDUser;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClanChat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsClanChatAdmin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventIsClanChatAdmin_Parms), &Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsClanChatAdmin_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_steamIDClanChat = { "steamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsClanChatAdmin_Parms, steamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_steamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::NewProp_steamIDClanChat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if a user in the Steam group chat room is an admin.\n\x09*\n\x09* @param\x09steamIDClanChat\x09\x09The Steam ID of the Steam group chat room.\n\x09* @param\x09steamIDUser\x09\x09\x09The Steam ID of the user to check the admin status of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Checks if a user in the Steam group chat room is an admin.\n\n@param        steamIDClanChat         The Steam ID of the Steam group chat room.\n@param        steamIDUser                     The Steam ID of the user to check the admin status of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsClanChatAdmin", nullptr, nullptr, sizeof(Friends_eventIsClanChatAdmin_Parms), Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsClanChatAdmin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_IsClanChatAdmin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics
	{
		struct Friends_eventIsClanChatWindowOpenInSteam_Parms
		{
			FSteamID steamIDClanChat;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClanChat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsClanChatWindowOpenInSteam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventIsClanChatWindowOpenInSteam_Parms), &Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_steamIDClanChat = { "steamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsClanChatWindowOpenInSteam_Parms, steamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::NewProp_steamIDClanChat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the Steam Group chat room is open in the Steam UI.\n\x09*\n\x09* @param\x09steamIDClanChat\x09\x09The Steam ID of the Steam group chat room to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Checks if the Steam Group chat room is open in the Steam UI.\n\n@param        steamIDClanChat         The Steam ID of the Steam group chat room to check." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsClanChatWindowOpenInSteam", nullptr, nullptr, sizeof(Friends_eventIsClanChatWindowOpenInSteam_Parms), Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics
	{
		struct Friends_eventIsClanOfficialGameGroup_Parms
		{
			FSteamID steamIDClan;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsClanOfficialGameGroup_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventIsClanOfficialGameGroup_Parms), &Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_steamIDClan = { "steamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsClanOfficialGameGroup_Parms, steamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::NewProp_steamIDClan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the Steam group is an official game group/community hub.\n\x09*\n\x09* @param\x09steamIDClan\x09\x09The Steam ID of the Steam group.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Checks if the Steam group is an official game group/community hub.\n\n@param        steamIDClan             The Steam ID of the Steam group." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsClanOfficialGameGroup", nullptr, nullptr, sizeof(Friends_eventIsClanOfficialGameGroup_Parms), Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsClanPublic_Statics
	{
		struct Friends_eventIsClanPublic_Parms
		{
			FSteamID steamIDClan;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsClanPublic_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventIsClanPublic_Parms), &Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_steamIDClan = { "steamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsClanPublic_Parms, steamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsClanPublic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsClanPublic_Statics::NewProp_steamIDClan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsClanPublic_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the Steam group is public.\n\x09*\n\x09* @param\x09steamIDClan\x09\x09The Steam ID of the Steam group.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Checks if the Steam group is public.\n\n@param        steamIDClan             The Steam ID of the Steam group." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsClanPublic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsClanPublic", nullptr, nullptr, sizeof(Friends_eventIsClanPublic_Parms), Z_Construct_UFunction_UFriends_IsClanPublic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanPublic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsClanPublic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsClanPublic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsClanPublic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_IsClanPublic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsFollowing_Statics
	{
		struct Friends_eventIsFollowing_Parms
		{
			FScriptDelegate callback;
			FSteamID steamID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsFollowing_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsFollowing_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnIsFollowing__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsFollowing_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsFollowing_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsFollowing_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if the current user is following the specified user.\n\x09*\n\x09* @param\x09steamID\x09\x09The Steam ID of the check if we are following.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Checks if the current user is following the specified user.\n\n@param        steamID         The Steam ID of the check if we are following." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsFollowing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsFollowing", nullptr, nullptr, sizeof(Friends_eventIsFollowing_Parms), Z_Construct_UFunction_UFriends_IsFollowing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsFollowing_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsFollowing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsFollowing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsFollowing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_IsFollowing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_IsUserInSource_Statics
	{
		struct Friends_eventIsUserInSource_Parms
		{
			FSteamID steamIDUser;
			FSteamID steamIDSource;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDSource;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventIsUserInSource_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventIsUserInSource_Parms), &Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_steamIDSource = { "steamIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsUserInSource_Parms, steamIDSource), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventIsUserInSource_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_IsUserInSource_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_steamIDSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_IsUserInSource_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_IsUserInSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Checks if a specified user is in a source (Steam group, chat room, lobby, or game server).\n\x09*\n\x09* @param\x09steamIDUser\x09\x09The user to check if they are in the source.\n\x09* @param\x09steamIDSource\x09The source to check for the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Checks if a specified user is in a source (Steam group, chat room, lobby, or game server).\n\n@param        steamIDUser             The user to check if they are in the source.\n@param        steamIDSource   The source to check for the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_IsUserInSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "IsUserInSource", nullptr, nullptr, sizeof(Friends_eventIsUserInSource_Parms), Z_Construct_UFunction_UFriends_IsUserInSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsUserInSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_IsUserInSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_IsUserInSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_IsUserInSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_IsUserInSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics
	{
		struct Friends_eventJoinClanChatRoom_Parms
		{
			FScriptDelegate callback;
			FSteamID steamIDClan;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_steamIDClan = { "steamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventJoinClanChatRoom_Parms, steamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventJoinClanChatRoom_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoom__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_steamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Allows the user to join Steam group (clan) chats right within the game.\n\x09*\n\x09* The behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\n\x09* You can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\x09*\n\x09* @param\x09steamIDClan\x09\x09The Steam ID of the Steam group to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Allows the user to join Steam group (clan) chats right within the game.\n\nThe behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.\nYou can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.\n\n@param        steamIDClan             The Steam ID of the Steam group to join." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "JoinClanChatRoom", nullptr, nullptr, sizeof(Friends_eventJoinClanChatRoom_Parms), Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_JoinClanChatRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_JoinClanChatRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics
	{
		struct Friends_eventLeaveClanChatRoom_Parms
		{
			FSteamID steamIDClan;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClan;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventLeaveClanChatRoom_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventLeaveClanChatRoom_Parms), &Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_steamIDClan = { "steamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventLeaveClanChatRoom_Parms, steamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::NewProp_steamIDClan,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Leaves a Steam group chat that the user has previously entered with JoinClanChatRoom.\n\x09*\n\x09* @param\x09steamIDClan\x09\x09The Steam ID of the Steam group chat to leave.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Leaves a Steam group chat that the user has previously entered with JoinClanChatRoom.\n\n@param        steamIDClan             The Steam ID of the Steam group chat to leave." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "LeaveClanChatRoom", nullptr, nullptr, sizeof(Friends_eventLeaveClanChatRoom_Parms), Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_LeaveClanChatRoom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_LeaveClanChatRoom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics
	{
		struct Friends_eventOpenClanChatWindowInSteam_Parms
		{
			FSteamID steamIDClanChat;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClanChat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventOpenClanChatWindowInSteam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventOpenClanChatWindowInSteam_Parms), &Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_steamIDClanChat = { "steamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventOpenClanChatWindowInSteam_Parms, steamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::NewProp_steamIDClanChat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Opens the specified Steam group chat room in the Steam UI.\n\x09*\n\x09* @param\x09steamIDClanChat\x09\x09The Steam ID of the Steam group chat room to open.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Opens the specified Steam group chat room in the Steam UI.\n\n@param        steamIDClanChat         The Steam ID of the Steam group chat room to open." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "OpenClanChatWindowInSteam", nullptr, nullptr, sizeof(Friends_eventOpenClanChatWindowInSteam_Parms), Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics
	{
		struct Friends_eventReplyToFriendMessage_Parms
		{
			FSteamID steamIDFriend;
			FString msgToSend;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_msgToSend;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventReplyToFriendMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventReplyToFriendMessage_Parms), &Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_msgToSend = { "msgToSend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventReplyToFriendMessage_Parms, msgToSend), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventReplyToFriendMessage_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_msgToSend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Sends a message to a Steam friend.\n\x09*\n\x09* @param\x09steamIDFriend\x09\x09The Steam ID of the friend to send the message to.\n\x09* @param\x09msgToSend\x09\x09\x09The UTF-8 formatted message to send.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Sends a message to a Steam friend.\n\n@param        steamIDFriend           The Steam ID of the friend to send the message to.\n@param        msgToSend                       The UTF-8 formatted message to send." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "ReplyToFriendMessage", nullptr, nullptr, sizeof(Friends_eventReplyToFriendMessage_Parms), Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_ReplyToFriendMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_ReplyToFriendMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics
	{
		struct Friends_eventRequestClanOfficerList_Parms
		{
			FScriptDelegate callback;
			FSteamID steamIDClan;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_steamIDClan = { "steamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventRequestClanOfficerList_Parms, steamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventRequestClanOfficerList_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestClanOfficerList__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_steamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Requests information about a Steam group officers (administrators and moderators).\n\x09*\n\x09* You can only ask about Steam groups that a user is a member of.\n\x09* This won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\x09*\n\x09* @param\x09steamIDClan\x09\x09The Steam group to get the officers list for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Requests information about a Steam group officers (administrators and moderators).\n\nYou can only ask about Steam groups that a user is a member of.\nThis won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.\n\n@param        steamIDClan             The Steam group to get the officers list for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "RequestClanOfficerList", nullptr, nullptr, sizeof(Friends_eventRequestClanOfficerList_Parms), Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_RequestClanOfficerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_RequestClanOfficerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics
	{
		struct Friends_eventRequestFriendRichPresence_Parms
		{
			FSteamID steamIDFriend;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::NewProp_steamIDFriend = { "steamIDFriend", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventRequestFriendRichPresence_Parms, steamIDFriend), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::NewProp_steamIDFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Requests Rich Presence data from a specific user.\n\x09*\n\x09* This is used to get the Rich Presence information from a user that is not a friend of the current user, like someone in the same lobby or game server.\n\x09* This function is rate limited, if you call this too frequently for a particular user then it will just immediately post a callback without requesting new data from the server.\n\x09*\n\x09* @param\x09steamIDFriend\x09The Steam ID of the user to request the rich presence of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Requests Rich Presence data from a specific user.\n\nThis is used to get the Rich Presence information from a user that is not a friend of the current user, like someone in the same lobby or game server.\nThis function is rate limited, if you call this too frequently for a particular user then it will just immediately post a callback without requesting new data from the server.\n\n@param        steamIDFriend   The Steam ID of the user to request the rich presence of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "RequestFriendRichPresence", nullptr, nullptr, sizeof(Friends_eventRequestFriendRichPresence_Parms), Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_RequestFriendRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_RequestFriendRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_RequestUserInformation_Statics
	{
		struct Friends_eventRequestUserInformation_Parms
		{
			FSteamID steamIDUser;
			bool bRequireNameOnly;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bRequireNameOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRequireNameOnly;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventRequestUserInformation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventRequestUserInformation_Parms), &Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly_SetBit(void* Obj)
	{
		((Friends_eventRequestUserInformation_Parms*)Obj)->bRequireNameOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly = { "bRequireNameOnly", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventRequestUserInformation_Parms), &Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventRequestUserInformation_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_bRequireNameOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Requests the persona name and optionally the avatar of a specified user.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09\x09The user to request the information of.\n\x09* @param\x09""bRequireNameOnly\x09Retrieve the Persona name only (true)? Or both the name and the avatar (false)?\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Requests the persona name and optionally the avatar of a specified user.\n\n@param        steamIDUser                     The user to request the information of.\n@param        bRequireNameOnly        Retrieve the Persona name only (true)? Or both the name and the avatar (false)?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "RequestUserInformation", nullptr, nullptr, sizeof(Friends_eventRequestUserInformation_Parms), Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_RequestUserInformation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_RequestUserInformation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics
	{
		struct Friends_eventSendClanChatMessage_Parms
		{
			FSteamID steamIDClanChat;
			FString text;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_text;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClanChat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventSendClanChatMessage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventSendClanChatMessage_Parms), &Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_text = { "text", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSendClanChatMessage_Parms, text), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_steamIDClanChat = { "steamIDClanChat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSendClanChatMessage_Parms, steamIDClanChat), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::NewProp_steamIDClanChat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Sends a message to a Steam group chat room.\n\x09*\n\x09* @param\x09steamIDClanChat\x09\x09The Steam ID of the group chat to send the message to.\n\x09* @param\x09text\x09\x09\x09\x09The UTF-8 formatted message to send. This can be up to 2048 characters long.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Sends a message to a Steam group chat room.\n\n@param        steamIDClanChat         The Steam ID of the group chat to send the message to.\n@param        text                            The UTF-8 formatted message to send. This can be up to 2048 characters long." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SendClanChatMessage", nullptr, nullptr, sizeof(Friends_eventSendClanChatMessage_Parms), Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SendClanChatMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_SendClanChatMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics
	{
		struct Friends_eventSetInGameVoiceSpeaking_Parms
		{
			FSteamID steamIDUser;
			bool bSpeaking;
		};
		static void NewProp_bSpeaking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpeaking;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit(void* Obj)
	{
		((Friends_eventSetInGameVoiceSpeaking_Parms*)Obj)->bSpeaking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking = { "bSpeaking", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventSetInGameVoiceSpeaking_Parms), &Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSetInGameVoiceSpeaking_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_bSpeaking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Let Steam know that the user is currently using voice chat in game.\n\x09*\n\x09* This will suppress the microphone for all voice communication in the Steam UI.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09Unused.\n\x09* @param\x09""bSpeaking\x09\x09""Did the user start speaking in game (true) or stopped speaking in game (false)?\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Let Steam know that the user is currently using voice chat in game.\n\nThis will suppress the microphone for all voice communication in the Steam UI.\n\n@param        steamIDUser             Unused.\n@param        bSpeaking               Did the user start speaking in game (true) or stopped speaking in game (false)?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetInGameVoiceSpeaking", nullptr, nullptr, sizeof(Friends_eventSetInGameVoiceSpeaking_Parms), Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics
	{
		struct Friends_eventSetListenForFriendsMessages_Parms
		{
			bool bInterceptEnabled;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bInterceptEnabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInterceptEnabled;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventSetListenForFriendsMessages_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventSetListenForFriendsMessages_Parms), &Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled_SetBit(void* Obj)
	{
		((Friends_eventSetListenForFriendsMessages_Parms*)Obj)->bInterceptEnabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled = { "bInterceptEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventSetListenForFriendsMessages_Parms), &Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::NewProp_bInterceptEnabled,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Listens for Steam friends chat messages.\n\x09*\n\x09* You can then show these chats inline in the game. \n\x09* For example with a Blizzard style chat message system or the chat system in Dota 2.\n\x09* After enabling this you will receive GameConnectedFriendChatMsg_t \n\x09* callbacks when ever the user receives a chat message. \n\x09* You can get the actual message data from this callback with GetFriendMessage. You can send messages with ReplyToFriendMessage.\n\x09*\n\x09* @param\x09""bInterceptEnabled\x09Turn friends message interception on (true) or off (false)?\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Listens for Steam friends chat messages.\n\nYou can then show these chats inline in the game.\nFor example with a Blizzard style chat message system or the chat system in Dota 2.\nAfter enabling this you will receive GameConnectedFriendChatMsg_t\ncallbacks when ever the user receives a chat message.\nYou can get the actual message data from this callback with GetFriendMessage. You can send messages with ReplyToFriendMessage.\n\n@param        bInterceptEnabled       Turn friends message interception on (true) or off (false)?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetListenForFriendsMessages", nullptr, nullptr, sizeof(Friends_eventSetListenForFriendsMessages_Parms), Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetListenForFriendsMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_SetListenForFriendsMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetPersonaName_Statics
	{
		struct Friends_eventSetPersonaName_Parms
		{
			FScriptDelegate callback;
			FString name;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSetPersonaName_Parms, name), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSetPersonaName_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaName__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetPersonaName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetPersonaName_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetPersonaName_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.\n\x09*\n\x09* Changes take place locally immediately, and a PersonaStateChange_t callback is posted, presuming success.\n\x09* If the name change fails to happen on the server, then an additional PersonaStateChange_t \n\x09* callback will be posted to change the name back, in addition to the final result available in the call result.\n\x09*\n\x09* @param\x09name\x09The users new persona name. Can not be longer than k_cchPersonaNameMax bytes.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.\n\nChanges take place locally immediately, and a PersonaStateChange_t callback is posted, presuming success.\nIf the name change fails to happen on the server, then an additional PersonaStateChange_t\ncallback will be posted to change the name back, in addition to the final result available in the call result.\n\n@param        name    The users new persona name. Can not be longer than k_cchPersonaNameMax bytes." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetPersonaName", nullptr, nullptr, sizeof(Friends_eventSetPersonaName_Parms), Z_Construct_UFunction_UFriends_SetPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPersonaName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetPersonaName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_SetPersonaName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetPlayedWith_Statics
	{
		struct Friends_eventSetPlayedWith_Parms
		{
			FSteamID steamIDUserPlayedWith;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUserPlayedWith;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::NewProp_steamIDUserPlayedWith = { "steamIDUserPlayedWith", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSetPlayedWith_Parms, steamIDUserPlayedWith), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::NewProp_steamIDUserPlayedWith,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Mark a target user as 'played with'.\n\x09*\n\x09* The current user must be in game with the other player for the association to work.\n\x09*\n\x09* @param\x09steamIDUserPlayedWith\x09The other user that we have played with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Mark a target user as 'played with'.\n\nThe current user must be in game with the other player for the association to work.\n\n@param        steamIDUserPlayedWith   The other user that we have played with." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetPlayedWith", nullptr, nullptr, sizeof(Friends_eventSetPlayedWith_Parms), Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetPlayedWith()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_SetPlayedWith_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFriends_SetRichPresence_Statics
	{
		struct Friends_eventSetRichPresence_Parms
		{
			FString key;
			FString value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Friends_eventSetRichPresence_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Friends_eventSetRichPresence_Parms), &Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSetRichPresence_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Friends_eventSetRichPresence_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFriends_SetRichPresence_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFriends_SetRichPresence_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFriends_SetRichPresence_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Friends" },
		{ "Comment", "/**\n\x09* Sets a Rich Presence key/value for the current user that is automatically shared to all friends playing the same game.\n\x09*\n\x09* Each user can have up to 20 keys set as defined by k_cchMaxRichPresenceKeys.\n\x09*\n\x09* @param\x09key\x09\x09The rich presence 'key' to set. This can not be longer than specified in k_cchMaxRichPresenceKeyLength.\n\x09* @param\x09value\x09The rich presence 'value' to associate with pchKey. This can not be longer than specified in k_cchMaxRichPresenceValueLength. If this is set to an empty string (\"\") or NULL then the key is removed if it's set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
		{ "ToolTip", "Sets a Rich Presence key/value for the current user that is automatically shared to all friends playing the same game.\n\nEach user can have up to 20 keys set as defined by k_cchMaxRichPresenceKeys.\n\n@param        key             The rich presence 'key' to set. This can not be longer than specified in k_cchMaxRichPresenceKeyLength.\n@param        value   The rich presence 'value' to associate with pchKey. This can not be longer than specified in k_cchMaxRichPresenceValueLength. If this is set to an empty string (\"\") or NULL then the key is removed if it's set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFriends_SetRichPresence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFriends, nullptr, "SetRichPresence", nullptr, nullptr, sizeof(Friends_eventSetRichPresence_Parms), Z_Construct_UFunction_UFriends_SetRichPresence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetRichPresence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFriends_SetRichPresence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFriends_SetRichPresence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFriends_SetRichPresence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFriends_SetRichPresence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFriends_NoRegister()
	{
		return UFriends::StaticClass();
	}
	struct Z_Construct_UClass_UFriends_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadClanActivityCountsResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_DownloadClanActivityCountsResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClanOfficerListResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClanOfficerListResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JoinClanChatRoomCompletionResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_JoinClanChatRoomCompletionResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetPersonaNameResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SetPersonaNameResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PersonaStateChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_PersonaStateChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameServerChangeRequested_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameServerChangeRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameRichPresenceJoinRequested_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameRichPresenceJoinRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameOverlayActivated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameOverlayActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameLobbyJoinRequested_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameLobbyJoinRequested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameConnectedFriendChatMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedFriendChatMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameConnectedClanChatMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedClanChatMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameConnectedChatLeave_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedChatLeave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameConnectedChatJoin_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameConnectedChatJoin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendRichPresenceUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FriendRichPresenceUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvatarImageLoaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_AvatarImageLoaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFriends_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFriends_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlay, "ActivateGameOverlay" }, // 2057898917
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlayInvitedialog, "ActivateGameOverlayInvitedialog" }, // 1525618931
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlayToStore, "ActivateGameOverlayToStore" }, // 1617025032
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlayToUser, "ActivateGameOverlayToUser" }, // 963530649
		{ &Z_Construct_UFunction_UFriends_ActivateGameOverlayToWebPage, "ActivateGameOverlayToWebPage" }, // 3595815854
		{ &Z_Construct_UFunction_UFriends_ClearRichPresence, "ClearRichPresence" }, // 1666343768
		{ &Z_Construct_UFunction_UFriends_CloseClanChatWindowInSteam, "CloseClanChatWindowInSteam" }, // 1476211017
		{ &Z_Construct_UFunction_UFriends_DownloadClanActivityCounts, "DownloadClanActivityCounts" }, // 3846296092
		{ &Z_Construct_UFunction_UFriends_EnumerateFollowingList, "EnumerateFollowingList" }, // 3617939288
		{ &Z_Construct_UFunction_UFriends_GetChatMemberByIndex, "GetChatMemberByIndex" }, // 3048190627
		{ &Z_Construct_UFunction_UFriends_GetClanActivityCounts, "GetClanActivityCounts" }, // 597144750
		{ &Z_Construct_UFunction_UFriends_GetClanByIndex, "GetClanByIndex" }, // 1170798751
		{ &Z_Construct_UFunction_UFriends_GetClanChatMemberCount, "GetClanChatMemberCount" }, // 2626089735
		{ &Z_Construct_UFunction_UFriends_GetClanChatMessage, "GetClanChatMessage" }, // 663565436
		{ &Z_Construct_UFunction_UFriends_GetClanCount, "GetClanCount" }, // 3041446617
		{ &Z_Construct_UFunction_UFriends_GetClanName, "GetClanName" }, // 3862403400
		{ &Z_Construct_UFunction_UFriends_GetClanOfficerByIndex, "GetClanOfficerByIndex" }, // 3385291432
		{ &Z_Construct_UFunction_UFriends_GetClanOfficerCount, "GetClanOfficerCount" }, // 3538232517
		{ &Z_Construct_UFunction_UFriends_GetClanOwner, "GetClanOwner" }, // 2142507932
		{ &Z_Construct_UFunction_UFriends_GetClanTag, "GetClanTag" }, // 4076439267
		{ &Z_Construct_UFunction_UFriends_GetCoplayFriend, "GetCoplayFriend" }, // 935454451
		{ &Z_Construct_UFunction_UFriends_GetCoplayFriendCount, "GetCoplayFriendCount" }, // 54569133
		{ &Z_Construct_UFunction_UFriends_GetFollowerCount, "GetFollowerCount" }, // 3691411852
		{ &Z_Construct_UFunction_UFriends_GetFriendByIndex, "GetFriendByIndex" }, // 2597023305
		{ &Z_Construct_UFunction_UFriends_GetFriendCoplayGame, "GetFriendCoplayGame" }, // 2933702299
		{ &Z_Construct_UFunction_UFriends_GetFriendCoplayTime, "GetFriendCoplayTime" }, // 1373010698
		{ &Z_Construct_UFunction_UFriends_GetFriendCount, "GetFriendCount" }, // 955749276
		{ &Z_Construct_UFunction_UFriends_GetFriendCountFromSource, "GetFriendCountFromSource" }, // 4176779854
		{ &Z_Construct_UFunction_UFriends_GetFriendFromSourceByIndex, "GetFriendFromSourceByIndex" }, // 4101746300
		{ &Z_Construct_UFunction_UFriends_GetFriendGamePlayed, "GetFriendGamePlayed" }, // 1978617587
		{ &Z_Construct_UFunction_UFriends_GetFriendMessage, "GetFriendMessage" }, // 2608915381
		{ &Z_Construct_UFunction_UFriends_GetFriendPersonaName, "GetFriendPersonaName" }, // 1327981179
		{ &Z_Construct_UFunction_UFriends_GetFriendPersonaNameHistory, "GetFriendPersonaNameHistory" }, // 2579222079
		{ &Z_Construct_UFunction_UFriends_GetFriendPersonaState, "GetFriendPersonaState" }, // 877855015
		{ &Z_Construct_UFunction_UFriends_GetFriendRelationship, "GetFriendRelationship" }, // 984128906
		{ &Z_Construct_UFunction_UFriends_GetFriendRichPresence, "GetFriendRichPresence" }, // 2864175702
		{ &Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyByIndex, "GetFriendRichPresenceKeyByIndex" }, // 105334155
		{ &Z_Construct_UFunction_UFriends_GetFriendRichPresenceKeyCount, "GetFriendRichPresenceKeyCount" }, // 3979408702
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupCount, "GetFriendsGroupCount" }, // 3804196472
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupIDByIndex, "GetFriendsGroupIDByIndex" }, // 1164636273
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupMembersCount, "GetFriendsGroupMembersCount" }, // 1078410957
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupMembersList, "GetFriendsGroupMembersList" }, // 3525218255
		{ &Z_Construct_UFunction_UFriends_GetFriendsGroupName, "GetFriendsGroupName" }, // 3852460402
		{ &Z_Construct_UFunction_UFriends_GetFriendSteamLevel, "GetFriendSteamLevel" }, // 1319889446
		{ &Z_Construct_UFunction_UFriends_GetLargeFriendAvatar, "GetLargeFriendAvatar" }, // 954190747
		{ &Z_Construct_UFunction_UFriends_GetMediumFriendAvatar, "GetMediumFriendAvatar" }, // 2837002486
		{ &Z_Construct_UFunction_UFriends_GetPersonaName, "GetPersonaName" }, // 4031261363
		{ &Z_Construct_UFunction_UFriends_GetPersonaName_Pure, "GetPersonaName_Pure" }, // 2022797918
		{ &Z_Construct_UFunction_UFriends_GetPersonaState, "GetPersonaState" }, // 487126651
		{ &Z_Construct_UFunction_UFriends_GetPersonaState_Pure, "GetPersonaState_Pure" }, // 104984159
		{ &Z_Construct_UFunction_UFriends_GetPlayerNickname, "GetPlayerNickname" }, // 3120856756
		{ &Z_Construct_UFunction_UFriends_GetPlayerNickname_Pure, "GetPlayerNickname_Pure" }, // 4270911107
		{ &Z_Construct_UFunction_UFriends_GetSmallFriendAvatar, "GetSmallFriendAvatar" }, // 3960332962
		{ &Z_Construct_UFunction_UFriends_GetUserRestrictions, "GetUserRestrictions" }, // 2874598204
		{ &Z_Construct_UFunction_UFriends_HasFriend, "HasFriend" }, // 2525785260
		{ &Z_Construct_UFunction_UFriends_InviteUserToGame, "InviteUserToGame" }, // 3151206448
		{ &Z_Construct_UFunction_UFriends_IsClanChatAdmin, "IsClanChatAdmin" }, // 1928361863
		{ &Z_Construct_UFunction_UFriends_IsClanChatWindowOpenInSteam, "IsClanChatWindowOpenInSteam" }, // 3753870369
		{ &Z_Construct_UFunction_UFriends_IsClanOfficialGameGroup, "IsClanOfficialGameGroup" }, // 2560588931
		{ &Z_Construct_UFunction_UFriends_IsClanPublic, "IsClanPublic" }, // 303601694
		{ &Z_Construct_UFunction_UFriends_IsFollowing, "IsFollowing" }, // 4088867523
		{ &Z_Construct_UFunction_UFriends_IsUserInSource, "IsUserInSource" }, // 2249318303
		{ &Z_Construct_UFunction_UFriends_JoinClanChatRoom, "JoinClanChatRoom" }, // 1809609989
		{ &Z_Construct_UFunction_UFriends_LeaveClanChatRoom, "LeaveClanChatRoom" }, // 2823189924
		{ &Z_Construct_UFunction_UFriends_OpenClanChatWindowInSteam, "OpenClanChatWindowInSteam" }, // 3748299217
		{ &Z_Construct_UFunction_UFriends_ReplyToFriendMessage, "ReplyToFriendMessage" }, // 307049268
		{ &Z_Construct_UFunction_UFriends_RequestClanOfficerList, "RequestClanOfficerList" }, // 2750603985
		{ &Z_Construct_UFunction_UFriends_RequestFriendRichPresence, "RequestFriendRichPresence" }, // 3771126644
		{ &Z_Construct_UFunction_UFriends_RequestUserInformation, "RequestUserInformation" }, // 3279428449
		{ &Z_Construct_UFunction_UFriends_SendClanChatMessage, "SendClanChatMessage" }, // 1238034045
		{ &Z_Construct_UFunction_UFriends_SetInGameVoiceSpeaking, "SetInGameVoiceSpeaking" }, // 1037396158
		{ &Z_Construct_UFunction_UFriends_SetListenForFriendsMessages, "SetListenForFriendsMessages" }, // 779610825
		{ &Z_Construct_UFunction_UFriends_SetPersonaName, "SetPersonaName" }, // 1589624560
		{ &Z_Construct_UFunction_UFriends_SetPlayedWith, "SetPlayedWith" }, // 2633621106
		{ &Z_Construct_UFunction_UFriends_SetRichPresence, "SetRichPresence" }, // 528775969
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Friends/Friends.h" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult = { "DownloadClanActivityCountsResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, DownloadClanActivityCountsResult), Z_Construct_UDelegateFunction_SteamCore_OnDownloadClanActivityCountsResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse = { "ClanOfficerListResponse", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, ClanOfficerListResponse), Z_Construct_UDelegateFunction_SteamCore_OnClanOfficerListResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult = { "JoinClanChatRoomCompletionResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, JoinClanChatRoomCompletionResult), Z_Construct_UDelegateFunction_SteamCore_OnJoinClanChatRoomCompletionResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse = { "SetPersonaNameResponse", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, SetPersonaNameResponse), Z_Construct_UDelegateFunction_SteamCore_OnSetPersonaNameResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange = { "PersonaStateChange", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, PersonaStateChange), Z_Construct_UDelegateFunction_SteamCore_OnPersonaStateChange__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested = { "GameServerChangeRequested", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameServerChangeRequested), Z_Construct_UDelegateFunction_SteamCore_OnGameServerChangeRequested__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested = { "GameRichPresenceJoinRequested", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameRichPresenceJoinRequested), Z_Construct_UDelegateFunction_SteamCore_OnGameRichPresenceJoinRequested__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated = { "GameOverlayActivated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameOverlayActivated), Z_Construct_UDelegateFunction_SteamCore_OnGameOverlayActivated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested = { "GameLobbyJoinRequested", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameLobbyJoinRequested), Z_Construct_UDelegateFunction_SteamCore_OnGameLobbyJoinRequested__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg = { "GameConnectedFriendChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameConnectedFriendChatMsg), Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedFriendChatMsg__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg = { "GameConnectedClanChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameConnectedClanChatMsg), Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedClanChatMsg__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave = { "GameConnectedChatLeave", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameConnectedChatLeave), Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedChatLeave__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin = { "GameConnectedChatJoin", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, GameConnectedChatJoin), Z_Construct_UDelegateFunction_SteamCore_OnGameConnectedChatJoin__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate = { "FriendRichPresenceUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, FriendRichPresenceUpdate), Z_Construct_UDelegateFunction_SteamCore_OnFriendRichPresenceUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded_MetaData[] = {
		{ "Category", "SteamCore|Friends|Delegates" },
		{ "ModuleRelativePath", "Public/Friends/Friends.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded = { "AvatarImageLoaded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFriends, AvatarImageLoaded), Z_Construct_UDelegateFunction_SteamCore_OnAvatarImageLoaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFriends_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_DownloadClanActivityCountsResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_ClanOfficerListResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_JoinClanChatRoomCompletionResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_SetPersonaNameResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_PersonaStateChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameServerChangeRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameRichPresenceJoinRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameOverlayActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameLobbyJoinRequested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedFriendChatMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedClanChatMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatLeave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_GameConnectedChatJoin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_FriendRichPresenceUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFriends_Statics::NewProp_AvatarImageLoaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFriends_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFriends>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFriends_Statics::ClassParams = {
		&UFriends::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFriends_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFriends_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFriends_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFriends()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFriends_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFriends, 1003860839);
	template<> STEAMCORE_API UClass* StaticClass<UFriends>()
	{
		return UFriends::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFriends(Z_Construct_UClass_UFriends, &UFriends::StaticClass, TEXT("/Script/SteamCore"), TEXT("UFriends"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFriends);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
