/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemoteStorage
*/

#include "RemoteStorage/RemoteStorage.h"
#include "RemoteStorage/RemoteStorageAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void URemoteStorage::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnRemoteStorageUnsubscribePublishedFileResultCallback.Register(this, &URemoteStorage::OnRemoteStorageUnsubscribePublishedFileResult);
	OnRemoteStorageSubscribePublishedFileResultCallback.Register(this, &URemoteStorage::OnRemoteStorageSubscribePublishedFileResult);

	if (IsRunningDedicatedServer())
	{
		OnRemoteStorageSubscribePublishedFileResultCallback.SetGameserverFlag();
		OnRemoteStorageUnsubscribePublishedFileResultCallback.SetGameserverFlag();
	}
}

void URemoteStorage::Deinitialize()
{
	OnRemoteStorageUnsubscribePublishedFileResultCallback.Unregister();
	OnRemoteStorageSubscribePublishedFileResultCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

bool URemoteStorage::FileDelete(FString file)
{
	return SteamRemoteStorage() ? SteamRemoteStorage()->FileDelete(TCHAR_TO_UTF8(*file)) : false;
}

bool URemoteStorage::FileExists(FString file)
{
	return SteamRemoteStorage() ? SteamRemoteStorage()->FileExists(TCHAR_TO_UTF8(*file)) : false;
}

bool URemoteStorage::FileForget(FString file)
{
	return SteamRemoteStorage() ? SteamRemoteStorage()->FileForget(TCHAR_TO_UTF8(*file)) : false;
}

bool URemoteStorage::FilePersisted(FString file)
{
	return SteamRemoteStorage() ? SteamRemoteStorage()->FilePersisted(TCHAR_TO_UTF8(*file)) : false;
}

int32 URemoteStorage::FileRead(FString file, TArray<uint8>& buffer, int32 dataToRead)
{
	int32 m_Result = 0;

	if (SteamRemoteStorage())
	{
		uint8* m_Data = new uint8[dataToRead];

		m_Result = SteamRemoteStorage()->FileRead(TCHAR_TO_UTF8(*file), m_Data, dataToRead);
		
		for (int32 i = 0; i < dataToRead; i++)
			buffer.Add(m_Data[i]);

		delete[] m_Data;
	}

	return m_Result;
}

void URemoteStorage::FileReadAsync(const FOnFileReadAsync& callback, FString file, int32 offset, int32 bytesToRead)
{
	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync* m_Task = new FOnlineAsyncTaskSteamCoreRemoteStorageFileReadAsync(this, callback, file, offset, bytesToRead);
		QueueAsyncTask(m_Task);
	}
}

bool URemoteStorage::FileReadAsyncComplete(FRemoteStorageFileReadAsyncComplete readCall, TArray<uint8>& buffer, int32 bytesToRead)
{
	bool bResult = false;

	if (SteamRemoteStorage())
	{
		uint8* m_Array = new uint8[bytesToRead];

		bResult = SteamRemoteStorage()->FileReadAsyncComplete(readCall.m_hFileReadAsync, m_Array, bytesToRead);

		for (int32 i = 0; i < bytesToRead; i++)
			buffer.Add(m_Array[i]);

		delete[] m_Array;
	}

	return bResult;
}

void URemoteStorage::FileShare(const FOnFileShareAsync& callback, FString file)
{
	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageFileShare* m_Task = new FOnlineAsyncTaskSteamCoreRemoteStorageFileShare(this, callback, file);
		QueueAsyncTask(m_Task);
	}
}

bool URemoteStorage::FileWrite(FString file, TArray<uint8> data)
{
	bool bResult = false;

	if (SteamRemoteStorage()) 
	{
		const int32 m_Size = data.Num();
		uint8* m_Data = new uint8[m_Size];

		for (int32 i = 0; i < m_Size; i++)
			m_Data[i] = data[i];

		bResult = SteamRemoteStorage()->FileWrite(TCHAR_TO_UTF8(*file), m_Data, m_Size);
	}

	return bResult;
}

void URemoteStorage::FileWriteAsync(const FOnFileWriteAsync& callback, FString file, TArray<uint8> data)
{
	if (SteamRemoteStorage())
	{
		FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync* m_Task = new FOnlineAsyncTaskSteamCoreRemoteStorageFileWriteAsync(this, callback, file, data);
		QueueAsyncTask(m_Task);
	}
}

bool URemoteStorage::FileWriteStreamCancel(FUGCFileWriteStreamHandle handle)
{
	return SteamRemoteStorage() ? SteamRemoteStorage()->FileWriteStreamCancel(handle) : false;
}

bool URemoteStorage::FileWriteStreamClose(FUGCFileWriteStreamHandle handle)
{
	return SteamRemoteStorage() ? SteamRemoteStorage()->FileWriteStreamClose(handle) : false;
}

FUGCFileWriteStreamHandle URemoteStorage::FileWriteStreamOpen(FString file)
{
	return SteamRemoteStorage() ? FUGCFileWriteStreamHandle(SteamRemoteStorage()->FileWriteStreamOpen(TCHAR_TO_UTF8(*file))) : FUGCFileWriteStreamHandle();
}

bool URemoteStorage::FileWriteStreamWriteChunk(FUGCFileWriteStreamHandle handle, TArray<uint8> data)
{
	bool bResult = false;

	if (SteamRemoteStorage())
	{
		const int32 m_Size = data.Num();
		uint8* m_Data = new uint8[m_Size];

		for (int32 i = 0; i < m_Size; i++)
			m_Data[i] = data[i];

		bResult = SteamRemoteStorage()->FileWriteStreamWriteChunk(handle, m_Data, m_Size);
		delete[] m_Data;
	}

	return bResult;
}

int32 URemoteStorage::GetCachedUGCCount()
{
	return SteamRemoteStorage() ? SteamRemoteStorage()->GetCachedUGCCount() : 0;
}

FSteamUGCHandle URemoteStorage::GetCachedUGCHandle(int32 iCachedContent)
{
	return SteamRemoteStorage() ? FSteamUGCHandle(SteamRemoteStorage()->GetCachedUGCHandle(iCachedContent)) : FSteamUGCHandle();
}

int32 URemoteStorage::GetFileCount()
{
	return SteamRemoteStorage() ? SteamRemoteStorage()->GetFileCount() : 0;
}

FString URemoteStorage::GetFileNameAndSize(int32 file, int32& fileSizeInBytes)
{
	return SteamRemoteStorage() ? UTF8_TO_TCHAR(SteamRemoteStorage()->GetFileNameAndSize(file, &fileSizeInBytes)) : FString("");
}

int32 URemoteStorage::GetFileSize(FString file)
{
	return SteamRemoteStorage() ? SteamRemoteStorage()->GetFileSize(TCHAR_TO_UTF8(*file)) : 0;
}

int32 URemoteStorage::GetFileTimestamp(FString file)
{
	return SteamRemoteStorage() ? SteamRemoteStorage()->GetFileTimestamp(TCHAR_TO_UTF8(*file)) : 0;
}

bool URemoteStorage::GetQuota(int32& totalBytes, int32& availableBytes)
{
	return SteamRemoteStorage() ? SteamRemoteStorage()->GetQuota(reinterpret_cast<uint64*>(&totalBytes), reinterpret_cast<uint64*>(&availableBytes)) : false;
}

ESteamRemoteStoragePlatform URemoteStorage::GetSyncPlatforms(FString file)
{
	return SteamRemoteStorage() ? static_cast<ESteamRemoteStoragePlatform>(SteamRemoteStorage()->GetSyncPlatforms(TCHAR_TO_UTF8(*file))) : ESteamRemoteStoragePlatform::None;
}

bool URemoteStorage::GetUGCDetails(FSteamUGCHandle handle, int32& appID, FString& name, int32& fileSizeInBytes, FSteamID& steamIDOwner)
{
	if (SteamRemoteStorage())
	{
		char** m_Name = nullptr;
		if (SteamRemoteStorage()->GetUGCDetails(handle, reinterpret_cast<uint32*>(&appID), m_Name, &fileSizeInBytes, reinterpret_cast<CSteamID*>(&steamIDOwner)))
		{
			name = UTF8_TO_TCHAR(m_Name);

			return true;
		}
	}

	return false;
}

bool URemoteStorage::GetUGCDownloadProgress(FSteamUGCHandle handle, int32& bytesDownloaded, int32& bytesExpected)
{
	if (SteamRemoteStorage())
	{
		return SteamRemoteStorage()->GetUGCDownloadProgress(handle, &bytesDownloaded, &bytesExpected);
	}

	return false;
}

bool URemoteStorage::IsCloudEnabledForAccount()
{
	return SteamRemoteStorage() ? SteamRemoteStorage()->IsCloudEnabledForAccount() : false;
}

bool URemoteStorage::IsCloudEnabledForApp()
{
	return SteamRemoteStorage() ? SteamRemoteStorage()->IsCloudEnabledForApp() : false;
}

void URemoteStorage::SetCloudEnabledForApp(bool bEnabled)
{
	if (SteamRemoteStorage())
		SteamRemoteStorage()->SetCloudEnabledForApp(bEnabled);
}

bool URemoteStorage::SetSyncPlatforms(FString file, ESteamRemoteStoragePlatform RemoteStoragePlatform)
{
	return SteamRemoteStorage() ? SteamRemoteStorage()->SetSyncPlatforms(TCHAR_TO_UTF8(*file), static_cast<ERemoteStoragePlatform>(RemoteStoragePlatform)) : false;
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void URemoteStorage::OnRemoteStorageUnsubscribePublishedFileResult(RemoteStorageUnsubscribePublishedFileResult_t* pParam)
{
	const FRemoteStorageUnsubscribePublishedFileResult m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				RemoteStorageUnsubscribePublishedFileResult.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		RemoteStorageUnsubscribePublishedFileResult.Broadcast(m_Data);
	}
}

void URemoteStorage::OnRemoteStorageSubscribePublishedFileResult(RemoteStorageSubscribePublishedFileResult_t* pParam)
{
	const FRemoteStorageSubscribePublishedFileResult m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				RemoteStorageSubscribePublishedFileResult.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		RemoteStorageSubscribePublishedFileResult.Broadcast(m_Data);
	}
}

void URemoteStorage::OnRemoteStoragePublishedFileUnsubscribed( RemoteStoragePublishedFileUnsubscribed_t *pParam )
{
	const FRemoteStoragePublishedFileUnsubscribed m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				RemoteStoragePublishedFileUnsubscribed.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		RemoteStoragePublishedFileUnsubscribed.Broadcast(m_Data);
	}
}

void URemoteStorage::OnRemoteStoragePublishedFileSubscribed( RemoteStoragePublishedFileSubscribed_t *pParam )
{
	const FRemoteStoragePublishedFileSubscribed m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				RemoteStoragePublishedFileSubscribed.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		RemoteStoragePublishedFileSubscribed.Broadcast(m_Data);
	}
}