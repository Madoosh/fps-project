/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#include "MatchmakingServers/MatchmakingServersAsyncTasks.h"
#include "SteamCore/SteamUtilities.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

HServerListRequest FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::CallbackResults = nullptr;

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (!bInit)
	{
		int32 NumFilters = 0;
		MatchMakingKeyValuePair_t* m_Filters = NULL;

		if (ServerFilter != nullptr)
		{
			NumFilters = ServerFilter->GetNumFilters();
			m_Filters = ServerFilter->GetFiltersPtr();
		}

		switch (RequestType)
		{
		case ESteamServerListRequestType::Favorites:
			CallbackResults = SteamMatchmakingServers()->RequestFavoritesServerList(AppID, &m_Filters, NumFilters, this);
			break;
		case ESteamServerListRequestType::Friends:
			CallbackResults = SteamMatchmakingServers()->RequestFriendsServerList(AppID, &m_Filters, NumFilters, this);
			break;
		case ESteamServerListRequestType::History:
			CallbackResults = SteamMatchmakingServers()->RequestHistoryServerList(AppID, &m_Filters, NumFilters, this);
			break;
		case ESteamServerListRequestType::Internet:
			CallbackResults = SteamMatchmakingServers()->RequestInternetServerList(AppID, &m_Filters, NumFilters, this);
			break;
		case ESteamServerListRequestType::Lan:
			CallbackResults = SteamMatchmakingServers()->RequestLANServerList(AppID, this);
			break;
		case ESteamServerListRequestType::Spectator:
			CallbackResults = SteamMatchmakingServers()->RequestSpectatorServerList(AppID, &m_Filters, NumFilters, this);
			break;
		}

		if (CallbackResults == NULL)
		{
			bIsComplete = true;
			bWasSuccessful = false;
		}

		if (ServerFilter != nullptr)
		{
			ServerFilter->SetReadyToDestroy();
		}

		bInit = true;
	}

	bool bReachedSearchLimit = (Servers.Num() >= MaxResults) ? true : false;
	bool bServerSearchComplete = (bServerRefreshComplete && ElapsedTime > 1.0f) ? true : false;

	if (bReachedSearchLimit || bTimedOut || bServerSearchComplete)
	{
		bIsComplete = true;
		bWasSuccessful = true;
	}

	if (bIsComplete)
	{
		ServerFilter.Reset();
	}
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::Finalize()
{
	LogVerbose("");

	if (CallbackResults != NULL)
	{
		SteamMatchmakingServers()->CancelQuery(CallbackResults);
		SteamMatchmakingServers()->ReleaseRequest(CallbackResults);
		CallbackResults = NULL;
	}

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				OnSteamCallback.ExecuteIfBound(Servers, bWasSuccessful);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		OnSteamCallback.ExecuteIfBound(Servers, bWasSuccessful);
	}
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::ServerResponded(HServerListRequest request, int iServer)
{
	LogVerbose("");

	ElapsedTime = 0.0f;

	gameserveritem_t* Server = SteamMatchmakingServers()->GetServerDetails(request, iServer);

	if (Server != NULL)
	{
		if (Server->m_nAppID == AppID)
		{
			Servers.Add(Server);
		}
	}
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::ServerFailedToRespond(HServerListRequest request, int iServer)
{
	LogVerbose("");

	ElapsedTime = 0.0f;

	if (!bIgnoreNonResponsive)
	{
		gameserveritem_t* Server = SteamMatchmakingServers()->GetServerDetails(request, iServer);

		if (Server != NULL)
		{
			if (Server->m_nAppID == AppID)
			{
				Servers.Add(Server);
			}
		}
	}
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerList::RefreshComplete(HServerListRequest request, EMatchMakingServerResponse response)
{
	bServerRefreshComplete = true;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
HServerQuery FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer::CallbackResults = k_uAPICallInvalid;

void FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (!bInit)
	{
		FIPv4Address m_IP;
		FIPv4Address::Parse(IP, m_IP);

		CallbackResults = SteamMatchmakingServers()->PingServer(m_IP.Value, Port, this);

		if (CallbackResults == k_uAPICallInvalid)
		{
			bIsComplete = true;
			bWasSuccessful = false;
		}

		bInit = true;
	}

	if (bIsComplete)
	{
		// Cancel further server queries (may trigger RefreshComplete delegate)
		if (CallbackResults != k_uAPICallInvalid)
		{
			SteamMatchmakingServers()->CancelServerQuery(CallbackResults);
			CallbackResults = k_uAPICallInvalid;
		}
	}
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer::ServerResponded(gameserveritem_t& server)
{
	LogVerbose("");

	bIsComplete = true;
	bWasSuccessful = true;

	const FGameServerItem m_Data = &server;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				OnSteamCallback.ExecuteIfBound(m_Data, bWasSuccessful);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		OnSteamCallback.ExecuteIfBound(m_Data, bWasSuccessful);
	}
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer::ServerFailedToRespond()
{
	LogVerbose("");

	bIsComplete = true;
	bWasSuccessful = false;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				OnSteamCallback.ExecuteIfBound(FGameServerItem(), bWasSuccessful);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		OnSteamCallback.ExecuteIfBound(FGameServerItem(), bWasSuccessful);
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

HServerQuery FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules::CallbackResults = k_uAPICallInvalid;

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();
	
	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (!bInit)
	{
		FIPv4Address m_IP;
		FIPv4Address::Parse(IP, m_IP);

		CallbackResults = SteamMatchmakingServers()->ServerRules(m_IP.Value, Port, this);

		if (CallbackResults == k_uAPICallInvalid)
		{
			bIsComplete = true;
			bWasSuccessful = false;
		}

		bInit = true;
	}

	if (bIsComplete)
	{
		// Cancel further server queries (may trigger RefreshComplete delegate)
		if (CallbackResults != k_uAPICallInvalid)
		{
			SteamMatchmakingServers()->CancelServerQuery(CallbackResults);
			CallbackResults = k_uAPICallInvalid;
		}
	}
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules::RulesResponded(const char* pchRule, const char* pchValue)
{
	LogVerbose("");

	Rules.Add({ pchRule, pchValue });
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules::RulesFailedToRespond()
{
	LogVerbose("");
}

void FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules::RulesRefreshComplete()
{
	LogVerbose("");

	bIsComplete = true;
	bWasSuccessful = true;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				OnSteamCallback.ExecuteIfBound(Rules, bWasSuccessful);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		OnSteamCallback.ExecuteIfBound(Rules, bWasSuccessful);
	}
}
