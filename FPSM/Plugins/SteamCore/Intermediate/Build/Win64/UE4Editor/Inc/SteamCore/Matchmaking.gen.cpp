// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Matchmaking/Matchmaking.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmaking() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UMatchmaking_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UMatchmaking();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyComparison();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamLobbyType();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyType)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_ENUM(ESteamLobbyType,Z_Param_lobbyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLobbyType(Z_Param_steamIDLobby,ESteamLobbyType(Z_Param_lobbyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyOwner)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDNewOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLobbyOwner(Z_Param_steamIDLobby,Z_Param_steamIDNewOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyMemberLimit)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxMembers);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLobbyMemberLimit(Z_Param_steamIDLobby,Z_Param_maxMembers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyMemberData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::SetLobbyMemberData(Z_Param_steamIDLobby,Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyJoinable)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_UBOOL(Z_Param_bLobbyJoinable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLobbyJoinable(Z_Param_steamIDLobby,Z_Param_bLobbyJoinable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyGameServer)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_gameServerIP);
		P_GET_PROPERTY(FIntProperty,Z_Param_gameServerPort);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDGameServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::SetLobbyGameServer(Z_Param_steamIDLobby,Z_Param_gameServerIP,Z_Param_gameServerPort,Z_Param_steamIDGameServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLobbyData(Z_Param_steamIDLobby,Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSetLinkedLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobbyDependent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SetLinkedLobby(Z_Param_steamIDLobby,Z_Param_steamIDLobbyDependent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execSendLobbyChatMsg)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::SendLobbyChatMsg(Z_Param_steamIDLobby,Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execRequestLobbyList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestLobbyList(FOnRequestLobbyList(Z_Param_Out_callback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execRequestLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::RequestLobbyData(Z_Param_steamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execRemoveFavoriteGame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ip);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionPort);
		P_GET_PROPERTY(FIntProperty,Z_Param_queryPort);
		P_GET_TARRAY(ESteamFavoriteFlags,Z_Param_flags);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::RemoveFavoriteGame(Z_Param_appID,Z_Param_ip,Z_Param_connectionPort,Z_Param_queryPort,Z_Param_flags);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execLeaveLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::LeaveLobby(Z_Param_steamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execJoinLobby)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->JoinLobby(FOnJoinLobby(Z_Param_Out_callback),Z_Param_steamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execInviteUserToLobby)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDInvitee);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::InviteUserToLobby(Z_Param_steamIDLobby,Z_Param_steamIDInvitee);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetNumLobbyMembers)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::GetNumLobbyMembers(Z_Param_steamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyOwner)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UMatchmaking::GetLobbyOwner(Z_Param_steamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyMemberLimit)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::GetLobbyMemberLimit(Z_Param_steamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyMemberData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMatchmaking::GetLobbyMemberData(Z_Param_steamIDLobby,Z_Param_steamIDUser,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyMemberByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_member);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UMatchmaking::GetLobbyMemberByIndex(Z_Param_steamIDLobby,Z_Param_member);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyGameServer)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_gameServerIP);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_gameServerPort);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_steamIDGameServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::GetLobbyGameServer(Z_Param_steamIDLobby,Z_Param_Out_gameServerIP,Z_Param_Out_gameServerPort,Z_Param_Out_steamIDGameServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyDataCount)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::GetLobbyDataCount(Z_Param_steamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyDataByIndex)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_lobbyData);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_key);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::GetLobbyDataByIndex(Z_Param_steamIDLobby,Z_Param_lobbyData,Z_Param_Out_key,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UMatchmaking::GetLobbyData(Z_Param_steamIDLobby,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyChatEntry)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_PROPERTY(FIntProperty,Z_Param_messageID);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_steamIDUser);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_message);
		P_GET_ENUM_REF(ESteamChatEntryType,Z_Param_Out_chatEntryType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::GetLobbyChatEntry(Z_Param_steamIDLobby,Z_Param_messageID,Z_Param_Out_steamIDUser,Z_Param_Out_message,(ESteamChatEntryType&)(Z_Param_Out_chatEntryType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetLobbyByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_lobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UMatchmaking::GetLobbyByIndex(Z_Param_lobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetFavoriteGameCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::GetFavoriteGameCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execGetFavoriteGame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_game);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_appID);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_ip);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_connectionPort);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_queryPort);
		P_GET_TARRAY_REF(ESteamFavoriteFlags,Z_Param_Out_flags);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_timeLastPlayedOnServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::GetFavoriteGame(Z_Param_game,Z_Param_Out_appID,Z_Param_Out_ip,Z_Param_Out_connectionPort,Z_Param_Out_queryPort,Z_Param_Out_flags,Z_Param_Out_timeLastPlayedOnServer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execDeleteLobbyData)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UMatchmaking::DeleteLobbyData(Z_Param_steamIDLobby,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execCreateLobby)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_ENUM(ESteamLobbyType,Z_Param_lobbyType);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxMembers);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateLobby(FOnCreateLobby(Z_Param_Out_callback),ESteamLobbyType(Z_Param_lobbyType),Z_Param_maxMembers);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListStringFilter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_keyToMatch);
		P_GET_PROPERTY(FStrProperty,Z_Param_valueToMatch);
		P_GET_ENUM(ESteamLobbyComparison,Z_Param_comparisonType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListStringFilter(Z_Param_keyToMatch,Z_Param_valueToMatch,ESteamLobbyComparison(Z_Param_comparisonType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListResultCountFilter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_maxResults);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListResultCountFilter(Z_Param_maxResults);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListNumericalFilter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_keyToMatch);
		P_GET_PROPERTY(FIntProperty,Z_Param_valueToMatch);
		P_GET_ENUM(ESteamLobbyComparison,Z_Param_comparisonType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListNumericalFilter(Z_Param_keyToMatch,Z_Param_valueToMatch,ESteamLobbyComparison(Z_Param_comparisonType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListNearValueFilter)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_keyToMatch);
		P_GET_PROPERTY(FIntProperty,Z_Param_valueToBeCloseTo);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListNearValueFilter(Z_Param_keyToMatch,Z_Param_valueToBeCloseTo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListFilterSlotsAvailable)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_slotsAvailable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListFilterSlotsAvailable(Z_Param_slotsAvailable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListDistanceFilter)
	{
		P_GET_ENUM(ESteamLobbyDistanceFilter,Z_Param_lobbyDistanceFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListDistanceFilter(ESteamLobbyDistanceFilter(Z_Param_lobbyDistanceFilter));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddRequestLobbyListCompatibleMembersFilter)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDLobby);
		P_FINISH;
		P_NATIVE_BEGIN;
		UMatchmaking::AddRequestLobbyListCompatibleMembersFilter(Z_Param_steamIDLobby);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmaking::execAddFavoriteGame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FStrProperty,Z_Param_ip);
		P_GET_PROPERTY(FIntProperty,Z_Param_connectionPort);
		P_GET_PROPERTY(FIntProperty,Z_Param_queryPort);
		P_GET_TARRAY(ESteamFavoriteFlags,Z_Param_flags);
		P_GET_PROPERTY(FIntProperty,Z_Param_timeLastPlayedOnServer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UMatchmaking::AddFavoriteGame(Z_Param_appID,Z_Param_ip,Z_Param_connectionPort,Z_Param_queryPort,Z_Param_flags,Z_Param_timeLastPlayedOnServer);
		P_NATIVE_END;
	}
	void UMatchmaking::StaticRegisterNativesUMatchmaking()
	{
		UClass* Class = UMatchmaking::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddFavoriteGame", &UMatchmaking::execAddFavoriteGame },
			{ "AddRequestLobbyListCompatibleMembersFilter", &UMatchmaking::execAddRequestLobbyListCompatibleMembersFilter },
			{ "AddRequestLobbyListDistanceFilter", &UMatchmaking::execAddRequestLobbyListDistanceFilter },
			{ "AddRequestLobbyListFilterSlotsAvailable", &UMatchmaking::execAddRequestLobbyListFilterSlotsAvailable },
			{ "AddRequestLobbyListNearValueFilter", &UMatchmaking::execAddRequestLobbyListNearValueFilter },
			{ "AddRequestLobbyListNumericalFilter", &UMatchmaking::execAddRequestLobbyListNumericalFilter },
			{ "AddRequestLobbyListResultCountFilter", &UMatchmaking::execAddRequestLobbyListResultCountFilter },
			{ "AddRequestLobbyListStringFilter", &UMatchmaking::execAddRequestLobbyListStringFilter },
			{ "CreateLobby", &UMatchmaking::execCreateLobby },
			{ "DeleteLobbyData", &UMatchmaking::execDeleteLobbyData },
			{ "GetFavoriteGame", &UMatchmaking::execGetFavoriteGame },
			{ "GetFavoriteGameCount", &UMatchmaking::execGetFavoriteGameCount },
			{ "GetLobbyByIndex", &UMatchmaking::execGetLobbyByIndex },
			{ "GetLobbyChatEntry", &UMatchmaking::execGetLobbyChatEntry },
			{ "GetLobbyData", &UMatchmaking::execGetLobbyData },
			{ "GetLobbyDataByIndex", &UMatchmaking::execGetLobbyDataByIndex },
			{ "GetLobbyDataCount", &UMatchmaking::execGetLobbyDataCount },
			{ "GetLobbyGameServer", &UMatchmaking::execGetLobbyGameServer },
			{ "GetLobbyMemberByIndex", &UMatchmaking::execGetLobbyMemberByIndex },
			{ "GetLobbyMemberData", &UMatchmaking::execGetLobbyMemberData },
			{ "GetLobbyMemberLimit", &UMatchmaking::execGetLobbyMemberLimit },
			{ "GetLobbyOwner", &UMatchmaking::execGetLobbyOwner },
			{ "GetNumLobbyMembers", &UMatchmaking::execGetNumLobbyMembers },
			{ "InviteUserToLobby", &UMatchmaking::execInviteUserToLobby },
			{ "JoinLobby", &UMatchmaking::execJoinLobby },
			{ "LeaveLobby", &UMatchmaking::execLeaveLobby },
			{ "RemoveFavoriteGame", &UMatchmaking::execRemoveFavoriteGame },
			{ "RequestLobbyData", &UMatchmaking::execRequestLobbyData },
			{ "RequestLobbyList", &UMatchmaking::execRequestLobbyList },
			{ "SendLobbyChatMsg", &UMatchmaking::execSendLobbyChatMsg },
			{ "SetLinkedLobby", &UMatchmaking::execSetLinkedLobby },
			{ "SetLobbyData", &UMatchmaking::execSetLobbyData },
			{ "SetLobbyGameServer", &UMatchmaking::execSetLobbyGameServer },
			{ "SetLobbyJoinable", &UMatchmaking::execSetLobbyJoinable },
			{ "SetLobbyMemberData", &UMatchmaking::execSetLobbyMemberData },
			{ "SetLobbyMemberLimit", &UMatchmaking::execSetLobbyMemberLimit },
			{ "SetLobbyOwner", &UMatchmaking::execSetLobbyOwner },
			{ "SetLobbyType", &UMatchmaking::execSetLobbyType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics
	{
		struct Matchmaking_eventAddFavoriteGame_Parms
		{
			int32 appID;
			FString ip;
			int32 connectionPort;
			int32 queryPort;
			TArray<ESteamFavoriteFlags> flags;
			int32 timeLastPlayedOnServer;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeLastPlayedOnServer;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_flags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_flags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_flags_Inner_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_queryPort;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_connectionPort;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ip;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_timeLastPlayedOnServer = { "timeLastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, timeLastPlayedOnServer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_flags = { "flags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_flags_Inner = { "flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_queryPort = { "queryPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, queryPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_connectionPort = { "connectionPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, connectionPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_ip = { "ip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, ip), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddFavoriteGame_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_timeLastPlayedOnServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_queryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_connectionPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Adds the game server to the local favorites list or updates the time played of the server if it already exists in the list.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09\x09\x09\x09The App ID of the game.\n\x09* @param\x09ip\x09\x09\x09\x09\x09\x09\x09The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09""connectionPort\x09\x09\x09\x09The port used to connect to the server, in host order.\n\x09* @param\x09queryPort\x09\x09\x09\x09\x09The port used to query the server, in host order.\n\x09* @param\x09""flags\x09\x09\x09\x09\x09\x09Sets the whether the server should be added to the favorites list or history list. See k_unFavoriteFlagNone for more information.\n\x09* @param\x09timeLastPlayedOnServer\x09\x09This should be the current time in Unix epoch format (seconds since Jan 1st, 1970).\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Adds the game server to the local favorites list or updates the time played of the server if it already exists in the list.\n\n@param        appID                                           The App ID of the game.\n@param        ip                                                      The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        connectionPort                          The port used to connect to the server, in host order.\n@param        queryPort                                       The port used to query the server, in host order.\n@param        flags                                           Sets the whether the server should be added to the favorites list or history list. See k_unFavoriteFlagNone for more information.\n@param        timeLastPlayedOnServer          This should be the current time in Unix epoch format (seconds since Jan 1st, 1970)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddFavoriteGame", nullptr, nullptr, sizeof(Matchmaking_eventAddFavoriteGame_Parms), Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddFavoriteGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddFavoriteGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms
		{
			FSteamID steamIDLobby;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Unused - Checks the player compatibility based on the frenemy system.\n\x09*\n\x09* @param\x09steamIDLobby\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Unused - Checks the player compatibility based on the frenemy system.\n\n@param        steamIDLobby" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListCompatibleMembersFilter", nullptr, nullptr, sizeof(Matchmaking_eventAddRequestLobbyListCompatibleMembersFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListDistanceFilter_Parms
		{
			ESteamLobbyDistanceFilter lobbyDistanceFilter;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_lobbyDistanceFilter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_lobbyDistanceFilter_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_lobbyDistanceFilter = { "lobbyDistanceFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListDistanceFilter_Parms, lobbyDistanceFilter), Z_Construct_UEnum_SteamCore_ESteamLobbyDistanceFilter, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_lobbyDistanceFilter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_lobbyDistanceFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::NewProp_lobbyDistanceFilter_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets the physical distance for which we should search for lobbies, this is based on the users IP address and a IP location map on the Steam backed.\n\x09*\n\x09* @param\x09lobbyDistanceFilter\x09\x09Specifies the maximum distance.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Sets the physical distance for which we should search for lobbies, this is based on the users IP address and a IP location map on the Steam backed.\n\n@param        lobbyDistanceFilter             Specifies the maximum distance." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListDistanceFilter", nullptr, nullptr, sizeof(Matchmaking_eventAddRequestLobbyListDistanceFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms
		{
			int32 slotsAvailable;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_slotsAvailable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_slotsAvailable = { "slotsAvailable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms, slotsAvailable), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::NewProp_slotsAvailable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Filters to only return lobbies with the specified number of open slots available.\n\x09*\n\x09* @param\x09slotsAvailable\x09The number of open slots that must be open.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Filters to only return lobbies with the specified number of open slots available.\n\n@param        slotsAvailable  The number of open slots that must be open." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListFilterSlotsAvailable", nullptr, nullptr, sizeof(Matchmaking_eventAddRequestLobbyListFilterSlotsAvailable_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms
		{
			FString keyToMatch;
			int32 valueToBeCloseTo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_valueToBeCloseTo;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_keyToMatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_valueToBeCloseTo = { "valueToBeCloseTo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms, valueToBeCloseTo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_keyToMatch = { "keyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms, keyToMatch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_valueToBeCloseTo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::NewProp_keyToMatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sorts the results closest to the specified value.\n\x09*\n\x09* Near filters don't actually filter out values, they just influence how the results are sorted. You can specify multiple near filters, with the first near filter influencing the most, and the last near filter influencing the least.\n\x09*\n\x09* @param\x09keyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09valueToBeCloseTo\x09The value that lobbies will be sorted on.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Sorts the results closest to the specified value.\n\nNear filters don't actually filter out values, they just influence how the results are sorted. You can specify multiple near filters, with the first near filter influencing the most, and the last near filter influencing the least.\n\n@param        keyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param        valueToBeCloseTo        The value that lobbies will be sorted on." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListNearValueFilter", nullptr, nullptr, sizeof(Matchmaking_eventAddRequestLobbyListNearValueFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms
		{
			FString keyToMatch;
			int32 valueToMatch;
			ESteamLobbyComparison comparisonType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_comparisonType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_comparisonType_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_valueToMatch;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_keyToMatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_comparisonType = { "comparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms, comparisonType), Z_Construct_UEnum_SteamCore_ESteamLobbyComparison, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_comparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_valueToMatch = { "valueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms, valueToMatch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_keyToMatch = { "keyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms, keyToMatch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_comparisonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_comparisonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_valueToMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::NewProp_keyToMatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Adds a numerical comparison filter to the next RequestLobbyList call.\n\x09*\n\x09* @param\x09keyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09valueToMatch\x09\x09The number to match.\n\x09* @param\x09""comparisonType\x09\x09The type of comparison to make.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Adds a numerical comparison filter to the next RequestLobbyList call.\n\n@param        keyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param        valueToMatch            The number to match.\n@param        comparisonType          The type of comparison to make." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListNumericalFilter", nullptr, nullptr, sizeof(Matchmaking_eventAddRequestLobbyListNumericalFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListResultCountFilter_Parms
		{
			int32 maxResults;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxResults;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::NewProp_maxResults = { "maxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListResultCountFilter_Parms, maxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::NewProp_maxResults,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets the maximum number of lobbies to return. The lower the count the faster it is to download the lobby results & details to the client.\n\x09*\n\x09* @param\x09maxResults\x09The maximum number of lobbies to return.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Sets the maximum number of lobbies to return. The lower the count the faster it is to download the lobby results & details to the client.\n\n@param        maxResults      The maximum number of lobbies to return." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListResultCountFilter", nullptr, nullptr, sizeof(Matchmaking_eventAddRequestLobbyListResultCountFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics
	{
		struct Matchmaking_eventAddRequestLobbyListStringFilter_Parms
		{
			FString keyToMatch;
			FString valueToMatch;
			ESteamLobbyComparison comparisonType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_comparisonType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_comparisonType_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_valueToMatch;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_keyToMatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_comparisonType = { "comparisonType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListStringFilter_Parms, comparisonType), Z_Construct_UEnum_SteamCore_ESteamLobbyComparison, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_comparisonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_valueToMatch = { "valueToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListStringFilter_Parms, valueToMatch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_keyToMatch = { "keyToMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventAddRequestLobbyListStringFilter_Parms, keyToMatch), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_comparisonType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_comparisonType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_valueToMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::NewProp_keyToMatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Adds a string comparison filter to the next RequestLobbyList call.\n\x09*\n\x09* @param\x09keyToMatch\x09\x09\x09The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09valueToMatch\x09\x09The string to match.\n\x09* @param\x09""comparisonType\x09\x09The type of comparison to make.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Adds a string comparison filter to the next RequestLobbyList call.\n\n@param        keyToMatch                      The filter key name to match. This can not be longer than k_nMaxLobbyKeyLength.\n@param        valueToMatch            The string to match.\n@param        comparisonType          The type of comparison to make." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "AddRequestLobbyListStringFilter", nullptr, nullptr, sizeof(Matchmaking_eventAddRequestLobbyListStringFilter_Parms), Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics
	{
		struct Matchmaking_eventCreateLobby_Parms
		{
			FScriptDelegate callback;
			ESteamLobbyType lobbyType;
			int32 maxMembers;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxMembers;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_lobbyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_lobbyType_Underlying;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_maxMembers = { "maxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventCreateLobby_Parms, maxMembers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_lobbyType = { "lobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventCreateLobby_Parms, lobbyType), Z_Construct_UEnum_SteamCore_ESteamLobbyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_lobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventCreateLobby_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnCreateLobby__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_maxMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_lobbyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_lobbyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Create a new matchmaking lobby.\n\x09*\n\x09* @param\x09lobbyType\x09\x09The type and visibility of this lobby. This can be changed later via SetLobbyType.\n\x09* @param\x09maxMembers\x09\x09\x09The maximum number of players that can join this lobby. This can not be above 250.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Create a new matchmaking lobby.\n\n@param        lobbyType               The type and visibility of this lobby. This can be changed later via SetLobbyType.\n@param        maxMembers                      The maximum number of players that can join this lobby. This can not be above 250." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "CreateLobby", nullptr, nullptr, sizeof(Matchmaking_eventCreateLobby_Parms), Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_CreateLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_CreateLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics
	{
		struct Matchmaking_eventDeleteLobbyData_Parms
		{
			FSteamID steamIDLobby;
			FString key;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventDeleteLobbyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventDeleteLobbyData_Parms), &Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventDeleteLobbyData_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventDeleteLobbyData_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Removes a metadata key from the lobby.\n\x09*\n\x09* This can only be done by the owner of the lobby.\n\x09* This will only send the data if the key existed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09*\n\x09* @param\x09steamIDLobby\x09The Steam ID of the lobby to delete the metadata for.\n\x09* @param\x09key\x09\x09\x09\x09The key to delete the data for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Removes a metadata key from the lobby.\n\nThis can only be done by the owner of the lobby.\nThis will only send the data if the key existed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param        steamIDLobby    The Steam ID of the lobby to delete the metadata for.\n@param        key                             The key to delete the data for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "DeleteLobbyData", nullptr, nullptr, sizeof(Matchmaking_eventDeleteLobbyData_Parms), Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_DeleteLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_DeleteLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics
	{
		struct Matchmaking_eventGetFavoriteGame_Parms
		{
			int32 game;
			int32 appID;
			FString ip;
			int32 connectionPort;
			int32 queryPort;
			TArray<ESteamFavoriteFlags> flags;
			int32 timeLastPlayedOnServer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_timeLastPlayedOnServer;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_flags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_flags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_flags_Inner_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_queryPort;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_connectionPort;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ip;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_game;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventGetFavoriteGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventGetFavoriteGame_Parms), &Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_timeLastPlayedOnServer = { "timeLastPlayedOnServer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, timeLastPlayedOnServer), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_flags = { "flags", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_flags_Inner = { "flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_queryPort = { "queryPort", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, queryPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_connectionPort = { "connectionPort", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, connectionPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ip = { "ip", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, ip), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_game = { "game", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGame_Parms, game), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_timeLastPlayedOnServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_queryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_connectionPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::NewProp_game,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the details of the favorite game server by index.\n\x09*\n\x09* You must call GetFavoriteGameCount before calling this.\n\x09*\n\x09* @param\x09game\x09\x09\x09\x09\x09\x09The index of the favorite game server to get the details of. This must be between 0 and GetFavoriteGameCount\n\x09* @param\x09""appID\x09\x09\x09\x09\x09\x09Returns the App ID this server is for.\n\x09* @param\x09ip\x09\x09\x09\x09\x09\x09\x09Returns the IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09""connectionPort\x09\x09\x09\x09Returns the port used to connect to the server, in host order.\n\x09* @param\x09queryPort\x09\x09\x09\x09\x09Returns the port used to query the server, in host order.\n\x09* @param\x09""flags\x09\x09\x09\x09\x09\x09Returns whether the server is on the favorites list or the history list. See k_unFavoriteFlagNone for more information.\n\x09* @param\x09timeLastPlayedOnServer\x09\x09Returns the time the server was last added to the favorites list in Unix epoch format (seconds since Jan 1st, 1970).\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Gets the details of the favorite game server by index.\n\nYou must call GetFavoriteGameCount before calling this.\n\n@param        game                                            The index of the favorite game server to get the details of. This must be between 0 and GetFavoriteGameCount\n@param        appID                                           Returns the App ID this server is for.\n@param        ip                                                      Returns the IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        connectionPort                          Returns the port used to connect to the server, in host order.\n@param        queryPort                                       Returns the port used to query the server, in host order.\n@param        flags                                           Returns whether the server is on the favorites list or the history list. See k_unFavoriteFlagNone for more information.\n@param        timeLastPlayedOnServer          Returns the time the server was last added to the favorites list in Unix epoch format (seconds since Jan 1st, 1970)." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetFavoriteGame", nullptr, nullptr, sizeof(Matchmaking_eventGetFavoriteGame_Parms), Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetFavoriteGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetFavoriteGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics
	{
		struct Matchmaking_eventGetFavoriteGameCount_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetFavoriteGameCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the number of favorite and recent game servers the user has stored locally.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Gets the number of favorite and recent game servers the user has stored locally." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetFavoriteGameCount", nullptr, nullptr, sizeof(Matchmaking_eventGetFavoriteGameCount_Parms), Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics
	{
		struct Matchmaking_eventGetLobbyByIndex_Parms
		{
			int32 lobby;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_lobby = { "lobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyByIndex_Parms, lobby), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::NewProp_lobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the lobby at the specified index after receiving the RequestLobbyList results.\n\x09*\n\x09* This should only be called after a LobbyMatchList_t call result is received.\n\x09*\n\x09* @param\x09lobby\x09The index of the lobby to get the Steam ID of, from 0 to LobbyMatchList_t.m_nLobbiesMatching.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Gets the Steam ID of the lobby at the specified index after receiving the RequestLobbyList results.\n\nThis should only be called after a LobbyMatchList_t call result is received.\n\n@param        lobby   The index of the lobby to get the Steam ID of, from 0 to LobbyMatchList_t.m_nLobbiesMatching." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyByIndex", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyByIndex_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics
	{
		struct Matchmaking_eventGetLobbyChatEntry_Parms
		{
			FSteamID steamIDLobby;
			int32 messageID;
			FSteamID steamIDUser;
			FString message;
			ESteamChatEntryType chatEntryType;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_chatEntryType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_chatEntryType_Underlying;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_messageID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_chatEntryType = { "chatEntryType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, chatEntryType), Z_Construct_UEnum_SteamCore_ESteamChatEntryType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_chatEntryType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_messageID = { "messageID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, messageID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyChatEntry_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_chatEntryType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_chatEntryType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_steamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_messageID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the data from a lobby chat message after receiving a LobbyChatMsg_t callback.\n\x09*\n\x09* @param\x09steamIDLobby\x09\x09\x09The Steam ID of the lobby to get the chat entry from. This should almost always be LobbyChatMsg_t::m_ulSteamIDUser.\n\x09* @param\x09messageID\x09\x09\x09\x09The index of the chat entry in the lobby. This should almost always be LobbyChatMsg_t::m_iChatID.\n\x09* @param\x09steamIDUser\x09\x09\x09\x09If set then this returns the Steam ID of the user who sent this message. Usually unneeded since it will be the same as LobbyChatMsg_t::m_ulSteamIDUser.\n\x09* @param\x09message\x09\x09\x09\x09\x09Returns the message data by copying it into this buffer. This buffer should be up to 4 Kilobytes.\n\x09* @param\x09""chatEntryType\x09\x09\x09If set then this will just always return k_EChatEntryTypeChatMsg. This can usually just be set to NULL.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Gets the data from a lobby chat message after receiving a LobbyChatMsg_t callback.\n\n@param        steamIDLobby                    The Steam ID of the lobby to get the chat entry from. This should almost always be LobbyChatMsg_t::m_ulSteamIDUser.\n@param        messageID                               The index of the chat entry in the lobby. This should almost always be LobbyChatMsg_t::m_iChatID.\n@param        steamIDUser                             If set then this returns the Steam ID of the user who sent this message. Usually unneeded since it will be the same as LobbyChatMsg_t::m_ulSteamIDUser.\n@param        message                                 Returns the message data by copying it into this buffer. This buffer should be up to 4 Kilobytes.\n@param        chatEntryType                   If set then this will just always return k_EChatEntryTypeChatMsg. This can usually just be set to NULL." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyChatEntry", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyChatEntry_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics
	{
		struct Matchmaking_eventGetLobbyData_Parms
		{
			FSteamID steamIDLobby;
			FString key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyData_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyData_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the metadata associated with the specified key from the specified lobby.\n\x09*\n\x09* This can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\x09*\n\x09* @param\x09steamIDLobby\x09The Steam ID of the lobby to get the metadata from.\n\x09* @param\x09key\x09\x09\x09\x09The key to get the value of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Gets the metadata associated with the specified key from the specified lobby.\n\nThis can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\n@param        steamIDLobby    The Steam ID of the lobby to get the metadata from.\n@param        key                             The key to get the value of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyData", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyData_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics
	{
		struct Matchmaking_eventGetLobbyDataByIndex_Parms
		{
			FSteamID steamIDLobby;
			int32 lobbyData;
			FString key;
			FString value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_lobbyData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventGetLobbyDataByIndex_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventGetLobbyDataByIndex_Parms), &Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_lobbyData = { "lobbyData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, lobbyData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataByIndex_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_lobbyData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets a lobby metadata key/value pair by index.\n\x09*\n\x09* You must call GetLobbyDataCount before calling this.\n\x09*\n\x09* @param\x09steamIDLobby\x09\x09This MUST be the same lobby used in the previous call to GetLobbyDataCount!\n\x09* @param\x09lobbyData\x09\x09\x09""An index between 0 and GetLobbyDataCount.\n\x09* @param\x09key\x09\x09\x09\x09\x09Returns the name of the key at the specified index by copying it into this buffer.\n\x09* @param\x09keyMaxLength\x09\x09The size of the buffer allocated for pchKey. This typically should be k_nMaxLobbyKeyLength.\n\x09* @param\x09value\x09\x09\x09\x09Returns the value associated with the key at the specified index by copying it into this buffer.\n\x09* @param\x09valueMaxLength\x09\x09The size of the buffer allocated for pchValue. This typically should be k_cubChatMetadataMax.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Gets a lobby metadata key/value pair by index.\n\nYou must call GetLobbyDataCount before calling this.\n\n@param        steamIDLobby            This MUST be the same lobby used in the previous call to GetLobbyDataCount!\n@param        lobbyData                       An index between 0 and GetLobbyDataCount.\n@param        key                                     Returns the name of the key at the specified index by copying it into this buffer.\n@param        keyMaxLength            The size of the buffer allocated for pchKey. This typically should be k_nMaxLobbyKeyLength.\n@param        value                           Returns the value associated with the key at the specified index by copying it into this buffer.\n@param        valueMaxLength          The size of the buffer allocated for pchValue. This typically should be k_cubChatMetadataMax." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyDataByIndex", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyDataByIndex_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics
	{
		struct Matchmaking_eventGetLobbyDataCount_Parms
		{
			FSteamID steamIDLobby;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyDataCount_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the number of metadata keys set on the specified lobby.\n\x09*\n\x09* This can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\n\x09* This is used for iteration, after calling this then GetLobbyDataByIndex can be used to get the key/value pair of each piece of metadata.\n\x09* This should typically only ever be used for debugging purposes.\n\x09*\n\x09* @param\x09steamIDLobby\x09 The Steam ID of the lobby to get the data count from.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Gets the number of metadata keys set on the specified lobby.\n\nThis can only get metadata from lobbies that the client knows about, either after receiving a list of lobbies from LobbyMatchList_t, retrieving the data with RequestLobbyData or after joining a lobby.\nThis is used for iteration, after calling this then GetLobbyDataByIndex can be used to get the key/value pair of each piece of metadata.\nThis should typically only ever be used for debugging purposes.\n\n@param        steamIDLobby     The Steam ID of the lobby to get the data count from." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyDataCount", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyDataCount_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics
	{
		struct Matchmaking_eventGetLobbyGameServer_Parms
		{
			FSteamID steamIDLobby;
			FString gameServerIP;
			int32 gameServerPort;
			FSteamID steamIDGameServer;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDGameServer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameServerPort;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameServerIP;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventGetLobbyGameServer_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventGetLobbyGameServer_Parms), &Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_steamIDGameServer = { "steamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, steamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_gameServerPort = { "gameServerPort", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, gameServerPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_gameServerIP = { "gameServerIP", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, gameServerIP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyGameServer_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_steamIDGameServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_gameServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_gameServerIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the details of a game server set in a lobby.\n\x09*\n\x09* Either the IP/Port or the Steam ID of the game server has to be valid, depending on how you want the clients to be able to connect.\n\x09*\n\x09* @param\x09steamIDLobby\x09\x09\x09The Steam ID of the lobby to get the game server information from.\n\x09* @param\x09gameServerIP\x09\x09\x09Returns the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001, if it's set.\n\x09* @param\x09gameServerPort\x09\x09\x09Returns the connection port of the game server, in host order, if it's set.\n\x09* @param\x09steamIDGameServer\x09\x09Returns the Steam ID of the game server, if it's set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Gets the details of a game server set in a lobby.\n\nEither the IP/Port or the Steam ID of the game server has to be valid, depending on how you want the clients to be able to connect.\n\n@param        steamIDLobby                    The Steam ID of the lobby to get the game server information from.\n@param        gameServerIP                    Returns the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001, if it's set.\n@param        gameServerPort                  Returns the connection port of the game server, in host order, if it's set.\n@param        steamIDGameServer               Returns the Steam ID of the game server, if it's set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyGameServer", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyGameServer_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics
	{
		struct Matchmaking_eventGetLobbyMemberByIndex_Parms
		{
			FSteamID steamIDLobby;
			int32 member;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_member;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberByIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_member = { "member", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberByIndex_Parms, member), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberByIndex_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_member,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the lobby member at the given index.\n\x09*\n\x09* You must call GetNumLobbyMembers before calling this.\n\x09* The current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\x09*\n\x09* @param\x09steamIDLobby\x09This MUST be the same lobby used in the previous call to GetNumLobbyMembers!\n\x09* @param\x09member\x09\x09\x09""An index between 0 and GetNumLobbyMembers.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Gets the Steam ID of the lobby member at the given index.\n\nYou must call GetNumLobbyMembers before calling this.\nThe current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\n@param        steamIDLobby    This MUST be the same lobby used in the previous call to GetNumLobbyMembers!\n@param        member                  An index between 0 and GetNumLobbyMembers." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyMemberByIndex", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyMemberByIndex_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics
	{
		struct Matchmaking_eventGetLobbyMemberData_Parms
		{
			FSteamID steamIDLobby;
			FSteamID steamIDUser;
			FString key;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberData_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_steamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets per-user metadata from another player in the specified lobby.\n\x09*\n\x09* This can only be queried from members in lobbies that you are currently in.\n\x09*\n\x09* @param\x09steamIDLobby\x09The Steam ID of the lobby that the other player is in.\n\x09* @param\x09steamIDUser\x09\x09The Steam ID of the player to get the metadata from.\n\x09* @param\x09key\x09\x09\x09\x09The key to get the value of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Gets per-user metadata from another player in the specified lobby.\n\nThis can only be queried from members in lobbies that you are currently in.\n\n@param        steamIDLobby    The Steam ID of the lobby that the other player is in.\n@param        steamIDUser             The Steam ID of the player to get the metadata from.\n@param        key                             The key to get the value of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyMemberData", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyMemberData_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics
	{
		struct Matchmaking_eventGetLobbyMemberLimit_Parms
		{
			FSteamID steamIDLobby;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberLimit_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyMemberLimit_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* The current limit on the # of users who can join the lobby.\n\x09*\n\x09* @param\x09steamIDLobby\x09The Steam ID of the lobby to get the member limit of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "The current limit on the # of users who can join the lobby.\n\n@param        steamIDLobby    The Steam ID of the lobby to get the member limit of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyMemberLimit", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyMemberLimit_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics
	{
		struct Matchmaking_eventGetLobbyOwner_Parms
		{
			FSteamID steamIDLobby;
			FSteamID ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyOwner_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetLobbyOwner_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Returns the current lobby owner.\n\x09*\n\x09* You must be a member of the lobby to access this.\n\x09* There always one lobby owner - if the current owner leaves, another user in the lobby will become the owner automatically. It is possible (but rare) to join a lobby just as the owner is leaving, thus entering a lobby with self as the owner.\n\x09*\n\x09* @param\x09steamIDLobby\x09The Steam ID of the lobby to get the owner of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Returns the current lobby owner.\n\nYou must be a member of the lobby to access this.\nThere always one lobby owner - if the current owner leaves, another user in the lobby will become the owner automatically. It is possible (but rare) to join a lobby just as the owner is leaving, thus entering a lobby with self as the owner.\n\n@param        steamIDLobby    The Steam ID of the lobby to get the owner of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetLobbyOwner", nullptr, nullptr, sizeof(Matchmaking_eventGetLobbyOwner_Parms), Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetLobbyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetLobbyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics
	{
		struct Matchmaking_eventGetNumLobbyMembers_Parms
		{
			FSteamID steamIDLobby;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetNumLobbyMembers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventGetNumLobbyMembers_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Gets the number of users in a lobby.\n\x09*\n\x09* The current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\n\x09* This is used for iteration, after calling this then GetLobbyMemberByIndex can be used to get the Steam ID of each person in the lobby. Persona information for other lobby members (name, avatar, etc.) is automatically received and accessible via the ISteamFriends interface.\n\x09*\n\x09* @param\x09steamIDLobby\x09The Steam ID of the lobby to get the number of members of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Gets the number of users in a lobby.\n\nThe current user must be in the lobby to retrieve the Steam IDs of other users in that lobby.\nThis is used for iteration, after calling this then GetLobbyMemberByIndex can be used to get the Steam ID of each person in the lobby. Persona information for other lobby members (name, avatar, etc.) is automatically received and accessible via the ISteamFriends interface.\n\n@param        steamIDLobby    The Steam ID of the lobby to get the number of members of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "GetNumLobbyMembers", nullptr, nullptr, sizeof(Matchmaking_eventGetNumLobbyMembers_Parms), Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics
	{
		struct Matchmaking_eventInviteUserToLobby_Parms
		{
			FSteamID steamIDLobby;
			FSteamID steamIDInvitee;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDInvitee;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventInviteUserToLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventInviteUserToLobby_Parms), &Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_steamIDInvitee = { "steamIDInvitee", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventInviteUserToLobby_Parms, steamIDInvitee), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventInviteUserToLobby_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_steamIDInvitee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Invite another user to the lobby.\n\x09*\n\x09* If the specified user clicks the join link, a GameLobbyJoinRequested_t callback will be posted if the user is in-game,\n\x09* or if the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.\n\x09*\n\x09* @param\x09steamIDLobby\x09\x09The Steam ID of the lobby to invite the user to.\n\x09* @param\x09steamIDInvitee\x09\x09The Steam ID of the person who will be invited.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Invite another user to the lobby.\n\nIf the specified user clicks the join link, a GameLobbyJoinRequested_t callback will be posted if the user is in-game,\nor if the game isn't running yet then the game will be automatically launched with the command line parameter +connect_lobby <64-bit lobby Steam ID> instead.\n\n@param        steamIDLobby            The Steam ID of the lobby to invite the user to.\n@param        steamIDInvitee          The Steam ID of the person who will be invited." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "InviteUserToLobby", nullptr, nullptr, sizeof(Matchmaking_eventInviteUserToLobby_Parms), Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_InviteUserToLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_InviteUserToLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics
	{
		struct Matchmaking_eventJoinLobby_Parms
		{
			FScriptDelegate callback;
			FSteamID steamIDLobby;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventJoinLobby_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventJoinLobby_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnJoinLobby__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_steamIDLobby,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Joins an existing lobby.\n\x09*\n\x09* The lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\x09*\n\x09* @param\x09steamIDLobby\x09The Steam ID of the lobby to join.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Joins an existing lobby.\n\nThe lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.\n\n@param        steamIDLobby    The Steam ID of the lobby to join." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "JoinLobby", nullptr, nullptr, sizeof(Matchmaking_eventJoinLobby_Parms), Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_JoinLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_JoinLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics
	{
		struct Matchmaking_eventLeaveLobby_Parms
		{
			FSteamID steamIDLobby;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventLeaveLobby_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Leave a lobby that the user is currently in; this will take effect immediately on the client side, other users in the lobby will be notified by a LobbyChatUpdate_t callback.\n\x09*\n\x09* @param\x09steamIDLobby\x09The lobby to leave.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Leave a lobby that the user is currently in; this will take effect immediately on the client side, other users in the lobby will be notified by a LobbyChatUpdate_t callback.\n\n@param        steamIDLobby    The lobby to leave." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "LeaveLobby", nullptr, nullptr, sizeof(Matchmaking_eventLeaveLobby_Parms), Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_LeaveLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_LeaveLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics
	{
		struct Matchmaking_eventRemoveFavoriteGame_Parms
		{
			int32 appID;
			FString ip;
			int32 connectionPort;
			int32 queryPort;
			TArray<ESteamFavoriteFlags> flags;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_flags;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_flags_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_flags_Inner_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_queryPort;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_connectionPort;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ip;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventRemoveFavoriteGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventRemoveFavoriteGame_Parms), &Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_flags = { "flags", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, flags), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_flags_Inner = { "flags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_SteamCore_ESteamFavoriteFlags, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_flags_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_queryPort = { "queryPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, queryPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_connectionPort = { "connectionPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, connectionPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ip = { "ip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, ip), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventRemoveFavoriteGame_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_flags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_flags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_flags_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_queryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_connectionPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::NewProp_appID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Removes the game server from the local favorites list.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09\x09The App ID of the game.\n\x09* @param\x09ip\x09\x09\x09\x09\x09The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09""connectionPort\x09\x09The port used to connect to the server, in host order.\n\x09* @param\x09queryPort\x09\x09\x09The port used to query the server, in host order.\n\x09* @param\x09""flags\x09\x09\x09\x09Whether the server is on the favorites list or history list. See k_unFavoriteFlagNone for more information.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Removes the game server from the local favorites list.\n\n@param        appID                           The App ID of the game.\n@param        ip                                      The IP address of the server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        connectionPort          The port used to connect to the server, in host order.\n@param        queryPort                       The port used to query the server, in host order.\n@param        flags                           Whether the server is on the favorites list or history list. See k_unFavoriteFlagNone for more information." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "RemoveFavoriteGame", nullptr, nullptr, sizeof(Matchmaking_eventRemoveFavoriteGame_Parms), Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics
	{
		struct Matchmaking_eventRequestLobbyData_Parms
		{
			FSteamID steamIDLobby;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventRequestLobbyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventRequestLobbyData_Parms), &Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventRequestLobbyData_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Refreshes all of the metadata for a lobby that you're not in right now.\n\x09*\n\x09* You will never do this for lobbies you're a member of, that data will always be up to date. You can use this to refresh lobbies that you have obtained from RequestLobbyList or that are available via friends.\n\x09*\n\x09* @param\x09steamIDLobby\x09The Steam ID of the lobby to refresh the metadata of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Refreshes all of the metadata for a lobby that you're not in right now.\n\nYou will never do this for lobbies you're a member of, that data will always be up to date. You can use this to refresh lobbies that you have obtained from RequestLobbyList or that are available via friends.\n\n@param        steamIDLobby    The Steam ID of the lobby to refresh the metadata of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "RequestLobbyData", nullptr, nullptr, sizeof(Matchmaking_eventRequestLobbyData_Parms), Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_RequestLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_RequestLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics
	{
		struct Matchmaking_eventRequestLobbyList_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventRequestLobbyList_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestLobbyList__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Get a filtered list of relevant lobbies.\n\x09*\n\x09* There can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\n\x09* To filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\n\x09* If AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\n\x09* This will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.\n\x09*\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Get a filtered list of relevant lobbies.\n\nThere can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.\nTo filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.\nIf AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.\nThis will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "RequestLobbyList", nullptr, nullptr, sizeof(Matchmaking_eventRequestLobbyList_Parms), Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_RequestLobbyList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_RequestLobbyList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics
	{
		struct Matchmaking_eventSendLobbyChatMsg_Parms
		{
			FSteamID steamIDLobby;
			FString message;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSendLobbyChatMsg_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSendLobbyChatMsg_Parms), &Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSendLobbyChatMsg_Parms, message), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSendLobbyChatMsg_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_message,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Broadcasts a chat (text or binary data) message to the all of the users in the lobby.\n\x09*\n\x09* All users in the lobby (including the local user) will receive a LobbyChatMsg_t callback with the message.\n\x09* If you're sending binary data, you should prefix a header to the message so that you know to treat it as your custom data rather than a plain old text message.\n\x09* For communication that needs to be arbitrated (for example having a user pick from a set of characters, and making sure only one user has picked a character), you can use the lobby owner as the decision maker. GetLobbyOwner returns the current lobby owner. There is guaranteed to always be one and only one lobby member who is the owner. So for the choose-a-character scenario, the user who is picking a character would send the binary message 'I want to be Zoe', the lobby owner would see that message, see if it was OK, and broadcast the appropriate result (user X is Zoe).\n\x09* These messages are sent via the Steam back-end, and so the bandwidth available is limited. For higher-volume traffic like voice or game data, you'll want to use the Steam Networking API.\n\x09*\n\x09* @param\x09steamIDLobby\x09The Steam ID of the lobby to send the chat message to.\n\x09* @param\x09message\x09\x09\x09This can be text or binary data, up to 4 Kilobytes in size.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Broadcasts a chat (text or binary data) message to the all of the users in the lobby.\n\nAll users in the lobby (including the local user) will receive a LobbyChatMsg_t callback with the message.\nIf you're sending binary data, you should prefix a header to the message so that you know to treat it as your custom data rather than a plain old text message.\nFor communication that needs to be arbitrated (for example having a user pick from a set of characters, and making sure only one user has picked a character), you can use the lobby owner as the decision maker. GetLobbyOwner returns the current lobby owner. There is guaranteed to always be one and only one lobby member who is the owner. So for the choose-a-character scenario, the user who is picking a character would send the binary message 'I want to be Zoe', the lobby owner would see that message, see if it was OK, and broadcast the appropriate result (user X is Zoe).\nThese messages are sent via the Steam back-end, and so the bandwidth available is limited. For higher-volume traffic like voice or game data, you'll want to use the Steam Networking API.\n\n@param        steamIDLobby    The Steam ID of the lobby to send the chat message to.\n@param        message                 This can be text or binary data, up to 4 Kilobytes in size." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SendLobbyChatMsg", nullptr, nullptr, sizeof(Matchmaking_eventSendLobbyChatMsg_Parms), Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics
	{
		struct Matchmaking_eventSetLinkedLobby_Parms
		{
			FSteamID steamIDLobby;
			FSteamID steamIDLobbyDependent;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobbyDependent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLinkedLobby_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSetLinkedLobby_Parms), &Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_steamIDLobbyDependent = { "steamIDLobbyDependent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLinkedLobby_Parms, steamIDLobbyDependent), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLinkedLobby_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_steamIDLobbyDependent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Unused - Link two lobbies for the purposes of checking player compatibility using the frenemy system.\n\x09* You must be the lobby owner of both lobbies.\n\x09*\n\x09* @param\x09steamIDLobby\x09\x09\x09\x09The Steam ID of the primary lobby.\n\x09* @param\x09steamIDLobbyDependent\x09\x09The Steam ID that will be linked to the primary lobby.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Unused - Link two lobbies for the purposes of checking player compatibility using the frenemy system.\nYou must be the lobby owner of both lobbies.\n\n@param        steamIDLobby                            The Steam ID of the primary lobby.\n@param        steamIDLobbyDependent           The Steam ID that will be linked to the primary lobby." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLinkedLobby", nullptr, nullptr, sizeof(Matchmaking_eventSetLinkedLobby_Parms), Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLinkedLobby()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLinkedLobby_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics
	{
		struct Matchmaking_eventSetLobbyData_Parms
		{
			FSteamID steamIDLobby;
			FString key;
			FString value;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyData_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyData_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyData_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyData_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets a key/value pair in the lobby metadata. This can be used to set the the lobby name, current map, game mode, etc.\n\x09*\n\x09* This can only be set by the owner of the lobby. Lobby members should use SetLobbyMemberData instead.\n\x09* Each user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t callback, and any new users joining will receive any existing data.\n\x09* This will only send the data if it has changed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09*\n\x09* @param\x09steamIDLobby\x09\x09The Steam ID of the lobby to set the metadata for.\n\x09* @param\x09key\x09\x09\x09\x09\x09The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09value\x09\x09\x09\x09The value to set. This can not be longer than k_cubChatMetadataMax.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Sets a key/value pair in the lobby metadata. This can be used to set the the lobby name, current map, game mode, etc.\n\nThis can only be set by the owner of the lobby. Lobby members should use SetLobbyMemberData instead.\nEach user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t callback, and any new users joining will receive any existing data.\nThis will only send the data if it has changed. There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param        steamIDLobby            The Steam ID of the lobby to set the metadata for.\n@param        key                                     The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n@param        value                           The value to set. This can not be longer than k_cubChatMetadataMax." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyData", nullptr, nullptr, sizeof(Matchmaking_eventSetLobbyData_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics
	{
		struct Matchmaking_eventSetLobbyGameServer_Parms
		{
			FSteamID steamIDLobby;
			FString gameServerIP;
			int32 gameServerPort;
			FSteamID steamIDGameServer;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDGameServer;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_gameServerPort;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_gameServerIP;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_steamIDGameServer = { "steamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, steamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_gameServerPort = { "gameServerPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, gameServerPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_gameServerIP = { "gameServerIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, gameServerIP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyGameServer_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_steamIDGameServer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_gameServerPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_gameServerIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets the game server associated with the lobby.\n\x09*\n\x09* This can only be set by the owner of the lobby.\n\x09* Either the IP/Port or the Steam ID of the game server must be valid, depending on how you want the clients to be able to connect.\n\x09* A LobbyGameCreated_t callback will be sent to all players in the lobby, usually at this point, the users will join the specified game server.\n\x09*\n\x09* @param\x09steamIDLobby\x09\x09\x09The Steam ID of the lobby to set the game server information for.\n\x09* @param\x09gameServerIP\x09\x09\x09Sets the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09gameServerPort\x09\x09\x09Sets the connection port of the game server, in host order.\n\x09* @param\x09steamIDGameServer\x09\x09Sets the Steam ID of the game server. Use k_steamIDNil if you're not setting this.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Sets the game server associated with the lobby.\n\nThis can only be set by the owner of the lobby.\nEither the IP/Port or the Steam ID of the game server must be valid, depending on how you want the clients to be able to connect.\nA LobbyGameCreated_t callback will be sent to all players in the lobby, usually at this point, the users will join the specified game server.\n\n@param        steamIDLobby                    The Steam ID of the lobby to set the game server information for.\n@param        gameServerIP                    Sets the IP address of the game server, in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        gameServerPort                  Sets the connection port of the game server, in host order.\n@param        steamIDGameServer               Sets the Steam ID of the game server. Use k_steamIDNil if you're not setting this." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyGameServer", nullptr, nullptr, sizeof(Matchmaking_eventSetLobbyGameServer_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics
	{
		struct Matchmaking_eventSetLobbyJoinable_Parms
		{
			FSteamID steamIDLobby;
			bool bLobbyJoinable;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bLobbyJoinable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLobbyJoinable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyJoinable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyJoinable_Parms*)Obj)->bLobbyJoinable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable = { "bLobbyJoinable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyJoinable_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyJoinable_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_bLobbyJoinable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets whether or not a lobby is joinable by other players. This always defaults to enabled for a new lobby.\n\x09*\n\x09* If joining is disabled, then no players can join, even if they are a friend or have been invited.\n\x09* Lobbies with joining disabled will not be returned from a lobby search.\n\x09*\n\x09* @param\x09steamIDLobby\x09\x09The Steam ID of the lobby\n\x09* @param\x09""bLobbyJoinable\x09\x09""Enable (true) or disable (false) allowing users to join this lobby?\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Sets whether or not a lobby is joinable by other players. This always defaults to enabled for a new lobby.\n\nIf joining is disabled, then no players can join, even if they are a friend or have been invited.\nLobbies with joining disabled will not be returned from a lobby search.\n\n@param        steamIDLobby            The Steam ID of the lobby\n@param        bLobbyJoinable          Enable (true) or disable (false) allowing users to join this lobby?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyJoinable", nullptr, nullptr, sizeof(Matchmaking_eventSetLobbyJoinable_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics
	{
		struct Matchmaking_eventSetLobbyMemberData_Parms
		{
			FSteamID steamIDLobby;
			FString key;
			FString value;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberData_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberData_Parms, key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberData_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Sets per-user metadata for the local user.\n\x09*\n\x09* Each user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t callback, and any new users joining will receive any existing data.\n\x09* There is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\x09*\n\x09* @param\x09steamIDLobby\x09\x09The Steam ID of the lobby to set our metadata in.\n\x09* @param\x09key\x09\x09\x09\x09\x09The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n\x09* @param\x09value\x09\x09\x09\x09The value to set. This can not be longer than k_cubChatMetadataMax.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Sets per-user metadata for the local user.\n\nEach user in the lobby will be receive notification of the lobby data change via a LobbyDataUpdate_t callback, and any new users joining will receive any existing data.\nThere is a slight delay before sending the data so you can call this repeatedly to set all the data you need to and it will automatically be batched up and sent after the last sequential call.\n\n@param        steamIDLobby            The Steam ID of the lobby to set our metadata in.\n@param        key                                     The key to set the data for. This can not be longer than k_nMaxLobbyKeyLength.\n@param        value                           The value to set. This can not be longer than k_cubChatMetadataMax." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyMemberData", nullptr, nullptr, sizeof(Matchmaking_eventSetLobbyMemberData_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics
	{
		struct Matchmaking_eventSetLobbyMemberLimit_Parms
		{
			FSteamID steamIDLobby;
			int32 maxMembers;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxMembers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyMemberLimit_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyMemberLimit_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_maxMembers = { "maxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberLimit_Parms, maxMembers), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyMemberLimit_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_maxMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Set the maximum number of players that can join the lobby.\n\x09*\n\x09* This is also set when you create the lobby with CreateLobby.\n\x09* This can only be set by the owner of the lobby.\n\x09*\n\x09* @param\x09steamIDLobby\x09The Steam ID of the lobby to set the member limit for.\n\x09* @param\x09maxMembers\x09\x09The maximum number of players allowed in this lobby. This can not be above 250.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Set the maximum number of players that can join the lobby.\n\nThis is also set when you create the lobby with CreateLobby.\nThis can only be set by the owner of the lobby.\n\n@param        steamIDLobby    The Steam ID of the lobby to set the member limit for.\n@param        maxMembers              The maximum number of players allowed in this lobby. This can not be above 250." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyMemberLimit", nullptr, nullptr, sizeof(Matchmaking_eventSetLobbyMemberLimit_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics
	{
		struct Matchmaking_eventSetLobbyOwner_Parms
		{
			FSteamID steamIDLobby;
			FSteamID steamIDNewOwner;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDNewOwner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyOwner_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_steamIDNewOwner = { "steamIDNewOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyOwner_Parms, steamIDNewOwner), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyOwner_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_steamIDNewOwner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Changes who the lobby owner is.\n\x09*\n\x09* This can only be set by the owner of the lobby. This will trigger a LobbyDataUpdate_t for all of the users in the lobby, each user should update their local state to reflect the new owner. This is typically accomplished by displaying a crown icon next to the owners name.\n\x09*\n\x09* @param\x09steamIDLobby\x09\x09The Steam ID of the lobby where the owner change will take place.\n\x09* @param\x09steamIDNewOwner\x09\x09The Steam ID of the user that will be the new owner of the lobby, they must be in the lobby.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Changes who the lobby owner is.\n\nThis can only be set by the owner of the lobby. This will trigger a LobbyDataUpdate_t for all of the users in the lobby, each user should update their local state to reflect the new owner. This is typically accomplished by displaying a crown icon next to the owners name.\n\n@param        steamIDLobby            The Steam ID of the lobby where the owner change will take place.\n@param        steamIDNewOwner         The Steam ID of the user that will be the new owner of the lobby, they must be in the lobby." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyOwner", nullptr, nullptr, sizeof(Matchmaking_eventSetLobbyOwner_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics
	{
		struct Matchmaking_eventSetLobbyType_Parms
		{
			FSteamID steamIDLobby;
			ESteamLobbyType lobbyType;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_lobbyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_lobbyType_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDLobby;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Matchmaking_eventSetLobbyType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Matchmaking_eventSetLobbyType_Parms), &Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_lobbyType = { "lobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyType_Parms, lobbyType), Z_Construct_UEnum_SteamCore_ESteamLobbyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_lobbyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_steamIDLobby = { "steamIDLobby", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Matchmaking_eventSetLobbyType_Parms, steamIDLobby), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_lobbyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_lobbyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::NewProp_steamIDLobby,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Matchmaking" },
		{ "Comment", "/**\n\x09* Updates what type of lobby this is.\n\x09*\n\x09* This is also set when you create the lobby with CreateLobby.\n\x09* This can only be set by the owner of the lobby.\n\x09*\n\x09* @param\x09steamIDLobby\x09The Steam ID of the lobby to set the type of.\n\x09* @param\x09lobbyType\x09\x09The new lobby type to that will be set.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
		{ "ToolTip", "Updates what type of lobby this is.\n\nThis is also set when you create the lobby with CreateLobby.\nThis can only be set by the owner of the lobby.\n\n@param        steamIDLobby    The Steam ID of the lobby to set the type of.\n@param        lobbyType               The new lobby type to that will be set." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmaking, nullptr, "SetLobbyType", nullptr, nullptr, sizeof(Matchmaking_eventSetLobbyType_Parms), Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmaking_SetLobbyType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmaking_SetLobbyType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMatchmaking_NoRegister()
	{
		return UMatchmaking::StaticClass();
	}
	struct Z_Construct_UClass_UMatchmaking_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyKicked_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyKicked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyInvite_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyInvite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyGameCreated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyGameCreated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyEnter_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyEnter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyDataUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyDataUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyChatUpdate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyChatUpdate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LobbyChatMsg_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LobbyChatMsg;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FavoritesListChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FavoritesListChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FavoritesListAccountsUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_FavoritesListAccountsUpdated;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatchmaking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMatchmaking_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMatchmaking_AddFavoriteGame, "AddFavoriteGame" }, // 1332668918
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListCompatibleMembersFilter, "AddRequestLobbyListCompatibleMembersFilter" }, // 1122533888
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListDistanceFilter, "AddRequestLobbyListDistanceFilter" }, // 543588452
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListFilterSlotsAvailable, "AddRequestLobbyListFilterSlotsAvailable" }, // 38079555
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNearValueFilter, "AddRequestLobbyListNearValueFilter" }, // 3928352250
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListNumericalFilter, "AddRequestLobbyListNumericalFilter" }, // 152203829
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListResultCountFilter, "AddRequestLobbyListResultCountFilter" }, // 473872488
		{ &Z_Construct_UFunction_UMatchmaking_AddRequestLobbyListStringFilter, "AddRequestLobbyListStringFilter" }, // 871203601
		{ &Z_Construct_UFunction_UMatchmaking_CreateLobby, "CreateLobby" }, // 1202090813
		{ &Z_Construct_UFunction_UMatchmaking_DeleteLobbyData, "DeleteLobbyData" }, // 1019147857
		{ &Z_Construct_UFunction_UMatchmaking_GetFavoriteGame, "GetFavoriteGame" }, // 2900509857
		{ &Z_Construct_UFunction_UMatchmaking_GetFavoriteGameCount, "GetFavoriteGameCount" }, // 1874695502
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyByIndex, "GetLobbyByIndex" }, // 493432070
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyChatEntry, "GetLobbyChatEntry" }, // 3412926848
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyData, "GetLobbyData" }, // 3916210617
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyDataByIndex, "GetLobbyDataByIndex" }, // 4214418695
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyDataCount, "GetLobbyDataCount" }, // 3877758758
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyGameServer, "GetLobbyGameServer" }, // 2280630676
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyMemberByIndex, "GetLobbyMemberByIndex" }, // 35875358
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyMemberData, "GetLobbyMemberData" }, // 3552541053
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyMemberLimit, "GetLobbyMemberLimit" }, // 1939703024
		{ &Z_Construct_UFunction_UMatchmaking_GetLobbyOwner, "GetLobbyOwner" }, // 3179628705
		{ &Z_Construct_UFunction_UMatchmaking_GetNumLobbyMembers, "GetNumLobbyMembers" }, // 1067506886
		{ &Z_Construct_UFunction_UMatchmaking_InviteUserToLobby, "InviteUserToLobby" }, // 1056487203
		{ &Z_Construct_UFunction_UMatchmaking_JoinLobby, "JoinLobby" }, // 752026144
		{ &Z_Construct_UFunction_UMatchmaking_LeaveLobby, "LeaveLobby" }, // 2192129869
		{ &Z_Construct_UFunction_UMatchmaking_RemoveFavoriteGame, "RemoveFavoriteGame" }, // 2219957334
		{ &Z_Construct_UFunction_UMatchmaking_RequestLobbyData, "RequestLobbyData" }, // 2558128460
		{ &Z_Construct_UFunction_UMatchmaking_RequestLobbyList, "RequestLobbyList" }, // 1741202429
		{ &Z_Construct_UFunction_UMatchmaking_SendLobbyChatMsg, "SendLobbyChatMsg" }, // 3808084021
		{ &Z_Construct_UFunction_UMatchmaking_SetLinkedLobby, "SetLinkedLobby" }, // 3899270902
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyData, "SetLobbyData" }, // 3280826943
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyGameServer, "SetLobbyGameServer" }, // 3909063704
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyJoinable, "SetLobbyJoinable" }, // 920058160
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyMemberData, "SetLobbyMemberData" }, // 4261970082
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyMemberLimit, "SetLobbyMemberLimit" }, // 3428793271
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyOwner, "SetLobbyOwner" }, // 3588112168
		{ &Z_Construct_UFunction_UMatchmaking_SetLobbyType, "SetLobbyType" }, // 1600423526
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Matchmaking/Matchmaking.h" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked = { "LobbyKicked", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, LobbyKicked), Z_Construct_UDelegateFunction_SteamCore_OnLobbyKicked__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite = { "LobbyInvite", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, LobbyInvite), Z_Construct_UDelegateFunction_SteamCore_OnLobbyInvite__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated = { "LobbyGameCreated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, LobbyGameCreated), Z_Construct_UDelegateFunction_SteamCore_OnLobbyGameCreated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter = { "LobbyEnter", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, LobbyEnter), Z_Construct_UDelegateFunction_SteamCore_OnLobbyEnter__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate = { "LobbyDataUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, LobbyDataUpdate), Z_Construct_UDelegateFunction_SteamCore_OnLobbyDataUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate = { "LobbyChatUpdate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, LobbyChatUpdate), Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatUpdate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg = { "LobbyChatMsg", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, LobbyChatMsg), Z_Construct_UDelegateFunction_SteamCore_OnLobbyChatMsg__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged = { "FavoritesListChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, FavoritesListChanged), Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated_MetaData[] = {
		{ "Category", "SteamCore|Matchmaking|Delegates" },
		{ "ModuleRelativePath", "Public/Matchmaking/Matchmaking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated = { "FavoritesListAccountsUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMatchmaking, FavoritesListAccountsUpdated), Z_Construct_UDelegateFunction_SteamCore_OnFavoritesListAccountsUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMatchmaking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyKicked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyInvite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyGameCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyEnter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyDataUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatUpdate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_LobbyChatMsg,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMatchmaking_Statics::NewProp_FavoritesListAccountsUpdated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchmaking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchmaking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatchmaking_Statics::ClassParams = {
		&UMatchmaking::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMatchmaking_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatchmaking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmaking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchmaking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatchmaking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatchmaking, 3918767177);
	template<> STEAMCORE_API UClass* StaticClass<UMatchmaking>()
	{
		return UMatchmaking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatchmaking(Z_Construct_UClass_UMatchmaking, &UMatchmaking::StaticClass, TEXT("/Script/SteamCore"), TEXT("UMatchmaking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchmaking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
