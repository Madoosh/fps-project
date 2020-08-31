/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official SteamCore Documentation: https://eeldev.com
*/

#include "Runtime/Launch/Resources/Version.h"

#pragma once

THIRD_PARTY_INCLUDES_START
#pragma push_macro("ARRAY_COUNT")
#undef ARRAY_COUNT
#if ENGINE_MINOR_VERSION == 23
#define STEAM_VERSION 142
#include "ThirdParty/Steamworks/Steamv142/sdk/public/steam/steam_api.h"
#include "ThirdParty/Steamworks/Steamv142/sdk/public/steam/steam_gameserver.h"
#include "ThirdParty/Steamworks/Steamv142/sdk/public/steam/steamencryptedappticket.h"
#endif
#if ENGINE_MINOR_VERSION == 24
#define STEAM_VERSION 146
#include "ThirdParty/Steamworks/Steamv146/sdk/public/steam/steam_api.h"
#include "ThirdParty/Steamworks/Steamv146/sdk/public/steam/steam_gameserver.h"
#include "ThirdParty/Steamworks/Steamv146/sdk/public/steam/steamencryptedappticket.h"
#include "ThirdParty/Steamworks/Steamv146/sdk/public/steam/isteamnetworkingutils.h"
#endif
#if ENGINE_MINOR_VERSION == 25
#define STEAM_VERSION 147
#include "ThirdParty/Steamworks/Steamv147/sdk/public/steam/steam_api.h"
#include "ThirdParty/Steamworks/Steamv147/sdk/public/steam/steam_gameserver.h"
#include "ThirdParty/Steamworks/Steamv147/sdk/public/steam/steamencryptedappticket.h"
#include "ThirdParty/Steamworks/Steamv147/sdk/public/steam/isteamnetworkingutils.h"
#endif
#pragma pop_macro("ARRAY_COUNT")
THIRD_PARTY_INCLUDES_END

FORCEINLINE static ISteamUGC* GetUGC()
{
	return IsRunningDedicatedServer() ? SteamGameServerUGC() : SteamUGC();
}

FORCEINLINE static ISteamNetworking* GetNetworking()
{
	return IsRunningDedicatedServer() ? SteamGameServerNetworking() : SteamNetworking();
}

FORCEINLINE static ISteamUtils* GetUtils()
{
	return IsRunningDedicatedServer() ? SteamGameServerUtils() : SteamUtils();
}

FORCEINLINE static ISteamInventory* GetInventory()
{
	return IsRunningDedicatedServer() ? SteamGameServerInventory() : SteamInventory();
}

FORCEINLINE static ISteamApps* GetApps()
{
	return IsRunningDedicatedServer() ? SteamGameServerApps() : SteamApps();
}