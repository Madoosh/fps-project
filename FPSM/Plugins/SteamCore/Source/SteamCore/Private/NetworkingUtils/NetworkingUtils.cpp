/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamNetworkingUtils
*/

#include "NetworkingUtils/NetworkingUtils.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UNetworkingUtils::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UNetworkingUtils::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
void UNetworkingUtils::InitRelayNetworkAccess()
{
#if STEAM_VERSION > 142
	if (SteamNetworkingUtils())
		SteamNetworkingUtils()->InitRelayNetworkAccess();
#else
	return;
#endif
}

float UNetworkingUtils::GetLocalPingLocation(FSteamNetworkPingLocation& result)
{
	float m_Value = 0.0f;
#if STEAM_VERSION > 142
	if (SteamNetworkingUtils())
	{
		SteamNetworkPingLocation_t m_Result;
		m_Value = SteamNetworkingUtils()->GetLocalPingLocation(m_Result);
		result = m_Result;
	}
#endif
	return m_Value;
}

int32 UNetworkingUtils::EstimatePingTimeBetweenTwoLocations(const FSteamNetworkPingLocation& location1, const FSteamNetworkPingLocation& location2)
{
#if STEAM_VERSION > 142
	
	return SteamNetworkingUtils() ? SteamNetworkingUtils()->EstimatePingTimeBetweenTwoLocations(location1, location2) : 0;
#else
	return 0;
#endif
}

int32 UNetworkingUtils::EstimatePingTimeFromLocalHost(const FSteamNetworkPingLocation& remoteLocation)
{
#if STEAM_VERSION > 142
	return SteamNetworkingUtils() ? SteamNetworkingUtils()->EstimatePingTimeFromLocalHost(remoteLocation) : 0;
#else
	return 0;
#endif
}

void UNetworkingUtils::ConvertPingLocationToString(const FSteamNetworkPingLocation& location, FString String)
{
#if STEAM_VERSION > 142
	char* m_Data = new char[k_cchMaxSteamNetworkingPingLocationString];
	SteamNetworkingUtils()->ConvertPingLocationToString(location, m_Data, k_cchMaxSteamNetworkingPingLocationString);
	String = UTF8_TO_TCHAR(m_Data);
	delete[] m_Data;
#endif
}

bool UNetworkingUtils::ParsePingLocationString(FString string, FSteamNetworkPingLocation& result)
{
	bool m_Result = false;

#if STEAM_VERSION > 142
	SteamNetworkPingLocation_t m_Data;
	m_Result = SteamNetworkingUtils()->ParsePingLocationString(TCHAR_TO_UTF8(*string), m_Data);
	result = m_Data;
#endif

	return m_Result;
}

bool UNetworkingUtils::CheckPingDataUpToDate(float maxAgeSeconds)
{
	bool m_Result = false;
#if STEAM_VERSION > 142
	m_Result = SteamNetworkingUtils()->CheckPingDataUpToDate(maxAgeSeconds);
#endif
	return m_Result;
}