// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/MatchmakingServers/MatchmakingServers.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchmakingServers() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UMatchmakingServers_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UMatchmakingServers();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature();
	STEAMCORE_API UClass* Z_Construct_UClass_UServerFilter_NoRegister();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UMatchmakingServers::execServerRules)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_ip);
		P_GET_PROPERTY(FIntProperty,Z_Param_queryPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRules(FOnServerRules(Z_Param_Out_callback),Z_Param_ip,Z_Param_queryPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmakingServers::execPingServer)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_ip);
		P_GET_PROPERTY(FIntProperty,Z_Param_queryPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PingServer(FOnServerPing(Z_Param_Out_callback),Z_Param_ip,Z_Param_queryPort);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmakingServers::execRequestSpectatorServerList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_serverCallback);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_serverFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestSpectatorServerList(FOnServersUpdated(Z_Param_Out_serverCallback),Z_Param_appID,Z_Param_maxResults,Z_Param_bIgnoreNonResponsive,Z_Param_serverFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmakingServers::execRequestLANServerList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_serverCallback);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_serverFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestLANServerList(FOnServersUpdated(Z_Param_Out_serverCallback),Z_Param_appID,Z_Param_maxResults,Z_Param_bIgnoreNonResponsive,Z_Param_serverFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmakingServers::execRequestInternetServerList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_serverCallback);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_serverFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestInternetServerList(FOnServersUpdated(Z_Param_Out_serverCallback),Z_Param_appID,Z_Param_maxResults,Z_Param_bIgnoreNonResponsive,Z_Param_serverFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmakingServers::execRequestHistoryServerList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_serverCallback);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_serverFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestHistoryServerList(FOnServersUpdated(Z_Param_Out_serverCallback),Z_Param_appID,Z_Param_maxResults,Z_Param_bIgnoreNonResponsive,Z_Param_serverFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmakingServers::execRequestFriendsServerList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_serverCallback);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_serverFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestFriendsServerList(FOnServersUpdated(Z_Param_Out_serverCallback),Z_Param_appID,Z_Param_maxResults,Z_Param_bIgnoreNonResponsive,Z_Param_serverFilter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchmakingServers::execRequestFavoritesServerList)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_serverCallback);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_GET_PROPERTY(FIntProperty,Z_Param_maxResults);
		P_GET_UBOOL(Z_Param_bIgnoreNonResponsive);
		P_GET_OBJECT(UServerFilter,Z_Param_serverFilter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestFavoritesServerList(FOnServersUpdated(Z_Param_Out_serverCallback),Z_Param_appID,Z_Param_maxResults,Z_Param_bIgnoreNonResponsive,Z_Param_serverFilter);
		P_NATIVE_END;
	}
	void UMatchmakingServers::StaticRegisterNativesUMatchmakingServers()
	{
		UClass* Class = UMatchmakingServers::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PingServer", &UMatchmakingServers::execPingServer },
			{ "RequestFavoritesServerList", &UMatchmakingServers::execRequestFavoritesServerList },
			{ "RequestFriendsServerList", &UMatchmakingServers::execRequestFriendsServerList },
			{ "RequestHistoryServerList", &UMatchmakingServers::execRequestHistoryServerList },
			{ "RequestInternetServerList", &UMatchmakingServers::execRequestInternetServerList },
			{ "RequestLANServerList", &UMatchmakingServers::execRequestLANServerList },
			{ "RequestSpectatorServerList", &UMatchmakingServers::execRequestSpectatorServerList },
			{ "ServerRules", &UMatchmakingServers::execServerRules },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics
	{
		struct MatchmakingServers_eventPingServer_Parms
		{
			FScriptDelegate callback;
			FString ip;
			int32 queryPort;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_queryPort;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ip;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_queryPort = { "queryPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventPingServer_Parms, queryPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_ip = { "ip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventPingServer_Parms, ip), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventPingServer_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnServerPing__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_queryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.\n\x09*\n\x09* @param\x09ip\x09\x09The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09port\x09The port of the game server you are querying, in host order.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServers.h" },
		{ "ToolTip", "Queries an individual game servers directly via IP/Port to request an updated ping time and other details from the server.\n\n@param        ip              The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        port    The port of the game server you are querying, in host order." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "PingServer", nullptr, nullptr, sizeof(MatchmakingServers_eventPingServer_Parms), Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_PingServer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_PingServer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics
	{
		struct MatchmakingServers_eventRequestFavoritesServerList_Parms
		{
			FScriptDelegate serverCallback;
			int32 appID;
			int32 maxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* serverFilter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_serverFilter;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxResults;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_serverCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_serverFilter = { "serverFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFavoritesServerList_Parms, serverFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((MatchmakingServers_eventRequestFavoritesServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MatchmakingServers_eventRequestFavoritesServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_maxResults = { "maxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFavoritesServerList_Parms, maxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFavoritesServerList_Parms, appID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_serverCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_serverCallback = { "serverCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFavoritesServerList_Parms, serverCallback), Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_serverCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_serverCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_serverFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_maxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::NewProp_serverCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09*/" },
		{ "CPP_Default_appID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_maxResults", "50" },
		{ "CPP_Default_serverFilter", "None" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServers.h" },
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\n@param        appID                                   The app to request the server list of.\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestFavoritesServerList", nullptr, nullptr, sizeof(MatchmakingServers_eventRequestFavoritesServerList_Parms), Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics
	{
		struct MatchmakingServers_eventRequestFriendsServerList_Parms
		{
			FScriptDelegate serverCallback;
			int32 appID;
			int32 maxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* serverFilter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_serverFilter;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxResults;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_serverCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_serverFilter = { "serverFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFriendsServerList_Parms, serverFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((MatchmakingServers_eventRequestFriendsServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MatchmakingServers_eventRequestFriendsServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_maxResults = { "maxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFriendsServerList_Parms, maxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFriendsServerList_Parms, appID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_serverCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_serverCallback = { "serverCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestFriendsServerList_Parms, serverCallback), Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_serverCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_serverCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_serverFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_maxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::NewProp_serverCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09*/" },
		{ "CPP_Default_appID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_maxResults", "50" },
		{ "CPP_Default_serverFilter", "None" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServers.h" },
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\n@param        appID                                   The app to request the server list of.\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestFriendsServerList", nullptr, nullptr, sizeof(MatchmakingServers_eventRequestFriendsServerList_Parms), Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics
	{
		struct MatchmakingServers_eventRequestHistoryServerList_Parms
		{
			FScriptDelegate serverCallback;
			int32 appID;
			int32 maxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* serverFilter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_serverFilter;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxResults;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_serverCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_serverFilter = { "serverFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestHistoryServerList_Parms, serverFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((MatchmakingServers_eventRequestHistoryServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MatchmakingServers_eventRequestHistoryServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_maxResults = { "maxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestHistoryServerList_Parms, maxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestHistoryServerList_Parms, appID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_serverCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_serverCallback = { "serverCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestHistoryServerList_Parms, serverCallback), Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_serverCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_serverCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_serverFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_maxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::NewProp_serverCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09*/" },
		{ "CPP_Default_appID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_maxResults", "50" },
		{ "CPP_Default_serverFilter", "None" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServers.h" },
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\n@param        appID                                   The app to request the server list of.\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestHistoryServerList", nullptr, nullptr, sizeof(MatchmakingServers_eventRequestHistoryServerList_Parms), Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics
	{
		struct MatchmakingServers_eventRequestInternetServerList_Parms
		{
			FScriptDelegate serverCallback;
			int32 appID;
			int32 maxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* serverFilter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_serverFilter;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxResults;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_serverCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_serverFilter = { "serverFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestInternetServerList_Parms, serverFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((MatchmakingServers_eventRequestInternetServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MatchmakingServers_eventRequestInternetServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_maxResults = { "maxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestInternetServerList_Parms, maxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestInternetServerList_Parms, appID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_serverCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_serverCallback = { "serverCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestInternetServerList_Parms, serverCallback), Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_serverCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_serverCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_serverFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_maxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::NewProp_serverCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09*/" },
		{ "CPP_Default_appID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_maxResults", "50" },
		{ "CPP_Default_serverFilter", "None" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServers.h" },
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\n@param        appID                                   The app to request the server list of.\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestInternetServerList", nullptr, nullptr, sizeof(MatchmakingServers_eventRequestInternetServerList_Parms), Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics
	{
		struct MatchmakingServers_eventRequestLANServerList_Parms
		{
			FScriptDelegate serverCallback;
			int32 appID;
			int32 maxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* serverFilter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_serverFilter;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxResults;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_serverCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_serverFilter = { "serverFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestLANServerList_Parms, serverFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((MatchmakingServers_eventRequestLANServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MatchmakingServers_eventRequestLANServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_maxResults = { "maxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestLANServerList_Parms, maxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestLANServerList_Parms, appID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_serverCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_serverCallback = { "serverCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestLANServerList_Parms, serverCallback), Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_serverCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_serverCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_serverFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_maxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::NewProp_serverCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09*/" },
		{ "CPP_Default_appID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_maxResults", "50" },
		{ "CPP_Default_serverFilter", "None" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServers.h" },
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\n@param        appID                                   The app to request the server list of.\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestLANServerList", nullptr, nullptr, sizeof(MatchmakingServers_eventRequestLANServerList_Parms), Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics
	{
		struct MatchmakingServers_eventRequestSpectatorServerList_Parms
		{
			FScriptDelegate serverCallback;
			int32 appID;
			int32 maxResults;
			bool bIgnoreNonResponsive;
			UServerFilter* serverFilter;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_serverFilter;
		static void NewProp_bIgnoreNonResponsive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreNonResponsive;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_maxResults;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_appID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_serverCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_serverCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_serverFilter = { "serverFilter", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestSpectatorServerList_Parms, serverFilter), Z_Construct_UClass_UServerFilter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit(void* Obj)
	{
		((MatchmakingServers_eventRequestSpectatorServerList_Parms*)Obj)->bIgnoreNonResponsive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive = { "bIgnoreNonResponsive", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MatchmakingServers_eventRequestSpectatorServerList_Parms), &Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_maxResults = { "maxResults", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestSpectatorServerList_Parms, maxResults), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestSpectatorServerList_Parms, appID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_serverCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_serverCallback = { "serverCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventRequestSpectatorServerList_Parms, serverCallback), Z_Construct_UDelegateFunction_SteamCore_OnServersUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_serverCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_serverCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_serverFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_bIgnoreNonResponsive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_maxResults,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::NewProp_serverCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Request a new list of game servers from the 'spectator' server list.\n\x09*\n\x09* @param\x09""appID\x09\x09\x09\x09\x09The app to request the server list of.\n\x09* @param\x09""bIgnoreNonResponsive\x09""Filter out / ignore non responsive servers\n\x09*/" },
		{ "CPP_Default_appID", "480" },
		{ "CPP_Default_bIgnoreNonResponsive", "false" },
		{ "CPP_Default_maxResults", "50" },
		{ "CPP_Default_serverFilter", "None" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServers.h" },
		{ "ToolTip", "Request a new list of game servers from the 'spectator' server list.\n\n@param        appID                                   The app to request the server list of.\n@param        bIgnoreNonResponsive    Filter out / ignore non responsive servers" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "RequestSpectatorServerList", nullptr, nullptr, sizeof(MatchmakingServers_eventRequestSpectatorServerList_Parms), Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics
	{
		struct MatchmakingServers_eventServerRules_Parms
		{
			FScriptDelegate callback;
			FString ip;
			int32 queryPort;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_queryPort;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ip;
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_queryPort = { "queryPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventServerRules_Parms, queryPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_ip = { "ip", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventServerRules_Parms, ip), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchmakingServers_eventServerRules_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnServerRules__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_queryPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_ip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|MatchmakingServers" },
		{ "Comment", "/**\n\x09* Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)\n\x09*\n\x09* @param\x09ip\x09\x09The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09port\x09The port of the game server you are querying, in host order.\n\x09*/" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServers.h" },
		{ "ToolTip", "Queries an individual game servers directly via IP/Port to request the list of rules that the server is running. (See ISteamGameServer::SetKeyValue to set the rules on the server side.)\n\n@param        ip              The IP of the game server you are querying in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        port    The port of the game server you are querying, in host order." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchmakingServers, nullptr, "ServerRules", nullptr, nullptr, sizeof(MatchmakingServers_eventServerRules_Parms), Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchmakingServers_ServerRules()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchmakingServers_ServerRules_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMatchmakingServers_NoRegister()
	{
		return UMatchmakingServers::StaticClass();
	}
	struct Z_Construct_UClass_UMatchmakingServers_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatchmakingServers_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMatchmakingServers_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMatchmakingServers_PingServer, "PingServer" }, // 1711332870
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestFavoritesServerList, "RequestFavoritesServerList" }, // 2071690033
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestFriendsServerList, "RequestFriendsServerList" }, // 249651185
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestHistoryServerList, "RequestHistoryServerList" }, // 1155883734
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestInternetServerList, "RequestInternetServerList" }, // 2123114816
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestLANServerList, "RequestLANServerList" }, // 1142097760
		{ &Z_Construct_UFunction_UMatchmakingServers_RequestSpectatorServerList, "RequestSpectatorServerList" }, // 2441008936
		{ &Z_Construct_UFunction_UMatchmakingServers_ServerRules, "ServerRules" }, // 3142682410
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchmakingServers_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MatchmakingServers/MatchmakingServers.h" },
		{ "ModuleRelativePath", "Public/MatchmakingServers/MatchmakingServers.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchmakingServers_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchmakingServers>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatchmakingServers_Statics::ClassParams = {
		&UMatchmakingServers::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatchmakingServers_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchmakingServers_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchmakingServers()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatchmakingServers_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatchmakingServers, 2168911190);
	template<> STEAMCORE_API UClass* StaticClass<UMatchmakingServers>()
	{
		return UMatchmakingServers::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatchmakingServers(Z_Construct_UClass_UMatchmakingServers, &UMatchmakingServers::StaticClass, TEXT("/Script/SteamCore"), TEXT("UMatchmakingServers"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchmakingServers);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
