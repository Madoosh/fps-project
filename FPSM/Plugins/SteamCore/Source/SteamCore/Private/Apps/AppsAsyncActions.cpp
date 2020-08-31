/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamApps
*/

#include "Apps/AppsAsyncActions.h"
#include "Apps/AppsAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreAppsAsyncActionGetFileDetails
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreAppsAsyncActionGetFileDetails* USteamCoreAppsAsyncActionGetFileDetails::GetFileDetailsAsync(UObject* WorldContextObject, FString fileName)
{
	if (GetApps())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreAppsAsyncActionGetFileDetails>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreAppsGetFileDetails(m_Subsystem, m_AsyncObject, fileName);
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

void USteamCoreAppsAsyncActionGetFileDetails::HandleCallback(const FFileDetailsResult& data, bool bWasSuccessful)
{
	const FFileDetailsResult m_Data = data;

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
