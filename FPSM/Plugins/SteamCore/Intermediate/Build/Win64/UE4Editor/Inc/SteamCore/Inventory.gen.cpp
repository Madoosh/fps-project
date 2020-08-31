// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Inventory/Inventory.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventory() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UInventory_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UInventory();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDef();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemInstanceID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamItemDetails();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResult__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryFullUpdate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryDefinitionUpdate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryResultReady__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UInventory::execSetPropertyFloat)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_handle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_itemID);
		P_GET_PROPERTY(FStrProperty,Z_Param_propertyName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::SetPropertyFloat(Z_Param_handle,Z_Param_itemID,Z_Param_propertyName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execSetPropertyInt)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_handle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_itemID);
		P_GET_PROPERTY(FStrProperty,Z_Param_propertyName);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::SetPropertyInt(Z_Param_handle,Z_Param_itemID,Z_Param_propertyName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execSetPropertyBool)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_handle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_itemID);
		P_GET_PROPERTY(FStrProperty,Z_Param_propertyName);
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::SetPropertyBool(Z_Param_handle,Z_Param_itemID,Z_Param_propertyName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execSetPropertyString)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_handle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_itemID);
		P_GET_PROPERTY(FStrProperty,Z_Param_propertyName);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::SetPropertyString(Z_Param_handle,Z_Param_itemID,Z_Param_propertyName,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execRemoveProperty)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_handle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_itemID);
		P_GET_PROPERTY(FStrProperty,Z_Param_propertyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::RemoveProperty(Z_Param_handle,Z_Param_itemID,Z_Param_propertyName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execSubmitUpdateProperties)
	{
		P_GET_STRUCT(FSteamInventoryUpdateHandle,Z_Param_handle);
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_resultHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::SubmitUpdateProperties(Z_Param_handle,Z_Param_Out_resultHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execStartUpdateProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UInventory::StartUpdateProperties();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execTriggerItemDrop)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_handle);
		P_GET_STRUCT(FSteamItemDef,Z_Param_listDefinition);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::TriggerItemDrop(Z_Param_Out_handle,Z_Param_listDefinition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execTransferItemQuantity)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_handle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_itemIDSource);
		P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_itemIDDest);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::TransferItemQuantity(Z_Param_Out_handle,Z_Param_itemIDSource,Z_Param_quantity,Z_Param_itemIDDest);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execStartPurchase)
	{
		P_GET_TARRAY(FSteamItemDef,Z_Param_itemDefs);
		P_GET_TARRAY(int32,Z_Param_quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInventory::StartPurchase(Z_Param_itemDefs,Z_Param_quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execSerializeResult)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_handle);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_buffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::SerializeResult(Z_Param_handle,Z_Param_Out_buffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execRequestPrices)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestPrices(FOnSteamInventoryRequestPricesResult(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execRequestEligiblePromoItemDefinitionsIDs)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestEligiblePromoItemDefinitionsIDs(FOnRequestEligiblePromoItemDefinitionsIDs(Z_Param_Out_callback),Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execLoadItemDefinitions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::LoadItemDefinitions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGrantPromoItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GrantPromoItems(Z_Param_Out_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetResultTimestamp)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UInventory::GetResultTimestamp(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetResultStatus)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamResult*)Z_Param__Result=UInventory::GetResultStatus(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetResultItems)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_handle);
		P_GET_TARRAY_REF(FSteamItemDetails,Z_Param_Out_items);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetResultItems(Z_Param_handle,Z_Param_Out_items);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetResultItemProperty)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_handle);
		P_GET_PROPERTY(FIntProperty,Z_Param_itemIndex);
		P_GET_PROPERTY(FStrProperty,Z_Param_propertyName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_valueBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetResultItemProperty(Z_Param_handle,Z_Param_itemIndex,Z_Param_propertyName,Z_Param_Out_valueBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetNumItemsWithPrices)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UInventory::GetNumItemsWithPrices();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetItemsWithPrices)
	{
		P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_itemDefs);
		P_GET_TARRAY_REF(int32,Z_Param_Out_prices);
		P_GET_TARRAY_REF(int32,Z_Param_Out_basePrices);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetItemsWithPrices(Z_Param_Out_itemDefs,Z_Param_Out_prices,Z_Param_Out_basePrices);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetItemPrice)
	{
		P_GET_STRUCT(FSteamItemDef,Z_Param_itemDef);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_price);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_basePrice);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetItemPrice(Z_Param_itemDef,Z_Param_Out_price,Z_Param_Out_basePrice);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetItemsByID)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_handle);
		P_GET_TARRAY(FSteamItemInstanceID,Z_Param_instanceIDs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetItemsByID(Z_Param_Out_handle,Z_Param_instanceIDs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetItemDefinitionProperty)
	{
		P_GET_STRUCT(FSteamItemDef,Z_Param_itemDef);
		P_GET_PROPERTY(FStrProperty,Z_Param_propertyName);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetItemDefinitionProperty(Z_Param_itemDef,Z_Param_propertyName,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetItemDefinitionIDs)
	{
		P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_itemDefs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetItemDefinitionIDs(Z_Param_Out_itemDefs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetEligiblePromoItemDefinitionIDs)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_GET_TARRAY_REF(FSteamItemDef,Z_Param_Out_itemDefs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetEligiblePromoItemDefinitionIDs(Z_Param_steamID,Z_Param_Out_itemDefs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGetAllItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GetAllItems(Z_Param_Out_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execGenerateItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_handle);
		P_GET_TARRAY(FSteamItemDef,Z_Param_itemDefs);
		P_GET_TARRAY(int32,Z_Param_quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::GenerateItems(Z_Param_Out_handle,Z_Param_itemDefs,Z_Param_quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execExchangeItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_handle);
		P_GET_TARRAY(FSteamItemDef,Z_Param_arrayGenerate);
		P_GET_TARRAY(int32,Z_Param_arrayGenerateQuantity);
		P_GET_TARRAY(FSteamItemInstanceID,Z_Param_arrayDestroy);
		P_GET_TARRAY(int32,Z_Param_arrayDestroyQuantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::ExchangeItems(Z_Param_Out_handle,Z_Param_arrayGenerate,Z_Param_arrayGenerateQuantity,Z_Param_arrayDestroy,Z_Param_arrayDestroyQuantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execDestroyResult)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UInventory::DestroyResult(Z_Param_handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execDeserializeResult)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_handle);
		P_GET_TARRAY(uint8,Z_Param_buffer);
		P_GET_UBOOL(Z_Param_bReservedMustBeFalse);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::DeserializeResult(Z_Param_Out_handle,Z_Param_buffer,Z_Param_bReservedMustBeFalse);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execConsumeItem)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_handle);
		P_GET_STRUCT(FSteamItemInstanceID,Z_Param_itemConsume);
		P_GET_PROPERTY(FIntProperty,Z_Param_quantity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::ConsumeItem(Z_Param_Out_handle,Z_Param_itemConsume,Z_Param_quantity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execCheckResultSteamID)
	{
		P_GET_STRUCT(FSteamInventoryResult,Z_Param_handle);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDExpected);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::CheckResultSteamID(Z_Param_handle,Z_Param_steamIDExpected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execAddPromoItems)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_handle);
		P_GET_TARRAY(FSteamItemDef,Z_Param_itemDefs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::AddPromoItems(Z_Param_Out_handle,Z_Param_itemDefs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventory::execAddPromoItem)
	{
		P_GET_STRUCT_REF(FSteamInventoryResult,Z_Param_Out_handle);
		P_GET_STRUCT(FSteamItemDef,Z_Param_itemDef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UInventory::AddPromoItem(Z_Param_Out_handle,Z_Param_itemDef);
		P_NATIVE_END;
	}
	void UInventory::StaticRegisterNativesUInventory()
	{
		UClass* Class = UInventory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPromoItem", &UInventory::execAddPromoItem },
			{ "AddPromoItems", &UInventory::execAddPromoItems },
			{ "CheckResultSteamID", &UInventory::execCheckResultSteamID },
			{ "ConsumeItem", &UInventory::execConsumeItem },
			{ "DeserializeResult", &UInventory::execDeserializeResult },
			{ "DestroyResult", &UInventory::execDestroyResult },
			{ "ExchangeItems", &UInventory::execExchangeItems },
			{ "GenerateItems", &UInventory::execGenerateItems },
			{ "GetAllItems", &UInventory::execGetAllItems },
			{ "GetEligiblePromoItemDefinitionIDs", &UInventory::execGetEligiblePromoItemDefinitionIDs },
			{ "GetItemDefinitionIDs", &UInventory::execGetItemDefinitionIDs },
			{ "GetItemDefinitionProperty", &UInventory::execGetItemDefinitionProperty },
			{ "GetItemPrice", &UInventory::execGetItemPrice },
			{ "GetItemsByID", &UInventory::execGetItemsByID },
			{ "GetItemsWithPrices", &UInventory::execGetItemsWithPrices },
			{ "GetNumItemsWithPrices", &UInventory::execGetNumItemsWithPrices },
			{ "GetResultItemProperty", &UInventory::execGetResultItemProperty },
			{ "GetResultItems", &UInventory::execGetResultItems },
			{ "GetResultStatus", &UInventory::execGetResultStatus },
			{ "GetResultTimestamp", &UInventory::execGetResultTimestamp },
			{ "GrantPromoItems", &UInventory::execGrantPromoItems },
			{ "LoadItemDefinitions", &UInventory::execLoadItemDefinitions },
			{ "RemoveProperty", &UInventory::execRemoveProperty },
			{ "RequestEligiblePromoItemDefinitionsIDs", &UInventory::execRequestEligiblePromoItemDefinitionsIDs },
			{ "RequestPrices", &UInventory::execRequestPrices },
			{ "SerializeResult", &UInventory::execSerializeResult },
			{ "SetPropertyBool", &UInventory::execSetPropertyBool },
			{ "SetPropertyFloat", &UInventory::execSetPropertyFloat },
			{ "SetPropertyInt", &UInventory::execSetPropertyInt },
			{ "SetPropertyString", &UInventory::execSetPropertyString },
			{ "StartPurchase", &UInventory::execStartPurchase },
			{ "StartUpdateProperties", &UInventory::execStartUpdateProperties },
			{ "SubmitUpdateProperties", &UInventory::execSubmitUpdateProperties },
			{ "TransferItemQuantity", &UInventory::execTransferItemQuantity },
			{ "TriggerItemDrop", &UInventory::execTriggerItemDrop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventory_AddPromoItem_Statics
	{
		struct Inventory_eventAddPromoItem_Parms
		{
			FSteamInventoryResult handle;
			FSteamItemDef itemDef;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemDef;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventAddPromoItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventAddPromoItem_Parms), &Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_itemDef = { "itemDef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventAddPromoItem_Parms, itemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventAddPromoItem_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_AddPromoItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_itemDef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItem_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_AddPromoItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grant a specific one-time promotional item to the current user.\n\x09*\n\x09* This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to \n\x09* grant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\n\x09* Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. \n\x09* This version will grant all items that have promo attributes specified for them in the configured item definitions. \n\x09* This allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09Returns a new inventory result handle.\n\x09* @param\x09itemDef\x09\x09The ItemDef to grant the player.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Grant a specific one-time promotional item to the current user.\n\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to\ngrant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\nThis version will grant all items that have promo attributes specified for them in the configured item definitions.\nThis allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\n@param        handle                          Returns a new inventory result handle.\n@param        itemDef         The ItemDef to grant the player." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_AddPromoItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "AddPromoItem", nullptr, nullptr, sizeof(Inventory_eventAddPromoItem_Parms), Z_Construct_UFunction_UInventory_AddPromoItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddPromoItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_AddPromoItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddPromoItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_AddPromoItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_AddPromoItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_AddPromoItems_Statics
	{
		struct Inventory_eventAddPromoItems_Parms
		{
			FSteamInventoryResult handle;
			TArray<FSteamItemDef> itemDefs;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemDefs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemDefs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventAddPromoItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventAddPromoItems_Parms), &Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_itemDefs = { "itemDefs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventAddPromoItems_Parms, itemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_itemDefs_Inner = { "itemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventAddPromoItems_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_AddPromoItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_itemDefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_itemDefs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_AddPromoItems_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_AddPromoItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grant a specific one-time promotional item to the current user.\n\x09*\n\x09* This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to\n\x09* grant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\n\x09* Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\n\x09* This version will grant all items that have promo attributes specified for them in the configured item definitions.\n\x09* This allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09\x09Returns a new inventory result handle.\n\x09* @param\x09itemDefs\x09\x09\x09The list of items to grant the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Grant a specific one-time promotional item to the current user.\n\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. One of the primary scenarios for this call is to\ngrant an item to users who also own a specific other game. This can be useful if your game has custom UI for showing a specific promo item to the user otherwise if you want to grant multiple promotional items then use AddPromoItems or GrantPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\nThis version will grant all items that have promo attributes specified for them in the configured item definitions.\nThis allows adding additional promotional items without having to update the game client. For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\n@param        handle                                  Returns a new inventory result handle.\n@param        itemDefs                        The list of items to grant the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_AddPromoItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "AddPromoItems", nullptr, nullptr, sizeof(Inventory_eventAddPromoItems_Parms), Z_Construct_UFunction_UInventory_AddPromoItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddPromoItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_AddPromoItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_AddPromoItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_AddPromoItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_AddPromoItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics
	{
		struct Inventory_eventCheckResultSteamID_Parms
		{
			FSteamInventoryResult handle;
			FSteamID steamIDExpected;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDExpected;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventCheckResultSteamID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventCheckResultSteamID_Parms), &Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_steamIDExpected = { "steamIDExpected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventCheckResultSteamID_Parms, steamIDExpected), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventCheckResultSteamID_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_steamIDExpected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Checks whether an inventory result handle belongs to the specified Steam ID.\n\x09*\n\x09* This is important when using DeserializeResult, to verify that a remote player is not pretending to have a different user's inventory.\n\x09*\n\x09* @param\x09handle\x09\x09The inventory result handle to check the Steam ID on.\n\x09* @param\x09steamID\x09\x09The Steam ID to verify.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Checks whether an inventory result handle belongs to the specified Steam ID.\n\nThis is important when using DeserializeResult, to verify that a remote player is not pretending to have a different user's inventory.\n\n@param        handle          The inventory result handle to check the Steam ID on.\n@param        steamID         The Steam ID to verify." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "CheckResultSteamID", nullptr, nullptr, sizeof(Inventory_eventCheckResultSteamID_Parms), Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_CheckResultSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_CheckResultSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_ConsumeItem_Statics
	{
		struct Inventory_eventConsumeItem_Parms
		{
			FSteamInventoryResult handle;
			FSteamItemInstanceID itemConsume;
			int32 quantity;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_quantity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemConsume;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventConsumeItem_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventConsumeItem_Parms), &Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventConsumeItem_Parms, quantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_itemConsume = { "itemConsume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventConsumeItem_Parms, itemConsume), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventConsumeItem_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_ConsumeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_itemConsume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ConsumeItem_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_ConsumeItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Consumes items from a user's inventory. If the quantity of the given item goes to zero, it is permanently removed.\n\x09*\n\x09* Once an item is removed it cannot be recovered. This is not for the faint of heart - if your game implements item removal at all, a high-friction UI confirmation process is highly recommended. \n\x09* ConsumeItem can be restricted to certain item definitions or fully blocked via the Steamworks website to minimize support/abuse issues such as the classic \"my brother borrowed my laptop and deleted all of my rare items\".\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09Returns a new inventory result handle.\n\x09* @param\x09itemConsume\x09\x09\x09The item instance id to consume.\n\x09* @param\x09quantity\x09\x09The number of items in that stack to consume.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Consumes items from a user's inventory. If the quantity of the given item goes to zero, it is permanently removed.\n\nOnce an item is removed it cannot be recovered. This is not for the faint of heart - if your game implements item removal at all, a high-friction UI confirmation process is highly recommended.\nConsumeItem can be restricted to certain item definitions or fully blocked via the Steamworks website to minimize support/abuse issues such as the classic \"my brother borrowed my laptop and deleted all of my rare items\".\n\n@param        handle                          Returns a new inventory result handle.\n@param        itemConsume                     The item instance id to consume.\n@param        quantity                The number of items in that stack to consume." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_ConsumeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "ConsumeItem", nullptr, nullptr, sizeof(Inventory_eventConsumeItem_Parms), Z_Construct_UFunction_UInventory_ConsumeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ConsumeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_ConsumeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ConsumeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_ConsumeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_ConsumeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_DeserializeResult_Statics
	{
		struct Inventory_eventDeserializeResult_Parms
		{
			FSteamInventoryResult handle;
			TArray<uint8> buffer;
			bool bReservedMustBeFalse;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bReservedMustBeFalse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReservedMustBeFalse;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_buffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_buffer_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventDeserializeResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventDeserializeResult_Parms), &Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse_SetBit(void* Obj)
	{
		((Inventory_eventDeserializeResult_Parms*)Obj)->bReservedMustBeFalse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse = { "bReservedMustBeFalse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventDeserializeResult_Parms), &Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_buffer = { "buffer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventDeserializeResult_Parms, buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_buffer_Inner = { "buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventDeserializeResult_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_DeserializeResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_bReservedMustBeFalse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DeserializeResult_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_DeserializeResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Deserializes a result set and verifies the signature bytes.\n\x09*\n\x09* This call has a potential soft-failure mode where the handle status is set to k_EResultExpired. GetResultItems will still succeed in this mode. \n\x09* The \"expired\" result could indicate that the data may be out of date - not just due to timed expiration (one hour), but also because one of the items in the result set may have been traded or consumed since the result set was generated. \n\x09* You could compare the timestamp from GetResultTimestamp to ISteamUtils::GetServerRealTime to determine how old the data is. You could simply ignore the \"expired\" result code and continue as normal, \n\x09* or you could request the player with expired data to send an updated result set.\n\x09* You should call CheckResultSteamID on the result handle when it completes to verify that a remote player is not pretending to have a different user's inventory.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09\x09Returns a new inventory result handle.\n\x09* @param\x09""buffer\x09\x09\x09\x09\x09The buffer to deserialize.\n\x09* @param\x09""bReservedMustBeFalse\x09This must be false!\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Deserializes a result set and verifies the signature bytes.\n\nThis call has a potential soft-failure mode where the handle status is set to k_EResultExpired. GetResultItems will still succeed in this mode.\nThe \"expired\" result could indicate that the data may be out of date - not just due to timed expiration (one hour), but also because one of the items in the result set may have been traded or consumed since the result set was generated.\nYou could compare the timestamp from GetResultTimestamp to ISteamUtils::GetServerRealTime to determine how old the data is. You could simply ignore the \"expired\" result code and continue as normal,\nor you could request the player with expired data to send an updated result set.\nYou should call CheckResultSteamID on the result handle when it completes to verify that a remote player is not pretending to have a different user's inventory.\n\n@param        handle                                  Returns a new inventory result handle.\n@param        buffer                                  The buffer to deserialize.\n@param        bReservedMustBeFalse    This must be false!" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_DeserializeResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "DeserializeResult", nullptr, nullptr, sizeof(Inventory_eventDeserializeResult_Parms), Z_Construct_UFunction_UInventory_DeserializeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_DeserializeResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_DeserializeResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_DeserializeResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_DeserializeResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_DeserializeResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_DestroyResult_Statics
	{
		struct Inventory_eventDestroyResult_Parms
		{
			FSteamInventoryResult handle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_DestroyResult_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventDestroyResult_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_DestroyResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_DestroyResult_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_DestroyResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Destroys a result handle and frees all associated memory.\n\x09*\n\x09* @param\x09handle\x09\x09The inventory result handle to destroy.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Destroys a result handle and frees all associated memory.\n\n@param        handle          The inventory result handle to destroy." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_DestroyResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "DestroyResult", nullptr, nullptr, sizeof(Inventory_eventDestroyResult_Parms), Z_Construct_UFunction_UInventory_DestroyResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_DestroyResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_DestroyResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_DestroyResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_DestroyResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_DestroyResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_ExchangeItems_Statics
	{
		struct Inventory_eventExchangeItems_Parms
		{
			FSteamInventoryResult handle;
			TArray<FSteamItemDef> arrayGenerate;
			TArray<int32> arrayGenerateQuantity;
			TArray<FSteamItemInstanceID> arrayDestroy;
			TArray<int32> arrayDestroyQuantity;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrayDestroyQuantity;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_arrayDestroyQuantity_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrayDestroy;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_arrayDestroy_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrayGenerateQuantity;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_arrayGenerateQuantity_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_arrayGenerate;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_arrayGenerate_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventExchangeItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventExchangeItems_Parms), &Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayDestroyQuantity = { "arrayDestroyQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, arrayDestroyQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayDestroyQuantity_Inner = { "arrayDestroyQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayDestroy = { "arrayDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, arrayDestroy), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayDestroy_Inner = { "arrayDestroy", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayGenerateQuantity = { "arrayGenerateQuantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, arrayGenerateQuantity), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayGenerateQuantity_Inner = { "arrayGenerateQuantity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayGenerate = { "arrayGenerate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, arrayGenerate), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayGenerate_Inner = { "arrayGenerate", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventExchangeItems_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_ExchangeItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayDestroyQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayDestroyQuantity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayDestroy_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayGenerateQuantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayGenerateQuantity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayGenerate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_arrayGenerate_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_ExchangeItems_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_ExchangeItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grant one item in exchange for a set of other items.\n\x09*\n\x09* This can be used to implement crafting recipes or transmutations, or items which unpack themselves into other items (e.g., a chest).\n\x09* The caller of this API passes in the requested item and an array of existing items and quantities to exchange for it. \n\x09* The API currently takes an array of items to generate but at this time the size of that array must be 1 and the quantity of the new item must be 1.\n\x09* Any items that can be granted MUST have an exchange attribute in their itemdef. The exchange attribute specifies a set of recipes that are valid exchanges for this item. \n\x09* Exchange recipes are evaluated atomically by the Inventory Service; if the supplied components do not match the recipe, or do not contain sufficient quantity, the exchange will fail.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09\x09\x09\x09Returns a new inventory result handle.\n\x09* @param\x09""arrayGenerate\x09\x09\x09\x09\x09The list of items that will be created by this call. Currently can only be 1 item!\n\x09* @param\x09""arrayGenerateQuantity\x09\x09\x09The quantity of each item in pArrayGenerate to create. Currently can only be 1 item and it must be set to 1!\n\x09* @param\x09""arrayDestroy\x09\x09\x09\x09\x09The list of items that will be destroyed by this call.\n\x09* @param\x09""arrayDestroyQuantity\x09\x09\x09The quantity of each item in pArrayDestroy to destroy.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Grant one item in exchange for a set of other items.\n\nThis can be used to implement crafting recipes or transmutations, or items which unpack themselves into other items (e.g., a chest).\nThe caller of this API passes in the requested item and an array of existing items and quantities to exchange for it.\nThe API currently takes an array of items to generate but at this time the size of that array must be 1 and the quantity of the new item must be 1.\nAny items that can be granted MUST have an exchange attribute in their itemdef. The exchange attribute specifies a set of recipes that are valid exchanges for this item.\nExchange recipes are evaluated atomically by the Inventory Service; if the supplied components do not match the recipe, or do not contain sufficient quantity, the exchange will fail.\n\n@param        handle                                                  Returns a new inventory result handle.\n@param        arrayGenerate                                   The list of items that will be created by this call. Currently can only be 1 item!\n@param        arrayGenerateQuantity                   The quantity of each item in pArrayGenerate to create. Currently can only be 1 item and it must be set to 1!\n@param        arrayDestroy                                    The list of items that will be destroyed by this call.\n@param        arrayDestroyQuantity                    The quantity of each item in pArrayDestroy to destroy." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_ExchangeItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "ExchangeItems", nullptr, nullptr, sizeof(Inventory_eventExchangeItems_Parms), Z_Construct_UFunction_UInventory_ExchangeItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ExchangeItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_ExchangeItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_ExchangeItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_ExchangeItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_ExchangeItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GenerateItems_Statics
	{
		struct Inventory_eventGenerateItems_Parms
		{
			FSteamInventoryResult handle;
			TArray<FSteamItemDef> itemDefs;
			TArray<int32> quantity;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_quantity;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_quantity_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemDefs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemDefs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGenerateItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGenerateItems_Parms), &Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGenerateItems_Parms, quantity), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_quantity_Inner = { "quantity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_itemDefs = { "itemDefs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGenerateItems_Parms, itemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_itemDefs_Inner = { "itemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGenerateItems_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GenerateItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_quantity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_itemDefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_itemDefs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GenerateItems_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GenerateItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grants specific items to the current user, for developers only.\n\x09*\n\x09* This API is only intended for prototyping - it is only usable by Steam accounts that belong to the publisher group for your game.\n\x09* You can pass in an array of items, identified by their SteamItemDef_t and optionally a second array of corresponding quantities for each item. The length of these arrays MUST match!\n\x09*\n\x09* @param\x09handle\x09\x09\x09Returns a new inventory result handle.\n\x09* @param\x09itemDefs\x09\x09The list of items to grant the user.\n\x09* @param\x09quantity\x09\x09The quantity of each item in pArrayItemDefs to grant. This is optional, pass in NULL to specify 1 of each item.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Grants specific items to the current user, for developers only.\n\nThis API is only intended for prototyping - it is only usable by Steam accounts that belong to the publisher group for your game.\nYou can pass in an array of items, identified by their SteamItemDef_t and optionally a second array of corresponding quantities for each item. The length of these arrays MUST match!\n\n@param        handle                  Returns a new inventory result handle.\n@param        itemDefs                The list of items to grant the user.\n@param        quantity                The quantity of each item in pArrayItemDefs to grant. This is optional, pass in NULL to specify 1 of each item." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GenerateItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GenerateItems", nullptr, nullptr, sizeof(Inventory_eventGenerateItems_Parms), Z_Construct_UFunction_UInventory_GenerateItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GenerateItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GenerateItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GenerateItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GenerateItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GenerateItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetAllItems_Statics
	{
		struct Inventory_eventGetAllItems_Parms
		{
			FSteamInventoryResult handle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetAllItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetAllItems_Parms), &Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetAllItems_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetAllItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetAllItems_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetAllItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Start retrieving all items in the current users inventory.\n\x09*\n\x09* Calls to this function are subject to rate limits and may return cached results if called too frequently. \n\x09* It is suggested that you call this function only when you are about to display the user's full inventory, or if you expect that the inventory may have changed.\n\x09* \n\x09* @param\x09handle\x09\x09Returns a new inventory result handle.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Start retrieving all items in the current users inventory.\n\nCalls to this function are subject to rate limits and may return cached results if called too frequently.\nIt is suggested that you call this function only when you are about to display the user's full inventory, or if you expect that the inventory may have changed.\n\n@param        handle          Returns a new inventory result handle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetAllItems", nullptr, nullptr, sizeof(Inventory_eventGetAllItems_Parms), Z_Construct_UFunction_UInventory_GetAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetAllItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetAllItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetAllItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetAllItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetAllItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics
	{
		struct Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms
		{
			FSteamID steamID;
			TArray<FSteamItemDef> itemDefs;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemDefs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemDefs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms), &Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_itemDefs = { "itemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms, itemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_itemDefs_Inner = { "itemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_itemDefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_itemDefs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Get the list of item definition ids that a user can be granted.\n\x09*\n\x09* You should call this while handling a SteamInventoryEligiblePromoItemDefIDs_t call result to pull out the item definition ids.\n\x09*\n\x09* @param\x09steamID\x09\x09The Steam ID of the user who these items are for. This should be the same as SteamInventoryEligiblePromoItemDefIDs_t.m_steamID.\n\x09* @param\x09itemDefs\x09Returns the item definition ids by copying them into this array.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Get the list of item definition ids that a user can be granted.\n\nYou should call this while handling a SteamInventoryEligiblePromoItemDefIDs_t call result to pull out the item definition ids.\n\n@param        steamID         The Steam ID of the user who these items are for. This should be the same as SteamInventoryEligiblePromoItemDefIDs_t.m_steamID.\n@param        itemDefs        Returns the item definition ids by copying them into this array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetEligiblePromoItemDefinitionIDs", nullptr, nullptr, sizeof(Inventory_eventGetEligiblePromoItemDefinitionIDs_Parms), Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics
	{
		struct Inventory_eventGetItemDefinitionIDs_Parms
		{
			TArray<FSteamItemDef> itemDefs;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemDefs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemDefs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetItemDefinitionIDs_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetItemDefinitionIDs_Parms), &Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_itemDefs = { "itemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemDefinitionIDs_Parms, itemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_itemDefs_Inner = { "itemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_itemDefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::NewProp_itemDefs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Returns the set of all item definition IDs which are defined in the App Admin panel of the Steamworks website.\n\x09*\n\x09* These item definitions may not necessarily be contiguous integers.\n\x09* This should be called in response to a SteamInventoryDefinitionUpdate_t callback. \n\x09* There is no reason to call this function if your game hardcodes the numeric definition IDs (eg, purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch.\n\x09*\n\x09* @param\x09itemDefs\x09Returns the item definitions by copying them into this array.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Returns the set of all item definition IDs which are defined in the App Admin panel of the Steamworks website.\n\nThese item definitions may not necessarily be contiguous integers.\nThis should be called in response to a SteamInventoryDefinitionUpdate_t callback.\nThere is no reason to call this function if your game hardcodes the numeric definition IDs (eg, purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch.\n\n@param        itemDefs        Returns the item definitions by copying them into this array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemDefinitionIDs", nullptr, nullptr, sizeof(Inventory_eventGetItemDefinitionIDs_Parms), Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetItemDefinitionIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetItemDefinitionIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics
	{
		struct Inventory_eventGetItemDefinitionProperty_Parms
		{
			FSteamItemDef itemDef;
			FString propertyName;
			FString value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_propertyName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemDef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetItemDefinitionProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetItemDefinitionProperty_Parms), &Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemDefinitionProperty_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_propertyName = { "propertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemDefinitionProperty_Parms, propertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_itemDef = { "itemDef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemDefinitionProperty_Parms, itemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_propertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::NewProp_itemDef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Gets a string property from the specified item definition.\n\x09*\n\x09* Gets a property value for a specific item definition.\n\x09* Note that some properties (for example, \"name\") may be localized and will depend on the current Steam language settings (see ISteamApps::GetCurrentGameLanguage). Property names are always ASCII alphanumeric and underscores.\n\x09* Pass in NULL for pchPropertyName to get a comma-separated list of available property names. In this mode, punValueBufferSizeOut will contain the suggested buffer size. Otherwise it will be the number of bytes actually copied to pchValueBuffer.\n\x09*\n\x09* @param\x09itemDef\x09\x09\x09\x09The item definition to get the properties for.\n\x09* @param\x09propertyName\x09\x09The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n\x09* @param\x09value\x09\x09\x09\x09Returns the value associated with pchPropertyName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Gets a string property from the specified item definition.\n\nGets a property value for a specific item definition.\nNote that some properties (for example, \"name\") may be localized and will depend on the current Steam language settings (see ISteamApps::GetCurrentGameLanguage). Property names are always ASCII alphanumeric and underscores.\nPass in NULL for pchPropertyName to get a comma-separated list of available property names. In this mode, punValueBufferSizeOut will contain the suggested buffer size. Otherwise it will be the number of bytes actually copied to pchValueBuffer.\n\n@param        itemDef                         The item definition to get the properties for.\n@param        propertyName            The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n@param        value                           Returns the value associated with pchPropertyName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemDefinitionProperty", nullptr, nullptr, sizeof(Inventory_eventGetItemDefinitionProperty_Parms), Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetItemDefinitionProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetItemDefinitionProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetItemPrice_Statics
	{
		struct Inventory_eventGetItemPrice_Parms
		{
			FSteamItemDef itemDef;
			int32 price;
			int32 basePrice;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_basePrice;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_price;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemDef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetItemPrice_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetItemPrice_Parms), &Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_basePrice = { "basePrice", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemPrice_Parms, basePrice), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_price = { "price", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemPrice_Parms, price), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_itemDef = { "itemDef", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemPrice_Parms, itemDef), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemPrice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_basePrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemPrice_Statics::NewProp_itemDef,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemPrice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\x09*\n\x09* @param\x09itemDef\x09\x09The item definition id to retrieve the price for\n\x09* @param\x09price\x09\x09The price pointer to populate. Prices are rendered in the user's local currency.\n\x09* @param\x09""basePrice\x09(Steam SDK 1.46 only)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\n@param        itemDef         The item definition id to retrieve the price for\n@param        price           The price pointer to populate. Prices are rendered in the user's local currency.\n@param        basePrice       (Steam SDK 1.46 only)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemPrice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemPrice", nullptr, nullptr, sizeof(Inventory_eventGetItemPrice_Parms), Z_Construct_UFunction_UInventory_GetItemPrice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemPrice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetItemPrice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemPrice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetItemPrice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetItemPrice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetItemsByID_Statics
	{
		struct Inventory_eventGetItemsByID_Parms
		{
			FSteamInventoryResult handle;
			TArray<FSteamItemInstanceID> instanceIDs;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_instanceIDs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_instanceIDs_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetItemsByID_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetItemsByID_Parms), &Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_instanceIDs = { "instanceIDs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemsByID_Parms, instanceIDs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_instanceIDs_Inner = { "instanceIDs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemsByID_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemsByID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_instanceIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_instanceIDs_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsByID_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemsByID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Gets the state of a subset of the current user's inventory.\n\x09*\n\x09* The subset is specified by an array of item instance IDs.\n\x09* The results from this call can be serialized using SerializeResult and passed to other players to \"prove\" that the current user owns specific items, without exposing the user's entire inventory. For example, you could call this with the IDs of the user's currently equipped items and serialize this to a buffer, and then transmit this buffer to other players upon joining a game.\n\x09* \n\x09* @param\x09handle\x09\x09\x09Returns a new inventory result handle.\n\x09* @param\x09instanceIDs\x09\x09""A list of the item instance ids to update the state of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Gets the state of a subset of the current user's inventory.\n\nThe subset is specified by an array of item instance IDs.\nThe results from this call can be serialized using SerializeResult and passed to other players to \"prove\" that the current user owns specific items, without exposing the user's entire inventory. For example, you could call this with the IDs of the user's currently equipped items and serialize this to a buffer, and then transmit this buffer to other players upon joining a game.\n\n@param        handle                  Returns a new inventory result handle.\n@param        instanceIDs             A list of the item instance ids to update the state of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemsByID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemsByID", nullptr, nullptr, sizeof(Inventory_eventGetItemsByID_Parms), Z_Construct_UFunction_UInventory_GetItemsByID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsByID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetItemsByID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsByID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetItemsByID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetItemsByID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics
	{
		struct Inventory_eventGetItemsWithPrices_Parms
		{
			TArray<FSteamItemDef> itemDefs;
			TArray<int32> prices;
			TArray<int32> basePrices;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_basePrices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_basePrices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_prices;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_prices_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemDefs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemDefs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetItemsWithPrices_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetItemsWithPrices_Parms), &Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_basePrices = { "basePrices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemsWithPrices_Parms, basePrices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_basePrices_Inner = { "basePrices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_prices = { "prices", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemsWithPrices_Parms, prices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_prices_Inner = { "prices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_itemDefs = { "itemDefs", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetItemsWithPrices_Parms, itemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_itemDefs_Inner = { "itemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_basePrices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_basePrices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_prices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_prices_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_itemDefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::NewProp_itemDefs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\x09*\n\x09* @param\x09itemDef\x09\x09The array of item definition ids to populate\n\x09* @param\x09price\x09\x09The array of prices for each corresponding item definition id in pArrayItemDefs. Prices are rendered in the user's local currency.\n\x09* @param\x09""basePrices\x09(Steam SDK 1.46 only)\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "After a successful call to RequestPrices, you can call this method to get the pricing for a specific item definition.\n\n@param        itemDef         The array of item definition ids to populate\n@param        price           The array of prices for each corresponding item definition id in pArrayItemDefs. Prices are rendered in the user's local currency.\n@param        basePrices      (Steam SDK 1.46 only)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetItemsWithPrices", nullptr, nullptr, sizeof(Inventory_eventGetItemsWithPrices_Parms), Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetItemsWithPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetItemsWithPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics
	{
		struct Inventory_eventGetNumItemsWithPrices_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetNumItemsWithPrices_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* After a successful call to RequestPrices, this will return the number of item definitions with valid pricing.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "After a successful call to RequestPrices, this will return the number of item definitions with valid pricing." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetNumItemsWithPrices", nullptr, nullptr, sizeof(Inventory_eventGetNumItemsWithPrices_Parms), Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetNumItemsWithPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetNumItemsWithPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics
	{
		struct Inventory_eventGetResultItemProperty_Parms
		{
			FSteamInventoryResult handle;
			int32 itemIndex;
			FString propertyName;
			FString valueBuffer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_valueBuffer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_propertyName;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_itemIndex;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetResultItemProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetResultItemProperty_Parms), &Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_valueBuffer = { "valueBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultItemProperty_Parms, valueBuffer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_propertyName = { "propertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultItemProperty_Parms, propertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_itemIndex = { "itemIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultItemProperty_Parms, itemIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultItemProperty_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_valueBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_propertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_itemIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Gets the dynamic properties from an item in an inventory result set.\n\x09*\n\x09* Property names are always composed of ASCII letters, numbers, and/or underscores.\n\x09* If the results do not fit in the given buffer, partial results may be copied.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The result handle containing the item to get the properties of.\n\x09* @param\x09itemIndex\x09\n\x09* @param\x09propertyName\x09The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n\x09* @param\x09valueBuffer\x09\x09Returns the value associated with pchPropertyName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Gets the dynamic properties from an item in an inventory result set.\n\nProperty names are always composed of ASCII letters, numbers, and/or underscores.\nIf the results do not fit in the given buffer, partial results may be copied.\n\n@param        handle                  The result handle containing the item to get the properties of.\n@param        itemIndex\n@param        propertyName    The property name to get the value for. If you pass in NULL then pchValueBuffer will contain a comma-separated list of all the available names.\n@param        valueBuffer             Returns the value associated with pchPropertyName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetResultItemProperty", nullptr, nullptr, sizeof(Inventory_eventGetResultItemProperty_Parms), Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetResultItemProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetResultItemProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetResultItems_Statics
	{
		struct Inventory_eventGetResultItems_Parms
		{
			FSteamInventoryResult handle;
			TArray<FSteamItemDetails> items;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_items_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGetResultItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGetResultItems_Parms), &Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_items = { "items", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultItems_Parms, items), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_items_Inner = { "items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultItems_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetResultItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_items_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultItems_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetResultItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Get the items associated with an inventory result handle.\n\x09*\n\x09* @param\x09handle\x09\x09The inventory result handle to get the items for.\n\x09* @param\x09items\x09\x09The details are returned by copying them into this array.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Get the items associated with an inventory result handle.\n\n@param        handle          The inventory result handle to get the items for.\n@param        items           The details are returned by copying them into this array." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetResultItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetResultItems", nullptr, nullptr, sizeof(Inventory_eventGetResultItems_Parms), Z_Construct_UFunction_UInventory_GetResultItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetResultItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetResultItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetResultItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetResultStatus_Statics
	{
		struct Inventory_eventGetResultStatus_Parms
		{
			FSteamInventoryResult handle;
			ESteamResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultStatus_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultStatus_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetResultStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultStatus_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetResultStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Find out the status of an asynchronous inventory result handle.\n\x09*\n\x09* This is a polling equivalent to registering a callback function for SteamInventoryResultReady_t.\n\x09*\n\x09* @param\x09handle\x09\x09The inventory result handle to get the status for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Find out the status of an asynchronous inventory result handle.\n\nThis is a polling equivalent to registering a callback function for SteamInventoryResultReady_t.\n\n@param        handle          The inventory result handle to get the status for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetResultStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetResultStatus", nullptr, nullptr, sizeof(Inventory_eventGetResultStatus_Parms), Z_Construct_UFunction_UInventory_GetResultStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetResultStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetResultStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetResultStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics
	{
		struct Inventory_eventGetResultTimestamp_Parms
		{
			FSteamInventoryResult handle;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultTimestamp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGetResultTimestamp_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Gets the server time at which the result was generated.\n\x09*\x09\n\x09* @param\x09handle\x09The inventory result handle to get the timestamp for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Gets the server time at which the result was generated.\n\n@param        handle  The inventory result handle to get the timestamp for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GetResultTimestamp", nullptr, nullptr, sizeof(Inventory_eventGetResultTimestamp_Parms), Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GetResultTimestamp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GetResultTimestamp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_GrantPromoItems_Statics
	{
		struct Inventory_eventGrantPromoItems_Parms
		{
			FSteamInventoryResult handle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventGrantPromoItems_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventGrantPromoItems_Parms), &Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventGrantPromoItems_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Grant all potential one-time promotional items to the current user.\n\x09*\n\x09* This can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs. \n\x09* One of the primary scenarios for this call is to grant an item to users who also own a specific other game. If you want to grant specific promotional items rather than all of them see: AddPromoItem and AddPromoItems.\n\x09* Any items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item. \n\x09* This version will grant all items that have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client. \n\x09* For example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\x09*\n\x09* @param\x09handle\x09\x09Returns a new inventory result handle.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Grant all potential one-time promotional items to the current user.\n\nThis can be safely called from the client because the items it can grant can be locked down via policies in the itemdefs.\nOne of the primary scenarios for this call is to grant an item to users who also own a specific other game. If you want to grant specific promotional items rather than all of them see: AddPromoItem and AddPromoItems.\nAny items that can be granted MUST have a \"promo\" attribute in their itemdef. That promo item list a set of APPIDs that the user must own to be granted this given item.\nThis version will grant all items that have promo attributes specified for them in the configured item definitions. This allows adding additional promotional items without having to update the game client.\nFor example the following will allow the item to be granted if the user owns either TF2 or SpaceWar.\n\n@param        handle          Returns a new inventory result handle." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "GrantPromoItems", nullptr, nullptr, sizeof(Inventory_eventGrantPromoItems_Parms), Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_GrantPromoItems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_GrantPromoItems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics
	{
		struct Inventory_eventLoadItemDefinitions_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventLoadItemDefinitions_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventLoadItemDefinitions_Parms), &Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Triggers an asynchronous load and refresh of item definitions.\n\x09*\n\x09* Item definitions are a mapping of \"definition IDs\" (integers between 1 and 999999999) to a set of string properties. \n\x09* Some of these properties are required to display items on the Steam community web site. Other properties can be defined by applications. \n\x09* There is no reason to call this function if your game hardcoded the numeric definition IDs (e.g. purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Triggers an asynchronous load and refresh of item definitions.\n\nItem definitions are a mapping of \"definition IDs\" (integers between 1 and 999999999) to a set of string properties.\nSome of these properties are required to display items on the Steam community web site. Other properties can be defined by applications.\nThere is no reason to call this function if your game hardcoded the numeric definition IDs (e.g. purple face mask = 20, blue weapon mod = 55) and does not allow for adding new item types without a client patch." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "LoadItemDefinitions", nullptr, nullptr, sizeof(Inventory_eventLoadItemDefinitions_Parms), Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_LoadItemDefinitions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_LoadItemDefinitions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_RemoveProperty_Statics
	{
		struct Inventory_eventRemoveProperty_Parms
		{
			FSteamInventoryUpdateHandle handle;
			FSteamItemInstanceID itemID;
			FString propertyName;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_propertyName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventRemoveProperty_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventRemoveProperty_Parms), &Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_propertyName = { "propertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventRemoveProperty_Parms, propertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventRemoveProperty_Parms, itemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventRemoveProperty_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RemoveProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_propertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_itemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RemoveProperty_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_RemoveProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Removes a dynamic property for the given item.\n\x09*\n\x09* @param\x09handle\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09itemID\x09\x09\x09ID of the item being modified.\n\x09* @param\x09propertyName\x09The dynamic property being removed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Removes a dynamic property for the given item.\n\n@param        handle                  The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        itemID                  ID of the item being modified.\n@param        propertyName    The dynamic property being removed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RemoveProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RemoveProperty", nullptr, nullptr, sizeof(Inventory_eventRemoveProperty_Parms), Z_Construct_UFunction_UInventory_RemoveProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_RemoveProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RemoveProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_RemoveProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_RemoveProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics
	{
		struct Inventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms
		{
			FScriptDelegate callback;
			FSteamID steamID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestEligiblePromoItemDefinitionsIDs__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Request the list of \"eligible\" promo items that can be manually granted to the given user.\n\x09*\n\x09* These are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\n\x09* After calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n\x09*\n\x09* @param\x09steamID\x09\x09The Steam ID of the user to request the eligible promo items for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Request the list of \"eligible\" promo items that can be manually granted to the given user.\n\nThese are promo items of type \"manual\" that won't be granted automatically. An example usage of this is an item that becomes available every week.\nAfter calling this function you need to call GetEligiblePromoItemDefinitionIDs to get the actual item definition ids.\n\n@param        steamID         The Steam ID of the user to request the eligible promo items for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestEligiblePromoItemDefinitionsIDs", nullptr, nullptr, sizeof(Inventory_eventRequestEligiblePromoItemDefinitionsIDs_Parms), Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_RequestPrices_Statics
	{
		struct Inventory_eventRequestPrices_Parms
		{
			FScriptDelegate callback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_callback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_callback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_RequestPrices_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UInventory_RequestPrices_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventRequestPrices_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UInventory_RequestPrices_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestPrices_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_RequestPrices_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_RequestPrices_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_RequestPrices_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Request prices for all item definitions that can be purchased in the user's local currency. \n\x09*\n\x09* A SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code. \n\x09* After that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Request prices for all item definitions that can be purchased in the user's local currency.\n\nA SteamInventoryRequestPricesResult_t call result will be returned with the user's local currency code.\nAfter that, you can call GetNumItemsWithPrices and GetItemsWithPrices to get prices for all the known item definitions, or GetItemPrice for a specific item definition." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_RequestPrices_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "RequestPrices", nullptr, nullptr, sizeof(Inventory_eventRequestPrices_Parms), Z_Construct_UFunction_UInventory_RequestPrices_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestPrices_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_RequestPrices_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_RequestPrices_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_RequestPrices()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_RequestPrices_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_SerializeResult_Statics
	{
		struct Inventory_eventSerializeResult_Parms
		{
			FSteamInventoryResult handle;
			TArray<uint8> buffer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_buffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_buffer_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventSerializeResult_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventSerializeResult_Parms), &Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_buffer = { "buffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSerializeResult_Parms, buffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_buffer_Inner = { "buffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSerializeResult_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SerializeResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_buffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_buffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SerializeResult_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SerializeResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Serialized result sets contain a short signature which can't be forged or replayed across different game sessions.\n\x09*\n\x09* A result set can be serialized on the local client, transmitted to other players via your game networking, and deserialized by the remote players. \n\x09* This is a secure way of preventing hackers from lying about posessing rare/high-value items. Serializes a result set with signature bytes to an output buffer. \n\x09* The size of a serialized result depends on the number items which are being serialized. When securely transmitting items to other players, it is recommended to use GetItemsByID first to create a minimal result set.\n\x09* Results have a built-in timestamp which will be considered \"expired\" after an hour has elapsed. See DeserializeResult for expiration handling.\n\x09* If this is set pOutBuffer to NULL then punOutBufferSize will be set to the buffer size required. So you can make the buffer and then call this again to fill it with the data.\n\x09*\n\x09* @param\x09handle\x09\x09The inventory result handle to serialize.\n\x09* @param\x09""buffer\x09\x09The buffer that the serialized result will be copied into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Serialized result sets contain a short signature which can't be forged or replayed across different game sessions.\n\nA result set can be serialized on the local client, transmitted to other players via your game networking, and deserialized by the remote players.\nThis is a secure way of preventing hackers from lying about posessing rare/high-value items. Serializes a result set with signature bytes to an output buffer.\nThe size of a serialized result depends on the number items which are being serialized. When securely transmitting items to other players, it is recommended to use GetItemsByID first to create a minimal result set.\nResults have a built-in timestamp which will be considered \"expired\" after an hour has elapsed. See DeserializeResult for expiration handling.\nIf this is set pOutBuffer to NULL then punOutBufferSize will be set to the buffer size required. So you can make the buffer and then call this again to fill it with the data.\n\n@param        handle          The inventory result handle to serialize.\n@param        buffer          The buffer that the serialized result will be copied into." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SerializeResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SerializeResult", nullptr, nullptr, sizeof(Inventory_eventSerializeResult_Parms), Z_Construct_UFunction_UInventory_SerializeResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SerializeResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_SerializeResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SerializeResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_SerializeResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_SerializeResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_SetPropertyBool_Statics
	{
		struct Inventory_eventSetPropertyBool_Parms
		{
			FSteamInventoryUpdateHandle handle;
			FSteamItemInstanceID itemID;
			FString propertyName;
			bool value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_propertyName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventSetPropertyBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyBool_Parms), &Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_value_SetBit(void* Obj)
	{
		((Inventory_eventSetPropertyBool_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyBool_Parms), &Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_propertyName = { "propertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyBool_Parms, propertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyBool_Parms, itemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyBool_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_propertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_itemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09itemID\x09\x09\x09\x09ID of the item being modified.\n\x09* @param\x09propertyName\x09\x09The dynamic property being added or updated.\n\x09* @param\x09value\x09\x09\x09\x09The string value being set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param        handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        itemID                          ID of the item being modified.\n@param        propertyName            The dynamic property being added or updated.\n@param        value                           The string value being set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SetPropertyBool", nullptr, nullptr, sizeof(Inventory_eventSetPropertyBool_Parms), Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_SetPropertyBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_SetPropertyBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics
	{
		struct Inventory_eventSetPropertyFloat_Parms
		{
			FSteamInventoryUpdateHandle handle;
			FSteamItemInstanceID itemID;
			FString propertyName;
			float value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_propertyName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventSetPropertyFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyFloat_Parms), &Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyFloat_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_propertyName = { "propertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyFloat_Parms, propertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyFloat_Parms, itemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyFloat_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_propertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_itemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09itemID\x09\x09\x09\x09ID of the item being modified.\n\x09* @param\x09propertyName\x09\x09The dynamic property being added or updated.\n\x09* @param\x09value\x09\x09\x09\x09The string value being set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param        handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        itemID                          ID of the item being modified.\n@param        propertyName            The dynamic property being added or updated.\n@param        value                           The string value being set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SetPropertyFloat", nullptr, nullptr, sizeof(Inventory_eventSetPropertyFloat_Parms), Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_SetPropertyFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_SetPropertyFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_SetPropertyInt_Statics
	{
		struct Inventory_eventSetPropertyInt_Parms
		{
			FSteamInventoryUpdateHandle handle;
			FSteamItemInstanceID itemID;
			FString propertyName;
			int32 value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_propertyName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventSetPropertyInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyInt_Parms), &Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyInt_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_propertyName = { "propertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyInt_Parms, propertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyInt_Parms, itemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyInt_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_propertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_itemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09itemID\x09\x09\x09\x09ID of the item being modified.\n\x09* @param\x09propertyName\x09\x09The dynamic property being added or updated.\n\x09* @param\x09value\x09\x09\x09\x09The string value being set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param        handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        itemID                          ID of the item being modified.\n@param        propertyName            The dynamic property being added or updated.\n@param        value                           The string value being set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SetPropertyInt", nullptr, nullptr, sizeof(Inventory_eventSetPropertyInt_Parms), Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_SetPropertyInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_SetPropertyInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_SetPropertyString_Statics
	{
		struct Inventory_eventSetPropertyString_Parms
		{
			FSteamInventoryUpdateHandle handle;
			FSteamItemInstanceID itemID;
			FString propertyName;
			FString value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_propertyName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventSetPropertyString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventSetPropertyString_Parms), &Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyString_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_propertyName = { "propertyName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyString_Parms, propertyName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_itemID = { "itemID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyString_Parms, itemID), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSetPropertyString_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SetPropertyString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_propertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_itemID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SetPropertyString_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SetPropertyString_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n\x09* @param\x09itemID\x09\x09\x09\x09ID of the item being modified.\n\x09* @param\x09propertyName\x09\x09The dynamic property being added or updated.\n\x09* @param\x09value\x09\x09\x09\x09The string value being set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Sets a dynamic property for the given item. Supported value types are strings, boolean, 64 bit integers, and 32 bit floats.\n\n@param        handle                          The update handle corresponding to the transaction request, returned from StartUpdateProperties.\n@param        itemID                          ID of the item being modified.\n@param        propertyName            The dynamic property being added or updated.\n@param        value                           The string value being set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SetPropertyString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SetPropertyString", nullptr, nullptr, sizeof(Inventory_eventSetPropertyString_Parms), Z_Construct_UFunction_UInventory_SetPropertyString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SetPropertyString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_SetPropertyString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_SetPropertyString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_StartPurchase_Statics
	{
		struct Inventory_eventStartPurchase_Parms
		{
			TArray<FSteamItemDef> itemDefs;
			TArray<int32> quantity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_quantity;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_quantity_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemDefs_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_itemDefs;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemDefs_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_quantity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventStartPurchase_Parms, quantity), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_quantity_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_quantity_Inner = { "quantity", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_itemDefs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_itemDefs = { "itemDefs", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventStartPurchase_Parms, itemDefs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_itemDefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_itemDefs_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_itemDefs_Inner = { "itemDefs", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_StartPurchase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_quantity_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_itemDefs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_StartPurchase_Statics::NewProp_itemDefs_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_StartPurchase_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy. \n\x09*\n\x09* The user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\n\x09* If the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.\n\x09* If the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired. \n\x09* NOTE: You must call DestroyResult on the inventory result for when you are done with it.\n\x09*\n\x09* @param\x09itemDefs\x09\x09The array of item definition ids that the user wants to purchase.\n\x09* @param\x09quantity\x09\x09The array of quantities of each item definition that the user wants to purchase.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Starts the purchase process for the user, given a \"shopping cart\" of item definitions that the user would like to buy.\n\nThe user will be prompted in the Steam Overlay to complete the purchase in their local currency, funding their Steam Wallet if necessary, etc.\nIf the purchase process was started successfully, then m_ulOrderID and m_ulTransID will be valid in the SteamInventoryStartPurchaseResult_t call result.\nIf the user authorizes the transaction and completes the purchase, then the callback SteamInventoryResultReady_t will be triggered and you can then retrieve what new items the user has acquired.\nNOTE: You must call DestroyResult on the inventory result for when you are done with it.\n\n@param        itemDefs                The array of item definition ids that the user wants to purchase.\n@param        quantity                The array of quantities of each item definition that the user wants to purchase." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_StartPurchase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "StartPurchase", nullptr, nullptr, sizeof(Inventory_eventStartPurchase_Parms), Z_Construct_UFunction_UInventory_StartPurchase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartPurchase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_StartPurchase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartPurchase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_StartPurchase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_StartPurchase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Starts a transaction request to update dynamic properties on items for the current user. \n\x09*\n\x09* This call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\n\x09* After calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers. \n\x09* A SteamInventoryResultReady_t callback will be fired with the results of the operation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Starts a transaction request to update dynamic properties on items for the current user.\n\nThis call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\nAfter calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\nA SteamInventoryResultReady_t callback will be fired with the results of the operation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "StartUpdateProperties", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_StartUpdateProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_StartUpdateProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics
	{
		struct Inventory_eventSubmitUpdateProperties_Parms
		{
			FSteamInventoryUpdateHandle handle;
			FSteamInventoryResult resultHandle;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_resultHandle;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventSubmitUpdateProperties_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventSubmitUpdateProperties_Parms), &Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_resultHandle = { "resultHandle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSubmitUpdateProperties_Parms, resultHandle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventSubmitUpdateProperties_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_resultHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Starts a transaction request to update dynamic properties on items for the current user.\n\x09*\n\x09* This call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\n\x09* After calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\n\x09* A SteamInventoryResultReady_t callback will be fired with the results of the operation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Starts a transaction request to update dynamic properties on items for the current user.\n\nThis call is rate-limited by user, so property modifications should be batched as much as possible (e.g. at the end of a map or game session).\nAfter calling SetProperty or RemoveProperty for all the items that you want to modify, you will need to call SubmitUpdateProperties to send the request to the Steam servers.\nA SteamInventoryResultReady_t callback will be fired with the results of the operation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "SubmitUpdateProperties", nullptr, nullptr, sizeof(Inventory_eventSubmitUpdateProperties_Parms), Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_SubmitUpdateProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_SubmitUpdateProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics
	{
		struct Inventory_eventTransferItemQuantity_Parms
		{
			FSteamInventoryResult handle;
			FSteamItemInstanceID itemIDSource;
			int32 quantity;
			FSteamItemInstanceID itemIDDest;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemIDDest;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_quantity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_itemIDSource;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventTransferItemQuantity_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventTransferItemQuantity_Parms), &Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_itemIDDest = { "itemIDDest", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventTransferItemQuantity_Parms, itemIDDest), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_quantity = { "quantity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventTransferItemQuantity_Parms, quantity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_itemIDSource = { "itemIDSource", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventTransferItemQuantity_Parms, itemIDSource), Z_Construct_UScriptStruct_FSteamItemInstanceID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventTransferItemQuantity_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_itemIDDest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_itemIDSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Transfer items between stacks within a user's inventory.\n\x09*\n\x09* This can be used to stack, split, and moving items. The source and destination items must have the same itemdef id. \n\x09* To move items onto a destination stack specify the source, the quantity to move, and the destination item id. To split an existing stack, pass k_SteamItemInstanceIDInvalid into itemIdDest. A new item stack will be generated with the requested quantity.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09Returns a new inventory result handle.\n\x09* @param\x09itemIdSource\x09\x09The source item to transfer.\n\x09* @param\x09quantity\x09\x09\x09The quantity of the item that will be transfered from itemIdSource to itemIdDest.\n\x09* @param\x09itemIdDest\x09\x09\x09The destination item. You can pass k_SteamItemInstanceIDInvalid to split the source stack into a new item stack with the requested quantity.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Transfer items between stacks within a user's inventory.\n\nThis can be used to stack, split, and moving items. The source and destination items must have the same itemdef id.\nTo move items onto a destination stack specify the source, the quantity to move, and the destination item id. To split an existing stack, pass k_SteamItemInstanceIDInvalid into itemIdDest. A new item stack will be generated with the requested quantity.\n\n@param        handle                          Returns a new inventory result handle.\n@param        itemIdSource            The source item to transfer.\n@param        quantity                        The quantity of the item that will be transfered from itemIdSource to itemIdDest.\n@param        itemIdDest                      The destination item. You can pass k_SteamItemInstanceIDInvalid to split the source stack into a new item stack with the requested quantity." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "TransferItemQuantity", nullptr, nullptr, sizeof(Inventory_eventTransferItemQuantity_Parms), Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_TransferItemQuantity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_TransferItemQuantity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics
	{
		struct Inventory_eventTriggerItemDrop_Parms
		{
			FSteamInventoryResult handle;
			FSteamItemDef listDefinition;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_listDefinition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_handle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Inventory_eventTriggerItemDrop_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Inventory_eventTriggerItemDrop_Parms), &Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_listDefinition = { "listDefinition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventTriggerItemDrop_Parms, listDefinition), Z_Construct_UScriptStruct_FSteamItemDef, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_handle = { "handle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Inventory_eventTriggerItemDrop_Parms, handle), Z_Construct_UScriptStruct_FSteamInventoryResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_listDefinition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::NewProp_handle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Inventory" },
		{ "Comment", "/**\n\x09* Trigger an item drop if the user has played a long enough period of time.\n\x09*\n\x09* This period can be customized in two places:\n\x09* At the application level within Inventory Service: Playtime Item Grants. This will automatically apply to all \"playtimegenerator\" items that do not specify any overrides.\n\x09* In an individual \"playtimegenerator\" item definition. The settings would take precedence over any application-level settings.\n\x09* Only item definitions which are marked as \"playtime item generators\" can be spawned.\n\x09* Typically this function should be called at the end of a game or level or match or any point of significance in the game in which an item drop could occur. \n\x09* The granularity of the playtime generator settings is in minutes, so calling it more frequently than minutes is not useful and will be rate limited in the Steam client. \n\x09* The Steam servers will perform playtime accounting to prevent too-frequent drops. The servers will also manage adding the item to the players inventory.\n\x09*\n\x09* @param\x09handle\x09\x09\x09\x09Returns a new inventory result handle.\n\x09* @param\x09listDefinition\x09\x09This must refer to an itemdefid of the type \"playtimegenerator\". See the inventory schema for more details.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
		{ "ToolTip", "Trigger an item drop if the user has played a long enough period of time.\n\nThis period can be customized in two places:\nAt the application level within Inventory Service: Playtime Item Grants. This will automatically apply to all \"playtimegenerator\" items that do not specify any overrides.\nIn an individual \"playtimegenerator\" item definition. The settings would take precedence over any application-level settings.\nOnly item definitions which are marked as \"playtime item generators\" can be spawned.\nTypically this function should be called at the end of a game or level or match or any point of significance in the game in which an item drop could occur.\nThe granularity of the playtime generator settings is in minutes, so calling it more frequently than minutes is not useful and will be rate limited in the Steam client.\nThe Steam servers will perform playtime accounting to prevent too-frequent drops. The servers will also manage adding the item to the players inventory.\n\n@param        handle                          Returns a new inventory result handle.\n@param        listDefinition          This must refer to an itemdefid of the type \"playtimegenerator\". See the inventory schema for more details." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventory, nullptr, "TriggerItemDrop", nullptr, nullptr, sizeof(Inventory_eventTriggerItemDrop_Parms), Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventory_TriggerItemDrop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventory_TriggerItemDrop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventory_NoRegister()
	{
		return UInventory::StaticClass();
	}
	struct Z_Construct_UClass_UInventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryEligiblePromoItemDefIDs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryRequestPricesResultDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryRequestPricesResultDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryStartPurchaseResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryStartPurchaseResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryFullUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryFullUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryDefinitionUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryDefinitionUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamInventoryResultReady_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamInventoryResultReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventory_AddPromoItem, "AddPromoItem" }, // 1125317545
		{ &Z_Construct_UFunction_UInventory_AddPromoItems, "AddPromoItems" }, // 3489552765
		{ &Z_Construct_UFunction_UInventory_CheckResultSteamID, "CheckResultSteamID" }, // 3695990418
		{ &Z_Construct_UFunction_UInventory_ConsumeItem, "ConsumeItem" }, // 3869351168
		{ &Z_Construct_UFunction_UInventory_DeserializeResult, "DeserializeResult" }, // 637927396
		{ &Z_Construct_UFunction_UInventory_DestroyResult, "DestroyResult" }, // 1199101895
		{ &Z_Construct_UFunction_UInventory_ExchangeItems, "ExchangeItems" }, // 964818609
		{ &Z_Construct_UFunction_UInventory_GenerateItems, "GenerateItems" }, // 93108306
		{ &Z_Construct_UFunction_UInventory_GetAllItems, "GetAllItems" }, // 4179440561
		{ &Z_Construct_UFunction_UInventory_GetEligiblePromoItemDefinitionIDs, "GetEligiblePromoItemDefinitionIDs" }, // 3302064247
		{ &Z_Construct_UFunction_UInventory_GetItemDefinitionIDs, "GetItemDefinitionIDs" }, // 3513210326
		{ &Z_Construct_UFunction_UInventory_GetItemDefinitionProperty, "GetItemDefinitionProperty" }, // 597224350
		{ &Z_Construct_UFunction_UInventory_GetItemPrice, "GetItemPrice" }, // 4236461688
		{ &Z_Construct_UFunction_UInventory_GetItemsByID, "GetItemsByID" }, // 1556748921
		{ &Z_Construct_UFunction_UInventory_GetItemsWithPrices, "GetItemsWithPrices" }, // 1033711830
		{ &Z_Construct_UFunction_UInventory_GetNumItemsWithPrices, "GetNumItemsWithPrices" }, // 4234158887
		{ &Z_Construct_UFunction_UInventory_GetResultItemProperty, "GetResultItemProperty" }, // 1634630328
		{ &Z_Construct_UFunction_UInventory_GetResultItems, "GetResultItems" }, // 3045355930
		{ &Z_Construct_UFunction_UInventory_GetResultStatus, "GetResultStatus" }, // 2438520133
		{ &Z_Construct_UFunction_UInventory_GetResultTimestamp, "GetResultTimestamp" }, // 1794558007
		{ &Z_Construct_UFunction_UInventory_GrantPromoItems, "GrantPromoItems" }, // 445437686
		{ &Z_Construct_UFunction_UInventory_LoadItemDefinitions, "LoadItemDefinitions" }, // 2261746382
		{ &Z_Construct_UFunction_UInventory_RemoveProperty, "RemoveProperty" }, // 532918618
		{ &Z_Construct_UFunction_UInventory_RequestEligiblePromoItemDefinitionsIDs, "RequestEligiblePromoItemDefinitionsIDs" }, // 3361422019
		{ &Z_Construct_UFunction_UInventory_RequestPrices, "RequestPrices" }, // 3292178413
		{ &Z_Construct_UFunction_UInventory_SerializeResult, "SerializeResult" }, // 3496735654
		{ &Z_Construct_UFunction_UInventory_SetPropertyBool, "SetPropertyBool" }, // 46915092
		{ &Z_Construct_UFunction_UInventory_SetPropertyFloat, "SetPropertyFloat" }, // 2950002665
		{ &Z_Construct_UFunction_UInventory_SetPropertyInt, "SetPropertyInt" }, // 2529917433
		{ &Z_Construct_UFunction_UInventory_SetPropertyString, "SetPropertyString" }, // 887069929
		{ &Z_Construct_UFunction_UInventory_StartPurchase, "StartPurchase" }, // 4120562858
		{ &Z_Construct_UFunction_UInventory_StartUpdateProperties, "StartUpdateProperties" }, // 3275291076
		{ &Z_Construct_UFunction_UInventory_SubmitUpdateProperties, "SubmitUpdateProperties" }, // 1473274415
		{ &Z_Construct_UFunction_UInventory_TransferItemQuantity, "TransferItemQuantity" }, // 104661436
		{ &Z_Construct_UFunction_UInventory_TriggerItemDrop, "TriggerItemDrop" }, // 3207371187
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Inventory/Inventory.h" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs = { "SteamInventoryEligiblePromoItemDefIDs", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, SteamInventoryEligiblePromoItemDefIDs), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryEligiblePromoItemDefIDs__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate = { "SteamInventoryRequestPricesResultDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, SteamInventoryRequestPricesResultDelegate), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryRequestPricesResultDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryStartPurchaseResult_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryStartPurchaseResult = { "SteamInventoryStartPurchaseResult", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, SteamInventoryStartPurchaseResult), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryStartPurchaseResult__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryStartPurchaseResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryStartPurchaseResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryFullUpdate_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryFullUpdate = { "SteamInventoryFullUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, SteamInventoryFullUpdate), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryFullUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryFullUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryFullUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryDefinitionUpdate_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryDefinitionUpdate = { "SteamInventoryDefinitionUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, SteamInventoryDefinitionUpdate), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryDefinitionUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryDefinitionUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryDefinitionUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryResultReady_MetaData[] = {
		{ "Category", "SteamCore|Inventory|Delegates" },
		{ "ModuleRelativePath", "Public/Inventory/Inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryResultReady = { "SteamInventoryResultReady", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventory, SteamInventoryResultReady), Z_Construct_UDelegateFunction_SteamCore_OnSteamInventoryResultReady__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryResultReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryResultReady_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryEligiblePromoItemDefIDs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryRequestPricesResultDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryStartPurchaseResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryFullUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryDefinitionUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventory_Statics::NewProp_SteamInventoryResultReady,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventory_Statics::ClassParams = {
		&UInventory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventory, 2798045419);
	template<> STEAMCORE_API UClass* StaticClass<UInventory>()
	{
		return UInventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventory(Z_Construct_UClass_UInventory, &UInventory::StaticClass, TEXT("/Script/SteamCore"), TEXT("UInventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
