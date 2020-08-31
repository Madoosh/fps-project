/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamAppList
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "AppListTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FSteamAppInstalled
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "AppList")
		int32 AppID;
public:
	FSteamAppInstalled() = default;
	FSteamAppInstalled(const SteamAppInstalled_t& data) 
		: AppID(data.m_nAppID)
	{}
};

USTRUCT(BlueprintType)
struct FSteamAppUninstalled
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "AppList")
		int32 AppID;
public:
	FSteamAppUninstalled() = default;
	FSteamAppUninstalled(const SteamAppUninstalled_t& data) 
		: AppID(data.m_nAppID)
	{}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamAppInstalled, const FSteamAppInstalled&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSteamAppUninstalled, const FSteamAppUninstalled&, data);
