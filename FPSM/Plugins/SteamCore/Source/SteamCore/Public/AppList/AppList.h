/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamAppList
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "AppListTypes.h"
#include "AppList.generated.h"

UCLASS()
class STEAMCORE_API UAppList : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UAppList() {SubsystemType = ESubsystem::AppList;}
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|AppList|Delegates")
		FOnSteamAppInstalled SteamAppInstalled;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|AppList|Delegates")
		FOnSteamAppUninstalled SteamAppUninstalled;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	
	/**
	* Get Number of Installed Apps
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|AppList")
		int32 GetNumInstalledApps();
	
	/**
	* Get Installed Apps
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|AppList")
		int32 GetInstalledApps(TArray<int32>& appIDs, int32 maxAppIDs);

	/**
	* Get App Name
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|AppList")
		int32 GetAppName(int32 appID, FString& name);

	/**
	* Get app install dir
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|AppList")
		int32 GetAppInstallDir(int32 appID, FString& directory);

	/**
	* Return the buildid of this app, may change at any time based on backend updates to the game
	*
	* @param
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|AppList")
		int32 GetAppBuildId(int32 appID);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	STEAM_CALLBACK_MANUAL(UAppList, OnSteamAppInstalled, SteamAppInstalled_t, OnSteamAppInstalledCallback);
	STEAM_CALLBACK_MANUAL(UAppList, OnSteamAppUninstalled, SteamAppUninstalled_t, OnSteamAppUninstalledCallback);
};
