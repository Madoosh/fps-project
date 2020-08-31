/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#include "MatchmakingServers/MatchmakingServersAsyncActions.h"
#include "MatchmakingServers/MatchmakingServersAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionPingServer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer* USteamCoreMatchmakingServersAsyncActionPingServer::CurrentTask = nullptr;

USteamCoreMatchmakingServersAsyncActionPingServer* USteamCoreMatchmakingServersAsyncActionPingServer::PingServerAsync(UObject* WorldContextObject, FString ip, int32 port)
{
	if (SteamMatchmakingServers())
	{
		if (CurrentTask != nullptr)
		{
			if (CurrentTask->CallbackResults != k_uAPICallInvalid)
			{
				CurrentTask->bIsComplete = true;
				CurrentTask->bWasSuccessful = false;

				if (SteamCoreDebugging())
				{
					UE_LOG(SteamCoreLog, Error, TEXT("PingServer had an active search query, cancelling the old one."));
				}

				CurrentTask = nullptr;
			}
		}

		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreMatchmakingServersAsyncActionPingServer>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer(m_Subsystem, m_AsyncObject, ip, port);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreMatchmakingServersAsyncActionPingServer::HandleCallback(const FGameServerItem& data, bool bWasSuccessful)
{
	const FGameServerItem m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionRequestServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

FOnlineAsyncTaskSteamCoreMatchmakingServersServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::CurrentTask = nullptr;

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestServerList(UObject* WorldContextObject, ESteamServerListRequestType requestType, int32 appID /* = 480 */, int32 maxResults /* = 50 */, bool bIgnoreNonResponsive /* = false */, UServerFilter* serverFilter)
{
	if (SteamMatchmakingServers())
	{
		if (CurrentTask != nullptr)
		{
			if (CurrentTask->CallbackResults != nullptr)
			{
				CurrentTask->bIsComplete = true;
				CurrentTask->bWasSuccessful = false;

				if (SteamCoreDebugging())
				{
					UE_LOG(SteamCoreLog, Error, TEXT("RequestServerList had an active search query, cancelling the old one."));
				}

				CurrentTask = nullptr;
			}
		}

		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreMatchmakingServersAsyncActionRequestServerList>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersServerList(m_Subsystem, m_AsyncObject, appID, maxResults, requestType, bIgnoreNonResponsive, serverFilter);
		CurrentTask = m_Task;
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreMatchmakingServersAsyncActionRequestServerList::HandleCallback(const TArray<FGameServerItem>& data, bool bWasSuccessful)
{
	const TArray<FGameServerItem> m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}
}

void USteamCoreMatchmakingServersAsyncActionRequestServerList::HandleServerListFinished()
{
	SetReadyToDestroy();
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestInternetServerListAsync(UObject* WorldContextObject, int32 appID /*= 480*/, int32 maxResults /*= 50*/, bool bIgnoreNonResponsive, UServerFilter* serverFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Internet, appID, maxResults, bIgnoreNonResponsive, serverFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestLANServerListAsync(UObject* WorldContextObject, int32 appID /*= 480*/, int32 maxResults /*= 50*/, bool bIgnoreNonResponsive, UServerFilter* serverFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Lan, appID, maxResults, bIgnoreNonResponsive, serverFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestSpectatorServerListAsync(UObject* WorldContextObject, int32 appID /*= 480*/, int32 maxResults /*= 50*/, bool bIgnoreNonResponsive, UServerFilter* serverFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Spectator, appID, maxResults, bIgnoreNonResponsive, serverFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFavoritesServerListAsync(UObject* WorldContextObject, int32 appID /*= 480*/, int32 maxResults /*= 50*/, bool bIgnoreNonResponsive, UServerFilter* serverFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Favorites, appID, maxResults, bIgnoreNonResponsive, serverFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestFriendsServerListAsync(UObject* WorldContextObject, int32 appID /*= 480*/, int32 maxResults /*= 50*/, bool bIgnoreNonResponsive, UServerFilter* serverFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::Friends, appID, maxResults, bIgnoreNonResponsive, serverFilter);
}

USteamCoreMatchmakingServersAsyncActionRequestServerList* USteamCoreMatchmakingServersAsyncActionRequestServerList::RequestHistoryServerListAsync(UObject* WorldContextObject, int32 appID /*= 480*/, int32 maxResults /*= 50*/, bool bIgnoreNonResponsive, UServerFilter* serverFilter)
{
	return RequestServerList(WorldContextObject, ESteamServerListRequestType::History, appID, maxResults, bIgnoreNonResponsive, serverFilter);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionServerRules
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules* USteamCoreMatchmakingServersAsyncActionServerRules::CurrentTask = nullptr;

USteamCoreMatchmakingServersAsyncActionServerRules* USteamCoreMatchmakingServersAsyncActionServerRules::ServerRulesAsync(UObject* WorldContextObject, FString ip, int32 queryPort)
{
	if (SteamMatchmakingServers())
	{
		if (CurrentTask != nullptr)
		{
			if (CurrentTask->CallbackResults != k_uAPICallInvalid)
			{
				CurrentTask->bIsComplete = true;
				CurrentTask->bWasSuccessful = false;

				if (SteamCoreDebugging())
				{
					UE_LOG(SteamCoreLog, Error, TEXT("ServerRules had an active search query, cancelling the old one."));
				}

				CurrentTask = nullptr;
			}
		}

		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreMatchmakingServersAsyncActionServerRules>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules(m_Subsystem, m_AsyncObject, ip, queryPort);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreMatchmakingServersAsyncActionServerRules::HandleCallback(const TArray<FGameServerRule>& data, bool bWasSuccessful)
{
	const TArray<FGameServerRule> m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}