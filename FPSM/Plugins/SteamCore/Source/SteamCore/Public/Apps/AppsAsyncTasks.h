/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamApps
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "AppsTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreAppsGetFileDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreAppsGetFileDetails : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFileDetailsResult OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreAppsGetFileDetails(USteamCoreSubsystem* subsystem, FOnFileDetailsResult callback, FString fileName)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, FileName(fileName)
	{}
	FOnlineAsyncTaskSteamCoreAppsGetFileDetails(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FString fileName)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, FileName(fileName)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreAppsGetFileDetails() = delete;
protected:
	FileDetailsResult_t CallbackResults;
	FString FileName;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreAppsGetFileDetails bWasSuccessful: %d"), WasSuccessful()); }
};