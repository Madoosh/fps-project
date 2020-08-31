/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#include "UGC/UGCAsyncActions.h"
#include "UGC/UGCAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"
#include "UGC/UGC.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems* USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::StopPlaytimeTrackingForAllItemsAsync(UObject* WorldContextObject)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTrackingForAllItems(m_Subsystem, m_AsyncObject);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}
	
	return nullptr;
}

void USteamCoreUGCAsyncActionStopPlaytimeTrackingForAllItems::HandleCallback(const FStopPlaytimeTrackingResult& data, bool bWasSuccessful)
{
	const FStopPlaytimeTrackingResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionStopPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionStopPlaytimeTracking* USteamCoreUGCAsyncActionStopPlaytimeTracking::StopPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> publishedFileIDs)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionStopPlaytimeTracking>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCStopPlaytimeTracking(m_Subsystem, m_AsyncObject, publishedFileIDs);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionStopPlaytimeTracking::HandleCallback(const FStopPlaytimeTrackingResult& data, bool bWasSuccessful)
{
	const FStopPlaytimeTrackingResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionStartPlaytimeTracking
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionStartPlaytimeTracking* USteamCoreUGCAsyncActionStartPlaytimeTracking::StartPlaytimeTrackingAsync(UObject* WorldContextObject, TArray<FPublishedFileID> publishedFileIDs)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionStartPlaytimeTracking>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCStartPlaytimeTracking(m_Subsystem, m_AsyncObject, publishedFileIDs);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionStartPlaytimeTracking::HandleCallback(const FStartPlaytimeTrackingResult& data, bool bWasSuccessful)
{
	const FStartPlaytimeTrackingResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionUnsubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionUnsubscribeItem* USteamCoreUGCAsyncActionUnsubscribeItem::UnsubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileIDs)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionUnsubscribeItem>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCUnsubscribeItem(m_Subsystem, m_AsyncObject, publishedFileIDs);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionUnsubscribeItem::HandleCallback(const FRemoteStorageSubscribePublishedFileResult& data, bool bWasSuccessful)
{
	const FRemoteStorageSubscribePublishedFileResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSubscribeItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionSubscribeItem* USteamCoreUGCAsyncActionSubscribeItem::SubscribeItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileIDs)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionSubscribeItem>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCSubscribeItem(m_Subsystem, m_AsyncObject, publishedFileIDs);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionSubscribeItem::HandleCallback(const FRemoteStorageSubscribePublishedFileResult& data, bool bWasSuccessful)
{
	const FRemoteStorageSubscribePublishedFileResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionRemoveItemFromFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionRemoveItemFromFavorites* USteamCoreUGCAsyncActionRemoveItemFromFavorites::RemoveItemFromFavoritesAsync(UObject* WorldContextObject, int32 appID, FPublishedFileID publishedFileID)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionRemoveItemFromFavorites>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCRemoveItemFromFavorites(m_Subsystem, m_AsyncObject, appID, publishedFileID);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionRemoveItemFromFavorites::HandleCallback(const FUserFavoriteItemsListChanged& data, bool bWasSuccessful)
{
	const FUserFavoriteItemsListChanged m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionAddItemToFavorites
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionAddItemToFavorites* USteamCoreUGCAsyncActionAddItemToFavorites::AddItemToFavoritesAsync(UObject* WorldContextObject, int32 appID, FPublishedFileID publishedFileID)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionAddItemToFavorites>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCAddItemToFavorites(m_Subsystem, m_AsyncObject, appID, publishedFileID);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionAddItemToFavorites::HandleCallback(const FUserFavoriteItemsListChanged& data, bool bWasSuccessful)
{
	const FUserFavoriteItemsListChanged m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionGetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionGetUserItemVote* USteamCoreUGCAsyncActionGetUserItemVote::GetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionGetUserItemVote>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCGetUserItemVote(m_Subsystem, m_AsyncObject, publishedFileID);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionGetUserItemVote::HandleCallback(const FGetUserItemVoteResult& data, bool bWasSuccessful)
{
	const FGetUserItemVoteResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSetUserItemVote
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionSetUserItemVote* USteamCoreUGCAsyncActionSetUserItemVote::SetUserItemVoteAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, bool bVoteUp)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionSetUserItemVote>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCSetUserItemVote(m_Subsystem, m_AsyncObject, bVoteUp, publishedFileID);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionSetUserItemVote::HandleCallback(const FSetUserItemVoteResult& data, bool bWasSuccessful)
{
	const FSetUserItemVoteResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSubmitItemUpdate
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionSubmitItemUpdate* USteamCoreUGCAsyncActionSubmitItemUpdate::SubmitItemUpdateAsync(UObject* WorldContextObject, FUGCUpdateHandle handle, FString changeNote)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionSubmitItemUpdate>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCSubmitItemUpdate(m_Subsystem, m_AsyncObject, handle, changeNote);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionSubmitItemUpdate::HandleCallback(const FSubmitItemUpdateResult& data, bool bWasSuccessful)
{
	const FSubmitItemUpdateResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionCreateItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionCreateItem* USteamCoreUGCAsyncActionCreateItem::CreateItemAsync(UObject* WorldContextObject, int32 consumerAppID, ESteamWorkshopFileType fileType)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionCreateItem>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCCreateItem(m_Subsystem, m_AsyncObject, consumerAppID, fileType);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionCreateItem::HandleCallback(const FCreateItemResult& data, bool bWasSuccessful)
{
	const FCreateItemResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionSendQueryUGCRequest
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionSendQueryUGCRequest* USteamCoreUGCAsyncActionSendQueryUGCRequest::SendQueryUGCRequestAsync(UObject* WorldContextObject, FUGCQueryHandle handle)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionSendQueryUGCRequest>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCSendQueryUGCRequest(m_Subsystem, m_AsyncObject, handle);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionSendQueryUGCRequest::HandleCallback(const FSteamUGCQueryCompleted& data, bool bWasSuccessful)
{
	const FSteamUGCQueryCompleted m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionAddAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionAddAppDependency* USteamCoreUGCAsyncActionAddAppDependency::AddAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, int32 appID)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionAddAppDependency>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCAddAppDependency(m_Subsystem, m_AsyncObject, publishedFileID, appID);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionAddAppDependency::HandleCallback(const FAddAppDependencyResult& data, bool bWasSuccessful)
{
	const FAddAppDependencyResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionRemoveAppDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionRemoveAppDependency* USteamCoreUGCAsyncActionRemoveAppDependency::RemoveAppDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, int32 appID)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionRemoveAppDependency>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCRemoveAppDependency(m_Subsystem, m_AsyncObject, publishedFileID, appID);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionRemoveAppDependency::HandleCallback(const FRemoveAppDependencyResult& data, bool bWasSuccessful)
{
	const FRemoveAppDependencyResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionAddUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionAddUGCDependency* USteamCoreUGCAsyncActionAddUGCDependency::AddDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, FPublishedFileID childPublishedFileID)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionAddUGCDependency>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCAddUGCDependency(m_Subsystem, m_AsyncObject, publishedFileID, childPublishedFileID);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionAddUGCDependency::HandleCallback(const FAddUGCDependencyResult& data, bool bWasSuccessful)
{
	const FAddUGCDependencyResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionRemoveUGCDependency
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionRemoveUGCDependency* USteamCoreUGCAsyncActionRemoveUGCDependency::RemoveDependencyAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, FPublishedFileID childPublishedFileID)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionRemoveUGCDependency>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCRemoveUGCDependency(m_Subsystem, m_AsyncObject, publishedFileID, childPublishedFileID);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionRemoveUGCDependency::HandleCallback(const FRemoveUGCDependencyResult& data, bool bWasSuccessful)
{
	const FRemoveUGCDependencyResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionDeleteItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionDeleteItem* USteamCoreUGCAsyncActionDeleteItem::DeleteItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionDeleteItem>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCDeleteItem(m_Subsystem, m_AsyncObject, publishedFileID);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionDeleteItem::HandleCallback(const FDeleteItemResult& data, bool bWasSuccessful)
{
	const FDeleteItemResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionGetAppDependencies
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionGetAppDependencies* USteamCoreUGCAsyncActionGetAppDependencies::GetAppDependenciesAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionGetAppDependencies>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCGetAppDependencies(m_Subsystem, m_AsyncObject, publishedFileID);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionGetAppDependencies::HandleCallback(const FGetAppDependenciesResult& data, bool bWasSuccessful)
{
	const FGetAppDependenciesResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUGCAsyncActionDownloadItem
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUGCAsyncActionDownloadItem* USteamCoreUGCAsyncActionDownloadItem::DownloadItemAsync(UObject* WorldContextObject, FPublishedFileID publishedFileID, bool bHighPriority)
{
	if (GetUGC())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUGCAsyncActionDownloadItem>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUGCDownloadItem(m_Subsystem, m_AsyncObject, publishedFileID, bHighPriority);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");
		USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
	}

	return nullptr;
}

void USteamCoreUGCAsyncActionDownloadItem::HandleCallback(const FDownloadItemResult& data, bool bWasSuccessful)
{
	const FDownloadItemResult m_Data = data;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				if (bWasSuccessful)
					OnSuccess.Broadcast(m_Data);
				else
					OnFailure.Broadcast();

			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		if (bWasSuccessful)
			OnSuccess.Broadcast(m_Data);
		else
			OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}