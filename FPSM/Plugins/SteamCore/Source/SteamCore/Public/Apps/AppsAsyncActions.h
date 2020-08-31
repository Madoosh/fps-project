/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamApps
*/

#pragma once

#include "AppsTypes.h"
#include "SteamCore/SteamCoreAsync.h"
#include "AppsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFileDetailsResultAsyncDelegate, const FFileDetailsResult&, data);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetFileDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreAppsAsyncActionGetFileDetails : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnFileDetailsResultAsyncDelegate OnSuccess;
public:
	/**
	* Asynchronously retrieves metadata details about a specific file in the depot manifest.
	* Currently provides:
	* The file size in bytes.
	* The file's SHA1 hash.
	* The file's flags.
	*
	* @param	fileName	The absolute path and name to the file.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Get File Details"), Category = "SteamCore|Apps|Async")
		static USteamCoreAppsAsyncActionGetFileDetails* GetFileDetailsAsync(UObject* WorldContextObject, FString fileName);
private:
	UFUNCTION()
		void HandleCallback(const FFileDetailsResult& data, bool bWasSuccessful);
};
