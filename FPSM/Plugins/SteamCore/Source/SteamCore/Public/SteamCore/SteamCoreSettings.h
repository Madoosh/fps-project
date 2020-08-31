/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official SteamCore Documentation: https://eeldev.com
*/

#pragma once

UENUM(BlueprintType, meta = (Bitflags))
enum class ESubsystem : uint8
{
	SteamCore = 0,
	AppList,
	Apps, 
	Friends, 
	GameServer, 
	GameServerStats, 
	Inventory,
	Input,
	Matchmaking, 
	MatchmakingServers, 
	Music, 
	Networking,
	NetworkingUtils,
	ParentalSettings, 
	RemoteStorage, 
	RemotePlay,
	Screenshots, 
	UGC, 
	User, 
	UserStats, 
	Utils, 
	Video
};

ENUM_CLASS_FLAGS(ESubsystem)

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "SteamCoreSettings.generated.h"

UCLASS(config=Engine, defaultconfig, meta = (DisplayName = "SteamCore Plugin"))
class STEAMCORE_API USteamCoreSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	USteamCoreSettings();
public:
	/**
	* Should we force delegate exeuctions on the game thread?
	* This is required if we are binding delegates in UMG widgets since they
	* have to be called on game thread or slate thread.
	*/
	UPROPERTY(config, EditAnywhere, Category = "Settings")
		bool bForceGameThreadExecution;

	/*
	* Disabled subsystems wont be created, SteamCore subsystem cannot be disabled
	*/
	UPROPERTY(config, EditAnywhere, Category = "Settings", meta = (Bitmask, BitmaskEnum = "ESubsystem"))
		int32 DisabledSubsystems;

	/**
	* Enable / Disable debugging for the plugin
	*/
	UPROPERTY(config, EditAnywhere, Category = "Settings")
		bool bDebugging;

	/*
	* If an async task takes longer than this (in seconds) it will be cancelled
	*/
	UPROPERTY(config, EditAnywhere, Category = "Settings", meta = (UIMin = "5.0", UIMax = "60.0"))
		float AsyncTaskTimeout;

	/**
	* Enable steam subsystem	
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
		bool bEnabled;
	
	/**
	* Should the game force a relaunch in Steam if the client isn't already loaded
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
		bool bRelaunchInSteam;
	
	/**
	* Enable Steam VAC
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
		bool bVACEnabled;

	/**
	* Should Steam P2P sockets all fall back to Steam servers relay if a direct connection fails
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
		bool bAllowP2PPacketRelay;

	/**
	* Timeout (in seconds) period for any P2P session
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
		int P2PConnectionTimeout;

	/**
	* AppID of your application
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
		int SteamAppID;

	/**
	* SteamDevAppID of your application
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
		int SteamDevAppID;

	/**
	* Steam Server Port
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
		int Port;

	/**
	* Steam Server Query Port
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
		int GameServerQueryPort;

	/**
	* Current game version
	*/
	UPROPERTY(EditAnywhere, Category = "Steam Settings")
		FString GameVersion;

private:
#if WITH_EDITOR
	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
	virtual FName GetCategoryName() const override;
	void SaveToIni();
#endif
};

FORCEINLINE bool ForceGameThread()
{
	return GetDefault<USteamCoreSettings>()->bForceGameThreadExecution;
}

FORCEINLINE bool SteamCoreDebugging()
{
	return GetDefault<USteamCoreSettings>()->bDebugging;
}