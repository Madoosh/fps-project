/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamFriends
*/

#include "Friends/Friends.h"
#include "Friends/FriendsAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UFriends::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnAvatarImageLoadedCallback.Register(this, &UFriends::OnAvatarImageLoaded);
	OnFriendRichPresenceUpdateCallback.Register(this, &UFriends::OnFriendRichPresenceUpdate);
	OnGameConnectedChatJoinCallback.Register(this, &UFriends::OnGameConnectedChatJoin);
	OnGameConnectedChatLeaveCallback.Register(this, &UFriends::OnGameConnectedChatLeave);
	OnGameConnectedFriendChatMsgCallback.Register(this, &UFriends::OnGameConnectedFriendChatMsg);
	OnGameConnectedClanChatMsgCallback.Register(this, &UFriends::OnGameConnectedClanChatMsg);
	OnGameLobbyJoinRequestedCallback.Register(this, &UFriends::OnGameLobbyJoinRequested);
	OnGameOverlayActivatedCallback.Register(this, &UFriends::OnGameOverlayActivated);
	OnGameRichPresenceJoinRequestedCallback.Register(this, &UFriends::OnGameRichPresenceJoinRequested);
	OnGameServerChangeRequestedCallback.Register(this, &UFriends::OnGameServerChangeRequested);
	OnPersonaStateChangeCallback.Register(this, &UFriends::OnPersonaStateChange);
	OnSetPersonaNameResponseCallback.Register(this, &UFriends::OnSetPersonaNameResponse);
	OnJoinClanChatRoomCompletionResultCallback.Register(this, &UFriends::OnJoinClanChatRoomCompletionResult);
	OnClanOfficerListResponseCallback.Register(this, &UFriends::OnClanOfficerListResponse);
	OnDownloadClanActivityCountsResultCallback.Register(this, &UFriends::OnDownloadClanActivityCountsResult);

	if (IsRunningDedicatedServer())
	{
		OnAvatarImageLoadedCallback.SetGameserverFlag();
		OnFriendRichPresenceUpdateCallback.SetGameserverFlag();
		OnGameConnectedChatJoinCallback.SetGameserverFlag();
		OnGameConnectedChatLeaveCallback.SetGameserverFlag();
		OnGameConnectedFriendChatMsgCallback.SetGameserverFlag();
		OnGameConnectedClanChatMsgCallback.SetGameserverFlag();
		OnGameLobbyJoinRequestedCallback.SetGameserverFlag();
		OnGameOverlayActivatedCallback.SetGameserverFlag();
		OnGameRichPresenceJoinRequestedCallback.SetGameserverFlag();
		OnGameServerChangeRequestedCallback.SetGameserverFlag();
		OnPersonaStateChangeCallback.SetGameserverFlag();
		OnSetPersonaNameResponseCallback.SetGameserverFlag();
		OnJoinClanChatRoomCompletionResultCallback.SetGameserverFlag();
		OnClanOfficerListResponseCallback.SetGameserverFlag();
		OnDownloadClanActivityCountsResultCallback.SetGameserverFlag();
	}
}

void UFriends::Deinitialize()
{
	OnAvatarImageLoadedCallback.Unregister();
	OnFriendRichPresenceUpdateCallback.Unregister();
	OnGameConnectedChatJoinCallback.Unregister();
	OnGameConnectedChatLeaveCallback.Unregister();
	OnGameConnectedFriendChatMsgCallback.Unregister();
	OnGameConnectedClanChatMsgCallback.Unregister();
	OnGameLobbyJoinRequestedCallback.Unregister();
	OnGameOverlayActivatedCallback.Unregister();
	OnGameRichPresenceJoinRequestedCallback.Unregister();
	OnGameServerChangeRequestedCallback.Unregister();
	OnPersonaStateChangeCallback.Unregister();
	OnSetPersonaNameResponseCallback.Unregister();
	OnJoinClanChatRoomCompletionResultCallback.Unregister();
	OnClanOfficerListResponseCallback.Unregister();
	OnDownloadClanActivityCountsResultCallback.Unregister();

	Super::Deinitialize();
}

UTexture2D* UFriends::GetAvatar(uint8 size, FSteamID steamUserID)
{
	UTexture2D* m_Avatar = nullptr;

	if (SteamFriends())
	{
		uint32 m_Width = 0;
		uint32 m_Height = 0;
		int m_RawData = 0;

		switch (size)
		{
		case 0:
			m_RawData = SteamFriends()->GetSmallFriendAvatar(steamUserID);
			break;
		case 1:
			m_RawData = SteamFriends()->GetMediumFriendAvatar(steamUserID);
			break;
		case 2:
			m_RawData = SteamFriends()->GetLargeFriendAvatar(steamUserID);
			break;
		}

		SteamUtils()->GetImageSize(m_RawData, &m_Width, &m_Height);

		if (m_Width > 0 && m_Height > 0)
		{
			m_Avatar = UTexture2D::CreateTransient(m_Width, m_Height, PF_R8G8B8A8);
			uint8* m_RGBA = new uint8[m_Width * m_Height * 4];
			SteamUtils()->GetImageRGBA(m_RawData, static_cast<uint8*>(m_RGBA), 4 * m_Height * m_Width);

			uint8* m_MipData = static_cast<uint8*>(m_Avatar->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE));
			FMemory::Memcpy(m_MipData, static_cast<void*>(m_RGBA), m_Height * m_Width * 4);
			m_Avatar->PlatformData->Mips[0].BulkData.Unlock();
			m_Avatar->NeverStream = true;
			m_Avatar->UpdateResource();

			delete[] m_RGBA;
		}
	}
	// size: 0=small, 1=medium, 2=large

	return m_Avatar;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UFriends::ActivateGameOverlay(FString dialog)
{
	if (SteamFriends())
	{
		SteamFriends()->ActivateGameOverlay(TCHAR_TO_UTF8(*dialog));
	}
}

void UFriends::ActivateGameOverlayInvitedialog(FSteamID steamIDLobby)
{
	if (SteamFriends())
	{
		SteamFriends()->ActivateGameOverlayInviteDialog(steamIDLobby);
	}
}

void UFriends::ActivateGameOverlayToStore(int32 appID, ESteamOverlayToStoreFlag flag)
{
	if (SteamFriends())
	{
		SteamFriends()->ActivateGameOverlayToStore(appID, static_cast<EOverlayToStoreFlag>(flag));
	}
}

void UFriends::ActivateGameOverlayToUser(FString dialog, FSteamID steamID)
{
	if (SteamFriends())
	{
		SteamFriends()->ActivateGameOverlayToUser(TCHAR_TO_UTF8(*dialog), steamID);
	}
}

void UFriends::ActivateGameOverlayToWebPage(FString url, ESteamActivateGameOverlayToWebPageMode mode)
{
	if (SteamFriends())
	{
#if STEAM_VERSION > 142
		SteamFriends()->ActivateGameOverlayToWebPage(TCHAR_TO_UTF8(*url), static_cast<EActivateGameOverlayToWebPageMode>(mode));
#else
		SteamFriends()->ActivateGameOverlayToWebPage(TCHAR_TO_UTF8(*url));
#endif
	}
}

void UFriends::ClearRichPresence()
{
	if (SteamFriends())
	{
		SteamFriends()->ClearRichPresence();
	}
}

bool UFriends::CloseClanChatWindowInSteam(FSteamID steamIDClanChat)
{
	return SteamFriends() ? SteamFriends()->CloseClanChatWindowInSteam(steamIDClanChat) : false;
}

void UFriends::DownloadClanActivityCounts(const FOnDownloadClanActivityCounts& callback, TArray<FSteamID> steamIDClans)
{
	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts* m_Task = new FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts(this, callback, steamIDClans);
		QueueAsyncTask(m_Task);
	}
}

void UFriends::EnumerateFollowingList(const FOnEnumerateFollowingList& callback, int32 startIndex)
{
	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList* m_Task = new FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList(this, callback, startIndex);
		QueueAsyncTask(m_Task);
	}
}

FSteamID UFriends::GetChatMemberByIndex(FSteamID steamIDClan, int32 user)
{
	return SteamFriends() ? FSteamID(SteamFriends()->GetChatMemberByIndex(steamIDClan, user)) : FSteamID();
}

bool UFriends::GetClanActivityCounts(FSteamID steamIDClan, int32& online, int32& inGame, int32& chatting)
{
	return SteamFriends() ? SteamFriends()->GetClanActivityCounts(steamIDClan, &online, &inGame, &chatting) : false;
}

FSteamID UFriends::GetClanByIndex(int32 clan)
{
	return SteamFriends() ? FSteamID(SteamFriends()->GetClanByIndex(clan)) : FSteamID();
}

int32 UFriends::GetClanChatMemberCount(FSteamID steamIDClan)
{
	return SteamFriends() ? SteamFriends()->GetClanChatMemberCount(steamIDClan) : 0;
}

int32 UFriends::GetClanChatMessage(FSteamID steamIDClanChat, int32 messageID, FString& text, ESteamChatEntryType& chatEntryType, FSteamID& steamIDChatter)
{
	int32 m_Result = INDEX_NONE;

	if (SteamFriends())
	{
		char m_CharArray[1024];
		CSteamID m_SteamIdChatter = steamIDChatter;
		EChatEntryType m_ChatEntryType = EChatEntryType::k_EChatEntryTypeInvalid;

		m_Result = SteamFriends()->GetClanChatMessage(steamIDClanChat, messageID, m_CharArray, 1024, &m_ChatEntryType, &m_SteamIdChatter);

		if (m_Result != INDEX_NONE)
		{
			text = UTF8_TO_TCHAR(m_CharArray);
			chatEntryType = static_cast<ESteamChatEntryType>(m_ChatEntryType);
		}
	}

	return m_Result;
}

int32 UFriends::GetClanCount()
{
	return SteamFriends() ? SteamFriends()->GetClanCount() : 0;
}

FString UFriends::GetClanName(FSteamID steamIDClan)
{
	return SteamFriends() ? UTF8_TO_TCHAR(SteamFriends()->GetClanName(steamIDClan)) : UTF8_TO_TCHAR("");
}

FSteamID UFriends::GetClanOfficerByIndex(FSteamID steamIDClan, int32 officer)
{
	return SteamFriends() ? FSteamID(SteamFriends()->GetClanOfficerByIndex(steamIDClan, officer)) : FSteamID();
}

int32 UFriends::GetClanOfficerCount(FSteamID steamIDClan)
{
	return SteamFriends() ? SteamFriends()->GetClanOfficerCount(steamIDClan) : 0;
}

FSteamID UFriends::GetClanOwner(FSteamID steamIDClan)
{
	return SteamFriends() ? FSteamID(SteamFriends()->GetClanOwner(steamIDClan)) : FSteamID();
}

FString UFriends::GetClanTag(FSteamID steamIDClan)
{
	return SteamFriends() ? UTF8_TO_TCHAR(SteamFriends()->GetClanTag(steamIDClan)) : UTF8_TO_TCHAR("");
}

FSteamID UFriends::GetCoplayFriend(int32 coplayFriend)
{
	return SteamFriends() ? FSteamID(SteamFriends()->GetCoplayFriend(coplayFriend)) : FSteamID();
}

int32 UFriends::GetCoplayFriendCount()
{
	return SteamFriends() ? SteamFriends()->GetCoplayFriendCount() : 0;
}

void UFriends::GetFollowerCount(const FOnGetFollowerCount& callback, FSteamID steamID)
{
	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount* m_Task = new FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount(this, callback, steamID);
		QueueAsyncTask(m_Task);
	}
}

FSteamID UFriends::GetFriendByIndex(int32 ifriend, TArray<ESteamFriendFlags> flags)
{
	int m_Flags = 0;

	for (int i = 0; i < flags.Num(); i++)
	{
		m_Flags |= *flags[i];
	}

	return SteamFriends() ? FSteamID(SteamFriends()->GetFriendByIndex(ifriend, m_Flags)) : FSteamID();
}

int32 UFriends::GetFriendCoplayGame(FSteamID steamIDFriend)
{
	return SteamFriends() ? SteamFriends()->GetFriendCoplayGame(steamIDFriend) : 0;
}

int32 UFriends::GetFriendCoplayTime(FSteamID steamIDFriend)
{
	return SteamFriends() ? SteamFriends()->GetFriendCoplayTime(steamIDFriend) : 0;
}

int32 UFriends::GetFriendCount(TArray<ESteamFriendFlags> flags)
{
	int m_Flags = 0;

	for (int i = 0; i < flags.Num(); i++)
	{
		m_Flags |= *flags[i];
	}

	return SteamFriends() ? SteamFriends()->GetFriendCount(m_Flags) : 0;
}

int32 UFriends::GetFriendCountFromSource(FSteamID steamIDSource)
{
	return SteamFriends() ? SteamFriends()->GetFriendCountFromSource(steamIDSource) : 0;
}

FSteamID UFriends::GetFriendFromSourceByIndex(FSteamID steamIDSource, int32 ifriend)
{
	return SteamFriends() ? FSteamID(SteamFriends()->GetFriendFromSourceByIndex(steamIDSource, ifriend)) : FSteamID();
}

bool UFriends::GetFriendGamePlayed(FSteamID steamIDFriend, FSteamGameID& gameID, FString& gameIP, int32& connectionPort, int32& queryPort, FSteamID& steamIDLobby)
{
	if (SteamFriends())
	{
		FriendGameInfo_t m_FriendData;

		if (SteamFriends()->GetFriendGamePlayed(steamIDFriend, &m_FriendData))
		{
			gameID = m_FriendData.m_gameID;
			gameIP = FIPv4Address(m_FriendData.m_unGameIP).ToString();
			connectionPort = m_FriendData.m_usGamePort;
			queryPort = m_FriendData.m_usQueryPort;
			steamIDLobby = m_FriendData.m_steamIDLobby;

			return true;
		}
	}

	return false;
}

int32 UFriends::GetFriendMessage(FSteamID steamIDFriend, int32 messageID, FString& text, ESteamChatEntryType& chatEntryType)
{
	int32 m_Result = INDEX_NONE;

	if (SteamFriends()) 
	{
		char m_CharArray[1024];
		EChatEntryType m_ChatEntryType = EChatEntryType::k_EChatEntryTypeChatMsg;

		m_Result = SteamFriends()->GetFriendMessage(steamIDFriend, messageID, m_CharArray, 1024, &m_ChatEntryType);

		if (m_Result != INDEX_NONE)
		{
			chatEntryType = static_cast<ESteamChatEntryType>(m_ChatEntryType);
			text = UTF8_TO_TCHAR(m_CharArray);
		}
	}

	return m_Result;
}

FString UFriends::GetFriendPersonaName(FSteamID steamIDFriend)
{
	return SteamFriends() ? UTF8_TO_TCHAR(SteamFriends()->GetFriendPersonaName(steamIDFriend)) : UTF8_TO_TCHAR("");
}

FString UFriends::GetFriendPersonaNameHistory(FSteamID steamIDFriend, int32 personaName)
{
	return SteamFriends() ? UTF8_TO_TCHAR(SteamFriends()->GetFriendPersonaNameHistory(steamIDFriend, personaName)) : UTF8_TO_TCHAR("");
}

ESteamPersonaState UFriends::GetFriendPersonaState(FSteamID steamIDFriend)
{
	return SteamFriends() ? static_cast<ESteamPersonaState>(SteamFriends()->GetFriendPersonaState(steamIDFriend)) : ESteamPersonaState::Offline;
}

ESteamFriendRelationship UFriends::GetFriendRelationship(FSteamID steamIDFriend)
{
	return SteamFriends() ? static_cast<ESteamFriendRelationship>(SteamFriends()->GetFriendRelationship(steamIDFriend)) : ESteamFriendRelationship::None;
}

FString UFriends::GetFriendRichPresence(FSteamID steamIDFriend, FString key)
{
	return SteamFriends() ? UTF8_TO_TCHAR(SteamFriends()->GetFriendRichPresence(steamIDFriend, TCHAR_TO_UTF8(*key))) : UTF8_TO_TCHAR("");
}

FString UFriends::GetFriendRichPresenceKeyByIndex(FSteamID steamIDFriend, int32 key)
{
	return SteamFriends() ? UTF8_TO_TCHAR(SteamFriends()->GetFriendRichPresenceKeyByIndex(steamIDFriend, key)) : UTF8_TO_TCHAR("");
}

int32 UFriends::GetFriendRichPresenceKeyCount(FSteamID steamIDFriend)
{
	return SteamFriends() ? SteamFriends()->GetFriendRichPresenceKeyCount(steamIDFriend) : 0;
}

int32 UFriends::GetFriendsGroupCount()
{
	return SteamFriends() ? SteamFriends()->GetFriendsGroupCount() : 0;
}

FSteamFriendsGroupID UFriends::GetFriendsGroupIDByIndex(int32 friendGroup)
{
	return SteamFriends() ? FSteamFriendsGroupID(SteamFriends()->GetFriendsGroupIDByIndex(friendGroup)) : FSteamFriendsGroupID();
}

int32 UFriends::GetFriendsGroupMembersCount(FSteamFriendsGroupID friendsGroupID)
{
	return SteamFriends() ? SteamFriends()->GetFriendsGroupMembersCount(friendsGroupID) : 0;
}

void UFriends::GetFriendsGroupMembersList(FSteamFriendsGroupID friendsGroupID, TArray<FSteamID>& steamIDMembers, int32 membersCount)
{
	if (SteamFriends())
	{
		steamIDMembers.Empty();

		CSteamID* m_Result = new CSteamID[membersCount];

		SteamFriends()->GetFriendsGroupMembersList(friendsGroupID, m_Result, membersCount);

		for (int32 i = 0; i < membersCount; i++)
			steamIDMembers.Add(m_Result[i]);

		delete[] m_Result;
	}
}

FString UFriends::GetFriendsGroupName(FSteamFriendsGroupID friendsGroupID)
{
	return SteamFriends() ? UTF8_TO_TCHAR(SteamFriends()->GetFriendsGroupName(friendsGroupID)) : UTF8_TO_TCHAR("");
}

int UFriends::GetFriendSteamLevel(FSteamID steamIDFriend)
{
	return SteamFriends() ? SteamFriends()->GetFriendSteamLevel(steamIDFriend) : 0;
}

UTexture2D* UFriends::GetLargeFriendAvatar(FSteamID steamIDFriend)
{
	return UFriends::GetAvatar(2, steamIDFriend);
}

UTexture2D* UFriends::GetMediumFriendAvatar(FSteamID steamIDFriend)
{
	return UFriends::GetAvatar(1, steamIDFriend);
}

FString UFriends::GetPersonaName()
{
	return SteamFriends() ? UTF8_TO_TCHAR(SteamFriends()->GetPersonaName()) : UTF8_TO_TCHAR("");
}

ESteamPersonaState UFriends::GetPersonaState()
{
	return SteamFriends() ? static_cast<ESteamPersonaState>(SteamFriends()->GetPersonaState()) : ESteamPersonaState::Offline;
}

FString UFriends::GetPlayerNickname(FSteamID steamIDPlayer)
{
	return SteamFriends() ? UTF8_TO_TCHAR(SteamFriends()->GetPlayerNickname(steamIDPlayer)) : UTF8_TO_TCHAR("");
}

UTexture2D* UFriends::GetSmallFriendAvatar(FSteamID steamIDFriend)
{
	return UFriends::GetAvatar(0, steamIDFriend);
}

TArray<ESteamUserRestriction> UFriends::GetUserRestrictions()
{
	TArray<ESteamUserRestriction> m_Array;

	if (SteamFriends())
	{
		uint32 m_Flags = SteamFriends()->GetUserRestrictions();

		for (int32 i = 0; i <= 31; i++)
		{
			if (m_Flags & 1 << i)
				m_Array.Add(static_cast<ESteamUserRestriction>(i));
		}
	}

	return m_Array;
}

bool UFriends::HasFriend(FSteamID steamIDFriend, TArray<ESteamFriendFlags> flags)
{
	if (SteamFriends())
	{
		int m_Flags = 0;

		for (int i = 0; i < flags.Num(); i++)
		{
			m_Flags |= *flags[i];
		}

		return SteamFriends()->HasFriend(steamIDFriend, m_Flags);
	}

	return false;
}

bool UFriends::InviteUserToGame(FSteamID steamIDFriend, FString connectString)
{
	return SteamFriends() ? SteamFriends()->InviteUserToGame(steamIDFriend, TCHAR_TO_UTF8(*connectString)) : false;
}

bool UFriends::IsClanChatAdmin(FSteamID steamIDClanChat, FSteamID steamIDUser)
{
	return SteamFriends() ? SteamFriends()->IsClanChatAdmin(steamIDClanChat, steamIDUser) : false;
}

bool UFriends::IsClanPublic(FSteamID steamIDClan)
{
	return SteamFriends() ? SteamFriends()->IsClanPublic(steamIDClan) : false;
}

bool UFriends::IsClanOfficialGameGroup(FSteamID steamIDClan)
{
	return SteamFriends() ? SteamFriends()->IsClanOfficialGameGroup(steamIDClan) : false;
}

bool UFriends::IsClanChatWindowOpenInSteam(FSteamID steamIDClanChat)
{
	return SteamFriends() ? SteamFriends()->IsClanChatWindowOpenInSteam(steamIDClanChat) : false;
}

void UFriends::IsFollowing(const FOnIsFollowing& callback, FSteamID steamID)
{
	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsIsFollowing* m_Task = new FOnlineAsyncTaskSteamCoreFriendsIsFollowing(this, callback, steamID);
		QueueAsyncTask(m_Task);
	}
}

bool UFriends::IsUserInSource(FSteamID steamIDUser, FSteamID steamIDSource)
{
	return SteamFriends() ? SteamFriends()->IsUserInSource(steamIDUser, steamIDSource) : false;
}

void UFriends::JoinClanChatRoom(const FOnJoinClanChatRoom& callback, FSteamID steamIDClan)
{
	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom* m_Task = new FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom(this, callback, steamIDClan);
		QueueAsyncTask(m_Task);
	}
}

bool UFriends::LeaveClanChatRoom(FSteamID steamIDClan)
{
	return SteamFriends() ? SteamFriends()->LeaveClanChatRoom(steamIDClan) : false;
}

bool UFriends::OpenClanChatWindowInSteam(FSteamID steamIDClanChat)
{
	return SteamFriends() ? SteamFriends()->OpenClanChatWindowInSteam(steamIDClanChat) : false;
}

bool UFriends::ReplyToFriendMessage(FSteamID steamIDFriend, FString msgToSend)
{
	return SteamFriends() ? SteamFriends()->ReplyToFriendMessage(steamIDFriend, TCHAR_TO_UTF8(*msgToSend)) : false;
}

void UFriends::RequestClanOfficerList(const FOnRequestClanOfficerList& callback, FSteamID steamIDClan)
{
	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreRequestClanOfficerList* m_Task = new FOnlineAsyncTaskSteamCoreRequestClanOfficerList(this, callback, steamIDClan);
		QueueAsyncTask(m_Task);
	}
}

void UFriends::RequestFriendRichPresence(FSteamID steamIDFriend)
{
	if (SteamFriends())
	{
		SteamFriends()->RequestFriendRichPresence(steamIDFriend);
	}
}

bool UFriends::RequestUserInformation(FSteamID steamIDUser, bool bRequireNameOnly)
{
	return SteamFriends() ? SteamFriends()->RequestUserInformation(steamIDUser, bRequireNameOnly) : false;
}

bool UFriends::SendClanChatMessage(FSteamID steamIDClanChat, FString text)
{
	return SteamFriends() ? SteamFriends()->SendClanChatMessage(steamIDClanChat, TCHAR_TO_UTF8(*text)) : false;
}

void UFriends::SetInGameVoiceSpeaking(FSteamID steamIDUser, bool bSpeaking)
{
	if (SteamFriends())
	{
		SteamFriends()->SetInGameVoiceSpeaking(steamIDUser, bSpeaking);
	}
}

bool UFriends::SetListenForFriendsMessages(bool bInterceptEnabled)
{
	return SteamFriends() ? SteamFriends()->SetListenForFriendsMessages(bInterceptEnabled) : false;
}

void UFriends::SetPersonaName(const FOnSetPersonaName& callback, FString name)
{
	if (SteamFriends())
	{
		FOnlineAsyncTaskSteamCoreFriendsSetPersonaName* m_Task = new FOnlineAsyncTaskSteamCoreFriendsSetPersonaName(this, callback, name);
		QueueAsyncTask(m_Task);
	}
}

void UFriends::SetPlayedWith(FSteamID steamIDUserPlayedWith)
{
	if (SteamFriends())
	{
		SteamFriends()->SetPlayedWith(steamIDUserPlayedWith);
	}
}

bool UFriends::SetRichPresence(FString key, FString value)
{
	return SteamFriends() ? SteamFriends()->SetRichPresence(TCHAR_TO_UTF8(*key), TCHAR_TO_UTF8(*value)) : false;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UFriends::OnPersonaStateChange(PersonaStateChange_t* pParam)
{
	const FPersonaStateChange m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				PersonaStateChange.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		PersonaStateChange.Broadcast(m_Data);
	}
}

void UFriends::OnSetPersonaNameResponse(SetPersonaNameResponse_t* pParam)
{
	const FSetPersonaNameResponse m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				SetPersonaNameResponse.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		SetPersonaNameResponse.Broadcast(m_Data);
	}
}

void UFriends::OnJoinClanChatRoomCompletionResult(JoinClanChatRoomCompletionResult_t* pParam)
{
	const FJoinClanChatRoomCompletionResult m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				JoinClanChatRoomCompletionResult.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		JoinClanChatRoomCompletionResult.Broadcast(m_Data);
	}
}

void UFriends::OnGameOverlayActivated(GameOverlayActivated_t* pParam)
{
	const FGameOverlayActivated m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GameOverlayActivated.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GameOverlayActivated.Broadcast(m_Data);
	}
}

void UFriends::OnGameServerChangeRequested(GameServerChangeRequested_t* pParam)
{
	const FGameServerChangeRequested m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GameServerChangeRequested.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GameServerChangeRequested.Broadcast(m_Data);
	}
}

void UFriends::OnGameLobbyJoinRequested(GameLobbyJoinRequested_t* pParam)
{
	const FGameLobbyJoinRequested m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GameLobbyJoinRequested.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GameLobbyJoinRequested.Broadcast(m_Data);
	}
}

void UFriends::OnAvatarImageLoaded(AvatarImageLoaded_t* pParam)
{
	FAvatarImageLoaded m_Data = *pParam;

	UTexture2D* m_Avatar = nullptr;
	uint32 m_Width = m_Data.m_iWide;
	uint32 m_Height = m_Data.m_iTall;
	const int m_RawData = m_Data.m_iImage;

	if (SteamUtils()->GetImageSize(m_RawData, &m_Width, &m_Height))
	{
		uint8* m_RGBA = new uint8[m_Width * m_Height * 4];
		SteamUtils()->GetImageRGBA(m_RawData, (uint8*)m_RGBA, 4 * m_Height * m_Width);
		m_Avatar = UTexture2D::CreateTransient(m_Width, m_Height, PF_R8G8B8A8);

		uint8* MipData = (uint8*)m_Avatar->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
		FMemory::Memcpy(MipData, (void*)m_RGBA, m_Height * m_Width * 4);
		m_Avatar->PlatformData->Mips[0].BulkData.Unlock();

		m_Avatar->NeverStream = true;
		m_Avatar->UpdateResource();
		m_Data.Image = m_Avatar;

		delete[] m_RGBA;
	}

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				AvatarImageLoaded.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		AvatarImageLoaded.Broadcast(m_Data);
	}
}

void UFriends::OnFriendRichPresenceUpdate(FriendRichPresenceUpdate_t* pParam)
{
	const FFriendRichPresenceUpdate m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				FriendRichPresenceUpdate.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		FriendRichPresenceUpdate.Broadcast(m_Data);
	}
}

void UFriends::OnGameRichPresenceJoinRequested(GameRichPresenceJoinRequested_t* pParam)
{
	const FGameRichPresenceJoinRequested m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GameRichPresenceJoinRequested.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GameRichPresenceJoinRequested.Broadcast(m_Data);
	}
}

void UFriends::OnGameConnectedClanChatMsg(GameConnectedClanChatMsg_t* pParam)
{
	const FGameConnectedClanChatMsg m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GameConnectedClanChatMsg.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GameConnectedClanChatMsg.Broadcast(m_Data);
	}
}

void UFriends::OnGameConnectedChatJoin(GameConnectedChatJoin_t* pParam)
{
	const FGameConnectedChatJoin m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GameConnectedChatJoin.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GameConnectedChatJoin.Broadcast(m_Data);
	}
}

void UFriends::OnGameConnectedChatLeave(GameConnectedChatLeave_t* pParam)
{
	const FGameConnectedChatLeave m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GameConnectedChatLeave.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GameConnectedChatLeave.Broadcast(m_Data);
	}
}

void UFriends::OnGameConnectedFriendChatMsg(GameConnectedFriendChatMsg_t* pParam)
{
	const FGameConnectedFriendChatMsg m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GameConnectedFriendChatMsg.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GameConnectedFriendChatMsg.Broadcast(m_Data);
	}
}

void UFriends::OnClanOfficerListResponse(ClanOfficerListResponse_t* pParam)
{
	const FClanOfficerListResponse m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				ClanOfficerListResponse.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		ClanOfficerListResponse.Broadcast(m_Data);
	}
}

void UFriends::OnDownloadClanActivityCountsResult(DownloadClanActivityCountsResult_t* pParam)
{
	const FDownloadClanActivityCountsResult m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				DownloadClanActivityCountsResult.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		DownloadClanActivityCountsResult.Broadcast(m_Data);
	}
}