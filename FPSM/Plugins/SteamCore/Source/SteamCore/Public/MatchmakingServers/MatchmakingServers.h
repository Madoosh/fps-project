/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmakingServers
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "MatchmakingServersTypes.h"
#include "MatchmakingServers.generated.h"

UCLASS()
class STEAMCORE_API UMatchmakingServers : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UMatchmakingServers() {SubsystemType = ESubsystem::MatchmakingServers;}
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Request a new list of game servers from the 'spectator' server list.
	*
	* @param	appID					The app to request the server list of.
	* @param	bIgnoreNonResponsive	Filter out / ignore non responsive servers
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers")
		void RequestFavoritesServerList(const FOnServersUpdated& serverCallback, int32 appID = 480, int32 maxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* serverFilter = nullptr);

	/**
	* Request a new list of game servers from the 'spectator' server list.
	*
	* @param	appID					The app to request the server list of.
	* @param	bIgnoreNonResponsive	Filter out / ignore non responsive servers
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers")
		void RequestFriendsServerList(const FOnServersUpdated& serverCallback, int32 appID = 480, int32 maxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* serverFilter = nullptr);

	/**
	* Request a new list of game servers from the 'spectator' server list.
	*
	* @param	appID					The app to request the server list of.
	* @param	bIgnoreNonResponsive	Filter out / ignore non responsive servers
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers")
		void RequestHistoryServerList(const FOnServersUpdated& serverCallback, int32 appID = 480, int32 maxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* serverFilter = nullptr);

	/**
	* Request a new list of game servers from the 'spectator' server list.
	*
	* @param	appID					The app to request the server list of.
	* @param	bIgnoreNonResponsive	Filter out / ignore non responsive servers
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers")
		void RequestInternetServerList(const FOnServersUpdated& serverCallback, int32 appID = 480, int32 maxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* serverFilter = nullptr);

	/**
	* Request a new list of game servers from the 'spectator' server list.
	*
	* @param	appID					The app to request the server list of.
	* @param	bIgnoreNonResponsive	Filter out / ignore non responsive servers
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers")
		void RequestLANServerList(const FOnServersUpdated& serverCallback, int32 appID = 480, int32 maxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* serverFilter = nullptr);

	/**
	* Request a new list of game servers from the 'spectator' server list.
	*
	* @param	appID					The app to request the server list of.
	* @param	bIgnoreNonResponsive	Filter out / ignore non responsive servers
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers")
		void RequestSpectatorServerList(const FOnServersUpdated& serverCallback, int32 appID = 480, int32 maxResults = 50, bool bIgnoreNonResponsive = false, UServerFilter* serverFilter = nullptr);

	/**
	* Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.
	*
	* @param	ip		The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.
	* @param	port	The port of the game server you are querying, in host order.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers", meta = (AutoCreateRefTerm = "callback"))
		void PingServer(const FOnServerPing& callback, FString ip, int32 queryPort);

	/**
	* Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)
	*
	* @param	ip		The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.
	* @param	port	The port of the game server you are querying, in host order.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|MatchmakingServers", meta = (AutoCreateRefTerm = "callback"))
		void ServerRules(const FOnServerRules& callback, FString ip, int32 queryPort);

private:
	void RequestServerList(const FOnServersUpdated& serverCallback, int32 appID, ESteamServerListRequestType type, int32 maxResults, bool bIgnoreNonResponsive, UServerFilter* serverFilter);

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
};
