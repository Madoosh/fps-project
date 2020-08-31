/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServer
*/

#include "GameServer/GameServerAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreGameServerFindOrCreateLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (!bInit)
	{
		CallbackHandle = SteamGameServer()->AssociateWithClan(SteamIDClan);
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

void FOnlineAsyncTaskSteamCoreGameServerAssociateWithClan::TriggerDelegates()
{
	LogVerbose("");

	const FAssociateWithClanResult m_Data = CallbackResults;

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
//		FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (!bInit)
	{
		CallbackHandle = SteamGameServer()->ComputeNewPlayerCompatibility(SteamIDNewPlayer);
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

void FOnlineAsyncTaskSteamCoreGameServerComputeNewPlayerCompatibility::TriggerDelegates()
{
	LogVerbose("");

	const FComputeNewPlayerCompatibilityResult m_Data = CallbackResults;

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