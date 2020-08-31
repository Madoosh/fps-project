/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmaking
*/

#include "Matchmaking/Matchmaking.h"
#include "Matchmaking/MatchmakingAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UMatchmaking::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnFavoritesListAccountsUpdatedCallback.Register(this, &UMatchmaking::OnFavoritesListAccountsUpdated);
	OnFavoritesListChangedCallback.Register(this, &UMatchmaking::OnFavoritesListChanged);
	OnLobbyChatMsgCallback.Register(this, &UMatchmaking::OnLobbyChatMsg);
	OnLobbyChatUpdateCallback.Register(this, &UMatchmaking::OnLobbyChatUpdate);
	OnLobbyDataUpdateCallback.Register(this, &UMatchmaking::OnLobbyDataUpdate);
	OnLobbyEnterCallback.Register(this, &UMatchmaking::OnLobbyEnter);
	OnLobbyGameCreatedCallback.Register(this, &UMatchmaking::OnLobbyGameCreated);
	OnLobbyInviteCallback.Register(this, &UMatchmaking::OnLobbyInvite);
	OnLobbyKickedCallback.Register(this, &UMatchmaking::OnLobbyKicked);

	if (IsRunningDedicatedServer())
	{
		OnFavoritesListAccountsUpdatedCallback.SetGameserverFlag();
		OnFavoritesListChangedCallback.SetGameserverFlag();
		OnLobbyChatMsgCallback.SetGameserverFlag();
		OnLobbyChatUpdateCallback.SetGameserverFlag();
		OnLobbyDataUpdateCallback.SetGameserverFlag();
		OnLobbyEnterCallback.SetGameserverFlag();
		OnLobbyGameCreatedCallback.SetGameserverFlag();
		OnLobbyInviteCallback.SetGameserverFlag();
		OnLobbyKickedCallback.SetGameserverFlag();
	}
}

void UMatchmaking::Deinitialize()
{
	OnFavoritesListAccountsUpdatedCallback.Unregister();
	OnFavoritesListChangedCallback.Unregister();
	OnLobbyChatMsgCallback.Unregister();
	OnLobbyChatUpdateCallback.Unregister();
	OnLobbyDataUpdateCallback.Unregister();
	OnLobbyEnterCallback.Unregister();
	OnLobbyGameCreatedCallback.Unregister();
	OnLobbyInviteCallback.Unregister();
	OnLobbyKickedCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

int32 UMatchmaking::AddFavoriteGame(int32 appID, FString ip, int32 connectionPort, int32 queryPort, TArray<ESteamFavoriteFlags> flags, int32 timeLastPlayedOnServer)
{
	if (SteamMatchmaking())
	{
		int m_DataFlags = 0;

		for (int i = 0; i < flags.Num(); i++)
		{
			m_DataFlags |= static_cast<int>(flags[i]);
		}

		FIPv4Address m_IP;
		FIPv4Address::Parse(ip, m_IP);

		return SteamMatchmaking()->AddFavoriteGame(appID, m_IP.Value, connectionPort, queryPort, m_DataFlags, timeLastPlayedOnServer);
	}

	return 0;
}

void UMatchmaking::AddRequestLobbyListCompatibleMembersFilter(FSteamID steamIDLobby)
{
	if (SteamMatchmaking())
		SteamMatchmaking()->AddRequestLobbyListCompatibleMembersFilter(steamIDLobby);
}

void UMatchmaking::AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter LobbyDistanceFilter)
{
	if (SteamMatchmaking())
		SteamMatchmaking()->AddRequestLobbyListDistanceFilter((ELobbyDistanceFilter)LobbyDistanceFilter);
}

void UMatchmaking::AddRequestLobbyListFilterSlotsAvailable(int32 slotsAvailable)
{
	if (SteamMatchmaking())
		SteamMatchmaking()->AddRequestLobbyListFilterSlotsAvailable(slotsAvailable);
}

void UMatchmaking::AddRequestLobbyListNearValueFilter(FString keyToMatch, int32 valueToBeCloseTo)
{
	if (SteamMatchmaking())
		SteamMatchmaking()->AddRequestLobbyListNearValueFilter(TCHAR_TO_UTF8(*keyToMatch), valueToBeCloseTo);
}

void UMatchmaking::AddRequestLobbyListNumericalFilter(FString keyToMatch, int32 valueToMatch, ESteamLobbyComparison comparisonType)
{
	if (SteamMatchmaking())
		SteamMatchmaking()->AddRequestLobbyListNumericalFilter(TCHAR_TO_UTF8(*keyToMatch), valueToMatch, static_cast<ELobbyComparison>(((uint8)comparisonType - 2)));
}

void UMatchmaking::AddRequestLobbyListResultCountFilter(int32 maxResults)
{
	if (SteamMatchmaking())
		SteamMatchmaking()->AddRequestLobbyListResultCountFilter(maxResults);
}

void UMatchmaking::AddRequestLobbyListStringFilter(FString keyToMatch, FString valueToMatch, ESteamLobbyComparison comparisonType)
{
	if (SteamMatchmaking())
		SteamMatchmaking()->AddRequestLobbyListStringFilter(TCHAR_TO_UTF8(*keyToMatch), TCHAR_TO_UTF8(*valueToMatch), static_cast<ELobbyComparison>(((uint8)comparisonType - 2)));
}

void UMatchmaking::CreateLobby(const FOnCreateLobby& callback, ESteamLobbyType lobbyType, int32 maxMembers)
{
	if (SteamMatchmaking())
	{
		FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby* m_Task = new FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby(this, callback, static_cast<ELobbyType>(lobbyType), maxMembers);
		QueueAsyncTask(m_Task);
	}
}

bool UMatchmaking::DeleteLobbyData(FSteamID steamIDLobby, FString key)
{
	return SteamMatchmaking() ? SteamMatchmaking()->DeleteLobbyData(steamIDLobby, TCHAR_TO_UTF8(*key)) : false;
}

bool UMatchmaking::GetFavoriteGame(int32 game, int32& appID, FString& ip, int32& connectionPort, int32& queryPort, TArray<ESteamFavoriteFlags>& flags, int32& timeLastPlayedOnServer)
{
	if (SteamMatchmaking())
	{
		uint32 m_IP = 0;
		uint32 m_Flags = 0;

		if (SteamMatchmaking()->GetFavoriteGame(game, (uint32*)&appID, &m_IP, reinterpret_cast<uint16*>(&connectionPort), reinterpret_cast<uint16*>(&queryPort), &m_Flags, reinterpret_cast<uint32*>(&timeLastPlayedOnServer)))
		{
			FIPv4Address m_InternalIP(m_IP);
			ip = m_InternalIP.ToString();

			for (uint8 i = 0; i < 31; i++)
			{
				if (m_Flags & 1 << i)
				{
					flags.Add((ESteamFavoriteFlags)(1 << i));
				}
			}

			return true;
		}
	}

	return false;
}

int32 UMatchmaking::GetFavoriteGameCount()
{
	return SteamMatchmaking() ? SteamMatchmaking()->GetFavoriteGameCount() : 0;
}

FSteamID UMatchmaking::GetLobbyByIndex(int32 lobby)
{
	return SteamMatchmaking() ? FSteamID(SteamMatchmaking()->GetLobbyByIndex(lobby)): FSteamID();
}

int32 UMatchmaking::GetLobbyChatEntry(FSteamID steamIDLobby, int32 messageID, FSteamID& steamIDUser, FString& message, ESteamChatEntryType& chatEntryType)
{
	int32 m_Result = 0;

	if (SteamMatchmaking()) 
	{
		const int32 m_DataSize = 4096;
		uint8* m_DataArr = new uint8[m_DataSize];

		m_Result = SteamMatchmaking()->GetLobbyChatEntry(steamIDLobby, messageID, reinterpret_cast<CSteamID*>(&steamIDUser), m_DataArr, m_DataSize, reinterpret_cast<EChatEntryType*>(&chatEntryType));
		
		TArray<uint8> m_Data;

		for (int32 i = 0; i < m_DataSize; i++)
			m_Data.Add(m_DataArr[i]);

		delete[] m_DataArr;

		FMemoryReader Reader(m_Data, true);
		Reader << message;

		if (!Reader.Close())
		{
			return 0;
		}
	}

	return m_Result;
}

FString UMatchmaking::GetLobbyData(FSteamID steamIDLobby, FString key)
{
	return SteamMatchmaking() ? UTF8_TO_TCHAR(SteamMatchmaking()->GetLobbyData(steamIDLobby, TCHAR_TO_UTF8(*key))) : UTF8_TO_TCHAR("");
}

bool UMatchmaking::GetLobbyDataByIndex(FSteamID steamIDLobby, int32 lobbyData, FString& key, FString& value)
{
	char m_Keys[k_nMaxLobbyKeyLength], m_Vals[k_cubChatMetadataMax];

	if (SteamMatchmaking()->GetLobbyDataByIndex(steamIDLobby, lobbyData, m_Keys, k_nMaxLobbyKeyLength, m_Vals, k_cubChatMetadataMax))
	{
		key = UTF8_TO_TCHAR(m_Keys);
		value = UTF8_TO_TCHAR(m_Vals);

		return true;
	}

	return false;
}

int32 UMatchmaking::GetLobbyDataCount(FSteamID steamIDLobby)
{
	return SteamMatchmaking() ? SteamMatchmaking()->GetLobbyDataCount(steamIDLobby) : 0;
}

bool UMatchmaking::GetLobbyGameServer(FSteamID steamIDLobby, FString& gameServerIP, int32& gameServerPort, FSteamID& steamIDGameServer)
{
	uint32 m_GameServerIP = 0;

	if (SteamMatchmaking()->GetLobbyGameServer(steamIDLobby, &m_GameServerIP, reinterpret_cast<uint16*>(&gameServerPort), reinterpret_cast<CSteamID*>(&steamIDGameServer)))
	{
		gameServerIP = FIPv4Address(m_GameServerIP).ToString();

		return true;
	}

	return false;
}

FSteamID UMatchmaking::GetLobbyMemberByIndex(FSteamID steamIDLobby, int32 member)
{
	return SteamMatchmaking() ? FSteamID(SteamMatchmaking()->GetLobbyMemberByIndex(steamIDLobby, member)) : FSteamID();
}

FString UMatchmaking::GetLobbyMemberData(FSteamID steamIDLobby, FSteamID steamIDUser, FString key)
{
	return SteamMatchmaking() ? UTF8_TO_TCHAR(SteamMatchmaking()->GetLobbyMemberData(steamIDLobby, steamIDUser, TCHAR_TO_UTF8(*key))) : UTF8_TO_TCHAR("");
}

int32 UMatchmaking::GetLobbyMemberLimit(FSteamID steamIDLobby)
{
	return SteamMatchmaking() ? SteamMatchmaking()->GetLobbyMemberLimit(steamIDLobby) : 0;
}

FSteamID UMatchmaking::GetLobbyOwner(FSteamID steamIDLobby)
{
	return SteamMatchmaking() ? FSteamID(SteamMatchmaking()->GetLobbyOwner(steamIDLobby)) : FSteamID();
}

int32 UMatchmaking::GetNumLobbyMembers(FSteamID steamIDLobby)
{
	return SteamMatchmaking() ? SteamMatchmaking()->GetNumLobbyMembers(steamIDLobby) : 0;
}

bool UMatchmaking::InviteUserToLobby(FSteamID steamIDLobby, FSteamID steamIDInvitee)
{
	return SteamMatchmaking() ? SteamMatchmaking()->InviteUserToLobby(steamIDLobby, steamIDInvitee) : false;
}

void UMatchmaking::JoinLobby(const FOnJoinLobby& callback, FSteamID steamIDLobby)
{
	if (SteamMatchmaking())
	{
		FOnlineAsyncTaskSteamCoreJoinLobby* m_Task = new FOnlineAsyncTaskSteamCoreJoinLobby(this, callback, steamIDLobby);
		QueueAsyncTask(m_Task);
	}
}

void UMatchmaking::LeaveLobby(FSteamID steamIDLobby)
{
	if (SteamMatchmaking())
		SteamMatchmaking()->LeaveLobby(steamIDLobby);
}

bool UMatchmaking::RemoveFavoriteGame(int32 appID, FString ip, int32 connectionPort, int32 queryPort, TArray<ESteamFavoriteFlags> flags)
{
	if (SteamMatchmaking())
	{
		int m_DataFlags = 0;

		for (int i = 0; i < flags.Num(); i++)
		{
			m_DataFlags |= static_cast<int>(flags[i]);
		}

		FIPv4Address m_IP;
		FIPv4Address::Parse(ip, m_IP);

		return SteamMatchmaking()->RemoveFavoriteGame(appID, m_IP.Value, connectionPort, queryPort, m_DataFlags);
	}

	return false;
}

bool UMatchmaking::RequestLobbyData(FSteamID steamIDLobby)
{
	return SteamMatchmaking() ? SteamMatchmaking()->RequestLobbyData(steamIDLobby) : false;
}

void UMatchmaking::RequestLobbyList(const FOnRequestLobbyList& callback)
{
	if (SteamMatchmaking())
	{
		FOnlineAsyncTaskSteamCoreRequestLobbyList* m_Task = new FOnlineAsyncTaskSteamCoreRequestLobbyList(this, callback);
		QueueAsyncTask(m_Task);
	}
}

bool UMatchmaking::SendLobbyChatMsg(FSteamID steamIDLobby, FString message)
{
	if (SteamMatchmaking())
	{
		TArray<uint8> m_Buffer;
		FMemoryWriter Writer(m_Buffer, true);

		Writer << message;
		Writer.Close();

		return SteamMatchmaking()->SendLobbyChatMsg(steamIDLobby, m_Buffer.GetData(), m_Buffer.Num());
	}

	return false;
}

bool UMatchmaking::SetLinkedLobby(FSteamID steamIDLobby, FSteamID SteamIDLobbyDependent)
{
	return SteamMatchmaking() ? SteamMatchmaking()->SetLinkedLobby(steamIDLobby, SteamIDLobbyDependent) : false;
}

bool UMatchmaking::SetLobbyData(FSteamID steamIDLobby, FString key, FString value)
{
	return SteamMatchmaking() ? SteamMatchmaking()->SetLobbyData(steamIDLobby, TCHAR_TO_UTF8(*key), TCHAR_TO_UTF8(*value)) : false;
}

void UMatchmaking::SetLobbyGameServer(FSteamID steamIDLobby, FString gameServerIP, int32 gameServerPort, FSteamID steamIDGameServer)
{
	if (SteamMatchmaking())
	{
		FIPv4Address m_IP;
		FIPv4Address::Parse(gameServerIP, m_IP);
		
		SteamMatchmaking()->SetLobbyGameServer(steamIDLobby, m_IP.Value, gameServerPort, steamIDGameServer);
	}
}

bool UMatchmaking::SetLobbyJoinable(FSteamID steamIDLobby, bool bLobbyJoinable)
{
	return SteamMatchmaking() ? SteamMatchmaking()->SetLobbyJoinable(steamIDLobby, bLobbyJoinable) : false;
}

void UMatchmaking::SetLobbyMemberData(FSteamID steamIDLobby, FString key, FString value)
{
	if (SteamMatchmaking())
		SteamMatchmaking()->SetLobbyMemberData(steamIDLobby, TCHAR_TO_UTF8(*key), TCHAR_TO_UTF8(*value));
}

bool UMatchmaking::SetLobbyMemberLimit(FSteamID steamIDLobby, int32 MaxMembers)
{
	return SteamMatchmaking() ? SteamMatchmaking()->SetLobbyMemberLimit(steamIDLobby, MaxMembers) : false;
}

bool UMatchmaking::SetLobbyOwner(FSteamID steamIDLobby, FSteamID SteamIDNewOwner)
{
	return SteamMatchmaking() ? SteamMatchmaking()->SetLobbyOwner(steamIDLobby, SteamIDNewOwner) : false;
}

bool UMatchmaking::SetLobbyType(FSteamID steamIDLobby, ESteamLobbyType lobbyType)
{
	return SteamMatchmaking() ? SteamMatchmaking()->SetLobbyType(steamIDLobby, (ELobbyType)lobbyType) : false;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UMatchmaking::OnFavoritesListAccountsUpdated( FavoritesListAccountsUpdated_t *pParam )
{
	const FFavoritesListAccountsUpdated m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UMatchmaking::FavoritesListAccountsUpdated.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		FavoritesListAccountsUpdated.Broadcast(m_Data);
	}
}

void UMatchmaking::OnFavoritesListChanged( FavoritesListChanged_t *pParam )
{
	const FFavoritesListChanged m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UMatchmaking::FavoritesListChanged.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		FavoritesListChanged.Broadcast(m_Data);
	}
}

void UMatchmaking::OnLobbyChatMsg( LobbyChatMsg_t *pParam )
{
	const FLobbyChatMsg m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UMatchmaking::LobbyChatMsg.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		LobbyChatMsg.Broadcast(m_Data);
	}
}

void UMatchmaking::OnLobbyChatUpdate( LobbyChatUpdate_t *pParam )
{
	const FLobbyChatUpdate m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UMatchmaking::LobbyChatUpdate.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		LobbyChatUpdate.Broadcast(m_Data);
	}
}

void UMatchmaking::OnLobbyDataUpdate( LobbyDataUpdate_t *pParam )
{
	const FLobbyDataUpdate m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UMatchmaking::LobbyDataUpdate.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		LobbyDataUpdate.Broadcast(m_Data);
	}
}

void UMatchmaking::OnLobbyEnter( LobbyEnter_t *pParam )
{
	const FLobbyEnterData m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UMatchmaking::LobbyEnter.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		LobbyEnter.Broadcast(m_Data);
	}
}

void UMatchmaking::OnLobbyGameCreated( LobbyGameCreated_t *pParam )
{
	const FLobbyGameCreated m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UMatchmaking::LobbyGameCreated.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		LobbyGameCreated.Broadcast(m_Data);
	}
}

void UMatchmaking::OnLobbyInvite( LobbyInvite_t *pParam )
{
	const FLobbyInviteData m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UMatchmaking::LobbyInvite.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		LobbyInvite.Broadcast(m_Data);
	}
}

void UMatchmaking::OnLobbyKicked(LobbyKicked_t* data)
{
	const FLobbyKickedData m_Data = *data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UMatchmaking::LobbyKicked.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		LobbyKicked.Broadcast(m_Data);
	}
}

