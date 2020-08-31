/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/
#pragma once

#include "OnlineSubsystemImpl.h"
#include "OnlinesubsystemSteamCoreTypes.h"

/** Forward declarations of all interface classes */
using FOnlineSessionSteamCorePtr = TSharedPtr<class FOnlineSessionSteamCore, ESPMode::ThreadSafe>;
using FOnlineIdentitySteamCorePtr = TSharedPtr<class FOnlineIdentitySteamCore, ESPMode::ThreadSafe>;

class ONLINESUBSYSTEMSTEAMCORE_API FOnlineSubsystemSteamCore : public FOnlineSubsystemImpl
{
protected:
	/** Only the factory makes instances */
	FOnlineSubsystemSteamCore() = delete;
public:
	FOnlineSubsystemSteamCore(FName InInstanceName);
	virtual ~FOnlineSubsystemSteamCore() {}
public:
	void ReInit();
	virtual bool Tick(float DeltaTime) override;
	virtual FString GetAppId() const override;
	virtual bool Init() override;
	virtual bool Shutdown() override;
	virtual FText GetOnlineServiceName() const override;
	virtual bool IsEnabled() const override;

	/**
	 * @return the steam app id for this app
	 */
	inline uint32 GetSteamAppId() const
	{
		return SteamAppID;
	}

	/**
	 *	@return the port the game has registered for play
	 */
	inline int32 GetGameServerGamePort() const
	{
		return GameServerGamePort;
	}

	/**
	 *	@return the port the game has registered for talking to Steam
	 */
	inline int32 GetGameServerSteamPort() const
	{
		return GameServerSteamPort;
	}

	/**
	 *	@return the port the game has registered for incoming server queries
	 */
	inline int32 GetGameServerQueryPort() const
	{
		return GameServerQueryPort;
	}
public:
	virtual IOnlineAchievementsPtr GetAchievementsInterface() const override;
	virtual IOnlineFriendsPtr GetFriendsInterface() const override;
	virtual IOnlineIdentityPtr GetIdentityInterface() const override;
	virtual IOnlineLeaderboardsPtr GetLeaderboardsInterface() const override { return nullptr; }
	virtual IOnlineMessagePtr GetMessageInterface() const override { return nullptr; }
	virtual IOnlinePresencePtr GetPresenceInterface() const override;
	virtual IOnlineSessionPtr GetSessionInterface() const override;
	virtual IOnlineSharedCloudPtr GetSharedCloudInterface() const override { return nullptr; }
	virtual IOnlineUserCloudPtr GetUserCloudInterface() const override { return nullptr; }
	virtual IOnlineVoicePtr GetVoiceInterface() const override { return nullptr; }
	virtual IOnlineStatsPtr GetStatsInterface() const override { return nullptr; }
	virtual IOnlinePartyPtr GetPartyInterface() const override { return nullptr; }
	virtual IOnlineGroupsPtr GetGroupsInterface() const override { return nullptr; }
	virtual IOnlineExternalUIPtr GetExternalUIInterface() const override { return nullptr; }
	virtual IOnlineTimePtr GetTimeInterface() const override { return nullptr; }
	virtual IOnlineTitleFilePtr GetTitleFileInterface() const override { return nullptr; }
	virtual IOnlineEntitlementsPtr GetEntitlementsInterface() const override { return nullptr; }
	virtual IOnlineStorePtr GetStoreInterface() const override { return nullptr; }
	virtual IOnlineStoreV2Ptr GetStoreV2Interface() const override { return nullptr; }
	virtual IOnlinePurchasePtr GetPurchaseInterface() const override { return nullptr; }
	virtual IOnlineEventsPtr GetEventsInterface() const override { return nullptr; }
	virtual IOnlineSharingPtr GetSharingInterface() const override { return nullptr; }
	virtual IOnlineUserPtr GetUserInterface() const override;
	virtual IOnlineChatPtr GetChatInterface() const override { return nullptr; }
	virtual IOnlineTurnBasedPtr GetTurnBasedInterface() const override { return nullptr; }
	virtual IOnlineTournamentPtr GetTournamentInterface() const override { return nullptr; }
protected:
	FOnlineIdentitySteamCorePtr IdentityInterface;
	FOnlineSessionSteamCorePtr SessionInterface;

	/** Has the STEAM client APIs been initialized */
	bool bSteamworksClientInitialized;

	/** Whether or not the Steam game server API is initialized */
	bool bSteamworksGameServerInitialized;

	/** Steam App ID for the running game */
	uint32 SteamAppID;

	/** Steam port - the local port used to communicate with the steam servers */
	int32 GameServerSteamPort;

	/** Game port - the port that clients will connect to for gameplay */
	int32 GameServerGamePort;

	/** Query port - the port that will manage server browser related duties and info */
	int32 GameServerQueryPort;

	/** Steam Client API Handle */
	TSharedPtr<class FSteamClientInstanceHandler> SteamAPIClientHandle;

	/** Steam Server API Handle */
	TSharedPtr<class FSteamServerInstanceHandler> SteamAPIServerHandle;
private:
	/**
	 *	Initialize the client side APIs for Steam
	 * @return true if the API was initialized successfully, false otherwise
	 */
	bool InitSteamworksClient(bool bRelaunchInSteam, int32 SteamAppId);

	/**
	 *	Initialize the server side APIs for Steam
	 * @return true if the API was initialized successfully, false otherwise
	 */
	bool InitSteamworksServer();
};

typedef TSharedPtr<FOnlineSubsystemSteamCore, ESPMode::ThreadSafe> FOnlineSubsystemSteamCorePtr;
