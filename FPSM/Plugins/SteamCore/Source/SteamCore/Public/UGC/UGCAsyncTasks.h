/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#pragma once

#include "SteamCore/SteamCoreAsync.h"
#include "UGCTypes.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCPlaytimeTrackingForAllItems
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems : public FOnlineAsyncTaskSteamCore
{
public:
	FOnStopPlaytimeTrackingForAllItems OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems(class USteamCoreSubsystem* subsystem, FOnStopPlaytimeTrackingForAllItems callback)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
	{}
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems() = delete;
protected:
	StopPlaytimeTrackingResult_t CallbackResults;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking : public FOnlineAsyncTaskSteamCore
{
public:
	FOnStopPlaytimeTracking OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking(class USteamCoreSubsystem* subsystem, FOnStopPlaytimeTracking callback, TArray<FPublishedFileID> fileIDs)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, FileIDs(fileIDs)
	{}
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, TArray<FPublishedFileID> fileIDs)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, FileIDs(fileIDs)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking() = delete;
protected:
	StopPlaytimeTrackingResult_t CallbackResults;
	TArray<FPublishedFileID> FileIDs;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking : public FOnlineAsyncTaskSteamCore
{
public:
	FOnStartPlaytimeTracking OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking(class USteamCoreSubsystem* subsystem, FOnStartPlaytimeTracking callback, TArray<FPublishedFileID> fileIDs)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, FileIDs(fileIDs)
	{
	}
	FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, TArray<FPublishedFileID> fileIDs)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, FileIDs(fileIDs)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking() = delete;
protected:
	StartPlaytimeTrackingResult_t CallbackResults;
	TArray<FPublishedFileID> FileIDs;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnUnsubscribeItem OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem(class USteamCoreSubsystem* subsystem, FOnUnsubscribeItem callback, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, FileID(fileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, FileID(publishedFileID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem() = delete;
protected:
	RemoteStorageSubscribePublishedFileResult_t CallbackResults;
	FPublishedFileID FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCSubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCSubscribeItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSubscribeItem OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCSubscribeItem(class USteamCoreSubsystem* subsystem, FOnSubscribeItem callback, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, FileID(fileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCSubscribeItem(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, FileID(publishedFileID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCSubscribeItem() = delete;
protected:
	RemoteStorageSubscribePublishedFileResult_t CallbackResults;
	FPublishedFileID FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCSubscribeItem bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRemoveItemFromFavorites OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites(class USteamCoreSubsystem* subsystem, FOnRemoveItemFromFavorites callback, int32 appID, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, AppID(appID)
		, FileID(fileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, int32 appID, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, AppID(appID)
		, FileID(fileID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites() = delete;
protected:
	UserFavoriteItemsListChanged_t CallbackResults;
	int32 AppID;
	FPublishedFileID FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAddItemToFavorites OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites(class USteamCoreSubsystem* subsystem, FOnAddItemToFavorites callback, int32 appID, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, AppID(appID)
		, FileID(fileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, int32 appID, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, AppID(appID)
		, FileID(fileID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites() = delete;
protected:
	UserFavoriteItemsListChanged_t CallbackResults;
	int32 AppID;
	FPublishedFileID FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCGetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCGetUserItemVote : public FOnlineAsyncTaskSteamCore
{
public:
	FOnGetUserItemVote OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCGetUserItemVote(class USteamCoreSubsystem* subsystem, FOnGetUserItemVote callback, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, FileID(fileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCGetUserItemVote(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, FileID(fileID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCGetUserItemVote() = delete;
protected:
	GetUserItemVoteResult_t CallbackResults;
 	FPublishedFileID FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCGetUserItemVote bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCSetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCSetUserItemVote : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSetUserItemVote OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCSetUserItemVote(class USteamCoreSubsystem* subsystem, FOnSetUserItemVote callback, bool voteUp, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, bVoteUp(voteUp)
		, FileID(fileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCSetUserItemVote(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, bool voteUp, FPublishedFileID fileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, bVoteUp(voteUp)
		, FileID(fileID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCSetUserItemVote() = delete;
protected:
	SetUserItemVoteResult_t CallbackResults;
	bool bVoteUp;
 	FPublishedFileID FileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCSetUserItemVote bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSubmitItemUpdate OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate(class USteamCoreSubsystem* subsystem, FOnSubmitItemUpdate callback, FUGCUpdateHandle handle, FString changeNote)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, UGCUpdateHandle(handle)
		, ChangeNote(changeNote)
	{}
	FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FUGCUpdateHandle handle, FString changeNote)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, UGCUpdateHandle(handle)
		, ChangeNote(changeNote)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate() = delete;
protected:
	SubmitItemUpdateResult_t CallbackResults;
	FUGCUpdateHandle UGCUpdateHandle;
	FString ChangeNote;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCCreateItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCCreateItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnCreateItem OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCCreateItem(class USteamCoreSubsystem* subsystem, FOnCreateItem callback, int32 appID, ESteamWorkshopFileType fileType)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, ConsumerAppID(appID)
		, FileType(fileType)
	{}
	FOnlineAsyncTaskSteamCoreUGCCreateItem(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, int32 appID, ESteamWorkshopFileType fileType)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, ConsumerAppID(appID)
		, FileType(fileType)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCCreateItem() = delete;
protected:
	CreateItemResult_t CallbackResults;
	int32 ConsumerAppID;
	ESteamWorkshopFileType FileType;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCCreateItem bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest : public FOnlineAsyncTaskSteamCore
{
public:
	FOnSendQueryUGCRequest OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest(class USteamCoreSubsystem* subsystem, FOnSendQueryUGCRequest callback, FUGCQueryHandle handle)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, UGCQueryHandle(handle)
	{}
	FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FUGCQueryHandle handle)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, UGCQueryHandle(handle)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest() = delete;
protected:
	SteamUGCQueryCompleted_t CallbackResults;
	FUGCQueryHandle UGCQueryHandle;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCAddAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCAddAppDependency : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAddAppDependencyResult OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCAddAppDependency(class USteamCoreSubsystem* subsystem, FOnAddAppDependencyResult callback, FPublishedFileID publishedFileID, int32 appID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, PublishedFileID(publishedFileID)
		, AppID(appID)
	{}
	FOnlineAsyncTaskSteamCoreUGCAddAppDependency(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileID, int32 appID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, PublishedFileID(publishedFileID)
		, AppID(appID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCAddAppDependency() = delete;
protected:
	AddAppDependencyResult_t CallbackResults;
	FPublishedFileID PublishedFileID;
	int32 AppID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCAddAppDependency bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRemoveAppDependencyResult OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency(class USteamCoreSubsystem* subsystem, FOnRemoveAppDependencyResult callback, FPublishedFileID publishedFileID, int32 appID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, PublishedFileID(publishedFileID)
		, AppID(appID)
	{}
	FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileID, int32 appID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, PublishedFileID(publishedFileID)
		, AppID(appID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency() = delete;
protected:
	RemoveAppDependencyResult_t CallbackResults;
	FPublishedFileID PublishedFileID;
	int32 AppID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCAddUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCAddUGCDependency : public FOnlineAsyncTaskSteamCore
{
public:
	FOnAddUGCDependencyResult OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCAddUGCDependency(class USteamCoreSubsystem* subsystem, FOnAddUGCDependencyResult callback, FPublishedFileID publishedFileId, FPublishedFileID childPublishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, PublishedFileID(publishedFileId)
		, ChildPublishedFileID(childPublishedFileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCAddUGCDependency(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileId, FPublishedFileID childPublishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, PublishedFileID(publishedFileId)
		, ChildPublishedFileID(childPublishedFileID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCAddUGCDependency() = delete;
protected:
	AddUGCDependencyResult_t CallbackResults;
	FPublishedFileID PublishedFileID;
	FPublishedFileID ChildPublishedFileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCAddUGCDependency bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency : public FOnlineAsyncTaskSteamCore
{
public:
	FOnRemoveUGCDependencyResult OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency(class USteamCoreSubsystem* subsystem, FOnRemoveUGCDependencyResult callback, FPublishedFileID parentPublishedFileId, FPublishedFileID childPublishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, ParentPublishedFileID(parentPublishedFileId)
		, ChildPublishedFileID(childPublishedFileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID parentPublishedFileId, FPublishedFileID childPublishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, ParentPublishedFileID(parentPublishedFileId)
		, ChildPublishedFileID(childPublishedFileID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency() = delete;
protected:
	RemoveUGCDependencyResult_t CallbackResults;
	FPublishedFileID ParentPublishedFileID;
	FPublishedFileID ChildPublishedFileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCDeleteItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCDeleteItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDeleteItemResult OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCDeleteItem(class USteamCoreSubsystem* subsystem, FOnDeleteItemResult callback, FPublishedFileID publishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, PublishedFileID(publishedFileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCDeleteItem(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, PublishedFileID(publishedFileID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCDeleteItem() = delete;
protected:
	DeleteItemResult_t CallbackResults;
	FPublishedFileID PublishedFileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCDeleteItem bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCGetAppDependencies
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCGetAppDependencies : public FOnlineAsyncTaskSteamCore
{
public:
	FOnGetAppDependenciesResult OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCGetAppDependencies(class USteamCoreSubsystem* subsystem, FOnGetAppDependenciesResult callback, FPublishedFileID publishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, PublishedFileID(publishedFileID)
	{}
	FOnlineAsyncTaskSteamCoreUGCGetAppDependencies(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileID)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, PublishedFileID(publishedFileID)
	{
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
private:
	FOnlineAsyncTaskSteamCoreUGCGetAppDependencies() = delete;
protected:
	GetAppDependenciesResult_t CallbackResults;
	FPublishedFileID PublishedFileID;
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCGetAppDependencies bWasSuccessful: %d"), WasSuccessful()); }
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		FOnlineAsyncTaskSteamCoreUGCDownloadItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
class FOnlineAsyncTaskSteamCoreUGCDownloadItem : public FOnlineAsyncTaskSteamCore
{
public:
	FOnDownloadItem OnSteamCallback;
public:
	FOnlineAsyncTaskSteamCoreUGCDownloadItem(class USteamCoreSubsystem* subsystem, FOnDownloadItem callback, FPublishedFileID publishedFileID, bool highPriority)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid)
		, OnSteamCallback(callback)
		, PublishedFileID(publishedFileID)
		, bHighPriority(highPriority)
	{
		OnDownloadItemResultCallback.Register(this, &FOnlineAsyncTaskSteamCoreUGCDownloadItem::OnDownloadItemResult);
	}
	FOnlineAsyncTaskSteamCoreUGCDownloadItem(USteamCoreSubsystem* subsystem, USteamCoreAsyncAction* asyncObject, FPublishedFileID publishedFileID, bool highPriority)
		: FOnlineAsyncTaskSteamCore(subsystem, k_uAPICallInvalid, asyncObject)
		, PublishedFileID(publishedFileID)
		, bHighPriority(highPriority)
	{
		OnDownloadItemResultCallback.Register(this, &FOnlineAsyncTaskSteamCoreUGCDownloadItem::OnDownloadItemResult);
		OnSteamCallback.BindUFunction(asyncObject, "HandleCallback");
	}
	virtual ~FOnlineAsyncTaskSteamCoreUGCDownloadItem()
	{
		OnDownloadItemResultCallback.Unregister();
	}
private:
	FOnlineAsyncTaskSteamCoreUGCDownloadItem() = delete;
protected:
	DownloadItemResult_t CallbackResults;
	FPublishedFileID PublishedFileID;
	bool bHighPriority;
protected:
	STEAM_CALLBACK_MANUAL(FOnlineAsyncTaskSteamCoreUGCDownloadItem, OnDownloadItemResult, DownloadItemResult_t, OnDownloadItemResultCallback);
private:
	virtual void Tick() override;
	virtual void TriggerDelegates() override;
	virtual FString ToString() const override { return FString::Printf(TEXT("FOnlineAsyncTaskSteamCoreUGCDownloadItem bWasSuccessful: %d"), WasSuccessful()); }
};