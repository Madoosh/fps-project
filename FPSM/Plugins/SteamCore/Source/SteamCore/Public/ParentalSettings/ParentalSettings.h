/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamParentalSettings
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "ParentalSettingsTypes.h"
#include "ParentalSettings.generated.h"

UCLASS()
class STEAMCORE_API UParentalSettings : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UParentalSettings() {SubsystemType = ESubsystem::ParentalSettings;}
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	
	/**
	* Is parental lock enabled
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|ParentalSettings")
		bool BIsParentalLockEnabled();
	
	/**
	* Is parental lock locked
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|ParentalSettings")
		bool BIsParentalLockLocked();

	/**
	* Is app blocked
	*
	* @param	appID
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|ParentalSettings")
		bool BIsAppBlocked(int32 appID);

	/**
	* Is app blocked
	*
	* @param	appID
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|ParentalSettings")
		bool BIsAppInBlockList(int32 appID);

	/**
	* Is feature blocked
	*
	* @param	feature		feature
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|ParentalSettings")
		bool BIsFeatureBlocked(ESteamParentalFeature feature);
	
	/**
	* Is feature blocked
	*
	* @param	feature		feature
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|ParentalSettings")
		bool BIsFeatureInBlockList(ESteamParentalFeature feature);
};
