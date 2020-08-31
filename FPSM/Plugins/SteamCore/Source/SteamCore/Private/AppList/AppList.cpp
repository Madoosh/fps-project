/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamAppList
*/

#include "AppList/AppList.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UAppList::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnSteamAppInstalledCallback.Register(this, &UAppList::OnSteamAppInstalled);
	OnSteamAppUninstalledCallback.Register(this, &UAppList::OnSteamAppUninstalled);

	if (IsRunningDedicatedServer())
	{
		OnSteamAppInstalledCallback.SetGameserverFlag();
		OnSteamAppUninstalledCallback.SetGameserverFlag();
	}
}

void UAppList::Deinitialize()
{
	OnSteamAppInstalledCallback.Unregister();
	OnSteamAppUninstalledCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

int32 UAppList::GetNumInstalledApps()
{
	return SteamAppList() ? SteamAppList()->GetNumInstalledApps() : 0;
}

int32 UAppList::GetInstalledApps(TArray<int32>& appIDs, int32 maxAppIDs)
{
	int32 m_Result = 0;
	if (SteamAppList())
	{
		uint32* m_AppIDs = new uint32[maxAppIDs];

		m_Result = SteamAppList()->GetInstalledApps(m_AppIDs, maxAppIDs);

		if (m_Result > 0)
		{
			for (int32 i = 0; i < maxAppIDs; i++) 
			{
				appIDs.Add(m_AppIDs[i]);
			}
		}

		delete[] m_AppIDs;
	}
	return m_Result;
}

int32 UAppList::GetAppName(int32 appID, FString& name)
{
	int32 m_Result = INDEX_NONE;

	if (SteamAppList())
	{
		char m_Name[1024];

		m_Result = SteamAppList()->GetAppName(appID, m_Name, 1024);

		if (m_Result != INDEX_NONE)
		{
			name = UTF8_TO_TCHAR(m_Name);
		}
	}

	return m_Result;
}

int32 UAppList::GetAppInstallDir(int32 appID, FString& directory)
{
	int32 m_Result = INDEX_NONE;

	if (SteamAppList())
	{
		char m_Directory[1024];

		m_Result = SteamAppList()->GetAppInstallDir(appID, m_Directory, 1024);

		if (m_Result != INDEX_NONE) 
		{
			directory = UTF8_TO_TCHAR(m_Directory);

		}
	}

	return m_Result;
}

int32 UAppList::GetAppBuildId(int32 appID)
{
	return SteamAppList() ? SteamAppList()->GetAppBuildId(appID) : 0;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UAppList::OnSteamAppInstalled(SteamAppInstalled_t* pParam)
{
	const FSteamAppInstalled m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				SteamAppInstalled.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		SteamAppInstalled.Broadcast(m_Data);
	}
}

void UAppList::OnSteamAppUninstalled(SteamAppUninstalled_t* pParam)
{
	const FSteamAppUninstalled m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				SteamAppUninstalled.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		SteamAppUninstalled.Broadcast(m_Data);
	}
}