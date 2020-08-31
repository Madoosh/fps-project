/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
THIRD_PARTY_INCLUDES_START

#include "steam/steam_api.h"
#include "steam/steam_gameserver.h"
#include "steam/isteamnetworkingsockets.h"
#include "steam/steamnetworkingtypes.h"

THIRD_PARTY_INCLUDES_END
#include "OnlineSubsystemTypes.h"

#ifndef STEAMCORE_SUBSYSTEM
#define STEAMCORE_SUBSYSTEM FName(TEXT("STEAMCORE"))
#endif

#define STEAMCOREAPPIDFILENAME TEXT("steam_appid.txt")

namespace FNetworkProtocolTypes
{
	ONLINESUBSYSTEMSTEAMCORE_API extern const FName EOSCore;
}

DECLARE_LOG_CATEGORY_EXTERN(LogSteamCoreSubsystem, Log, All);

typedef TSharedPtr<class FOnlineSubsystemSteamCore, ESPMode::ThreadSafe> FOnlineSubsystemSteamCorePtr;
