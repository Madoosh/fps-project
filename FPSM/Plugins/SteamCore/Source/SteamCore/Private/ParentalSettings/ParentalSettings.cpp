/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamParentalSettings
*/

#include "ParentalSettings/ParentalSettings.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UParentalSettings::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UParentalSettings::Deinitialize()
{
	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool UParentalSettings::BIsParentalLockEnabled()
{
	return SteamParentalSettings() ? SteamParentalSettings()->BIsParentalLockEnabled() : false;
}

bool UParentalSettings::BIsParentalLockLocked()
{
	return SteamParentalSettings() ? SteamParentalSettings()->BIsParentalLockLocked() : false;
}

bool UParentalSettings::BIsAppBlocked(int32 appID)
{
	return SteamParentalSettings() ? SteamParentalSettings()->BIsAppBlocked(appID) : false;
}

bool UParentalSettings::BIsAppInBlockList(int32 appID)
{
	return SteamParentalSettings() ? SteamParentalSettings()->BIsAppInBlockList(appID) : false;
}

bool UParentalSettings::BIsFeatureBlocked(ESteamParentalFeature feature)
{
	return SteamParentalSettings() ? SteamParentalSettings()->BIsFeatureBlocked(static_cast<EParentalFeature>(feature)) : false;
}

bool UParentalSettings::BIsFeatureInBlockList(ESteamParentalFeature feature)
{
	return SteamParentalSettings() ? SteamParentalSettings()->BIsFeatureInBlockList(static_cast<EParentalFeature>(feature)) : false;
}