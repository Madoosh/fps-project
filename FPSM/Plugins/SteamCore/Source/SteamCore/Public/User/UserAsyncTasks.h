/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "UserTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRequestEncryptedAppTicket OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket(class USteamCoreSubsystem* subsystem, FOnRequestEncryptedAppTicket callback, TArray<uint8> dataToInclude)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, DataToInclude(dataToInclude)
	{}
	FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, TArray<uint8> dataToInclude)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, DataToInclude(dataToInclude)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket() = delete;
protected:
	EncryptedAppTicketResponse_t CallbackResults;
	TArray<uint8> DataToInclude;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL : public FOnlineAsyncTaskSteamCore
{
public:
	FOnStoreAuthURLResponse OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL(class USteamCoreSubsystem* subsystem, FOnStoreAuthURLResponse callback, FString redirectURL)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, RedirectURL(redirectURL)
	{}
	FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FString redirectURL)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, RedirectURL(redirectURL)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL() = delete;
protected:
	StoreAuthURLResponse_t CallbackResults;
	FString RedirectURL;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL bWasSuccessful: %d"), WasSuccessful()); }
};