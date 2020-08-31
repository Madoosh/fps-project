/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamNetworkingUtils
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "NetworkingUtilsTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
/*
* Define these structs just so we can compile on earlier versions of the SDK
*/
#if STEAM_VERSION<146
struct SteamNetworkPingLocation_t {uint8 m_data[512];};
const int k_cchMaxSteamNetworkingPingLocationString = 1024;
#endif

USTRUCT(BlueprintType)
struct FSteamNetworkPingLocation
{
	GENERATED_BODY()
public:
	FSteamNetworkPingLocation() = default;
	FSteamNetworkPingLocation(const SteamNetworkPingLocation_t& val)
	{
#if STEAM_VERSION > 142
		char* m_Data = new char[k_cchMaxSteamNetworkingPingLocationString];
		SteamNetworkingUtils()->ConvertPingLocationToString(val, m_Data, k_cchMaxSteamNetworkingPingLocationString);
		Location = UTF8_TO_TCHAR(m_Data);
		delete[] m_Data;
#endif
	}
public:
	operator SteamNetworkPingLocation_t() 
	{
		SteamNetworkPingLocation_t m_Data;
#if STEAM_VERSION > 142
		SteamNetworkingUtils()->ParsePingLocationString(TCHAR_TO_UTF8(*Location), m_Data);
#endif
		return m_Data;
	}
	operator SteamNetworkPingLocation_t() const
	{
		SteamNetworkPingLocation_t m_Data;
#if STEAM_VERSION > 142
		SteamNetworkingUtils()->ParsePingLocationString(TCHAR_TO_UTF8(*Location), m_Data);
#endif
		return m_Data;
	}
protected:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "NetworkingUtils")
		FString Location;
};