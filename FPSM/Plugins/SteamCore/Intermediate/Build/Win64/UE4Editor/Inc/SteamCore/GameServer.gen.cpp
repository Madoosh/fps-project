// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GameServer/GameServer.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameServer() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UGameServer_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UGameServer();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGameServer::execWasRestartRequested)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WasRestartRequested();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execUserHasLicenseForApp)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamUserHasLicenseForAppResult*)Z_Param__Result=P_THIS->UserHasLicenseForApp(Z_Param_steamID,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetSpectatorServerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_spectatorServerName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpectatorServerName(Z_Param_spectatorServerName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetSpectatorPort)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_spectatorPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpectatorPort(Z_Param_spectatorPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetServerName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_serverName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetServerName(Z_Param_serverName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetRegion)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_region);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRegion(Z_Param_region);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetProduct)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_product);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProduct(Z_Param_product);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetPasswordProtected)
	{
		P_GET_UBOOL(Z_Param_bPasswordProtected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPasswordProtected(Z_Param_bPasswordProtected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetModDir)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_modDir);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModDir(Z_Param_modDir);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetMaxPlayerCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playersMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxPlayerCount(Z_Param_playersMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetMapName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_mapName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMapName(Z_Param_mapName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetKeyValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetKeyValue(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetHeartbeatInterval)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_heartbeatInterval);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeartbeatInterval(Z_Param_heartbeatInterval);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetGameTags)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_gameTags);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameTags(Z_Param_gameTags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetGameDescription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_gameDescription);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameDescription(Z_Param_gameDescription);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetGameData)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_gameData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameData(Z_Param_gameData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetDedicatedServer)
	{
		P_GET_UBOOL(Z_Param_bDedicated);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDedicatedServer(Z_Param_bDedicated);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execSetBotPlayerCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_botplayers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBotPlayerCount(Z_Param_botplayers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execRequestUserGroupStatus)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDGroup);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RequestUserGroupStatus(Z_Param_steamIDUser,Z_Param_steamIDGroup);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execLogOnAnonymous)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogOnAnonymous();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execLogOn)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_token);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogOn(Z_Param_token);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execLogOff)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LogOff();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execGetServerSteamID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->GetServerSteamID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execGetServerPublicIP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetServerPublicIP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execGetAuthSessionTicket)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ticket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamTicketHandle*)Z_Param__Result=P_THIS->GetAuthSessionTicket(Z_Param_Out_ticket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execForceHeartbeat)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForceHeartbeat();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execEndAuthSession)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndAuthSession(Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execEnableHeartbeats)
	{
		P_GET_UBOOL(Z_Param_bActive);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableHeartbeats(Z_Param_bActive);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execCreateUnauthenticatedUserConnection)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=P_THIS->CreateUnauthenticatedUserConnection();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execComputeNewPlayerCompatibility)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDNewPlayer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComputeNewPlayerCompatibility(FOnComputeNewPlayerCompatibility(Z_Param_Out_callback),Z_Param_steamIDNewPlayer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execClearAllKeyValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearAllKeyValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execCancelAuthTicket)
	{
		P_GET_STRUCT(FSteamTicketHandle,Z_Param_ticketHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CancelAuthTicket(Z_Param_ticketHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execBUpdateUserData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_playerName);
		P_GET_PROPERTY(FIntProperty,Z_Param_score);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BUpdateUserData(Z_Param_steamIDUser,Z_Param_playerName,Z_Param_score);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execBSecure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BSecure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execBLoggedOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BLoggedOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execBeginAuthSession)
	{
		P_GET_TARRAY(uint8,Z_Param_ticket);
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamBeginAuthSessionResult*)Z_Param__Result=P_THIS->BeginAuthSession(Z_Param_ticket,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServer::execAssociateWithClan)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDClan);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AssociateWithClan(FOnAssociateWithClan(Z_Param_Out_callback),Z_Param_steamIDClan);
		P_NATIVE_END;
	}
	void UGameServer::StaticRegisterNativesUGameServer()
	{
		UClass* Class = UGameServer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssociateWithClan", &UGameServer::execAssociateWithClan },
			{ "BeginAuthSession", &UGameServer::execBeginAuthSession },
			{ "BLoggedOn", &UGameServer::execBLoggedOn },
			{ "BSecure", &UGameServer::execBSecure },
			{ "BUpdateUserData", &UGameServer::execBUpdateUserData },
			{ "CancelAuthTicket", &UGameServer::execCancelAuthTicket },
			{ "ClearAllKeyValues", &UGameServer::execClearAllKeyValues },
			{ "ComputeNewPlayerCompatibility", &UGameServer::execComputeNewPlayerCompatibility },
			{ "CreateUnauthenticatedUserConnection", &UGameServer::execCreateUnauthenticatedUserConnection },
			{ "EnableHeartbeats", &UGameServer::execEnableHeartbeats },
			{ "EndAuthSession", &UGameServer::execEndAuthSession },
			{ "ForceHeartbeat", &UGameServer::execForceHeartbeat },
			{ "GetAuthSessionTicket", &UGameServer::execGetAuthSessionTicket },
			{ "GetServerPublicIP", &UGameServer::execGetServerPublicIP },
			{ "GetServerSteamID", &UGameServer::execGetServerSteamID },
			{ "LogOff", &UGameServer::execLogOff },
			{ "LogOn", &UGameServer::execLogOn },
			{ "LogOnAnonymous", &UGameServer::execLogOnAnonymous },
			{ "RequestUserGroupStatus", &UGameServer::execRequestUserGroupStatus },
			{ "SetBotPlayerCount", &UGameServer::execSetBotPlayerCount },
			{ "SetDedicatedServer", &UGameServer::execSetDedicatedServer },
			{ "SetGameData", &UGameServer::execSetGameData },
			{ "SetGameDescription", &UGameServer::execSetGameDescription },
			{ "SetGameTags", &UGameServer::execSetGameTags },
			{ "SetHeartbeatInterval", &UGameServer::execSetHeartbeatInterval },
			{ "SetKeyValue", &UGameServer::execSetKeyValue },
			{ "SetMapName", &UGameServer::execSetMapName },
			{ "SetMaxPlayerCount", &UGameServer::execSetMaxPlayerCount },
			{ "SetModDir", &UGameServer::execSetModDir },
			{ "SetPasswordProtected", &UGameServer::execSetPasswordProtected },
			{ "SetProduct", &UGameServer::execSetProduct },
			{ "SetRegion", &UGameServer::execSetRegion },
			{ "SetServerName", &UGameServer::execSetServerName },
			{ "SetSpectatorPort", &UGameServer::execSetSpectatorPort },
			{ "SetSpectatorServerName", &UGameServer::execSetSpectatorServerName },
			{ "UserHasLicenseForApp", &UGameServer::execUserHasLicenseForApp },
			{ "WasRestartRequested", &UGameServer::execWasRestartRequested },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics
	{
		struct GameServer_eventAssociateWithClan_Parms
		{
			FScriptDelegate callback;
			FSteamID steamIDClan;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDClan;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::NewProp_steamIDClan = { "steamIDClan", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventAssociateWithClan_Parms, steamIDClan), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventAssociateWithClan_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnAssociateWithClan__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::NewProp_steamIDClan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Associate this game server with this clan for the purposes of computing player compatibility.\n\x09*\n\x09* @param\x09steamIDClan\x09\x09The Steam ID of the group you want to be associated with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Associate this game server with this clan for the purposes of computing player compatibility.\n\n@param        steamIDClan             The Steam ID of the group you want to be associated with." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "AssociateWithClan", nullptr, nullptr, sizeof(GameServer_eventAssociateWithClan_Parms), Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_AssociateWithClan()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_AssociateWithClan_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics
	{
		struct GameServer_eventBeginAuthSession_Parms
		{
			TArray<uint8> ticket;
			FSteamID steamID;
			ESteamBeginAuthSessionResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ticket;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ticket_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventBeginAuthSession_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventBeginAuthSession_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::NewProp_ticket = { "ticket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventBeginAuthSession_Parms, ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::NewProp_ticket_Inner = { "ticket", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::NewProp_ticket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::NewProp_ticket_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\x09*\n\x09* The ticket is created on the entity with ISteamUser::GetAuthSessionTicket or GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\n\x09* This registers for ValidateAuthTicketResponse_t callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\n\x09* When the multiplayer session terminates you must call EndAuthSession.\n\x09*\n\x09* @param\x09ticket\x09\x09The auth ticket to validate.\n\x09* @param\x09steamID\x09\x09The entity's Steam ID that sent this ticket.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\nThe ticket is created on the entity with ISteamUser::GetAuthSessionTicket or GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\nThis registers for ValidateAuthTicketResponse_t callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\nWhen the multiplayer session terminates you must call EndAuthSession.\n\n@param        ticket          The auth ticket to validate.\n@param        steamID         The entity's Steam ID that sent this ticket." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "BeginAuthSession", nullptr, nullptr, sizeof(GameServer_eventBeginAuthSession_Parms), Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_BeginAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_BeginAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_BLoggedOn_Statics
	{
		struct GameServer_eventBLoggedOn_Parms
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
	void Z_Construct_UFunction_UGameServer_BLoggedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServer_eventBLoggedOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServer_BLoggedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServer_eventBLoggedOn_Parms), &Z_Construct_UFunction_UGameServer_BLoggedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_BLoggedOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_BLoggedOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_BLoggedOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if the game server is logged on.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Checks if the game server is logged on." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_BLoggedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "BLoggedOn", nullptr, nullptr, sizeof(GameServer_eventBLoggedOn_Parms), Z_Construct_UFunction_UGameServer_BLoggedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_BLoggedOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_BLoggedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_BLoggedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_BLoggedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_BLoggedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_BSecure_Statics
	{
		struct GameServer_eventBSecure_Parms
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
	void Z_Construct_UFunction_UGameServer_BSecure_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServer_eventBSecure_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServer_BSecure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServer_eventBSecure_Parms), &Z_Construct_UFunction_UGameServer_BSecure_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_BSecure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_BSecure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_BSecure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks whether the game server is in \"Secure\" mode.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Checks whether the game server is in \"Secure\" mode." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_BSecure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "BSecure", nullptr, nullptr, sizeof(GameServer_eventBSecure_Parms), Z_Construct_UFunction_UGameServer_BSecure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_BSecure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_BSecure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_BSecure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_BSecure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_BSecure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics
	{
		struct GameServer_eventBUpdateUserData_Parms
		{
			FSteamID steamIDUser;
			FString playerName;
			int32 score;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_score;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServer_eventBUpdateUserData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServer_eventBUpdateUserData_Parms), &Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventBUpdateUserData_Parms, score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::NewProp_playerName = { "playerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventBUpdateUserData_Parms, playerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventBUpdateUserData_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::NewProp_playerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks whether the game server is in \"Secure\" mode.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09The Steam ID of the user.\n\x09* @param\x09playerName\x09\x09The name of the user.\n\x09* @param\x09score\x09\x09\x09The current score of the user.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Checks whether the game server is in \"Secure\" mode.\n\n@param        steamIDUser             The Steam ID of the user.\n@param        playerName              The name of the user.\n@param        score                   The current score of the user." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "BUpdateUserData", nullptr, nullptr, sizeof(GameServer_eventBUpdateUserData_Parms), Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_BUpdateUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_BUpdateUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_CancelAuthTicket_Statics
	{
		struct GameServer_eventCancelAuthTicket_Parms
		{
			FSteamTicketHandle ticketHandle;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ticketHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServer_CancelAuthTicket_Statics::NewProp_ticketHandle = { "ticketHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventCancelAuthTicket_Parms, ticketHandle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_CancelAuthTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_CancelAuthTicket_Statics::NewProp_ticketHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_CancelAuthTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Cancels an auth ticket received from ISteamUser::GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\x09*\n\x09* @param\x09ticketHandle\x09The active auth ticket to cancel.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Cancels an auth ticket received from ISteamUser::GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\n@param        ticketHandle    The active auth ticket to cancel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_CancelAuthTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "CancelAuthTicket", nullptr, nullptr, sizeof(GameServer_eventCancelAuthTicket_Parms), Z_Construct_UFunction_UGameServer_CancelAuthTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_CancelAuthTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_CancelAuthTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_CancelAuthTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_CancelAuthTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_CancelAuthTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_ClearAllKeyValues_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Clears the whole list of key/values that are sent in rules queries.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Clears the whole list of key/values that are sent in rules queries." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_ClearAllKeyValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "ClearAllKeyValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_ClearAllKeyValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_ClearAllKeyValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_ClearAllKeyValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics
	{
		struct GameServer_eventComputeNewPlayerCompatibility_Parms
		{
			FScriptDelegate callback;
			FSteamID steamIDNewPlayer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDNewPlayer;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_steamIDNewPlayer = { "steamIDNewPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventComputeNewPlayerCompatibility_Parms, steamIDNewPlayer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventComputeNewPlayerCompatibility_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnComputeNewPlayerCompatibility__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_steamIDNewPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if any of the current players don't want to play with this new player that is attempting to join - or vice versa; based on the frenemy system.\n\x09*\n\x09* @param\x09steamIDNewPlayer\x09The Steam ID of the player that is attempting to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Checks if any of the current players don't want to play with this new player that is attempting to join - or vice versa; based on the frenemy system.\n\n@param        steamIDNewPlayer        The Steam ID of the player that is attempting to join." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "ComputeNewPlayerCompatibility", nullptr, nullptr, sizeof(GameServer_eventComputeNewPlayerCompatibility_Parms), Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_CreateUnauthenticatedUserConnection_Statics
	{
		struct GameServer_eventCreateUnauthenticatedUserConnection_Parms
		{
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServer_CreateUnauthenticatedUserConnection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventCreateUnauthenticatedUserConnection_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_CreateUnauthenticatedUserConnection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Creates a fake user (ie, a bot) which will be listed as playing on the server, but skips validation." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_CreateUnauthenticatedUserConnection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "CreateUnauthenticatedUserConnection", nullptr, nullptr, sizeof(GameServer_eventCreateUnauthenticatedUserConnection_Parms), Z_Construct_UFunction_UGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_CreateUnauthenticatedUserConnection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_CreateUnauthenticatedUserConnection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_CreateUnauthenticatedUserConnection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_CreateUnauthenticatedUserConnection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_EnableHeartbeats_Statics
	{
		struct GameServer_eventEnableHeartbeats_Parms
		{
			bool bActive;
		};
		static void NewProp_bActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameServer_EnableHeartbeats_Statics::NewProp_bActive_SetBit(void* Obj)
	{
		((GameServer_eventEnableHeartbeats_Parms*)Obj)->bActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServer_EnableHeartbeats_Statics::NewProp_bActive = { "bActive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServer_eventEnableHeartbeats_Parms), &Z_Construct_UFunction_UGameServer_EnableHeartbeats_Statics::NewProp_bActive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_EnableHeartbeats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_EnableHeartbeats_Statics::NewProp_bActive,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_EnableHeartbeats_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Tells the Steam master servers whether or not you want to be active.\n\x09*\n\x09* If this is enabled then the server will talk to the master servers, if it's not then incoming messages are ignored and heartbeats will not be sent.\n\x09*\n\x09* @param\x09""bActive\x09\x09""Enable (true) or disable (false) the master server updater.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Tells the Steam master servers whether or not you want to be active.\n\nIf this is enabled then the server will talk to the master servers, if it's not then incoming messages are ignored and heartbeats will not be sent.\n\n@param        bActive         Enable (true) or disable (false) the master server updater." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_EnableHeartbeats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "EnableHeartbeats", nullptr, nullptr, sizeof(GameServer_eventEnableHeartbeats_Parms), Z_Construct_UFunction_UGameServer_EnableHeartbeats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_EnableHeartbeats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_EnableHeartbeats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_EnableHeartbeats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_EnableHeartbeats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_EnableHeartbeats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_EndAuthSession_Statics
	{
		struct GameServer_eventEndAuthSession_Parms
		{
			FSteamID steamID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServer_EndAuthSession_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventEndAuthSession_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_EndAuthSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_EndAuthSession_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_EndAuthSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\x09*\n\x09* @param\x09steamID\x09\x09The entity to end the active auth session with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\n@param        steamID         The entity to end the active auth session with." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_EndAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "EndAuthSession", nullptr, nullptr, sizeof(GameServer_eventEndAuthSession_Parms), Z_Construct_UFunction_UGameServer_EndAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_EndAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_EndAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_EndAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_EndAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_EndAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_ForceHeartbeat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_ForceHeartbeat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Force a heartbeat to the Steam master servers at the next opportunity.\n\x09*\n\x09* You usually don't need to use this.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Force a heartbeat to the Steam master servers at the next opportunity.\n\nYou usually don't need to use this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_ForceHeartbeat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "ForceHeartbeat", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_ForceHeartbeat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_ForceHeartbeat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_ForceHeartbeat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_ForceHeartbeat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics
	{
		struct GameServer_eventGetAuthSessionTicket_Parms
		{
			TArray<uint8> ticket;
			FSteamTicketHandle ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ticket;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ticket_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventGetAuthSessionTicket_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics::NewProp_ticket = { "ticket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventGetAuthSessionTicket_Parms, ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics::NewProp_ticket_Inner = { "ticket", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics::NewProp_ticket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics::NewProp_ticket_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\x09*\n\x09* After calling this you can send the ticket to the entity where they can then call ISteamUser::BeginAuthSession to verify this entities integrity.\n\x09* When creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, the calling application should wait for the GetAuthSessionTicketResponse_t callback \n\x09* generated by the API call before attempting to use the ticket to ensure that the ticket has been communicated to the server. \n\x09* If this callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam, and the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\x09*\n\x09* @param\x09ticket\x09\x09The buffer where the new auth ticket will be copied into if the call was successful.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\nAfter calling this you can send the ticket to the entity where they can then call ISteamUser::BeginAuthSession to verify this entities integrity.\nWhen creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, the calling application should wait for the GetAuthSessionTicketResponse_t callback\ngenerated by the API call before attempting to use the ticket to ensure that the ticket has been communicated to the server.\nIf this callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam, and the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\n@param        ticket          The buffer where the new auth ticket will be copied into if the call was successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "GetAuthSessionTicket", nullptr, nullptr, sizeof(GameServer_eventGetAuthSessionTicket_Parms), Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_GetAuthSessionTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_GetAuthSessionTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_GetServerPublicIP_Statics
	{
		struct GameServer_eventGetServerPublicIP_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServer_GetServerPublicIP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventGetServerPublicIP_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_GetServerPublicIP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_GetServerPublicIP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_GetServerPublicIP_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_GetServerPublicIP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "GetServerPublicIP", nullptr, nullptr, sizeof(GameServer_eventGetServerPublicIP_Parms), Z_Construct_UFunction_UGameServer_GetServerPublicIP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_GetServerPublicIP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_GetServerPublicIP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_GetServerPublicIP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_GetServerPublicIP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_GetServerPublicIP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_GetServerSteamID_Statics
	{
		struct GameServer_eventGetServerSteamID_Parms
		{
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServer_GetServerSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventGetServerSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_GetServerSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_GetServerSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_GetServerSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the game server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Gets the Steam ID of the game server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_GetServerSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "GetServerSteamID", nullptr, nullptr, sizeof(GameServer_eventGetServerSteamID_Parms), Z_Construct_UFunction_UGameServer_GetServerSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_GetServerSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_GetServerSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_GetServerSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_GetServerSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_GetServerSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_LogOff_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_LogOff_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Begin process of logging the game server out of steam.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Begin process of logging the game server out of steam." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_LogOff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "LogOff", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_LogOff_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_LogOff_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_LogOff()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_LogOff_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_LogOn_Statics
	{
		struct GameServer_eventLogOn_Parms
		{
			FString token;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_token;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServer_LogOn_Statics::NewProp_token = { "token", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventLogOn_Parms, token), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_LogOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_LogOn_Statics::NewProp_token,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_LogOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Begin process to login to a persistent game server account.\n\x09* \n\x09* @param\x09token\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Begin process to login to a persistent game server account.\n\n@param        token" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_LogOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "LogOn", nullptr, nullptr, sizeof(GameServer_eventLogOn_Parms), Z_Construct_UFunction_UGameServer_LogOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_LogOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_LogOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_LogOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_LogOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_LogOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_LogOnAnonymous_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_LogOnAnonymous_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Login to a generic, anonymous account.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Login to a generic, anonymous account." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_LogOnAnonymous_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "LogOnAnonymous", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_LogOnAnonymous_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_LogOnAnonymous_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_LogOnAnonymous()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_LogOnAnonymous_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics
	{
		struct GameServer_eventRequestUserGroupStatus_Parms
		{
			FSteamID steamIDUser;
			FSteamID steamIDGroup;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDGroup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServer_eventRequestUserGroupStatus_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServer_eventRequestUserGroupStatus_Parms), &Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::NewProp_steamIDGroup = { "steamIDGroup", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventRequestUserGroupStatus_Parms, steamIDGroup), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventRequestUserGroupStatus_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::NewProp_steamIDGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if a user is in the specified Steam group.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09The user to check the group status of.\n\x09* @param\x09steamIDGroup\x09The group to check.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Checks if a user is in the specified Steam group.\n\n@param        steamIDUser             The user to check the group status of.\n@param        steamIDGroup    The group to check." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "RequestUserGroupStatus", nullptr, nullptr, sizeof(GameServer_eventRequestUserGroupStatus_Parms), Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_RequestUserGroupStatus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_RequestUserGroupStatus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetBotPlayerCount_Statics
	{
		struct GameServer_eventSetBotPlayerCount_Parms
		{
			int32 botplayers;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_botplayers;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameServer_SetBotPlayerCount_Statics::NewProp_botplayers = { "botplayers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetBotPlayerCount_Parms, botplayers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetBotPlayerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetBotPlayerCount_Statics::NewProp_botplayers,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the number of bot/AI players on the game server. The default value is 0.\n\x09*\n\x09* @param\x09""botplayers\x09The number of bot/AI players currently playing on the server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Sets the number of bot/AI players on the game server. The default value is 0.\n\n@param        botplayers      The number of bot/AI players currently playing on the server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetBotPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetBotPlayerCount", nullptr, nullptr, sizeof(GameServer_eventSetBotPlayerCount_Parms), Z_Construct_UFunction_UGameServer_SetBotPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetBotPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetBotPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetBotPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetBotPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetDedicatedServer_Statics
	{
		struct GameServer_eventSetDedicatedServer_Parms
		{
			bool bDedicated;
		};
		static void NewProp_bDedicated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDedicated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameServer_SetDedicatedServer_Statics::NewProp_bDedicated_SetBit(void* Obj)
	{
		((GameServer_eventSetDedicatedServer_Parms*)Obj)->bDedicated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServer_SetDedicatedServer_Statics::NewProp_bDedicated = { "bDedicated", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServer_eventSetDedicatedServer_Parms), &Z_Construct_UFunction_UGameServer_SetDedicatedServer_Statics::NewProp_bDedicated_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetDedicatedServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetDedicatedServer_Statics::NewProp_bDedicated,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetDedicatedServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the whether this is a dedicated server or a listen server. The default is listen server.\n\x09*\n\x09* @param\x09""bDedicated\x09\x09Is this a dedicated server (true) or a listen server (false)?\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Sets the whether this is a dedicated server or a listen server. The default is listen server.\n\n@param        bDedicated              Is this a dedicated server (true) or a listen server (false)?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetDedicatedServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetDedicatedServer", nullptr, nullptr, sizeof(GameServer_eventSetDedicatedServer_Parms), Z_Construct_UFunction_UGameServer_SetDedicatedServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetDedicatedServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetDedicatedServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetDedicatedServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetDedicatedServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetDedicatedServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetGameData_Statics
	{
		struct GameServer_eventSetGameData_Parms
		{
			FString gameData;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServer_SetGameData_Statics::NewProp_gameData = { "gameData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetGameData_Parms, gameData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetGameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetGameData_Statics::NewProp_gameData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetGameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets a string defining the \"gamedata\" for this server.\n\x09*\n\x09* This is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\n\x09* This is usually formatted as a comma or semicolon separated list.\n\x09* Don't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\x09*\n\x09* @param\x09gameData\x09The new \"gamedata\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameData.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Sets a string defining the \"gamedata\" for this server.\n\nThis is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\nThis is usually formatted as a comma or semicolon separated list.\nDon't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\n@param        gameData        The new \"gamedata\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameData." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetGameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetGameData", nullptr, nullptr, sizeof(GameServer_eventSetGameData_Parms), Z_Construct_UFunction_UGameServer_SetGameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetGameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetGameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetGameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetGameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetGameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetGameDescription_Statics
	{
		struct GameServer_eventSetGameDescription_Parms
		{
			FString gameDescription;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameDescription;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServer_SetGameDescription_Statics::NewProp_gameDescription = { "gameDescription", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetGameDescription_Parms, gameDescription), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetGameDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetGameDescription_Statics::NewProp_gameDescription,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetGameDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the game description. Setting this to the full name of your game is recommended.\n\x09*\n\x09* This is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.\n\x09*\n\x09* @param\x09gameDescription\x09\x09The description of your game. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDescription.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Sets the game description. Setting this to the full name of your game is recommended.\n\nThis is required for all game servers and can only be set before calling LogOn or LogOnAnonymous.\n\n@param        gameDescription         The description of your game. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDescription." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetGameDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetGameDescription", nullptr, nullptr, sizeof(GameServer_eventSetGameDescription_Parms), Z_Construct_UFunction_UGameServer_SetGameDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetGameDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetGameDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetGameDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetGameDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetGameDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetGameTags_Statics
	{
		struct GameServer_eventSetGameTags_Parms
		{
			FString gameTags;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameTags;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServer_SetGameTags_Statics::NewProp_gameTags = { "gameTags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetGameTags_Parms, gameTags), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetGameTags_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetGameTags_Statics::NewProp_gameTags,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetGameTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets a string defining the \"gametags\" for this server, this is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\n\x09*\n\x09* This is usually formatted as a comma or semicolon separated list.\n\x09* Don't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\x09*\n\x09* @param\x09gameTags\x09The new \"gametags\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerTags.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Sets a string defining the \"gametags\" for this server, this is optional, but if set it allows users to filter in the matchmaking/server-browser interfaces based on the value.\n\nThis is usually formatted as a comma or semicolon separated list.\nDon't set this unless it actually changes, its only uploaded to the master once; when acknowledged.\n\n@param        gameTags        The new \"gametags\" value to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerTags." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetGameTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetGameTags", nullptr, nullptr, sizeof(GameServer_eventSetGameTags_Parms), Z_Construct_UFunction_UGameServer_SetGameTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetGameTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetGameTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetGameTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetGameTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetGameTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetHeartbeatInterval_Statics
	{
		struct GameServer_eventSetHeartbeatInterval_Parms
		{
			int32 heartbeatInterval;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_heartbeatInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameServer_SetHeartbeatInterval_Statics::NewProp_heartbeatInterval = { "heartbeatInterval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetHeartbeatInterval_Parms, heartbeatInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetHeartbeatInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetHeartbeatInterval_Statics::NewProp_heartbeatInterval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetHeartbeatInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Changes how often heartbeats are sent to the Steam master servers.\n\x09*\n\x09* You usually don't need to use this.\n\x09*\n\x09* @param\x09heartbeatInterval\x09The interval between sending heartbeats in milliseconds. Typically would range between 250-1000. Use -1 to use the default value.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Changes how often heartbeats are sent to the Steam master servers.\n\nYou usually don't need to use this.\n\n@param        heartbeatInterval       The interval between sending heartbeats in milliseconds. Typically would range between 250-1000. Use -1 to use the default value." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetHeartbeatInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetHeartbeatInterval", nullptr, nullptr, sizeof(GameServer_eventSetHeartbeatInterval_Parms), Z_Construct_UFunction_UGameServer_SetHeartbeatInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetHeartbeatInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetHeartbeatInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetHeartbeatInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetHeartbeatInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetHeartbeatInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetKeyValue_Statics
	{
		struct GameServer_eventSetKeyValue_Parms
		{
			FString key;
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServer_SetKeyValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetKeyValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServer_SetKeyValue_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetKeyValue_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetKeyValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetKeyValue_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetKeyValue_Statics::NewProp_key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetKeyValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/** \n\x09* Add/update a rules key/value pair.\n\x09*\n\x09* @param\x09key\x09\x09\x09key to update\n\x09* @param\x09value\x09\x09value to set\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Add/update a rules key/value pair.\n\n@param        key                     key to update\n@param        value           value to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetKeyValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetKeyValue", nullptr, nullptr, sizeof(GameServer_eventSetKeyValue_Parms), Z_Construct_UFunction_UGameServer_SetKeyValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetKeyValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetKeyValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetKeyValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetKeyValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetKeyValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetMapName_Statics
	{
		struct GameServer_eventSetMapName_Parms
		{
			FString mapName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mapName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServer_SetMapName_Statics::NewProp_mapName = { "mapName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetMapName_Parms, mapName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetMapName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetMapName_Statics::NewProp_mapName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetMapName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the name of map to report in the server browser.\n\x09*\n\x09* @param\x09mapName\x09\x09The new map name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Sets the name of map to report in the server browser.\n\n@param        mapName         The new map name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetMapName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetMapName", nullptr, nullptr, sizeof(GameServer_eventSetMapName_Parms), Z_Construct_UFunction_UGameServer_SetMapName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetMapName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetMapName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetMapName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetMapName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetMapName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetMaxPlayerCount_Statics
	{
		struct GameServer_eventSetMaxPlayerCount_Parms
		{
			int32 playersMax;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playersMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameServer_SetMaxPlayerCount_Statics::NewProp_playersMax = { "playersMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetMaxPlayerCount_Parms, playersMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetMaxPlayerCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetMaxPlayerCount_Statics::NewProp_playersMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the maximum number of players allowed on the server at once.\n\x09*\n\x09* This value may be changed at any time.\n\x09*\n\x09* @param\x09playersMax\x09\x09The new maximum number of players allowed on this server.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Sets the maximum number of players allowed on the server at once.\n\nThis value may be changed at any time.\n\n@param        playersMax              The new maximum number of players allowed on this server." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetMaxPlayerCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetMaxPlayerCount", nullptr, nullptr, sizeof(GameServer_eventSetMaxPlayerCount_Parms), Z_Construct_UFunction_UGameServer_SetMaxPlayerCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetMaxPlayerCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetMaxPlayerCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetMaxPlayerCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetMaxPlayerCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetModDir_Statics
	{
		struct GameServer_eventSetModDir_Parms
		{
			FString modDir;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_modDir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServer_SetModDir_Statics::NewProp_modDir = { "modDir", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetModDir_Parms, modDir), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetModDir_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetModDir_Statics::NewProp_modDir,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetModDir_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the game directory.\n\x09*\n\x09* This should be the same directory game where gets installed into. Just the folder name, not the whole path. I.e. \"Spacewar\".\n\x09*\n\x09* @param\x09modDir\x09\x09The game directory to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDir.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Sets the game directory.\n\nThis should be the same directory game where gets installed into. Just the folder name, not the whole path. I.e. \"Spacewar\".\n\n@param        modDir          The game directory to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerGameDir." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetModDir_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetModDir", nullptr, nullptr, sizeof(GameServer_eventSetModDir_Parms), Z_Construct_UFunction_UGameServer_SetModDir_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetModDir_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetModDir_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetModDir_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetModDir()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetModDir_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetPasswordProtected_Statics
	{
		struct GameServer_eventSetPasswordProtected_Parms
		{
			bool bPasswordProtected;
		};
		static void NewProp_bPasswordProtected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPasswordProtected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected_SetBit(void* Obj)
	{
		((GameServer_eventSetPasswordProtected_Parms*)Obj)->bPasswordProtected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected = { "bPasswordProtected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServer_eventSetPasswordProtected_Parms), &Z_Construct_UFunction_UGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetPasswordProtected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetPasswordProtected_Statics::NewProp_bPasswordProtected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetPasswordProtected_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Set whether the game server will require a password once when the user tries to join.\n\x09*\n\x09* @param\x09""bPasswordProtected\x09\x09""Enable (true) or disable (false) password protection.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Set whether the game server will require a password once when the user tries to join.\n\n@param        bPasswordProtected              Enable (true) or disable (false) password protection." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetPasswordProtected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetPasswordProtected", nullptr, nullptr, sizeof(GameServer_eventSetPasswordProtected_Parms), Z_Construct_UFunction_UGameServer_SetPasswordProtected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetPasswordProtected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetPasswordProtected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetPasswordProtected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetPasswordProtected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetPasswordProtected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetProduct_Statics
	{
		struct GameServer_eventSetProduct_Parms
		{
			FString product;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_product;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServer_SetProduct_Statics::NewProp_product = { "product", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetProduct_Parms, product), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetProduct_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetProduct_Statics::NewProp_product,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetProduct_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the game product identifier. This is currently used by the master server for version checking purposes.\n\x09*\n\x09* Converting the games app ID to a string for this is recommended.\n\x09*\n\x09* @param\x09product\x09\x09The unique identifier for your game. Must not be NULL or an empty string (\"\").\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Sets the game product identifier. This is currently used by the master server for version checking purposes.\n\nConverting the games app ID to a string for this is recommended.\n\n@param        product         The unique identifier for your game. Must not be NULL or an empty string (\"\")." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetProduct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetProduct", nullptr, nullptr, sizeof(GameServer_eventSetProduct_Parms), Z_Construct_UFunction_UGameServer_SetProduct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetProduct_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetProduct_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetProduct_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetProduct()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetProduct_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetRegion_Statics
	{
		struct GameServer_eventSetRegion_Parms
		{
			FString region;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_region;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServer_SetRegion_Statics::NewProp_region = { "region", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetRegion_Parms, region), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetRegion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetRegion_Statics::NewProp_region,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetRegion_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Region identifier. This is an optional field, the default value is an empty string, meaning the \"world\" region.\n\x09*\n\x09* @param\x09region\x09\x09region\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Region identifier. This is an optional field, the default value is an empty string, meaning the \"world\" region.\n\n@param        region          region" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetRegion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetRegion", nullptr, nullptr, sizeof(GameServer_eventSetRegion_Parms), Z_Construct_UFunction_UGameServer_SetRegion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetRegion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetRegion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetRegion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetRegion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetRegion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetServerName_Statics
	{
		struct GameServer_eventSetServerName_Parms
		{
			FString serverName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_serverName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServer_SetServerName_Statics::NewProp_serverName = { "serverName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetServerName_Parms, serverName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetServerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetServerName_Statics::NewProp_serverName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetServerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the name of server as it will appear in the server browser.\n\x09*\n\x09* @param\x09serverName\x09\x09The new server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Sets the name of server as it will appear in the server browser.\n\n@param        serverName              The new server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetServerName", nullptr, nullptr, sizeof(GameServer_eventSetServerName_Parms), Z_Construct_UFunction_UGameServer_SetServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetServerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetServerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetServerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetServerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetServerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetSpectatorPort_Statics
	{
		struct GameServer_eventSetSpectatorPort_Parms
		{
			int32 spectatorPort;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_spectatorPort;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameServer_SetSpectatorPort_Statics::NewProp_spectatorPort = { "spectatorPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetSpectatorPort_Parms, spectatorPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetSpectatorPort_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetSpectatorPort_Statics::NewProp_spectatorPort,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetSpectatorPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Set whether the game server allows spectators, and what port they should connect on. The default value is 0, meaning the service is not used.\n\x09*\n\x09* @param\x09spectatorPort\x09\x09The port for spectators to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Set whether the game server allows spectators, and what port they should connect on. The default value is 0, meaning the service is not used.\n\n@param        spectatorPort           The port for spectators to join." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetSpectatorPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetSpectatorPort", nullptr, nullptr, sizeof(GameServer_eventSetSpectatorPort_Parms), Z_Construct_UFunction_UGameServer_SetSpectatorPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetSpectatorPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetSpectatorPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetSpectatorPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetSpectatorPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetSpectatorPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_SetSpectatorServerName_Statics
	{
		struct GameServer_eventSetSpectatorServerName_Parms
		{
			FString spectatorServerName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_spectatorServerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServer_SetSpectatorServerName_Statics::NewProp_spectatorServerName = { "spectatorServerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventSetSpectatorServerName_Parms, spectatorServerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_SetSpectatorServerName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_SetSpectatorServerName_Statics::NewProp_spectatorServerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Sets the name of the spectator server. This is only used if spectator port is nonzero.\n\x09*\n\x09* @param\x09spectatorServerName\x09\x09The spectator server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Sets the name of the spectator server. This is only used if spectator port is nonzero.\n\n@param        spectatorServerName             The spectator server name to set. Must not be NULL or an empty string (\"\"). This can not be longer than k_cbMaxGameServerMapName." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_SetSpectatorServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "SetSpectatorServerName", nullptr, nullptr, sizeof(GameServer_eventSetSpectatorServerName_Parms), Z_Construct_UFunction_UGameServer_SetSpectatorServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetSpectatorServerName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_SetSpectatorServerName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_SetSpectatorServerName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_SetSpectatorServerName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics
	{
		struct GameServer_eventUserHasLicenseForApp_Parms
		{
			FSteamID steamID;
			int32 appID;
			ESteamUserHasLicenseForAppResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventUserHasLicenseForApp_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventUserHasLicenseForApp_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServer_eventUserHasLicenseForApp_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if the user owns a specific piece of Downloadable Content (DLC).\n\x09*\n\x09* This can only be called after sending the users auth ticket to BeginAuthSession/\n\x09*\n\x09* @param\x09steamID\x09\x09The Steam ID of the user that sent the auth ticket.\n\x09* @param\x09""appID\x09\x09The DLC App ID to check if the user owns it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Checks if the user owns a specific piece of Downloadable Content (DLC).\n\nThis can only be called after sending the users auth ticket to BeginAuthSession/\n\n@param        steamID         The Steam ID of the user that sent the auth ticket.\n@param        appID           The DLC App ID to check if the user owns it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "UserHasLicenseForApp", nullptr, nullptr, sizeof(GameServer_eventUserHasLicenseForApp_Parms), Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_UserHasLicenseForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_UserHasLicenseForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServer_WasRestartRequested_Statics
	{
		struct GameServer_eventWasRestartRequested_Parms
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
	void Z_Construct_UFunction_UGameServer_WasRestartRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServer_eventWasRestartRequested_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServer_WasRestartRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServer_eventWasRestartRequested_Parms), &Z_Construct_UFunction_UGameServer_WasRestartRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServer_WasRestartRequested_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServer_WasRestartRequested_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServer_WasRestartRequested_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServer" },
		{ "Comment", "/**\n\x09* Checks if the master server has alerted us that we are out of date.\n\x09*\n\x09* This reverts back to false after calling this function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
		{ "ToolTip", "Checks if the master server has alerted us that we are out of date.\n\nThis reverts back to false after calling this function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServer_WasRestartRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServer, nullptr, "WasRestartRequested", nullptr, nullptr, sizeof(GameServer_eventWasRestartRequested_Parms), Z_Construct_UFunction_UGameServer_WasRestartRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_WasRestartRequested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServer_WasRestartRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServer_WasRestartRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServer_WasRestartRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServer_WasRestartRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameServer_NoRegister()
	{
		return UGameServer::StaticClass();
	}
	struct Z_Construct_UClass_UGameServer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSClientDeny_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientDeny;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSClientApprove_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientApprove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSValidateAuthTicketResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSValidateAuthTicketResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSClientGroupStatus_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSClientGroupStatus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSPolicyResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSPolicyResponse;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameServer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameServer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameServer_AssociateWithClan, "AssociateWithClan" }, // 2336138192
		{ &Z_Construct_UFunction_UGameServer_BeginAuthSession, "BeginAuthSession" }, // 3226365068
		{ &Z_Construct_UFunction_UGameServer_BLoggedOn, "BLoggedOn" }, // 1756128482
		{ &Z_Construct_UFunction_UGameServer_BSecure, "BSecure" }, // 3015631492
		{ &Z_Construct_UFunction_UGameServer_BUpdateUserData, "BUpdateUserData" }, // 2177549881
		{ &Z_Construct_UFunction_UGameServer_CancelAuthTicket, "CancelAuthTicket" }, // 1339122506
		{ &Z_Construct_UFunction_UGameServer_ClearAllKeyValues, "ClearAllKeyValues" }, // 1605741494
		{ &Z_Construct_UFunction_UGameServer_ComputeNewPlayerCompatibility, "ComputeNewPlayerCompatibility" }, // 1678846133
		{ &Z_Construct_UFunction_UGameServer_CreateUnauthenticatedUserConnection, "CreateUnauthenticatedUserConnection" }, // 2420941016
		{ &Z_Construct_UFunction_UGameServer_EnableHeartbeats, "EnableHeartbeats" }, // 1648369083
		{ &Z_Construct_UFunction_UGameServer_EndAuthSession, "EndAuthSession" }, // 478417471
		{ &Z_Construct_UFunction_UGameServer_ForceHeartbeat, "ForceHeartbeat" }, // 1501990025
		{ &Z_Construct_UFunction_UGameServer_GetAuthSessionTicket, "GetAuthSessionTicket" }, // 1525143387
		{ &Z_Construct_UFunction_UGameServer_GetServerPublicIP, "GetServerPublicIP" }, // 1133070658
		{ &Z_Construct_UFunction_UGameServer_GetServerSteamID, "GetServerSteamID" }, // 129344766
		{ &Z_Construct_UFunction_UGameServer_LogOff, "LogOff" }, // 2107430328
		{ &Z_Construct_UFunction_UGameServer_LogOn, "LogOn" }, // 2988152929
		{ &Z_Construct_UFunction_UGameServer_LogOnAnonymous, "LogOnAnonymous" }, // 3971035378
		{ &Z_Construct_UFunction_UGameServer_RequestUserGroupStatus, "RequestUserGroupStatus" }, // 113740559
		{ &Z_Construct_UFunction_UGameServer_SetBotPlayerCount, "SetBotPlayerCount" }, // 4190677743
		{ &Z_Construct_UFunction_UGameServer_SetDedicatedServer, "SetDedicatedServer" }, // 764500032
		{ &Z_Construct_UFunction_UGameServer_SetGameData, "SetGameData" }, // 819165800
		{ &Z_Construct_UFunction_UGameServer_SetGameDescription, "SetGameDescription" }, // 504885635
		{ &Z_Construct_UFunction_UGameServer_SetGameTags, "SetGameTags" }, // 3622359328
		{ &Z_Construct_UFunction_UGameServer_SetHeartbeatInterval, "SetHeartbeatInterval" }, // 1699824939
		{ &Z_Construct_UFunction_UGameServer_SetKeyValue, "SetKeyValue" }, // 2227421490
		{ &Z_Construct_UFunction_UGameServer_SetMapName, "SetMapName" }, // 1983115778
		{ &Z_Construct_UFunction_UGameServer_SetMaxPlayerCount, "SetMaxPlayerCount" }, // 1783181145
		{ &Z_Construct_UFunction_UGameServer_SetModDir, "SetModDir" }, // 1008008880
		{ &Z_Construct_UFunction_UGameServer_SetPasswordProtected, "SetPasswordProtected" }, // 1207774921
		{ &Z_Construct_UFunction_UGameServer_SetProduct, "SetProduct" }, // 2096056761
		{ &Z_Construct_UFunction_UGameServer_SetRegion, "SetRegion" }, // 3936196621
		{ &Z_Construct_UFunction_UGameServer_SetServerName, "SetServerName" }, // 2290830230
		{ &Z_Construct_UFunction_UGameServer_SetSpectatorPort, "SetSpectatorPort" }, // 3082014920
		{ &Z_Construct_UFunction_UGameServer_SetSpectatorServerName, "SetSpectatorServerName" }, // 881928081
		{ &Z_Construct_UFunction_UGameServer_UserHasLicenseForApp, "UserHasLicenseForApp" }, // 1115418035
		{ &Z_Construct_UFunction_UGameServer_WasRestartRequested, "WasRestartRequested" }, // 1220610786
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameServer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameServer/GameServer.h" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientDeny_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientDeny = { "GSClientDeny", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameServer, GSClientDeny), Z_Construct_UDelegateFunction_SteamCore_OnGSClientDeny__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientDeny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientDeny_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientApprove_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientApprove = { "GSClientApprove", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameServer, GSClientApprove), Z_Construct_UDelegateFunction_SteamCore_OnGSClientApprove__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientApprove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientApprove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameServer_Statics::NewProp_GSValidateAuthTicketResponse_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameServer_Statics::NewProp_GSValidateAuthTicketResponse = { "GSValidateAuthTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameServer, GSValidateAuthTicketResponse), Z_Construct_UDelegateFunction_SteamCore_OnGSValidateAuthTicketResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameServer_Statics::NewProp_GSValidateAuthTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameServer_Statics::NewProp_GSValidateAuthTicketResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientGroupStatus_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientGroupStatus = { "GSClientGroupStatus", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameServer, GSClientGroupStatus), Z_Construct_UDelegateFunction_SteamCore_OnGSClientGroupStatus__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientGroupStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientGroupStatus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameServer_Statics::NewProp_GSPolicyResponse_MetaData[] = {
		{ "Category", "SteamCore|GameServer|Delegates" },
		{ "ModuleRelativePath", "Public/GameServer/GameServer.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameServer_Statics::NewProp_GSPolicyResponse = { "GSPolicyResponse", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameServer, GSPolicyResponse), Z_Construct_UDelegateFunction_SteamCore_OnGSPolicyResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameServer_Statics::NewProp_GSPolicyResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameServer_Statics::NewProp_GSPolicyResponse_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientDeny,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientApprove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameServer_Statics::NewProp_GSValidateAuthTicketResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameServer_Statics::NewProp_GSClientGroupStatus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameServer_Statics::NewProp_GSPolicyResponse,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameServer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameServer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameServer_Statics::ClassParams = {
		&UGameServer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameServer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameServer_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameServer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameServer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameServer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameServer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameServer, 73219271);
	template<> STEAMCORE_API UClass* StaticClass<UGameServer>()
	{
		return UGameServer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameServer(Z_Construct_UClass_UGameServer, &UGameServer::StaticClass, TEXT("/Script/SteamCore"), TEXT("UGameServer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameServer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
