/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServerStats
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "GameServerStatsTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USTRUCT(BlueprintType)
struct FGSStatsReceived
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		FSteamID SteamIDUser;
public:
	FGSStatsReceived() = default;
	FGSStatsReceived(const GSStatsReceived_t& data)
		: Result(static_cast<ESteamResult>(data.m_eResult)), SteamIDUser(data.m_steamIDUser)
	{}
};

USTRUCT(BlueprintType)
struct FGSStatsStored
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		FSteamID SteamIDUser;
public:
	FGSStatsStored() = default;
	FGSStatsStored(const GSStatsStored_t& data)
		: Result(static_cast<ESteamResult>(data.m_eResult)), SteamIDUser(data.m_steamIDUser)
	{}
};

USTRUCT(BlueprintType)
struct FGSStatsUnloaded
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		FSteamID SteamIDUser;

public:
	FGSStatsUnloaded() = default;
	FGSStatsUnloaded(const GSStatsUnloaded_t& data)
		: SteamIDUser(data.m_steamIDUser)
	{}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnServerRequestUserStats, const FGSStatsReceived&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnServerStoreUserStats, const FGSStatsStored&, data, bool, bWasSuccessful);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSStatsUnloaded, const FGSStatsUnloaded&, data);