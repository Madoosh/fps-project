/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInventory
*/

#include "Inventory/InventoryAsyncActions.h"
#include "Inventory/InventoryAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreInventoryAsyncActionSetPersonaName
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs* USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::RequestEligiblePromoItemDefinitionsIDsAsync(UObject* WorldContextObject, FSteamID steamID)
{
	if (GetInventory())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs(m_Subsystem, m_AsyncObject, steamID);
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

void USteamCoreInventoryAsyncActionRequestEligiblePromoItemDefinitionsIDs::HandleCallback(const FSteamInventoryEligiblePromoItemDefIDs& data, bool bWasSuccessful)
{
	const FSteamInventoryEligiblePromoItemDefIDs m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreInventoryAsyncActionRequestPricesResult
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreInventoryAsyncActionRequestPricesResult* USteamCoreInventoryAsyncActionRequestPricesResult::RequestPricesAsync(UObject* WorldContextObject)
{
	if (GetInventory())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreInventoryAsyncActionRequestPricesResult>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult(m_Subsystem, m_AsyncObject);
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

void USteamCoreInventoryAsyncActionRequestPricesResult::HandleCallback(const FSteamInventoryRequestPricesResult& data, bool bWasSuccessful)
{
	const FSteamInventoryRequestPricesResult m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}