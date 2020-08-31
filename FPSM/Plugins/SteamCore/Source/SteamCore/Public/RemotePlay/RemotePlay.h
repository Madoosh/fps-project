/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemotePlay
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "RemotePlayTypes.h"
#include "RemotePlay.generated.h"

UCLASS()
class STEAMCORE_API URemotePlay : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	URemotePlay() {SubsystemType = ESubsystem::RemotePlay;}
public:
	void Initialize(FSubsystemCollectionBase& Collection) override;
	void Deinitialize() override;
public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|RemotePlay|Delegates")
		FOnSteamRemotePlaySessionConnected SteamRemotePlaySessionConnected;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|RemotePlay|Delegates")
		FOnSteamRemotePlaySessionDisconnected SteamRemotePlaySessionDisconnected;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Get the number of currently connected Steam Remote Play sessions
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemotePlay")
		int32 GetSessionCount();

	/**
	* Get the currently connected Steam Remote Play session ID at the specified index
	*
	* @param	sessionIndex	The index of the specified session
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemotePlay")
		int32 GetSessionID(int32 sessionIndex);
	
	/**
	* Get the SteamID of the connected user
	*
	* @param	sessionID	The session ID to get information about
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemotePlay")
		FSteamID GetSessionSteamID(int32 sessionID);
	
	/**
	* Get the name of the session client device
	*
	* @param	sessionID	The session ID to get information about
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemotePlay")
		FString GetSessionClientName(int32 sessionID);
	
	/**
	* Get the form factor of the session client device
	*
	* @param	sessionID	The session ID to get information about
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemotePlay")
		ESteamCoreDeviceFormFactor GetSessionClientFormFactor(int32 sessionID);
	
	/**
	* Get the resolution, in pixels, of the session client device. This is set to 0x0 if the resolution is not available.
	*
	* @param	sessionID		The session ID to get information about
	* @param	resolutionX		A pointer to a variable to fill with the device resolution width
	* @param	resolutionY		A pointer to a variable to fill with the device resolution height
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemotePlay")
		bool BGetSessionClientResolution(int32 sessionID, int32& resolutionX, int32& resolutionY);

	/**
	* Invite a friend to join the game using Remote Play Together
	*
	* @param	steamIDFriend		The Steam ID of the friend you'd like to invite
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemotePlay")
		bool BSendRemotePlayTogetherInvite(FSteamID steamIDFriend);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

#if STEAM_VERSION > 142
	STEAM_CALLBACK_MANUAL(URemotePlay, OnSteamRemotePlaySessionConnected, SteamRemotePlaySessionConnected_t, OnSteamRemotePlaySessionConnectedCallback);
	STEAM_CALLBACK_MANUAL(URemotePlay, OnSteamRemotePlaySessionDisconnected, SteamRemotePlaySessionDisconnected_t, OnSteamRemotePlaySessionDisconnectedCallback);
#endif
};
