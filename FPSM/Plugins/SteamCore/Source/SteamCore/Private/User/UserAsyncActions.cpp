/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUGC
*/

#include "User/UserAsyncActions.h"
#include "User/UserAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreUserAsyncActionRequestEncryptedAppTicket
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserAsyncActionRequestEncryptedAppTicket* USteamCoreUserAsyncActionRequestEncryptedAppTicket::RequestEncryptedAppTicketAsync(UObject* WorldContextObject, TArray<uint8> dataToInclude)
{
	if (SteamUser())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUserAsyncActionRequestEncryptedAppTicket>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUserRequestEncryptedAppTicket(m_Subsystem, m_AsyncObject, dataToInclude);
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

void USteamCoreUserAsyncActionRequestEncryptedAppTicket::HandleCallback(const FEncryptedAppTicketResponse& data, bool bWasSuccessful)
{
	const FEncryptedAppTicketResponse m_Data = data;

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
//		USteamCoreUserAsyncActionRequestStoreAuthURL
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreUserAsyncActionRequestStoreAuthURL* USteamCoreUserAsyncActionRequestStoreAuthURL::RequestStoreAuthURLAsync(UObject* WorldContextObject, FString RedirectURL)
{
	if (SteamUser())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreUserAsyncActionRequestStoreAuthURL>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreUserRequestStoreAuthURL(m_Subsystem, m_AsyncObject, RedirectURL);
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

void USteamCoreUserAsyncActionRequestStoreAuthURL::HandleCallback(const FStoreAuthURLResponse& data, bool bWasSuccessful)
{
	const FStoreAuthURLResponse m_Data = data;

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