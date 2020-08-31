/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamApps
*/

#include "Apps/Apps.h"
#include "Apps/AppsAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UApps::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnDLCInstalledCallback.Register(this, &UApps::OnDLCInstalled);
	OnOnFileDetailsResultCallback.Register(this, &UApps::OnFileDetailsResult);

	if (IsRunningDedicatedServer())
	{
		OnDLCInstalledCallback.SetGameserverFlag();
		OnOnFileDetailsResultCallback.SetGameserverFlag();
	}
}

void UApps::Deinitialize()
{
	OnDLCInstalledCallback.Unregister();
	OnOnFileDetailsResultCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool UApps::BIsSubscribed()
{
	return GetApps() ? GetApps()->BIsSubscribed() : false;
}

bool UApps::BIsLowViolence()
{
	return GetApps() ? GetApps()->BIsLowViolence() : false;
}

bool UApps::BIsCybercafe()
{
	return GetApps() ? GetApps()->BIsCybercafe() : false;
}

bool UApps::BIsVACBanned()
{
	return GetApps() ? GetApps()->BIsVACBanned() : false;
}

FString UApps::GetCurrentGameLanguage()
{
	return GetApps() ? UTF8_TO_TCHAR(GetApps()->GetCurrentGameLanguage()) : UTF8_TO_TCHAR("");
}

FString UApps::GetAvailableGameLanguages()
{
	return GetApps() ? UTF8_TO_TCHAR(GetApps()->GetAvailableGameLanguages()) : UTF8_TO_TCHAR("");
}

bool UApps::BIsSubscribedApp(int32 appID)
{
	return GetApps() ? GetApps()->BIsSubscribedApp(appID) : false;
}

bool UApps::BIsSubscribedFromFamilySharing()
{
#if STEAM_VERSION > 142
	return GetApps() ? GetApps()->BIsSubscribedFromFamilySharing() : false;
#else
	return false;
#endif
}

bool UApps::BIsDlcInstalled(int32 appID)
{
	return GetApps() ? GetApps()->BIsDlcInstalled(appID) : false;
}

int32 UApps::GetEarliestPurchaseUnixTime(int32 appID)
{
	return GetApps() ? GetApps()->GetEarliestPurchaseUnixTime(appID) : 0;
}

bool UApps::BIsSubscribedFromFreeWeekend()
{
	return GetApps() ? GetApps()->BIsSubscribedFromFreeWeekend() : false;
}

int32 UApps::GetDLCCount()
{
	return GetApps() ? GetApps()->GetDLCCount() : 0;
}

bool UApps::BGetDLCDataByIndex(int32 dlc, int32& appID, bool& bAvailable, FString& name)
{
	bool bResult = false;

	if (GetApps())
	{
		char m_CharArray[1024];
		AppId_t m_AppId;

		bResult = GetApps()->BGetDLCDataByIndex(dlc, &m_AppId, &bAvailable, m_CharArray, 1024);

		if (bResult)
		{
			name = UTF8_TO_TCHAR(m_CharArray);
			appID = m_AppId;
		}
	}

	return bResult;
}

void UApps::InstallDLC(int32 appID)
{
	if (GetApps())
		GetApps()->InstallDLC(appID);
}

void UApps::UninstallDLC(int32 appID)
{
	if (GetApps())
		GetApps()->UninstallDLC(appID);
}

bool UApps::GetCurrentBetaName(FString& name)
{
	bool bResult = false;

	if (GetApps())
	{
		char m_CharArray[1024];

		bResult = GetApps()->GetCurrentBetaName(m_CharArray, 1024);

		if (bResult)
		{
			name = UTF8_TO_TCHAR(m_CharArray);
		}
	}

	return bResult;
}

bool UApps::MarkContentCorrupt(bool bMissingFilesOnly)
{
	return GetApps() ? GetApps()->MarkContentCorrupt(bMissingFilesOnly) : false;
}

int32 UApps::GetInstalledDepots(int32 appID, int32 maxDepots, TArray<int32>& depots)
{
	int32 m_Result = INDEX_NONE;

	if (GetApps())
	{
		TArray<DepotId_t> m_Array;
		m_Array.SetNum(maxDepots);

		m_Result = GetApps()->GetInstalledDepots(appID, m_Array.GetData(), maxDepots);

		if (m_Result != INDEX_NONE)
		{
			depots.Empty();

			for (int32 i = 0; i < maxDepots; i++) 
			{
				depots.Add(m_Array[i]);
			}
		}
	}

	return m_Result;
}

int UApps::GetLaunchCommandLine(FString& commandLine)
{
	int32 m_Result = INDEX_NONE;

#if STEAM_VERSION > 142
	if (GetApps())
	{
		char m_CharArray[1024];
		m_Result = GetApps()->GetLaunchCommandLine(m_CharArray, 1024);

		if (m_Result != INDEX_NONE)
		{
			commandLine = UTF8_TO_TCHAR(m_CharArray);
		}
	}
#else
	commandLine = "Unsupported";
#endif
	return m_Result;
}

int32 UApps::GetAppInstallDir(int32 appID, FString& folder)
{
	int32 m_Result = INDEX_NONE;

	if (GetApps())
	{
		char m_CharArray[1024];

		m_Result = GetApps()->GetAppInstallDir(appID, m_CharArray, 1024);
		
		if (m_Result != INDEX_NONE)
		{
			folder = UTF8_TO_TCHAR(m_CharArray);
		}
	}

	return m_Result;
}

bool UApps::BIsAppInstalled(int32 appID)
{
	return GetApps() ? GetApps()->BIsAppInstalled(appID) : false;
}

FSteamID UApps::GetAppOwner()
{
	return GetApps() ? FSteamID(GetApps()->GetAppOwner()) : FSteamID();
}

FString UApps::GetLaunchQueryParam(FString Key)
{
	return GetApps() ? UTF8_TO_TCHAR(GetApps()->GetLaunchQueryParam(TCHAR_TO_UTF8(*Key))) : UTF8_TO_TCHAR("");
}

bool UApps::GetDlcDownloadProgress(int32 appID, int32& bytesDownloaded, int32& bytesTotal)
{
	bool bResult = false;

	if (GetApps())
	{
		uint64 m_Downloaded = 0;
		uint64 m_BytesTotal = 0;
		
		bResult = GetApps()->GetDlcDownloadProgress(appID, &m_Downloaded, &m_BytesTotal);
		
		if (bResult)
		{
			bytesDownloaded = m_Downloaded;
			bytesTotal = m_BytesTotal;
		}
	}

	return bResult;
}

int32 UApps::GetAppBuildId()
{
	return GetApps() ? GetApps()->GetAppBuildId() : 0;
}

void UApps::GetFileDetails(const FOnFileDetailsResult& callback, FString fileName)
{
	if (GetApps())
	{
		FOnlineAsyncTaskSteamCoreAppsGetFileDetails* m_Task = new FOnlineAsyncTaskSteamCoreAppsGetFileDetails(this, callback, fileName);
		QueueAsyncTask(m_Task);
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UApps::OnDLCInstalled(DlcInstalled_t* data)
{
	const FDLCInstalled m_Data = *data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				DLCInstalled.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		DLCInstalled.Broadcast(m_Data);
	}
}

void UApps::OnFileDetailsResult(FileDetailsResult_t *pParam)
{
	const FFileDetailsResult m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				FileDetailsResultDelegate.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		FileDetailsResultDelegate.Broadcast(m_Data);
	}
}