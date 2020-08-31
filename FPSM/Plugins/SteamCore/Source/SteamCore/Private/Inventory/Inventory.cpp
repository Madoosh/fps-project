/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInventory
*/

#include "Inventory/Inventory.h"
#include "Inventory/InventoryAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

void UInventory::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	OnSteamInventoryResultReadyCallback.Register(this, &UInventory::OnSteamInventoryResultReady);
	OnSteamInventoryFullUpdateCallback.Register(this, &UInventory::OnSteamInventoryFullUpdate);
	OnSteamInventoryDefinitionUpdateCallback.Register(this, &UInventory::OnSteamInventoryDefinitionUpdate);
	OnSteamInventoryStartPurchaseResultCallback.Register(this, &UInventory::OnSteamInventoryStartPurchaseResult);
	OnSteamInventoryRequestPricesResultCallback.Register(this, &UInventory::OnSteamInventoryRequestPricesResult);
	OnSteamInventoryEligiblePromoItemDefIDsCallback.Register(this, &UInventory::OnSteamInventoryEligiblePromoItemDefIDs);

	if (IsRunningDedicatedServer())
	{
		OnSteamInventoryResultReadyCallback.SetGameserverFlag();
		OnSteamInventoryFullUpdateCallback.SetGameserverFlag();
		OnSteamInventoryDefinitionUpdateCallback.SetGameserverFlag();
		OnSteamInventoryStartPurchaseResultCallback.SetGameserverFlag();
		OnSteamInventoryRequestPricesResultCallback.SetGameserverFlag();
		OnSteamInventoryEligiblePromoItemDefIDsCallback.SetGameserverFlag();
	}
}

void UInventory::Deinitialize()
{
	OnSteamInventoryResultReadyCallback.Unregister();
	OnSteamInventoryFullUpdateCallback.Unregister();
	OnSteamInventoryDefinitionUpdateCallback.Unregister();
	OnSteamInventoryStartPurchaseResultCallback.Unregister();
	OnSteamInventoryRequestPricesResultCallback.Unregister();
	OnSteamInventoryEligiblePromoItemDefIDsCallback.Unregister();

	Super::Deinitialize();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Functions
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

ESteamResult UInventory::GetResultStatus(FSteamInventoryResult handle)
{
	return GetInventory() ? static_cast<ESteamResult>(GetInventory()->GetResultStatus(handle)) : ESteamResult::Fail;
}

bool UInventory::GetResultItems(FSteamInventoryResult handle, TArray<FSteamItemDetails>& items)
{
	if (GetInventory())
	{
		uint32 m_Size = 0;

		// get the size of the array
		if (GetInventory()->GetResultItems(handle, nullptr, &m_Size))
		{
			if (m_Size > 0)
			{
				SteamItemDetails_t* m_Result = new SteamItemDetails_t[m_Size];

				GetInventory()->GetResultItems(handle, m_Result, &m_Size);

				for (int32 i = 0; i < static_cast<int32>(m_Size); i++)
					items.Add(m_Result[i]);

				delete[] m_Result;
			}

			return true;
		}
	}

	return false;
}

int32 UInventory::GetResultTimestamp(FSteamInventoryResult handle)
{
	return GetInventory() ? GetInventory()->GetResultTimestamp(handle) : 0;
}

bool UInventory::CheckResultSteamID(FSteamInventoryResult handle, FSteamID steamIDExpected)
{
	return GetInventory() ? GetInventory()->CheckResultSteamID(handle, steamIDExpected) : false;
}

void UInventory::DestroyResult(FSteamInventoryResult handle)
{
	if (GetInventory())
		GetInventory()->DestroyResult(handle);
}

bool UInventory::GetAllItems(FSteamInventoryResult& handle)
{
	return GetInventory() ? GetInventory()->GetAllItems(reinterpret_cast<SteamInventoryResult_t*>(&handle)) : false;
}

bool UInventory::GetItemsByID(FSteamInventoryResult& handle, TArray<FSteamItemInstanceID> instanceIDs)
{
	if (GetInventory())
	{
		const int32 m_Size = instanceIDs.Num();
		SteamItemInstanceID_t* m_Data = new SteamItemInstanceID_t[m_Size];

		for (int32 i = 0; i < m_Size; i++)
			m_Data[i] = instanceIDs[i];

		bool bResult = GetInventory()->GetItemsByID(reinterpret_cast<SteamInventoryResult_t*>(&handle), m_Data, m_Size);

		delete[] m_Data;
		return bResult;
	}

	return false;
}

bool UInventory::GetItemPrice(FSteamItemDef itemDef, int32& price, int32& basePrice)
{
#if STEAM_VERSION > 142
	return GetInventory() ? GetInventory()->GetItemPrice(itemDef, reinterpret_cast<uint64*>(&price), reinterpret_cast<uint64*>(&basePrice)) : false;
#else
	return GetInventory() ? GetInventory()->GetItemPrice(itemDef, reinterpret_cast<uint64*>(&price)) : false;
#endif
}

bool UInventory::GetItemsWithPrices(TArray<FSteamItemDef>& itemDefs, TArray<int32>& prices, TArray<int32>& basePrices)
{
	if (GetInventory())
	{
		const int32 m_Size = GetInventory()->GetNumItemsWithPrices();

		SteamItemDef_t* m_ItemDefs = new SteamItemDef_t[m_Size];
		uint64* m_ItemPrices = new uint64[m_Size];
		uint64* m_BasePrices = new uint64[m_Size];

#if STEAM_VERSION > 142
		if (GetInventory()->GetItemsWithPrices(m_ItemDefs, m_ItemPrices, m_BasePrices, m_Size))
		{
			for (int32 i = 0; i < m_Size; i++)
			{
				itemDefs.Add(m_ItemDefs[i]);
				prices.Add(m_ItemPrices[i]);
				basePrices.Add(m_BasePrices[i]);
			}

			return true;
		}
#else
		if (GetInventory()->GetItemsWithPrices(m_ItemDefs, m_ItemPrices, m_Size))
		{
			for (int32 i = 0; i < m_Size; i++)
			{
				itemDefs.Add(m_ItemDefs[i]);
				prices.Add(m_ItemPrices[i]);
			}

			return true;
		}
#endif

		delete[] m_ItemDefs;
		delete[] m_ItemPrices;
		delete[] m_BasePrices;
	}

	return false;
}

int32 UInventory::GetNumItemsWithPrices()
{
	return GetInventory() ? GetInventory()->GetNumItemsWithPrices() : 0;
}

bool UInventory::GetResultItemProperty(FSteamInventoryResult handle, int32 itemIndex, FString propertyName, FString& valueBuffer)
{
	if (GetInventory())
	{
		uint32 m_Size = 0;

		return GetInventory()->GetResultItemProperty(handle, itemIndex, TCHAR_TO_UTF8(*propertyName), TCHAR_TO_UTF8(&valueBuffer), &m_Size);
	}

	return false;
}

bool UInventory::SerializeResult(FSteamInventoryResult handle, TArray<uint8>& buffer)
{
	if (GetInventory())
	{
		uint32 m_Size = 0;
		buffer.Empty();

		// get the size of the array
		if (GetInventory()->SerializeResult(handle, nullptr, &m_Size))
		{
			uint8* m_Result = new uint8[m_Size];

			GetInventory()->SerializeResult(handle, m_Result, &m_Size);

			for (int32 i = 0; i < static_cast<int32>(m_Size); i++)
				buffer.Add(m_Result[i]);

			delete[] m_Result;

			return true;
		}
	}

	return false;
}

void UInventory::StartPurchase(const TArray<FSteamItemDef> itemDefs, const TArray<int32> quantity)
{
	if (GetInventory())
	{
		const int32 m_Size = itemDefs.Num();

		SteamItemDef_t* m_ItemDefs = new SteamItemDef_t[m_Size];
		uint32* m_Quantities = new uint32[m_Size];

		for (int32 i = 0; i < m_Size; i++)
		{
			m_ItemDefs[i] = itemDefs[i];
			m_Quantities[i] = quantity[i];
		}

		GetInventory()->StartPurchase(m_ItemDefs, m_Quantities, m_Size);

		delete[] m_ItemDefs;
		delete[] m_Quantities;
	}
}

bool UInventory::DeserializeResult(FSteamInventoryResult& handle, TArray<uint8> buffer, bool bReservedMustBeFalse)
{
	bool bResult = false;

	if (GetInventory()) 
	{
		const int32 m_Size = buffer.Num();
		uint8* m_Data = new uint8[m_Size];
		for (int32 i = 0; i < m_Size; i++)
			m_Data[i] = buffer[i];

		bResult = GetInventory()->DeserializeResult(reinterpret_cast<SteamInventoryResult_t*>(&handle), m_Data, m_Size, bReservedMustBeFalse);

		delete[] m_Data;
	}

	return bResult;
}

bool UInventory::GenerateItems(FSteamInventoryResult& handle, TArray<FSteamItemDef> itemDefs, TArray<int32> quantities)
{
	if (GetInventory())
	{
		int32 m_Size = itemDefs.Num();
		SteamItemDef_t* m_ItemDefs = new SteamItemDef_t[m_Size];
		uint32* m_Quantities = new uint32[m_Size];

		for (int32 i = 0; i < m_Size; i++)
		{
			m_ItemDefs[i] = itemDefs[i];
			m_Quantities[i] = quantities[i];
		}

		bool bResult = GetInventory() ? GetInventory()->GenerateItems(reinterpret_cast<SteamInventoryResult_t*>(&handle), m_ItemDefs, m_Quantities, m_Size) : false;

		delete[] m_ItemDefs;
		delete[] m_Quantities;

		return bResult;
	}

	return false;	
}

bool UInventory::GrantPromoItems(FSteamInventoryResult& handle)
{
	return GetInventory() ? GetInventory()->GrantPromoItems(reinterpret_cast<SteamInventoryResult_t*>(&handle)) : false;
}

bool UInventory::AddPromoItem(FSteamInventoryResult& handle, FSteamItemDef itemDefinition)
{
	return GetInventory() ? GetInventory()->AddPromoItem(reinterpret_cast<SteamInventoryResult_t*>(&handle), itemDefinition) : false;
}

bool UInventory::AddPromoItems(FSteamInventoryResult& handle, TArray<FSteamItemDef> itemDefs)
{
	if (GetInventory())
	{
		bool bResult = GetInventory()->AddPromoItems(reinterpret_cast<SteamInventoryResult_t*>(&handle), reinterpret_cast<SteamItemDef_t*>(itemDefs.GetData()), itemDefs.Num());
		return bResult;
	}

	return false;
}

bool UInventory::ConsumeItem(FSteamInventoryResult& handle, FSteamItemInstanceID itemToConsume, int32 quantity)
{
	return GetInventory() ? GetInventory()->ConsumeItem(reinterpret_cast<SteamInventoryResult_t*>(&handle), itemToConsume, quantity) : false;
}

bool UInventory::ExchangeItems(FSteamInventoryResult& handle, TArray<FSteamItemDef> arrayGenerate, TArray<int32> arrayGenerateQuantity, TArray<FSteamItemInstanceID> arrayDestroy, TArray<int32> arrayDestroyQuantity)
{
	if (GetInventory())
	{
		const int32 m_ArrayGenerateSize = arrayGenerate.Num();
		SteamItemDef_t* m_ArrayGenerate = new SteamItemDef_t[m_ArrayGenerateSize];
		uint32* m_ArrayGenerateQuantity = new uint32[m_ArrayGenerateSize];

		const int32 m_ArrayDestroySize = arrayDestroy.Num();
		SteamItemInstanceID_t* m_ArrayDestroy = new SteamItemInstanceID_t[m_ArrayDestroySize];
		uint32* m_ArrayDestroyQuantity = new uint32[m_ArrayDestroySize];

		for (int32 i = 0; i < m_ArrayGenerateSize; i++)
		{
			m_ArrayGenerate[i] = arrayGenerate[i];
			m_ArrayGenerateQuantity[i] = arrayGenerateQuantity[i];
		}

		for (int32 i = 0; i < m_ArrayDestroySize; i++)
		{
			m_ArrayDestroy[i] = arrayDestroy[i];
			m_ArrayDestroyQuantity[i] = arrayDestroyQuantity[i];
		}

		bool bResult = GetInventory()->ExchangeItems(reinterpret_cast<SteamInventoryResult_t*>(&handle), m_ArrayGenerate, m_ArrayGenerateQuantity, m_ArrayGenerateSize, m_ArrayDestroy, m_ArrayDestroyQuantity, m_ArrayDestroySize);

		delete[] m_ArrayGenerate;
		delete[] m_ArrayGenerateQuantity;
		delete[] m_ArrayDestroy;
		delete[] m_ArrayDestroyQuantity;

		return bResult;
	}

	return false;
}

bool UInventory::TransferItemQuantity(FSteamInventoryResult& handle, FSteamItemInstanceID itemIDSource, int32 quantity, FSteamItemInstanceID itemIDDest)
{
	return GetInventory() ? GetInventory()->TransferItemQuantity(reinterpret_cast<SteamInventoryResult_t*>(&handle), itemIDSource, quantity, itemIDDest) : false;
}

bool UInventory::TriggerItemDrop(FSteamInventoryResult& handle, FSteamItemDef listDefinition)
{
	return GetInventory() ? GetInventory()->TriggerItemDrop(reinterpret_cast<SteamInventoryResult_t*>(&handle), listDefinition) : false;
}

void UInventory::StartUpdateProperties()
{
	if (GetInventory())
		GetInventory()->StartUpdateProperties();
}

bool UInventory::SubmitUpdateProperties(FSteamInventoryUpdateHandle handle, FSteamInventoryResult& resultHandle)
{
	return GetInventory() ? GetInventory()->SubmitUpdateProperties(handle, reinterpret_cast<SteamInventoryResult_t*>(&resultHandle)) : false;
}

bool UInventory::RemoveProperty(FSteamInventoryUpdateHandle handle, FSteamItemInstanceID itemID, FString propertyName)
{
	return GetInventory() ? GetInventory()->RemoveProperty(handle, itemID, TCHAR_TO_UTF8(*propertyName)) : false;
}

bool UInventory::SetPropertyString(FSteamInventoryUpdateHandle handle, FSteamItemInstanceID itemID, FString propertyName, FString value)
{
	return GetInventory() ? GetInventory()->SetProperty(handle, itemID, TCHAR_TO_UTF8(*propertyName), TCHAR_TO_UTF8(*value)) : false;
}

bool UInventory::SetPropertyBool(FSteamInventoryUpdateHandle handle, FSteamItemInstanceID itemID, FString propertyName, bool value)
{
	return GetInventory() ? GetInventory()->SetProperty(handle, itemID, TCHAR_TO_UTF8(*propertyName), value) : false;
}

bool UInventory::SetPropertyInt(FSteamInventoryUpdateHandle handle, FSteamItemInstanceID itemID, FString propertyName, int32 value)
{
	return GetInventory() ? GetInventory()->SetProperty(handle, itemID, TCHAR_TO_UTF8(*propertyName), static_cast<int64>(value)) : false;
}

bool UInventory::SetPropertyFloat(FSteamInventoryUpdateHandle handle, FSteamItemInstanceID itemID, FString propertyName, float value)
{
	return GetInventory() ? GetInventory()->SetProperty(handle, itemID, TCHAR_TO_UTF8(*propertyName), value) : false;
}

bool UInventory::LoadItemDefinitions()
{
	return GetInventory() ? GetInventory()->LoadItemDefinitions() : false;
}

bool UInventory::GetItemDefinitionIDs(TArray<FSteamItemDef>& itemDefs)
{
	if (GetInventory())
	{
		uint32 m_Size = 0;
		itemDefs.Empty();

		// get the size of the array
		if (GetInventory()->GetItemDefinitionIDs(nullptr, &m_Size))
		{
			if (m_Size > 0)
			{
				SteamItemDef_t* m_Result = new SteamItemDef_t[m_Size];

				GetInventory()->GetItemDefinitionIDs(m_Result, &m_Size);

				for (int32 i = 0; i < static_cast<int32>(m_Size); i++)
					itemDefs.Add(m_Result[i]);

				delete[] m_Result;
			}

			return true;
		}
	}

	return false;
}

bool UInventory::GetItemDefinitionProperty(FSteamItemDef itemDef, FString propertyName, FString& value)
{
	if (GetInventory())
	{
		uint32 m_Size = 0;

		// get the size of the array
		if (GetInventory()->GetItemDefinitionProperty(itemDef, TCHAR_TO_UTF8(*propertyName), nullptr, &m_Size))
		{
			char* m_Result = new char[m_Size];

			if (GetInventory()->GetItemDefinitionProperty(itemDef, TCHAR_TO_UTF8(*propertyName), m_Result, &m_Size))
			{
				value = FString(UTF8_TO_TCHAR(m_Result));
			}

			delete[] m_Result;
			return true;
		}
	}

	return false;
}

bool UInventory::GetEligiblePromoItemDefinitionIDs(FSteamID steamID, TArray<FSteamItemDef>& itemDefs)
{
	if (GetInventory())
	{
		itemDefs.Empty();
		uint32 m_Size = 0;

		// get the size of the array
		if (GetInventory()->GetEligiblePromoItemDefinitionIDs(steamID, nullptr, &m_Size))
		{
			SteamItemDef_t* m_Result = new SteamItemDef_t[m_Size];

			bool bResult = GetInventory()->GetEligiblePromoItemDefinitionIDs(steamID, m_Result, &m_Size);

			for (int32 i = 0; i < static_cast<int32>(m_Size); i++)
				itemDefs.Add(m_Result[i]);

			delete[] m_Result;
			return bResult;
		}
	}

	return false;
}

void UInventory::RequestEligiblePromoItemDefinitionsIDs(const FOnRequestEligiblePromoItemDefinitionsIDs& callback, FSteamID steamID)
{
	if (GetInventory())
	{
		FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs* m_Task = new FOnlineAsyncTaskSteamCoreInventoryRequestEligiblePromoItemDefinitionsIDs(this, callback, steamID);
		QueueAsyncTask(m_Task);
	}
}

void UInventory::RequestPrices(const FOnSteamInventoryRequestPricesResult& callback)
{
	if (GetInventory())
	{
		FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult* m_Task = new FOnlineAsyncTaskSteamCoreInventoryRequestPricesResult(this, callback);
		QueueAsyncTask(m_Task);
	}
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam API Callbacks
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

void UInventory::OnSteamInventoryResultReady( SteamInventoryResultReady_t *pParam )
{
	FSteamInventoryResultReady m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				SteamInventoryResultReady.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		SteamInventoryResultReady.Broadcast(m_Data);
	}
}

void UInventory::OnSteamInventoryFullUpdate( SteamInventoryFullUpdate_t *pParam )
{
	const FSteamInventoryFullUpdate m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				SteamInventoryFullUpdate.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		SteamInventoryFullUpdate.Broadcast(m_Data);
	}
}

void UInventory::OnSteamInventoryDefinitionUpdate( SteamInventoryDefinitionUpdate_t *pParam )
{
	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				SteamInventoryDefinitionUpdate.Broadcast();
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		SteamInventoryDefinitionUpdate.Broadcast();
	}
}

void UInventory::OnSteamInventoryStartPurchaseResult( SteamInventoryStartPurchaseResult_t *pParam )
{
	const FSteamInventoryStartPurchaseResult m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				SteamInventoryStartPurchaseResult.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		SteamInventoryStartPurchaseResult.Broadcast(m_Data);
	}
}

void UInventory::OnSteamInventoryRequestPricesResult( SteamInventoryRequestPricesResult_t *pParam )
{
	const FSteamInventoryRequestPricesResult m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				SteamInventoryRequestPricesResultDelegate.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	} 
	else
	{
		SteamInventoryRequestPricesResultDelegate.Broadcast(m_Data);
	}
}

void UInventory::OnSteamInventoryEligiblePromoItemDefIDs( SteamInventoryEligiblePromoItemDefIDs_t *pParam )
{
	const FSteamInventoryEligiblePromoItemDefIDs m_Data = *pParam;

	if (!IsInGameThread() && ForceGameThread())
	{
		FFunctionGraphTask::CreateAndDispatchWhenReady([=]()
			{
				SteamInventoryEligiblePromoItemDefIDs.Broadcast(m_Data);
			}, TStatId(), nullptr, ENamedThreads::GameThread);
	}
	else
	{
		SteamInventoryEligiblePromoItemDefIDs.Broadcast(m_Data);
	}
}