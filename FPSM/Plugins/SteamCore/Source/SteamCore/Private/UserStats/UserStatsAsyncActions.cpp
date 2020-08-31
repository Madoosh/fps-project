/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUserStats
*/

#include "UserStats/UserStatsAsyncActions.h"
#include "UserStats/UserStatsAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionFindLeaderboard* USteamCoreUserStatsAsyncActionFindLeaderboard::FindLeaderboardAsync(UObject* WorldContextObject, FString leaderboardName)
{
	if (SteamUserStats())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUserStatsAsyncActionFindLeaderboard>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard(m_Subsystem, m_AsyncObject, leaderboardName);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		
		m_Subsystem->QueueAsyncTask(m_Task);

		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}
	
	return nullptr;
}

void USteamCoreUserStatsAsyncActionFindLeaderboard::HandleCallback(const FLeaderboardFindResult& data, bool bWasSuccessful)
{
	const FLeaderboardFindResult m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::DownloadLeaderboardEntriesAsync(UObject* WorldContextObject, FSteamLeaderboard steamLeaderboard, ESteamLeaderboardDataRequest dataRequest, int32 rangeStart, int32 rangeEnd)
{
	if (SteamUserStats())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries(m_Subsystem, m_AsyncObject, steamLeaderboard, dataRequest, rangeStart, rangeEnd);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}
	
	return nullptr;
}

void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries::HandleCallback(const FLeaderboardScoresDownloaded& data, bool bWasSuccessful)
{
	const FLeaderboardScoresDownloaded m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionDownloadLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats* USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::RequestGlobalStatsAsync(UObject* WorldContextObject, int32 historyDays)
{
	if (SteamUserStats())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats(m_Subsystem, m_AsyncObject, historyDays);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}

	return nullptr;
}

void USteamCoreUserStatsAsyncActionDownloadRequestGlobalStats::HandleCallback(const FGlobalStatsReceived& data, bool bWasSuccessful)
{
	const FGlobalStatsReceived m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages* USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::RequestGlobalAchievementPercentagesAsync(UObject* WorldContextObject)
{
	if (SteamUserStats())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages(m_Subsystem, m_AsyncObject);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}

	return nullptr;
}

void USteamCoreUserStatsAsyncActionRequestGlobalAchievementPercentages::HandleCallback(const FGlobalAchievementPercentagesReady& data, bool bWasSuccessful)
{
	const FGlobalAchievementPercentagesReady m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers* USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::GetNumberOfCurrentPlayersAsync(UObject* WorldContextObject)
{
	if (SteamUserStats())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers(m_Subsystem, m_AsyncObject);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);

		m_Subsystem->QueueAsyncTask(m_Task);

		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}

	return nullptr;
}

void USteamCoreUserStatsAsyncActionGetNumberOfCurrentPlayers::HandleCallback(const FNumberOfCurrentPlayers& data, bool bWasSuccessful)
{
	const FNumberOfCurrentPlayers m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionUploadLeaderboardScore
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionUploadLeaderboardScore* USteamCoreUserStatsAsyncActionUploadLeaderboardScore::UploadLeaderboardScoreAsync(UObject* WorldContextObject, FSteamLeaderboard steamLeaderboard, ESteamLeaderboardUploadScoreMethod uploadScoreMethod, int32 score, TArray<int32> scoreDetails)
{
	if (SteamUserStats())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUserStatsAsyncActionUploadLeaderboardScore>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore(m_Subsystem, m_AsyncObject, steamLeaderboard, uploadScoreMethod, score, scoreDetails);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}

	return nullptr;
}

void USteamCoreUserStatsAsyncActionUploadLeaderboardScore::HandleCallback(const FLeaderboardScoreUploaded& data, bool bWasSuccessful)
{
	const FLeaderboardScoreUploaded m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionUploadLeaderboardScore
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard* USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::FindOrCreateLeaderboardAsync(UObject* WorldContextObject, FString leaderboardName, ESteamLeaderboardSortMethod sortMethod, ESteamLeaderboardDisplayType displayType)
{
	if (SteamUserStats())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard(m_Subsystem, m_AsyncObject, leaderboardName, sortMethod, displayType);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}

	return nullptr;
}

void USteamCoreUserStatsAsyncActionFindOrCreateLeaderboard::HandleCallback(const FFindOrCreateLeaderboardData& data, bool bWasSuccessful)
{
	const FFindOrCreateLeaderboardData m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionRequestUserStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionRequestUserStats* USteamCoreUserStatsAsyncActionRequestUserStats::RequestUserStatsAsync(UObject* WorldContextObject, FSteamID steamID)
{
	if (SteamUserStats())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUserStatsAsyncActionRequestUserStats>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats(m_Subsystem, m_AsyncObject, steamID);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}

	return nullptr;
}

void USteamCoreUserStatsAsyncActionRequestUserStats::HandleCallback(const FRequestUserStatsData& data, bool bWasSuccessful)
{
	const FRequestUserStatsData m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers* USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::DownloadLeaderboardEntriesForUsersAsync(UObject* WorldContextObject, FSteamLeaderboard steamLeaderboard, TArray<FSteamID> users)
{
	if (SteamUserStats())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers(m_Subsystem, m_AsyncObject, steamLeaderboard, users);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}

	return nullptr;
}

void USteamCoreUserStatsAsyncActionDownloadLeaderboardEntriesForUsers::HandleCallback(const FLeaderboardScoresDownloadedForUsers& data, bool bWasSuccessful)
{
	const FLeaderboardScoresDownloadedForUsers m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserStatsAsyncActionAttachLeaderboardUGC
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserStatsAsyncActionAttachLeaderboardUGC* USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::AttachLeaderboardUGCAsync(UObject* WorldContextObject, FSteamLeaderboard steamLeaderboard, FSteamUGCHandle handle)
{
	if (SteamUserStats())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUserStatsAsyncActionAttachLeaderboardUGC>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC(m_Subsystem, m_AsyncObject, steamLeaderboard, handle);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}

	return nullptr;
}

void USteamCoreUserStatsAsyncActionAttachLeaderboardUGC::HandleCallback(const FAttachLeaderboardUGCData& data, bool bWasSuccessful)
{
	const FAttachLeaderboardUGCData m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}