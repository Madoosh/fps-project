/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUserStats
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "UserStatsTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFindLeaderboard OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard(class USteamCoreSubsystem* subsystem, FOnFindLeaderboard callback, FString leaderboardName)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, LeaderboardName(leaderboardName) {}
	FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FString leaderboardName)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, LeaderboardName(leaderboardName) 
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard() = delete;
protected:
	LeaderboardFindResult_t CallbackResults;
	FString LeaderboardName;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsFindLeaderboard bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDownloadLeaderboardEntries OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries(USteamCoreSubsystem* subsystem, FOnDownloadLeaderboardEntries callback, FSteamLeaderboard leaderboard, ESteamLeaderboardDataRequest dataRequest, int32 rangeStart, int32 rangeEnd)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, Leaderboard(leaderboard)
		, DataRequest(dataRequest)
		, RangeStart(rangeStart)
		, RangeEnd(rangeEnd)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamLeaderboard leaderboard, ESteamLeaderboardDataRequest dataRequest, int32 rangeStart, int32 rangeEnd)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, Leaderboard(leaderboard)
		, DataRequest(dataRequest)
		, RangeStart(rangeStart)
		, RangeEnd(rangeEnd)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries() = delete;
protected:
	LeaderboardScoresDownloaded_t CallbackResults;
	FSteamLeaderboard Leaderboard;
	ESteamLeaderboardDataRequest DataRequest;
	int32 RangeStart;
	int32 RangeEnd;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntries bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestGlobalStats OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats(class USteamCoreSubsystem* subsystem, FOnRequestGlobalStats callback, int32 historyDays)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, HistoryDays(historyDays)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, int32 historyDays)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, HistoryDays(historyDays)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats() = delete;
protected:
	GlobalStatsReceived_t CallbackResults;
	int32 HistoryDays;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalStats bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestGlobalAchievementPercentages OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages(class USteamCoreSubsystem* subsystem, FOnRequestGlobalAchievementPercentages callback)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
	{}

	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages() = delete;
protected:
	GlobalAchievementPercentagesReady_t CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsRequestGlobalAchievementPercentages bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers : public FOnlineAsyncTaskSteamCore
{
public:
	FOnGetNumberOfCurrentPlayers OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers(class USteamCoreSubsystem* subsystem, FOnGetNumberOfCurrentPlayers callback)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers() = delete;
protected:
	NumberOfCurrentPlayers_t CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsGetNumberOfCurrentPlayers bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore : public FOnlineAsyncTaskSteamCore
{
public:
	FOnUploadLeaderboardScore OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore(class USteamCoreSubsystem* subsystem, FOnUploadLeaderboardScore callback, FSteamLeaderboard leaderboard, ESteamLeaderboardUploadScoreMethod uploadMethod, int32 score, TArray<int32> scoreDetails)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, Leaderboard(leaderboard)
		, UploadScoreMethod(uploadMethod)
		, Score(score)
		, ScoreDetails(scoreDetails)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamLeaderboard leaderboard, ESteamLeaderboardUploadScoreMethod uploadMethod, int32 score, TArray<int32> scoreDetails)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, Leaderboard(leaderboard)
		, UploadScoreMethod(uploadMethod)
		, Score(score)
		, ScoreDetails(scoreDetails)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore() = delete;
protected:
	LeaderboardScoreUploaded_t CallbackResults;
	FSteamLeaderboard Leaderboard;
	ESteamLeaderboardUploadScoreMethod UploadScoreMethod;
	int32 Score;
	TArray<int32> ScoreDetails;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsUploadLeaderboardScore bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFindOrCreateLeaderboard OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard(USteamCoreSubsystem* subsystem, FOnFindOrCreateLeaderboard callback, FString leaderboardName, ESteamLeaderboardSortMethod sortMethod, ESteamLeaderboardDisplayType displayType)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, LeaderboardName(leaderboardName)
		, SortMethod(sortMethod)
		, DisplayType(displayType)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FString leaderboardName, ESteamLeaderboardSortMethod sortMethod, ESteamLeaderboardDisplayType displayType)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, LeaderboardName(leaderboardName)
		, SortMethod(sortMethod)
		, DisplayType(displayType)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard() = delete;
protected:
	LeaderboardFindResult_t CallbackResults;
	FString LeaderboardName;
	ESteamLeaderboardSortMethod SortMethod = ESteamLeaderboardSortMethod::None;
	ESteamLeaderboardDisplayType DisplayType = ESteamLeaderboardDisplayType::None;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsFindOrCreateLeaderboard bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestUserStats OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats(USteamCoreSubsystem* subsystem, FOnRequestUserStats callback, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, SteamID(steamID)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, SteamID(steamID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats() = delete;
protected:
	UserStatsReceived_t CallbackResults;
	FSteamID SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsRequestUserStats bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDownloadLeaderboardEntriesForUsers OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers(class USteamCoreSubsystem* subsystem, FOnDownloadLeaderboardEntriesForUsers callback, FSteamLeaderboard leaderboard, TArray<FSteamID> users)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, Leaderboard(leaderboard)
		, Users(users)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamLeaderboard leaderboard, TArray<FSteamID> users)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, Leaderboard(leaderboard)
		, Users(users)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers() = delete;
protected:
	LeaderboardScoresDownloaded_t CallbackResults;
	FSteamLeaderboard Leaderboard;
	TArray<FSteamID> Users;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsDownloadLeaderboardEntriesForUsers bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAttachLeaderboardUGC OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC(USteamCoreSubsystem* subsystem, FOnAttachLeaderboardUGC callback, FSteamLeaderboard leaderboard, FSteamUGCHandle handle)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, Leaderboard(leaderboard)
		, UGCHandle(handle)
	{}
	FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamLeaderboard leaderboard, FSteamUGCHandle handle)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, Leaderboard(leaderboard)
		, UGCHandle(handle)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC() = delete;
protected:
	LeaderboardUGCSet_t CallbackResults;
	FSteamLeaderboard Leaderboard;
	FSteamUGCHandle UGCHandle;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserStatsAttachLeaderboardUGC bWasSuccessful: %d"), WasSuccessful()); }
};