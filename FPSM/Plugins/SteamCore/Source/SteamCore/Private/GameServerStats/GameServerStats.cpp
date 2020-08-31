/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServerStats
*/

#include "GameServerStats/GameServerStats.h"
#include "GameServerStats/GameServerStatsAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UGameServerStats::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnGSStatsUnloadedCallback.Register(this, &UGameServerStats::OnGSStatsUnloaded);

	if (IsRunningDedicatedServer())
	{
		OnGSStatsUnloadedCallback.SetGameserverFlag();
	}
}

void UGameServerStats::Deinitialize()
{
	OnGSStatsUnloadedCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool UGameServerStats::GetUserStatInt(FSteamID steamIDUser, FString name, int32& data)
{
	return SteamGameServerStats() ? SteamGameServerStats()->GetUserStat(steamIDUser, TCHAR_TO_UTF8(*name), &data) : false; 
}

bool UGameServerStats::GetUserStatFloat(FSteamID steamIDUser, FString name, float& data)
{
	return SteamGameServerStats() ? SteamGameServerStats()->GetUserStat(steamIDUser, TCHAR_TO_UTF8(*name), &data) : false;
}

bool UGameServerStats::GetUserAchievement(FSteamID steamIDUser, FString name, bool& bAchieved)
{
	return SteamGameServerStats() ? SteamGameServerStats()->GetUserAchievement(steamIDUser, TCHAR_TO_UTF8(*name), &bAchieved) : false;
}

bool UGameServerStats::SetUserStatInt(FSteamID steamIDUser, FString name, int32 data)
{
	return SteamGameServerStats() ? SteamGameServerStats()->SetUserStat(steamIDUser, TCHAR_TO_UTF8(*name), data) : false;
}

bool UGameServerStats::SetUserStatFloat(FSteamID steamIDUser, FString name, float data)
{
	return SteamGameServerStats() ? SteamGameServerStats()->SetUserStat(steamIDUser, TCHAR_TO_UTF8(*name), data) : false;
}

bool UGameServerStats::UpdateUserAvgRateStat(FSteamID steamIDUser, FString name, float CountThisSession, float SessionLength)
{
	return SteamGameServerStats() ? SteamGameServerStats()->UpdateUserAvgRateStat(steamIDUser, TCHAR_TO_UTF8(*name), CountThisSession, SessionLength) : false;
}

bool UGameServerStats::SetUserAchievement(FSteamID steamIDUser, FString name)
{
	return SteamGameServerStats() ? SteamGameServerStats()->SetUserAchievement(steamIDUser, TCHAR_TO_UTF8(*name)) : false;
}

bool UGameServerStats::ClearUserAchievement(FSteamID steamIDUser, FString name)
{
	return SteamGameServerStats() ? SteamGameServerStats()->ClearUserAchievement(steamIDUser, TCHAR_TO_UTF8(*name)) : false;
}

void UGameServerStats::ServerRequestUserStats(const FOnServerRequestUserStats& callback, FSteamID steamIDUser)
{
	if (SteamGameServerStats())
	{
		FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS* m_Task = new FOnlineAsyncTaskSteamCoreGameServerStatsUserStatsGS(this, callback, steamIDUser);
		QueueAsyncTask(m_Task);
	}
}

void UGameServerStats::ServerStoreUserStats(const FOnServerStoreUserStats& callback, FSteamID steamIDUser)
{
	if (SteamGameServerStats())
	{
		FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats* m_Task = new FOnlineAsyncTaskSteamCoreGameServerStatsStoreUserStats(this, callback, steamIDUser);
		QueueAsyncTask(m_Task);
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UGameServerStats::OnGSStatsUnloaded( GSStatsUnloaded_t *pParam )
{
	FGSStatsUnloaded m_Data = *pParam;
	
	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				GSStatsUnloaded.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		GSStatsUnloaded.Broadcast(m_Data);
	}
}