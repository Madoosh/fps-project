/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official SteamCore Documentation: https://eeldev.com
*/

#include "SteamCore/SteamCoreAsync.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"
#include "SteamCore/SteamCoreSettings.h"
#include "SteamCore/SteamTypes.h"

void FOnlineAsyncTaskManagerSteamCore::OnlineTick()
{

}

void USteamCoreAsyncAction::Activate()
{
	Super::Activate();

	if (UGameInstance* m_GameInstance = RegisteredWithGameInstance.Get())
	{
		float m_AsyncTimeout = GetDefault<USteamCoreSettings>()->AsyncTaskTimeout;
		m_GameInstance->GetWorld()->GetTimerManager().SetTimer(TimerHandle_Timeout, this, &USteamCoreAsyncAction::SetReadyToDestroy, m_AsyncTimeout, false);
	}
}

void USteamCoreAsyncAction::SetReadyToDestroy()
{
	if (UGameInstance* m_GameInstance = RegisteredWithGameInstance.Get())
	{
		m_GameInstance->GetWorld()->GetTimerManager().ClearTimer(TimerHandle_Timeout);
	}

	Super::SetReadyToDestroy();
}

void FOnlineAsyncTaskSteamCore::Tick()
{
	if (SteamCoreDebugging())
	{
		UE_LOG(SteamCoreLog, Warning, TEXT("[Tick] %s"), *ToString());
	}

	if (!bIsComplete)
	{
		bTimedOut = GetElapsedTime() > AsyncTimeout;

		if (bTimedOut)
		{
			bIsComplete = true;
			bWasSuccessful = false;

			if (SteamCoreDebugging())
			{
				UE_LOG(SteamCoreLog, Error, TEXT("[Task] [%s] Timed out"), *ToString());
			}
		}
	}
}