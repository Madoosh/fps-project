/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#pragma once

#include "UserTypes.h"
#include "SteamCore/SteamCoreAsync.h"
#include "UserAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestEncryptedAppTicketDelegate, const FEncryptedAppTicketResponse&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRequestStoreAuthURLDelegate, const FStoreAuthURLResponse&, data);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserAsyncActionRequestEncryptedAppTicket
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUserAsyncActionRequestEncryptedAppTicket : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FRequestEncryptedAppTicketDelegate OnSuccess;
public:
	/**
	* Requests an application ticket encrypted with the secret "encrypted app ticket key".
	*
	* The encryption key can be obtained from the Encrypted App Ticket Key page on the App Admin for your app.
	* There can only be one EncryptedAppTicketResponse_t pending, and this call is subject to a 60 second rate limit.
	* After receiving the response you should call GetEncryptedAppTicket to get the ticket data, and then you need to send it to a secure server to be decrypted with the SteamEncryptedAppTicket functions.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Request Encrypted App Ticket"), Category = "SteamCore|User|Async")
		static USteamCoreUserAsyncActionRequestEncryptedAppTicket* RequestEncryptedAppTicketAsync(UObject* WorldContextObject, TArray<uint8> dataToInclude);
private:
	UFUNCTION()
		void HandleCallback(const FEncryptedAppTicketResponse& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserAsyncActionRequestStoreAuthURL
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreUserAsyncActionRequestStoreAuthURL : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FRequestStoreAuthURLDelegate OnSuccess;
public:
	/**
	* Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.
	*
	* As long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.
	* NOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.
	* NOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Request Store Auth URL"), Category = "SteamCore|User|Async")
		static USteamCoreUserAsyncActionRequestStoreAuthURL* RequestStoreAuthURLAsync(UObject* WorldContextObject, FString RedirectURL);
private:
	UFUNCTION()
		void HandleCallback(const FStoreAuthURLResponse& data, bool bWasSuccessful);
};