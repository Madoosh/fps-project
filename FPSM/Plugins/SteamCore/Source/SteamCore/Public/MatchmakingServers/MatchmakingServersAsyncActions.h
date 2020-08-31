/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#pragma once

#include "MatchmakingServersTypes.h"
#include "SteamCore/SteamCoreAsync.h"
#include "MatchmakingServersAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPingServerAsyncDelegate, const FGameServerItem&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnServersFinishedAsyncDelegate, const TArray<FGameServerItem>&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnServerRuleAsyncDelegate, const TArray<FGameServerRule>&, data);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionPingServer
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreMatchmakingServersAsyncActionPingServer : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnPingServerAsyncDelegate OnSuccess;
public:
	static class FOnlineAsyncTaskSteamCoreMatchmakingServersPingServer* CurrentTask;
public:
	/**
	* Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.
	*
	* @param	ip		The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.
	* @param	port	The port of the game server you are querying, in host order.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Ping Server"), Category = "SteamCore|MatchmakingServers|Async")
		static USteamCoreMatchmakingServersAsyncActionPingServer* PingServerAsync(UObject* WorldContextObject, FString ip, int32 port);
private:
	UFUNCTION()
		void HandleCallback(const FGameServerItem& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionRequestFavoritesServerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreMatchmakingServersAsyncActionRequestServerList : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnServersFinishedAsyncDelegate OnSuccess;
public:
	static class FOnlineAsyncTaskSteamCoreMatchmakingServersServerList* CurrentTask;
public:
	/**
	* Request a new list of game servers from the 'FAVORITES' server list.
	*
	* @param	appID	The app to request the server list of.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Request Favorites  Server List"), Category = "SteamCore|MatchmakingServers|Async")
		static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFavoritesServerListAsync(UObject* WorldContextObject, int32 appID = 480, int32 maxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* serverFilter = nullptr);

	/**
	* Request a new list of game servers from the 'FRIENDS' server list.
	*
	* @param	appID	The app to request the server list of.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Request Friends Server List"), Category = "SteamCore|MatchmakingServers|Async")
		static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestFriendsServerListAsync(UObject* WorldContextObject, int32 appID = 480, int32 maxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* serverFilter = nullptr);

	/**
	* Request a new list of game servers from the 'HISTORY' server list.
	*
	* @param	appID	The app to request the server list of.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Request History Server List"), Category = "SteamCore|MatchmakingServers|Async")
		static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestHistoryServerListAsync(UObject* WorldContextObject, int32 appID = 480, int32 maxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* serverFilter = nullptr);

	/**
	* Request a new list of game servers from the 'INTERNET' server list.
	*
	* @param	appID	The app to request the server list of.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Request Internet Server List"), Category = "SteamCore|MatchmakingServers|Async")
		static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestInternetServerListAsync(UObject* WorldContextObject, int32 appID = 480, int32 maxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* serverFilter = nullptr);

	/**
	* Request a new list of game servers from the 'LAN' server list.
	*
	* @param	appID	The app to request the server list of.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Request LAN Server List"), Category = "SteamCore|MatchmakingServers|Async")
		static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestLANServerListAsync(UObject* WorldContextObject, int32 appID = 480, int32 maxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* serverFilter = nullptr);

	/**
	* Request a new list of game servers from the 'spectator' server list.
	*
	* @param	appID	The app to request the server list of.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Request Spectator Server List"), Category = "SteamCore|MatchmakingServers|Async")
		static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestSpectatorServerListAsync(UObject* WorldContextObject, int32 appID = 480, int32 maxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* serverFilter = nullptr);

private:
	static USteamCoreMatchmakingServersAsyncActionRequestServerList* RequestServerList(UObject* WorldContextObject, ESteamServerListRequestType requestType, int32 appID = 480, int32 maxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* serverFilter = nullptr);

	UFUNCTION()
		void HandleCallback(const TArray<FGameServerItem>& data, bool bWasSuccessful);
	UFUNCTION()
		void HandleServerListFinished();
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingServersAsyncActionServerRules
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreMatchmakingServersAsyncActionServerRules : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnServerRuleAsyncDelegate OnSuccess;
public:
	static class FOnlineAsyncTaskSteamCoreMatchmakingServersServerRules* CurrentTask;
public:
	/**
	* Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)
	*
	* @param	ip		The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.
	* @param	port	The port of the game server you are querying, in host order.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Server Rules"), Category = "SteamCore|MatchmakingServers|Async")
		static USteamCoreMatchmakingServersAsyncActionServerRules* ServerRulesAsync(UObject* WorldContextObject, FString ip, int32 queryPort);
private:
	UFUNCTION()
		void HandleCallback(const TArray<FGameServerRule>& data, bool bWasSuccessful);
};