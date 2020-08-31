/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamFriends
*/

#include "Friends/FriendsAsyncActions.h"
#include "Friends/FriendsAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionSetPersonaName
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionSetPersonaName* USteamCoreFriendsAsyncActionSetPersonaName::SetPersonaNameAsync(UObject* WorldContextObject, FString name)
{
	if (SteamFriends())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreFriendsAsyncActionSetPersonaName>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreFriendsSetPersonaName(m_Subsystem, m_AsyncObject, name);
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

void USteamCoreFriendsAsyncActionSetPersonaName::HandleCallback(const FSetPersonaNameResponse& data, bool bWasSuccessful)
{
	const FSetPersonaNameResponse m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionDownloadClanActivityCounts
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionDownloadClanActivityCounts* USteamCoreFriendsAsyncActionDownloadClanActivityCounts::DownloadClanActivityCountsAsync(UObject* WorldContextObject, TArray<FSteamID> steamIDClans)
{
	if (SteamFriends())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreFriendsAsyncActionDownloadClanActivityCounts>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreFriendsDownloadClanActivityCounts(m_Subsystem, m_AsyncObject, steamIDClans);
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

void USteamCoreFriendsAsyncActionDownloadClanActivityCounts::HandleCallback(const FDownloadClanActivityCountsResult& data, bool bWasSuccessful)
{
	const FDownloadClanActivityCountsResult m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionRequestClanOfficerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionRequestClanOfficerList* USteamCoreFriendsAsyncActionRequestClanOfficerList::RequestClanOfficerListAsync(UObject* WorldContextObject, FSteamID steamIDClan)
{
	if (SteamFriends())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreFriendsAsyncActionRequestClanOfficerList>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreRequestClanOfficerList(m_Subsystem, m_AsyncObject, steamIDClan);
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

void USteamCoreFriendsAsyncActionRequestClanOfficerList::HandleCallback(const FClanOfficerListResponse& data, bool bWasSuccessful)
{
	const FClanOfficerListResponse m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionJoinClanChatRoom
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionJoinClanChatRoom* USteamCoreFriendsAsyncActionJoinClanChatRoom::JoinClanChatRoomAsync(UObject* WorldContextObject, FSteamID steamIDClan)
{
	if (SteamFriends())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreFriendsAsyncActionJoinClanChatRoom>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreFriendsJoinClanChatRoom(m_Subsystem, m_AsyncObject, steamIDClan);
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

void USteamCoreFriendsAsyncActionJoinClanChatRoom::HandleCallback(const FJoinClanChatRoomCompletionResult& data, bool bWasSuccessful)
{
	const FJoinClanChatRoomCompletionResult m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionEnumerateFollowingList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionEnumerateFollowingList* USteamCoreFriendsAsyncActionEnumerateFollowingList::EnumerateFollowingListAsync(UObject* WorldContextObject, int32 startIndex)
{
	if (SteamFriends())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreFriendsAsyncActionEnumerateFollowingList>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreFriendsEnumerateFollowingList(m_Subsystem, m_AsyncObject, startIndex);
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

void USteamCoreFriendsAsyncActionEnumerateFollowingList::HandleCallback(const FFriendsEnumerateFollowingList& data, bool bWasSuccessful)
{
	const FFriendsEnumerateFollowingList m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionIsFollowing
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionIsFollowing* USteamCoreFriendsAsyncActionIsFollowing::IsFollowingAsync(UObject* WorldContextObject, FSteamID steamID)
{
	if (SteamFriends())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreFriendsAsyncActionIsFollowing>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreFriendsIsFollowing(m_Subsystem, m_AsyncObject, steamID);
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

void USteamCoreFriendsAsyncActionIsFollowing::HandleCallback(const FFriendsIsFollowing& data, bool bWasSuccessful)
{
	const FFriendsIsFollowing m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionIsFollowing
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFriendsAsyncActionGetFollowerCount* USteamCoreFriendsAsyncActionGetFollowerCount::GetFollowerCountAsync(UObject* WorldContextObject, FSteamID steamID)
{
	if (SteamFriends())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreFriendsAsyncActionGetFollowerCount>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreFriendsGetFollowerCount(m_Subsystem, m_AsyncObject, steamID);
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

void USteamCoreFriendsAsyncActionGetFollowerCount::HandleCallback(const FFriendsGetFollowerCount& data, bool bWasSuccessful)
{
	const FFriendsGetFollowerCount m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}
