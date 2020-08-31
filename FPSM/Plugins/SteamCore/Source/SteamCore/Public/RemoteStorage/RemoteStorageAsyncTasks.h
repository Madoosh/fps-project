/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemoteStorage
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "RemoteStorageTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFileWriteAsync OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync(class USteamCoreSubsystem* subsystem, FOnFileWriteAsync callback, FString file, TArray<uint8> data)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, File(file)
		, Data(data)
	{}
private:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync() = delete;
protected:
	RemoteStorageFileWriteAsyncComplete_t CallbackResults;
	FString File;
	TArray<uint8> Data;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFileReadAsync OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync(class USteamCoreSubsystem* subsystem, FOnFileReadAsync callback, FString file, int32 offset, int32 bytesToRead)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, File(file)
		, Offset(offset)
		, BytesToRead(bytesToRead)
	{}
private:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync() = delete;
protected:
	RemoteStorageFileReadAsyncComplete_t CallbackResults;
	FString File;
	int32 Offset;
	int32 BytesToRead;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreRemoteStorageFileShare
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreRemoteStorageFileShare : public FOnlineAsyncTaskSteamCore
{
public:
	FOnFileShareAsync OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileShare(class USteamCoreSubsystem* subsystem, FOnFileShareAsync callback, FString file)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, File(file)
	{}
private:
	FOnlineAsyncTaskSteamCoreRemoteStorageFileShare() = delete;
protected:
	RemoteStorageFileShareResult_t CallbackResults;
	FString File;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreRemoteStorageFileShare bWasSuccessful: %d"), WasSuccessful()); }
};