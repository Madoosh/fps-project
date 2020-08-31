/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemoteStorage
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "RemoteStorageTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UENUM(BlueprintType, meta = (Bitflags))
enum class ESteamRemoteStoragePlatform : uint8
{
	None = 0,
	Windows = (1 << 0),
	OSX = (1 << 1),
	PS3 = (1 << 2),
	Linux = (1 << 3),
	Reserved2 = (1 << 4),
	All = 254
};

ENUM_CLASS_FLAGS(ESteamRemoteStoragePlatform)

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct STEAMCORE_API FUGCFileWriteStreamHandle
{
	GENERATED_BODY()
public:
	FUGCFileWriteStreamHandle()
		: Value(0) {}
	FUGCFileWriteStreamHandle(uint64 value)
		: Value(value)	{}
public:
	uint64 GetValue() const { return Value; }
	operator uint64() const { return Value; }
	operator uint64() { return Value; }
private:
	uint64 Value;
};


USTRUCT(BlueprintType)
struct FRemoteStorageFileWriteAsyncComplete
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
		ESteamResult Result;
public:
	FRemoteStorageFileWriteAsyncComplete() = default;
	FRemoteStorageFileWriteAsyncComplete(const RemoteStorageFileWriteAsyncComplete_t& data)
		: Result(static_cast<ESteamResult>(data.m_eResult))
	{}
};

USTRUCT(BlueprintType)
struct FRemoteStorageFileReadAsyncComplete
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
		ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
		int32 Offset;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
		int32 Read;

	SteamAPICall_t m_hFileReadAsync;
public:
	FRemoteStorageFileReadAsyncComplete() = default;
	FRemoteStorageFileReadAsyncComplete(const RemoteStorageFileReadAsyncComplete_t& data)
		: Result(static_cast<ESteamResult>(data.m_eResult)), Offset(data.m_nOffset), Read(data.m_cubRead), m_hFileReadAsync(data.m_hFileReadAsync)
	{}
};

USTRUCT(BlueprintType)
struct FRemoteStorageFileShareResult
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
		ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
		FSteamUGCHandle File;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
		FString Filename;

public:
	FRemoteStorageFileShareResult() = default;
	FRemoteStorageFileShareResult(const RemoteStorageFileShareResult_t& data)
		: Result(static_cast<ESteamResult>(data.m_eResult)), File(data.m_hFile), Filename(data.m_rgchFilename)
	{}
};


USTRUCT(BlueprintType)
struct FRemoteStorageUnsubscribePublishedFileResult
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
		ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
		FPublishedFileID PublishedFileId;
public:
	FRemoteStorageUnsubscribePublishedFileResult() = default;
	FRemoteStorageUnsubscribePublishedFileResult(const RemoteStorageUnsubscribePublishedFileResult_t& data)
		: Result(static_cast<ESteamResult>(data.m_eResult)), PublishedFileId(data.m_nPublishedFileId)
	{}

};

USTRUCT(BlueprintType)
struct FRemoteStoragePublishedFileUnsubscribed
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
		FPublishedFileID PublishedFileId;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
		int32 AppID;
public:
	FRemoteStoragePublishedFileUnsubscribed() = default;
	FRemoteStoragePublishedFileUnsubscribed(const RemoteStoragePublishedFileUnsubscribed_t& data)
		: PublishedFileId(data.m_nPublishedFileId), AppID(data.m_nAppID)
	{}
};

USTRUCT(BlueprintType)
struct FRemoteStoragePublishedFileSubscribed
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
		FPublishedFileID PublishedFileId;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "RemoteStorage")
		int32 AppID;
public:
	FRemoteStoragePublishedFileSubscribed() = default;
	FRemoteStoragePublishedFileSubscribed(const RemoteStoragePublishedFileSubscribed_t& data)
		: PublishedFileId(data.m_nPublishedFileId), AppID(data.m_nAppID)
	{}
};


// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoteStorageUnsubscribePublishedFileResult, const FRemoteStorageUnsubscribePublishedFileResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoteStorageSubscribePublishedFileResult, const FRemoteStorageSubscribePublishedFileResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoteStoragePublishedFileUnsubscribed, const FRemoteStoragePublishedFileUnsubscribed&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRemoteStoragePublishedFileSubscribed, const FRemoteStoragePublishedFileSubscribed&, data);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFileWriteAsync, const FRemoteStorageFileWriteAsyncComplete&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFileReadAsync, const FRemoteStorageFileReadAsyncComplete&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnFileShareAsync, const FRemoteStorageFileShareResult&, data, bool, bWasSuccessful);