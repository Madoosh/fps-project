/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUserStats
*/

#include "UserStats/UserStats.h"
#include "UserStats/UserStatsAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UUserStats::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnUserAchievementIconFetchedCallback.Register(this, &UUserStats::OnUserAchievementIconFetched);
	OnUserStatsReceivedCallback.Register(this, &UUserStats::OnUserStatsReceived);
	OnUserStatsStoredCallback.Register(this, &UUserStats::OnUserStatsStored);
	OnUserAchievementStoredCallback.Register(this, &UUserStats::OnUserAchievementStored);
	OnUserStatsUnloadedCallback.Register(this, &UUserStats::OnUserStatsUnloaded);
	OnUserAchievementIconFetchedCallback.Register(this, &UUserStats::OnUserAchievementIconFetched);

	if (IsRunningDedicatedServer())
	{
		OnUserAchievementIconFetchedCallback.SetGameserverFlag();
		OnUserStatsReceivedCallback.SetGameserverFlag();
		OnUserStatsStoredCallback.SetGameserverFlag();
		OnUserAchievementStoredCallback.SetGameserverFlag();
		OnUserStatsUnloadedCallback.SetGameserverFlag();
		OnUserAchievementIconFetchedCallback.SetGameserverFlag();
	}
}

void UUserStats::Deinitialize()
{
	OnUserAchievementIconFetchedCallback.Unregister();
	OnUserStatsReceivedCallback.Unregister();
	OnUserStatsStoredCallback.Unregister();
	OnUserAchievementStoredCallback.Unregister();
	OnUserStatsUnloadedCallback.Unregister();
	OnUserAchievementIconFetchedCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUserStats::AttachLeaderboardUGC(const FOnAttachLeaderboardUGC& callback, FSteamLeaderboard steamLeaderboard, FSteamUGCHandle handle)
{
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC(this, callback, steamLeaderboard, handle);
		QueueAsyncTask(m_Task);
	}
}

bool UUserStats::ClearAchievement(FString name)
{
	return SteamUserStats() ? SteamUserStats()->ClearAchievement(TCHAR_TO_UTF8(*name)) : false;
}

void UUserStats::DownloadLeaderboardEntries(const FOnDownloadLeaderboardEntries& callback, FSteamLeaderboard steamLeaderboard, ESteamLeaderboardDataRequest dataRequest, int32 rangeStart, int32 rangeEnd)
{
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries(this, callback, steamLeaderboard, dataRequest, rangeStart, rangeEnd);
		QueueAsyncTask(m_Task);
	}
}

void UUserStats::DownloadLeaderboardEntriesForUsers(const FOnDownloadLeaderboardEntriesForUsers& callback, FSteamLeaderboard steamLeaderboard, TArray<FSteamID> users)
{
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers(this, callback, steamLeaderboard, users);
		QueueAsyncTask(m_Task);
	}
}

void UUserStats::FindLeaderboard(const FOnFindLeaderboard& callback, FString leaderboardName)
{
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard(this, callback, leaderboardName);
		QueueAsyncTask(m_Task);
	}
}

void UUserStats::FindOrCreateLeaderboard(const FOnFindOrCreateLeaderboard& callback, FString leaderboardName, ESteamLeaderboardSortMethod sortMethod, ESteamLeaderboardDisplayType displayType)
{
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard(this, callback, leaderboardName, sortMethod, displayType);
		QueueAsyncTask(m_Task);
	}
}

bool UUserStats::GetAchievement(FString name, bool& bAchieved)
{
	return SteamUserStats() ? SteamUserStats()->GetAchievement(TCHAR_TO_UTF8(*name), &bAchieved) : false;
}

bool UUserStats::GetAchievementAchievedPercent(FString name, float& percent)
{
	return SteamUserStats() ? SteamUserStats()->GetAchievementAchievedPercent(TCHAR_TO_UTF8(*name), &percent) : false;
}

bool UUserStats::GetAchievementAndUnlockTime(FString name, bool& bAchieved, int32& unlockTime)
{
	return SteamUserStats() ? SteamUserStats()->GetAchievementAndUnlockTime(TCHAR_TO_UTF8(*name), &bAchieved, reinterpret_cast<uint32*>(&unlockTime)) : false;
}

FString UUserStats::GetAchievementDisplayAttribute(FString name, FString key)
{
	return SteamUserStats() ? UTF8_TO_TCHAR(SteamUserStats()->GetAchievementDisplayAttribute(TCHAR_TO_UTF8(*name), TCHAR_TO_UTF8(*key))) : UTF8_TO_TCHAR("");
}

UTexture2D* UUserStats::GetAchievementIcon(FString name)
{
	if (SteamUserStats())
	{
		uint32 m_Width = 0;
		uint32 m_Height = 0;
		int m_ImageData = SteamUserStats()->GetAchievementIcon(TCHAR_TO_UTF8(*name));
		SteamUtils()->GetImageSize(m_ImageData, &m_Width, &m_Height);

		if (m_Width > 0 && m_Height > 0)
		{
			UTexture2D* m_Texture = UTexture2D::CreateTransient(m_Width, m_Height, PF_R8G8B8A8);

			uint8* m_RGBA = new uint8[m_Width * m_Height * 4];
			SteamUtils()->GetImageRGBA(m_ImageData, (uint8*)m_RGBA, 4 * m_Height * m_Width);

			uint8* MipData = (uint8*)m_Texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
			FMemory::Memcpy(MipData, (void*)m_RGBA, m_Height * m_Width * 4);
			m_Texture->PlatformData->Mips[0].BulkData.Unlock();
			m_Texture->NeverStream = true;
			m_Texture->UpdateResource();
			delete[] m_RGBA;

			return m_Texture;
		}
	}

	return nullptr;
}

bool UUserStats::GetDownloadedLeaderboardEntry(FSteamLeaderboardEntries leaderboardEntries, int32 index, FSteamLeaderboardEntry& leaderboardEntry, TArray<int32> details, TArray<int32>& outDetails)
{
	LeaderboardEntry_t m_Entry;

	bool bResult = false;

	if (SteamUserStats()) 
	{
		outDetails.SetNum(details.Num());

		bResult = SteamUserStats()->GetDownloadedLeaderboardEntry(leaderboardEntries, index, &m_Entry, outDetails.GetData(), outDetails.Num());

		if (bResult) 
		{
			leaderboardEntry = m_Entry;
		}
	}

	return bResult;
}

FString UUserStats::GetAchievementName(int32 achievement)
{
	return SteamUserStats() ? UTF8_TO_TCHAR(SteamUserStats()->GetAchievementName(achievement)) : UTF8_TO_TCHAR("");
}

bool UUserStats::GetGlobalStatInt(FString statName, int32& data)
{
	return SteamUserStats() ? SteamUserStats()->GetGlobalStat(TCHAR_TO_UTF8(*statName), reinterpret_cast<int64*>(&data)) : false;
}

bool UUserStats::GetGlobalStatFloat(FString statName, float& data)
{
	return SteamUserStats() ? SteamUserStats()->GetGlobalStat(TCHAR_TO_UTF8(*statName), reinterpret_cast<double*>(&data)) : false;
}

int32 UUserStats::GetGlobalStatHistoryInt(FString statName, int32 historyDays, TArray<int32>& data)
{
	data.SetNum(historyDays);
	int32 m_Result = 0;

	if (SteamUserStats()) 
	{
		m_Result = SteamUserStats()->GetGlobalStatHistory(TCHAR_TO_UTF8(*statName), reinterpret_cast<int64*>(data.GetData()), historyDays);
	}

	return m_Result;
}

int32 UUserStats::GetGlobalStatHistoryFloat(FString statName, int32 historyDays, TArray<float>& data)
{
	int32 m_Result = 0;
	data.SetNum(historyDays);

	if (SteamUserStats()) 
	{
		m_Result = SteamUserStats()->GetGlobalStatHistory(TCHAR_TO_UTF8(*statName), reinterpret_cast<double*>(data.GetData()), data.Num());
	}

	return m_Result;
}

ESteamLeaderboardDisplayType UUserStats::GetLeaderboardDisplayType(FSteamLeaderboard steamLeaderboard)
{
	return SteamUserStats() ? (ESteamLeaderboardDisplayType)SteamUserStats()->GetLeaderboardDisplayType(steamLeaderboard) : ESteamLeaderboardDisplayType::None;
}

int32 UUserStats::GetLeaderboardEntryCount(FSteamLeaderboard steamLeaderboard)
{
	return SteamUserStats() ? SteamUserStats()->GetLeaderboardEntryCount(steamLeaderboard) : 0;
}

FString UUserStats::GetLeaderboardName(FSteamLeaderboard steamLeaderboard)
{
	return SteamUserStats() ? UTF8_TO_TCHAR(SteamUserStats()->GetLeaderboardName(steamLeaderboard)) : UTF8_TO_TCHAR("");
}

ESteamLeaderboardSortMethod UUserStats::GetLeaderboardSortMethod(FSteamLeaderboard steamLeaderboard)
{
	return SteamUserStats() ? (ESteamLeaderboardSortMethod)SteamUserStats()->GetLeaderboardSortMethod(steamLeaderboard) : ESteamLeaderboardSortMethod::None;
}

int32 UUserStats::GetMostAchievedAchievementInfo(FString& name, float& percent, bool& bAchieved)
{
	int m_Result = INDEX_NONE;
	
	if (SteamUserStats())
	{
		char m_charArray[512];

		m_Result = SteamUserStats()->GetMostAchievedAchievementInfo(m_charArray, 512, &percent, &bAchieved);

		if (m_Result != INDEX_NONE)
		{
			name = UTF8_TO_TCHAR(m_charArray);
		}
	}
	

	return m_Result;
}

int32 UUserStats::GetNextMostAchievedAchievementInfo(int32 iteratorPrevious, FString& name, float& percent, bool& bAchieved)
{
	int m_Result = INDEX_NONE;

	if (SteamUserStats()) 
	{
		char m_charArray[512];

		m_Result = SteamUserStats()->GetNextMostAchievedAchievementInfo(iteratorPrevious, m_charArray, 512, &percent, &bAchieved);

		if (m_Result != INDEX_NONE)
		{
			name = UTF8_TO_TCHAR(m_charArray);
		}
	}

	return m_Result;
}

int32 UUserStats::GetNumAchievements()
{
	return SteamUserStats() ? SteamUserStats()->GetNumAchievements() : 0;
}

void UUserStats::GetNumberOfCurrentPlayers(const FOnGetNumberOfCurrentPlayers& callback)
{
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers(this, callback);
		QueueAsyncTask(m_Task);
	}
}

bool UUserStats::GetUserStatInteger(FSteamID steamIDUser, FString name, int32& data)
{
	return SteamUserStats() ? SteamUserStats()->GetUserStat(steamIDUser, TCHAR_TO_UTF8(*name), &data) : false;
}

bool UUserStats::GetUserStatFloat(FSteamID steamIDUser, FString name, float& data)
{
	return SteamUserStats() ? SteamUserStats()->GetUserStat(steamIDUser, TCHAR_TO_UTF8(*name), &data) : false;
}

bool UUserStats::GetUserAchievement(FSteamID steamIDUser, FString name, bool& bAchieved)
{
	return SteamUserStats() ? SteamUserStats()->GetUserAchievement(steamIDUser, TCHAR_TO_UTF8(*name), &bAchieved) : false;
}

bool UUserStats::GetUserAchievementAndUnlockTime(FSteamID steamIDUser, FString name, bool& bAchieved, int32& unlockTime)
{
	return SteamUserStats() ? SteamUserStats()->GetUserAchievementAndUnlockTime(steamIDUser, TCHAR_TO_UTF8(*name), &bAchieved, reinterpret_cast<uint32*>(&unlockTime)) : false;
}

bool UUserStats::GetStatInt(FString name, int32& data)
{
	return SteamUserStats() ? SteamUserStats()->GetStat(TCHAR_TO_UTF8(*name), &data) : false;
}

bool UUserStats::GetStatFloat(FString name, float& data)
{
	return SteamUserStats()->GetStat(TCHAR_TO_UTF8(*name), &data);
}

bool UUserStats::IndicateAchievementProgress(FString name, int32 currentProgress, int32 maxProgress)
{
	return SteamUserStats() ? SteamUserStats()->IndicateAchievementProgress(TCHAR_TO_UTF8(*name), currentProgress, maxProgress) : false;
}

bool UUserStats::RequestCurrentStats()
{
	return SteamUserStats() ? SteamUserStats()->RequestCurrentStats() : false;
}

void UUserStats::RequestGlobalAchievementPercentages(const FOnRequestGlobalAchievementPercentages& callback)
{
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages(this, callback);
		QueueAsyncTask(m_Task);
	}
}

void UUserStats::RequestGlobalStats(const FOnRequestGlobalStats& callback, int32 historyDays)
{
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats(this, callback, historyDays);
		QueueAsyncTask(m_Task);
	}
}

void UUserStats::RequestUserStats(const FOnRequestUserStats& callback, FSteamID steamID)
{
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats(this, callback, steamID);
		QueueAsyncTask(m_Task);
	}
}

bool UUserStats::ResetAllStats(bool bAchievementsToo)
{
	return SteamUserStats() ? SteamUserStats()->ResetAllStats(bAchievementsToo) : false;
}

bool UUserStats::SetAchievement(FString name)
{
	return SteamUserStats() ? SteamUserStats()->SetAchievement(TCHAR_TO_UTF8(*name)) : false;
}

bool UUserStats::SetStatInt(FString name, int32 data)
{
	return SteamUserStats() ? SteamUserStats()->SetStat(TCHAR_TO_UTF8(*name), data) : false;
}

bool UUserStats::SetStatFloat(FString name, float data)
{
	return SteamUserStats() ? SteamUserStats()->SetStat(TCHAR_TO_UTF8(*name), data) : false;
}

bool UUserStats::StoreStats()
{
	return SteamUserStats() ? SteamUserStats()->StoreStats() : false;
}

bool UUserStats::UpdateAvgRateStat(FString name, float countThisSession, float sessionLength)
{
	return SteamUserStats() ? SteamUserStats()->UpdateAvgRateStat(TCHAR_TO_UTF8(*name), countThisSession, sessionLength) : false;
}

void UUserStats::UploadLeaderboardScore(const FOnUploadLeaderboardScore& callback, FSteamLeaderboard steamLeaderboard, ESteamLeaderboardUploadScoreMethod uploadScoreMethod, int32 score, TArray<int32> scoreDetails)
{
	if (SteamUserStats())
	{
		FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore* m_Task = new FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore(this, callback, steamLeaderboard, uploadScoreMethod, score, scoreDetails);
		QueueAsyncTask(m_Task);
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UUserStats::OnUserStatsReceived(UserStatsReceived_t* pParam)
{
	const FUserStatsReceived m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UserStatsReceived.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		UserStatsReceived.Broadcast(m_Data);
	}
}

void UUserStats::OnUserStatsStored(UserStatsStored_t* pParam)
{
	const FUserStatsStored m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UserStatsStored.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		UserStatsStored.Broadcast(m_Data);
	}
}

void UUserStats::OnUserAchievementStored(UserAchievementStored_t* pParam)
{
	const FUserAchievementStored m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UserAchievementStored.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		UserAchievementStored.Broadcast(m_Data);
	}
}

void UUserStats::OnUserStatsUnloaded(UserStatsUnloaded_t* pParam)
{
	const FUserStatsUnloaded m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UserStatsUnloaded.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		UserStatsUnloaded.Broadcast(m_Data);
	}
}

void UUserStats::OnUserAchievementIconFetched(UserAchievementIconFetched_t* pParam)
{
	FUserAchievementIconFetched m_Data = *pParam;

	UTexture2D* m_Icon = nullptr;
	uint32 m_Width = 0;
	uint32 m_Height = 0;
	int m_ImageData = m_Data.m_nIconHandle;
	SteamUtils()->GetImageSize(m_ImageData, &m_Width, &m_Height);
	if (m_Width > 0 && m_Height > 0)
	{
		UTexture2D* m_Texture = UTexture2D::CreateTransient(m_Width, m_Height, PF_B8G8R8A8);
		uint8* m_RGBA = new uint8[m_Width * m_Height * 4];
		SteamUtils()->GetImageRGBA(m_ImageData, (uint8*)m_RGBA, 4 * m_Height * m_Width);

		uint8* MipData = (uint8*)m_Texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
		FMemory::Memcpy(MipData, (void*)m_RGBA, m_Height * m_Width * 4);

		m_Texture->PlatformData->Mips[0].BulkData.Unlock();
		m_Texture->NeverStream = true;
		m_Texture->UpdateResource();
		m_Icon = m_Texture;
		m_Data.Icon = m_Icon;
		delete[] m_RGBA;
	}

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				UserAchievementIconFetched.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		UserAchievementIconFetched.Broadcast(m_Data);
	}
}