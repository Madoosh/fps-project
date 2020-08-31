/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "MatchmakingServersTypes.h"

class UServerFilter;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreMatchmakingServersServerList : public FOnlineAsyncTaskSteamCore, public ISteamMatchmakingServerListResponse
{
public:
	FOnServersUpdated OnSteamCallback;
public:
	static HServerListRequest CallbackResults;
public:
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerList(class USteamCoreSubsystem* subsystem, FOnServersUpdated serverUpdateCallback, int32 appID, int32 maxResults, ESteamServerListRequestType requestType, bool ignoreNonResponsive, UServerFilter* serverFilter)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(serverUpdateCallback)
		, AppID(appID)
		, MaxResults(maxResults)
		, RequestType(requestType)
		, bIgnoreNonResponsive(ignoreNonResponsive)
		, ServerFilter(serverFilter)
	{
	}
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerList(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, int32 appID, int32 maxResults, ESteamServerListRequestType requestType, bool ignoreNonResponsive, UServerFilter* serverFilter)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, AppID(appID)
		, MaxResults(maxResults)
		, RequestType(requestType)
		, bIgnoreNonResponsive(ignoreNonResponsive)
		, ServerFilter(serverFilter)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
	~FOnlineAsyncTaskSteamCoreMatchmakingServersServerList()
	{
		if (CallbackResults != NULL)
		{
			SteamMatchmakingServers()->CancelQuery(CallbackResults);
			SteamMatchmakingServers()->ReleaseRequest(CallbackResults);
			CallbackResults = NULL;
		}
		OnSteamCallback.Unbind();
	}
private:
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerList() = delete;
protected:
	TArray<FGameServerItem> Servers;
	int32 AppID;
	int32 MaxResults;
	ESteamServerListRequestType RequestType;
	bool bServerRefreshComplete;
	bool bIgnoreNonResponsive;
	float ElapsedTime;
	TWeakObjectPtr<UServerFilter> ServerFilter;
private:
	virtual void Tick() override;
	virtual void Finalize() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreMatchmakingServersServerList bWasSuccessful: %d"), WasSuccessful());
	}

	virtual void ServerResponded(HServerListRequest request, int iServer) override;
	virtual void ServerFailedToRespond(HServerListRequest request, int iServer) override;
	virtual void RefreshComplete(HServerListRequest request, EMatchMakingServerResponse response) override;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer : public FOnlineAsyncTaskSteamCore, public ISteamMatchmakingPingResponse
{
public:
	FOnServerPing OnSteamCallback;
public:
	static HServerQuery CallbackResults;
public:
	FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer(USteamCoreSubsystem* subsystem, FOnServerPing callback, FString ip, int32 port)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, IP(ip)
		, Port(port)
	{
	}
	FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FString ip, int32 port)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, IP(ip)
		, Port(port)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer() = delete;
protected:
	FString IP;
	int32 Port;
private:
	virtual void Tick() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer bWasSuccessful: %d"), WasSuccessful());
	}

	virtual void ServerResponded(gameserveritem_t& server) override;
	virtual void ServerFailedToRespond() override;
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules : public FOnlineAsyncTaskSteamCore, public ISteamMatchmakingRulesResponse
{
public:
	FOnServerRules OnSteamCallback;
public:
	static HServerQuery CallbackResults;
public:
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules(USteamCoreSubsystem* subsystem, FOnServerRules callback, FString ip, int32 port)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, IP(ip)
		, Port(port)
	{
	}
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FString ip, int32 port)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, IP(ip)
		, Port(port)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules() = delete;
protected:
	FString IP;
	int32 Port;
	TArray<FGameServerRule> Rules;
private:
	virtual void Tick() override;
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules bWasSuccessful: %d"), WasSuccessful());
	}

	virtual void RulesResponded(const char* pchRule, const char* pchValue) override;
	virtual void RulesFailedToRespond() override;
	virtual void RulesRefreshComplete() override;
};