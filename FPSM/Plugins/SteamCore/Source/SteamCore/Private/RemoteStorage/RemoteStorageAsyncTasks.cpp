/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemoteStorage
*/

#include "RemoteStorage/RemoteStorageAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (!bInit)
	{
		CallbackHandle = SteamRemoteStorage()->FileWriteAsync(TCHAR_TO_UTF8(*File), Data.GetData(), Data.Num());
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

void FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync::TriggerDelegates()
{
	LogVerbose("");

	const FRemoteStorageFileWriteAsyncComplete m_Data = CallbackResults;
	OnSteamCallback.ExecuteIfBound(m_Data, bWasSuccessful);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (!bInit)
	{
		CallbackHandle = SteamRemoteStorage()->FileReadAsync(TCHAR_TO_UTF8(*File), Offset, BytesToRead);
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

void FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync::TriggerDelegates()
{
	LogVerbose("");

	const FRemoteStorageFileReadAsyncComplete m_Data = CallbackResults;
	OnSteamCallback.ExecuteIfBound(m_Data, bWasSuccessful);
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileShare
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void FOnlineAsyncTaskSteamCoreRemoteStorageFileShare::Tick()
{
	FOnlineAsyncTaskSteamCore::Tick();

	ISteamUtils* SteamUtilsPtr = IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
	check(SteamUtilsPtr);

	if (!bInit)
	{
		CallbackHandle = SteamRemoteStorage()->FileShare(TCHAR_TO_UTF8(*File));
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

void FOnlineAsyncTaskSteamCoreRemoteStorageFileShare::TriggerDelegates()
{
	const FRemoteStorageFileShareResult m_Data = CallbackResults;
	OnSteamCallback.ExecuteIfBound(m_Data, bWasSuccessful);
}