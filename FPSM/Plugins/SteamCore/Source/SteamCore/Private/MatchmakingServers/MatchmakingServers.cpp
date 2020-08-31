/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#include "MatchmakingServers/MatchmakingServers.h"
#include "MatchmakingServers/MatchmakingServersAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UMatchmakingServers::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UMatchmakingServers::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UMatchmakingServers::RequestFavoritesServerList(const FOnServersUpdated& serverCallback, int32 appID, int32 maxResults, bool bIgnoreNonResponsive /* = false */, UServerFilter* serverFilter)
{
	RequestServerList(serverCallback, appID, ESteamServerListRequestType::Favorites, maxResults, bIgnoreNonResponsive, serverFilter);
}

void UMatchmakingServers::RequestFriendsServerList(const FOnServersUpdated& serverCallback, int32 appID, int32 maxResults, bool bIgnoreNonResponsive /* = false */, UServerFilter* serverFilter)
{
	RequestServerList(serverCallback, appID, ESteamServerListRequestType::Friends, maxResults, bIgnoreNonResponsive, serverFilter);
}

void UMatchmakingServers::RequestHistoryServerList(const FOnServersUpdated& serverCallback, int32 appID, int32 maxResults, bool bIgnoreNonResponsive /* = false */, UServerFilter* serverFilter)
{
	RequestServerList(serverCallback, appID, ESteamServerListRequestType::History, maxResults, bIgnoreNonResponsive, serverFilter);
}

void UMatchmakingServers::RequestInternetServerList(const FOnServersUpdated& serverCallback, int32 appID, int32 maxResults, bool bIgnoreNonResponsive /* = false */, UServerFilter* serverFilter)
{
	RequestServerList(serverCallback, appID, ESteamServerListRequestType::Internet, maxResults, bIgnoreNonResponsive, serverFilter);
}

void UMatchmakingServers::RequestLANServerList(const FOnServersUpdated& serverCallback, int32 appID, int32 maxResults, bool bIgnoreNonResponsive /* = false */, UServerFilter* serverFilter)
{
	RequestServerList(serverCallback, appID, ESteamServerListRequestType::Lan, maxResults, bIgnoreNonResponsive, serverFilter);
}

void UMatchmakingServers::RequestSpectatorServerList(const FOnServersUpdated& serverCallback, int32 appID /* = 480 */, int32 maxResults /* = 50 */, bool bIgnoreNonResponsive /* = false */, UServerFilter* serverFilter)
{
	RequestServerList(serverCallback, appID, ESteamServerListRequestType::Spectator, maxResults, bIgnoreNonResponsive, serverFilter);
}

void UMatchmakingServers::PingServer(const FOnServerPing& callback, FString ip, int32 port)
{
	if (SteamMatchmakingServers())
	{
		FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer* m_Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer(this, callback, ip, port);
		QueueAsyncTask(m_Task);
	}
}

void UMatchmakingServers::ServerRules(const FOnServerRules& callback, FString ip, int32 port)
{
	if (SteamMatchmakingServers())
	{
		FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules* m_Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules(this, callback, ip, port);
		QueueAsyncTask(m_Task);
	}
}

void UMatchmakingServers::RequestServerList(const FOnServersUpdated& serverCallback, int32 appID, ESteamServerListRequestType type, int32 maxResults, bool bIgnoreNonResponsive, UServerFilter* serverFilter)
{
	if (SteamMatchmakingServers())
	{
		FOnlineAsyncTaskSteamCoreMatchmakingServersServerList* m_Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersServerList(this, serverCallback, appID, maxResults, type, bIgnoreNonResponsive, serverFilter);
		QueueAsyncTask(m_Task);
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

