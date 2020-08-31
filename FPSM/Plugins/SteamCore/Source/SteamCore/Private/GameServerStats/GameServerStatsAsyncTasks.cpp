/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServerStats
*/

#include "GameServerStats/GameServerStatsAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (!bInit)
	{
		CallbackHandle = SteamGameServerStats()->RequestUserStats(SteamIDUser);
		bInit = true;
	}

	if (CallbackHandle != k_uAPICallInvalid)
	{
		bool bFailedCall = false;

		bIsComplete = SteamUtilsPtr->IsAPICallCompleted(CallbackHandle, &bFailedCall) ? true : false;

		if (bIsComplete)
		{
			bool bFailedResult;
			bool bSuccessCallResult = SteamUtilsPtr->GetAPICallResult(CallbackHandle, &CallbackResults, sizeof(CallbackResults), CallbackResults.k_iCallback, &bFailedResult);
			bWasSuccessful = (bSuccessCallResult ? true : false) &&
				(!bFailedCall ? true : false) &&
				(!bFailedResult ? true : false) &&
				((CallbackResults.m_eResult == k_EResultOK) ? true : false);
		}
	}
	else
	{
		bIsComplete = true;
		bWasSuccessful = false;
	}
}

void FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS::TriggerDelegates()
{
	LogVerbose("");

	const FGSStatsReceived m_Data = CallbackResults;

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

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (!bInit)
	{
		CallbackHandle = SteamGameServerStats()->StoreUserStats(SteamIDUser);
		bInit = true;
	}

	if (CallbackHandle != k_uAPICallInvalid)
	{
		bool bFailedCall = false;

		bIsComplete = SteamUtilsPtr->IsAPICallCompleted(CallbackHandle, &bFailedCall) ? true : false;

		if (bIsComplete)
		{
			bool bFailedResult;
			bool bSuccessCallResult = SteamUtilsPtr->GetAPICallResult(CallbackHandle, &CallbackResults, sizeof(CallbackResults), CallbackResults.k_iCallback, &bFailedResult);
			bWasSuccessful = (bSuccessCallResult ? true : false) &&
				(!bFailedCall ? true : false) &&
				(!bFailedResult ? true : false) &&
				((CallbackResults.m_eResult == k_EResultOK) ? true : false);
		}
	}
	else
	{
		bIsComplete = true;
		bWasSuccessful = false;
	}
}

void FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats::TriggerDelegates()
{
	LogVerbose("");

	const FGSStatsStored m_Data = CallbackResults;

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