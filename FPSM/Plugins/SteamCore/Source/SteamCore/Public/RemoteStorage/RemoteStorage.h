/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamRemoteStorage
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "RemoteStorageTypes.h"
#include "RemoteStorage.generated.h"

UCLASS()
class STEAMCORE_API URemoteStorage : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	URemoteStorage() {SubsystemType = ESubsystem::RemoteStorage;}
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UserStats|Delegates")
		FOnRemoteStorageUnsubscribePublishedFileResult RemoteStorageUnsubscribePublishedFileResult;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UserStats|Delegates")
		FOnRemoteStorageSubscribePublishedFileResult RemoteStorageSubscribePublishedFileResult;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UserStats|Delegates")
		FOnRemoteStoragePublishedFileUnsubscribed RemoteStoragePublishedFileUnsubscribed;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UserStats|Delegates")
		FOnRemoteStoragePublishedFileSubscribed RemoteStoragePublishedFileSubscribed;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Deletes a file from the local disk, and propagates that delete to the cloud.
	*
	* This is meant to be used when a user actively deletes a file. Use FileForget if you want to remove a file from the Steam Cloud but retain it on the users local disk.
	* When a file has been deleted it can be re-written with FileWrite to reupload it to the Steam Cloud.
	*
	* @param	file	The name of the file that will be deleted.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool FileDelete(FString file);

	/**
	* Checks whether the specified file exists.
	*
	* @param	file	The name of the file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool FileExists(FString file);

	/**
	* Deletes the file from remote storage, but leaves it on the local disk and remains accessible from the API.
	*
	* When you are out of Cloud space, this can be used to allow calls to FileWrite to keep working without needing to make the user delete files.
	* How you decide which files to forget are up to you. It could be a simple Least Recently Used (LRU) queue or something more complicated.
	* Requiring the user to manage their Cloud-ized files for a game, while is possible to do, it is never recommended. 
	* For instance, "Which file would you like to delete so that you may store this new one?" removes a significant advantage of using the Cloud in the first place: its transparency.
	* Once a file has been deleted or forgotten, calling FileWrite will resynchronize it in the Cloud. Rewriting a forgotten file is the only way to make it persisted again.
	*
	* @param	file	The name of the file that will be forgotten.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool FileForget(FString file);

	/**
	* Checks if a specific file is persisted in the steam cloud.
	*
	* @param	file	The name of the file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool FilePersisted(FString file);

	/**
	* Opens a binary file, reads the contents of the file into a byte array, and then closes the file.
	*
	* NOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block.
	* To avoid "hitching" due to a busy disk on the client machine using FileReadAsync, the asynchronous version of this API is recommended.
	*
	* @param	file			The name of the file to read from.
	* @param	buffer			The buffer that the file will be read into. This buffer must be at least the same size provided to cubDataToRead.
	* @param	dataToRead		The amount of bytes to read. Generally obtained from GetFileSize or GetFileTimestamp.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static int32 FileRead(FString file, TArray<uint8>& buffer, int32 dataToRead);

	/**
	* Starts an asynchronous read from a file.
	*
	* The offset and amount to read should be valid for the size of the file, as indicated by GetFileSize or GetFileTimestamp.
	*
	* Returns k_uAPICallInvalid under the following conditions:
	* You tried to read from invalid path or filename. Because Steam Cloud is cross platform the files need to have valid names on all supported OSes and file systems. See Microsoft's documentation on Naming Files, Paths, and Namespaces.
	* The file doesn't exist.
	* cubDataToRead is <= 0 bytes. You need to be able to read something!
	* The combination of pvData and cubDataToRead would read past the end of the file.
	* You have an async read in progress on this file already.
	*
	* Upon completion of the read request you will receive the call result, if the value of m_eResult within the call result is k_EResultOK you can then call FileReadAsyncComplete to read the requested data into your buffer.
	* The hReadCall parameter should match the return value of this function, and the amount to read should generally be equal to the amount requested as indicated by m_nOffset and m_cubRead.
	*
	* @param	file				The name of the file to read from.
	* @param	offset				The offset in bytes into the file where the read will start from. 0 if you're reading the whole file in one chunk.
	* @param	bytesToRead			The amount of bytes to read starting from nOffset.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage", meta = (AutoCreateRefTerm = "callback"))
		void FileReadAsync(const FOnFileReadAsync& callback, FString file, int32 offset, int32 bytesToRead);

	/**
	* Copies the bytes from a file which was asynchronously read with FileReadAsync into a byte array.
	*
	* This should never be called outside of the context of a RemoteStorageFileReadAsyncComplete_t call result.
	*
	* @param	readCall			The call result handle obtained from RemoteStorageFileReadAsyncComplete_t.
	* @param	buffer				The buffer that the file will be read into.
	* @param	bytesToRead			The number of bytes to copy. This should usually be the m_cubRead value from RemoteStorageFileReadAsyncComplete_t
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool FileReadAsyncComplete(FRemoteStorageFileReadAsyncComplete readCall, TArray<uint8>& buffer, int32 bytesToRead);

	/**
	* Copies the bytes from a file which was asynchronously read with FileReadAsync into a byte array.
	*
	* This should never be called outside of the context of a RemoteStorageFileReadAsyncComplete_t call result.
	*
	* @param	file			The name of the file to share.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage", meta = (AutoCreateRefTerm = "callback"))
		void FileShare(const FOnFileShareAsync& callback, FString file);

	/**
	* Creates a new file, writes the bytes to the file, and then closes the file. If the target file already exists, it is overwritten.
	*
	* NOTE: This is a synchronous call and as such is a will block your calling thread on the disk IO, and will also block the SteamAPI, which can cause other threads in your application to block. 
	* To avoid "hitching" due to a busy disk on the client machine using FileWriteAsync, the asynchronous version of this API is recommended.
	*
	* @param	file		The name of the file to write to.
	* @param	data		The bytes to write to the file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool FileWrite(FString file, TArray<uint8> data);

	/**
	* Creates a new file and asynchronously writes the raw byte data to the Steam Cloud, and then closes the file. If the target file already exists, it is overwritten.
	*
	* @param	file		The name of the file to write to.
	* @param	data		The bytes to write to the file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage", meta = (AutoCreateRefTerm = "callback"))
		void FileWriteAsync(const FOnFileWriteAsync& callback, FString file, TArray<uint8> data);

	/**
	* Cancels a file write stream that was started by FileWriteStreamOpen.
	*
	* This trashes all of the data written and closes the write stream, but if there was an existing file with this name, it remains untouched.
	*
	* @param	handle		The file write stream to cancel.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool FileWriteStreamCancel(FUGCFileWriteStreamHandle handle);

	/**
	* Closes a file write stream that was started by FileWriteStreamOpen.
	*
	* This flushes the stream to the disk, overwriting the existing file if there was one.
	*
	* @param	handle			The file write stream to close.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool FileWriteStreamClose(FUGCFileWriteStreamHandle handle);

	/**
	* Creates a new file output stream allowing you to stream out data to the Steam Cloud file in chunks. If the target file already exists, it is not overwritten until FileWriteStreamClose has been called.
	*
	* To write data out to this stream you can use FileWriteStreamWriteChunk, and then to close or cancel you use FileWriteStreamClose and FileWriteStreamCancel respectively.
	*
	* @param	file	The name of the file to write to.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static FUGCFileWriteStreamHandle FileWriteStreamOpen(FString file);

	/**
	* Writes a blob of data to the file write stream.
	*
	* @param	handle		The file write stream to write to.
	* @param	data		The data to write to the stream.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool FileWriteStreamWriteChunk(FUGCFileWriteStreamHandle handle, TArray<uint8> data);

	/**
	*
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static int32 GetCachedUGCCount();

	/**
	*
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static FSteamUGCHandle GetCachedUGCHandle(int32 iCachedContent);

	/**
	* Gets the total number of local files synchronized by Steam Cloud.
	*
	* Used for enumeration with GetFileNameAndSize.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static int32 GetFileCount();

	/**
	* Gets the file name and size of a file from the index.
	*
	* @param	file				The index of the file, this should be between 0 and GetFileCount.
	* @param	fileSizeInBytes		Returns the file size in bytes.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static FString GetFileNameAndSize(int32 file, int32& fileSizeInBytes);

	/**
	* Gets the specified files size in bytes.
	*
	* @param	file		The name of the file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static int32 GetFileSize(FString file);

	/**
	* Gets the specified file's last modified timestamp in Unix epoch format (seconds since Jan 1st 1970).
	*
	* @param	file		The name of the file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static int32 GetFileTimestamp(FString file);

	/**
	* Gets the number of bytes available, and used on the users Steam Cloud storage.
	*
	* @param	totalBytes
	* @param	availableBytes
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool GetQuota(int32& totalBytes, int32& availableBytes);

	/**
	* Obtains the platforms that the specified file will syncronize to.
	*
	* @param	file	The name of the file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static ESteamRemoteStoragePlatform GetSyncPlatforms(FString file);

	/**
	* Gets metadata for a file after it has been downloaded. 
	*
	* This is the same metadata given in the RemoteStorageDownloadUGCResult_t call result
	*
	* @param	handle	
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool GetUGCDetails(FSteamUGCHandle handle, int32& appID, FString& name, int32& fileSizeInBytes, FSteamID& steamIDOwner);

	/**
	* Gets the amount of data downloaded so far for a piece of content. pnBytesExpected can be 0 if function returns false
	* or if the transfer hasn't started yet, so be careful to check for that before dividing to get a percentage
	*
	* @param	handle	
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool GetUGCDownloadProgress(FSteamUGCHandle handle, int32& bytesDownloaded, int32& bytesExpected);

	/**
	* Checks if the account wide Steam Cloud setting is enabled for this user; or if they disabled it in the Settings->Cloud dialog.
	*
	* Ensure that you are also checking IsCloudEnabledForApp, as these two options are mutually exclusive.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool IsCloudEnabledForAccount();

	/**
	* Checks if the per game Steam Cloud setting is enabled for this user; or if they disabled it in the Game Properties->Update dialog.
	*
	* Ensure that you are also checking IsCloudEnabledForAccount, as these two options are mutually exclusive.
	* It's generally recommended that you allow the user to toggle this setting within your in-game options, you can toggle it with SetCloudEnabledForApp.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool IsCloudEnabledForApp();

	/**
	* Toggles whether the Steam Cloud is enabled for your application.
	*
	* This setting can be queried with IsCloudEnabledForApp.
	*
	* @param	bEnabled	Enable (true) or disable (false) the Steam Cloud for this application?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static void SetCloudEnabledForApp(bool bEnabled);

	/**
	* Allows you to specify which operating systems a file will be synchronized to.
	*
	* Use this if you have a multiplatform game but have data which is incompatible between platforms.
	* Files default to k_ERemoteStoragePlatformAll when they are first created. You can use the bitwise OR operator, "|" to specify multiple platforms.
	*
	* @param	file						The name of the file.
	* @param	remoteStoragePlatform		The platforms that the file will be syncronized to.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|RemoteStorage")
		static bool SetSyncPlatforms(FString file, ESteamRemoteStoragePlatform remoteStoragePlatform);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	
	STEAM_CALLBACK_MANUAL(URemoteStorage, OnRemoteStorageUnsubscribePublishedFileResult, RemoteStorageUnsubscribePublishedFileResult_t, OnRemoteStorageUnsubscribePublishedFileResultCallback);
	STEAM_CALLBACK_MANUAL(URemoteStorage, OnRemoteStorageSubscribePublishedFileResult, RemoteStorageSubscribePublishedFileResult_t, OnRemoteStorageSubscribePublishedFileResultCallback);
	STEAM_CALLBACK_MANUAL(URemoteStorage, OnRemoteStoragePublishedFileUnsubscribed, RemoteStoragePublishedFileUnsubscribed_t, OnRemoteStoragePublishedFileUnsubscribedCallback);
	STEAM_CALLBACK_MANUAL(URemoteStorage, OnRemoteStoragePublishedFileSubscribed, RemoteStoragePublishedFileSubscribed_t, OnRemoteStoragePublishedFileSubscribedCallback);
};
