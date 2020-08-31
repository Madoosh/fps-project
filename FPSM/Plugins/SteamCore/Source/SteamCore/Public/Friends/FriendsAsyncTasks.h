/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamFriends
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "FriendsTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsSetPersonaName
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreFriendsSetPersonaName : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSetPersonaName OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsSetPersonaName(class USteamCoreSubsystem* subsystem, FOnSetPersonaName callback, FString name)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, Name(name)
	{}
	FOnlineAsyncTaskSteamCoreFriendsSetPersonaName(class USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FString name)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, Name(name)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreFriendsSetPersonaName() = delete;
protected:
	SetPersonaNameResponse_t CallbackResults;
	FString Name;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsSetPersonaName bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDownloadClanActivityCounts OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts(class USteamCoreSubsystem* subsystem, FOnDownloadClanActivityCounts callback, TArray<FSteamID> steamIDClans)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, SteamIDClans(steamIDClans)
	{}
	FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts(class USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, TArray<FSteamID> steamIDClans)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, SteamIDClans(steamIDClans)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts() = delete;
protected:
	DownloadClanActivityCountsResult_t CallbackResults;
	TArray<FSteamID> SteamIDClans;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRequestClanOfficerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreRequestClanOfficerList : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestClanOfficerList OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRequestClanOfficerList(class USteamCoreSubsystem* subsystem, FOnRequestClanOfficerList callback, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, SteamID(steamID)
	{}
	FOnlineAsyncTaskSteamCoreRequestClanOfficerList(class USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, SteamID(steamID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreRequestClanOfficerList() = delete;
protected:
	ClanOfficerListResponse_t CallbackResults;
	FSteamID SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRequestClanOfficerList bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom : public FOnlineAsyncTaskSteamCore
{
public:
	FOnJoinClanChatRoom OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom(class USteamCoreSubsystem* subsystem, FOnJoinClanChatRoom callback, FSteamID steamIDClan)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, SteamIDClan(steamIDClan)
	{}
	FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom(class USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamID steamIDClan)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, SteamIDClan(steamIDClan)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom() = delete;
protected:
	JoinClanChatRoomCompletionResult_t CallbackResults;
	FSteamID SteamIDClan;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList : public FOnlineAsyncTaskSteamCore
{
public:
	FOnEnumerateFollowingList OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList(class USteamCoreSubsystem* subsystem, FOnEnumerateFollowingList callback, int32 startIndex)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, StartIndex(startIndex)
	{}
	FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList(class USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, int32 startIndex)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, StartIndex(startIndex)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList() = delete;
protected:
	FriendsEnumerateFollowingList_t CallbackResults;
	int32 StartIndex;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsIsFollowing
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreFriendsIsFollowing : public FOnlineAsyncTaskSteamCore
{
public:
	FOnIsFollowing OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsIsFollowing(class USteamCoreSubsystem* subsystem, FOnIsFollowing callback, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, SteamID(steamID)
	{}
	FOnlineAsyncTaskSteamCoreFriendsIsFollowing(class USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, SteamID(steamID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreFriendsIsFollowing() = delete;
protected:
	FriendsIsFollowing_t CallbackResults;
	FSteamID SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsIsFollowing bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount : public FOnlineAsyncTaskSteamCore
{
public:
	FOnGetFollowerCount OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount(class USteamCoreSubsystem* subsystem, FOnGetFollowerCount callback, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, SteamID(steamID)
	{}
	FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FSteamID steamID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, SteamID(steamID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount() = delete;
protected:
	FriendsGetFollowerCount_t CallbackResults;
	FSteamID SteamID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount bWasSuccessful: %d"), WasSuccessful()); }
};