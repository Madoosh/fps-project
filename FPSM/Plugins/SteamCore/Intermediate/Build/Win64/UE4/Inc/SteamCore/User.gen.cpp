// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/User/User.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUser() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UUser_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UUser();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamVoiceResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UUser::execUserHasLicenseForApp)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_GET_PROPERTY(FIntProperty,Z_Param_appID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamUserHasLicenseForAppResult*)Z_Param__Result=UUser::UserHasLicenseForApp(Z_Param_steamID,Z_Param_appID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execStopVoiceRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::StopVoiceRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execStartVoiceRecording)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::StartVoiceRecording();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execRequestStoreAuthURL)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_PROPERTY(FStrProperty,Z_Param_redirectURL);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestStoreAuthURL(FOnStoreAuthURLResponse(Z_Param_Out_callback),Z_Param_redirectURL);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execRequestEncryptedAppTicket)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_TARRAY(uint8,Z_Param_dataToInclude);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestEncryptedAppTicket(FOnRequestEncryptedAppTicket(Z_Param_Out_callback),Z_Param_dataToInclude);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetVoiceOptimalSampleRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUser::GetVoiceOptimalSampleRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetVoice)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_destBuffer);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_bytesWritten);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamVoiceResult*)Z_Param__Result=UUser::GetVoice(Z_Param_Out_destBuffer,Z_Param_Out_bytesWritten);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetSteamID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UUser::GetSteamID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetSteamID_Pure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamID*)Z_Param__Result=UUser::GetSteamID_Pure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetPlayerSteamLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUser::GetPlayerSteamLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetGameBadgeLevel)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_series);
		P_GET_UBOOL(Z_Param_bFoil);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UUser::GetGameBadgeLevel(Z_Param_series,Z_Param_bFoil);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetEncryptedAppTicket)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ticket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::GetEncryptedAppTicket(Z_Param_Out_ticket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetAvailableVoice)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_compressedBytes);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_uncompressedBytes);
		P_GET_PROPERTY(FIntProperty,Z_Param_uncompressedVoiceDesiredSampleRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamVoiceResult*)Z_Param__Result=UUser::GetAvailableVoice(Z_Param_Out_compressedBytes,Z_Param_Out_uncompressedBytes,Z_Param_uncompressedVoiceDesiredSampleRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execGetAuthSessionTicket)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_ticket);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSteamTicketHandle*)Z_Param__Result=UUser::GetAuthSessionTicket(Z_Param_Out_ticket);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execEndAuthSession)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::EndAuthSession(Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execDecompressVoice)
	{
		P_GET_TARRAY(uint8,Z_Param_compressedBuffer);
		P_GET_PROPERTY(FIntProperty,Z_Param_desiredSampleRate);
		P_GET_TARRAY_REF(uint8,Z_Param_Out_destBuffer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamVoiceResult*)Z_Param__Result=UUser::DecompressVoice(Z_Param_compressedBuffer,Z_Param_desiredSampleRate,Z_Param_Out_destBuffer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execCancelAuthTicket)
	{
		P_GET_STRUCT(FSteamTicketHandle,Z_Param_ticketHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::CancelAuthTicket(Z_Param_ticketHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBLoggedOn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BLoggedOn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsTwoFactorEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsTwoFactorEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsPhoneVerified)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsPhoneVerified();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsPhoneRequiringVerification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsPhoneRequiringVerification();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsPhoneIdentifying)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsPhoneIdentifying();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBIsBehindNAT)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UUser::BIsBehindNAT();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execBeginAuthSession)
	{
		P_GET_TARRAY(uint8,Z_Param_ticket);
		P_GET_STRUCT(FSteamID,Z_Param_steamID);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ESteamBeginAuthSessionResult*)Z_Param__Result=UUser::BeginAuthSession(Z_Param_ticket,Z_Param_steamID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUser::execAdvertiseGame)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDGameServer);
		P_GET_PROPERTY(FStrProperty,Z_Param_serverIP);
		P_GET_PROPERTY(FIntProperty,Z_Param_serverPort);
		P_FINISH;
		P_NATIVE_BEGIN;
		UUser::AdvertiseGame(Z_Param_steamIDGameServer,Z_Param_serverIP,Z_Param_serverPort);
		P_NATIVE_END;
	}
	void UUser::StaticRegisterNativesUUser()
	{
		UClass* Class = UUser::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AdvertiseGame", &UUser::execAdvertiseGame },
			{ "BeginAuthSession", &UUser::execBeginAuthSession },
			{ "BIsBehindNAT", &UUser::execBIsBehindNAT },
			{ "BIsPhoneIdentifying", &UUser::execBIsPhoneIdentifying },
			{ "BIsPhoneRequiringVerification", &UUser::execBIsPhoneRequiringVerification },
			{ "BIsPhoneVerified", &UUser::execBIsPhoneVerified },
			{ "BIsTwoFactorEnabled", &UUser::execBIsTwoFactorEnabled },
			{ "BLoggedOn", &UUser::execBLoggedOn },
			{ "CancelAuthTicket", &UUser::execCancelAuthTicket },
			{ "DecompressVoice", &UUser::execDecompressVoice },
			{ "EndAuthSession", &UUser::execEndAuthSession },
			{ "GetAuthSessionTicket", &UUser::execGetAuthSessionTicket },
			{ "GetAvailableVoice", &UUser::execGetAvailableVoice },
			{ "GetEncryptedAppTicket", &UUser::execGetEncryptedAppTicket },
			{ "GetGameBadgeLevel", &UUser::execGetGameBadgeLevel },
			{ "GetPlayerSteamLevel", &UUser::execGetPlayerSteamLevel },
			{ "GetSteamID", &UUser::execGetSteamID },
			{ "GetSteamID_Pure", &UUser::execGetSteamID_Pure },
			{ "GetVoice", &UUser::execGetVoice },
			{ "GetVoiceOptimalSampleRate", &UUser::execGetVoiceOptimalSampleRate },
			{ "RequestEncryptedAppTicket", &UUser::execRequestEncryptedAppTicket },
			{ "RequestStoreAuthURL", &UUser::execRequestStoreAuthURL },
			{ "StartVoiceRecording", &UUser::execStartVoiceRecording },
			{ "StopVoiceRecording", &UUser::execStopVoiceRecording },
			{ "UserHasLicenseForApp", &UUser::execUserHasLicenseForApp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUser_AdvertiseGame_Statics
	{
		struct User_eventAdvertiseGame_Parms
		{
			FSteamID steamIDGameServer;
			FString serverIP;
			int32 serverPort;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_serverPort;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_serverIP;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDGameServer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_serverPort = { "serverPort", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventAdvertiseGame_Parms, serverPort), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_serverIP = { "serverIP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventAdvertiseGame_Parms, serverIP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_steamIDGameServer = { "steamIDGameServer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventAdvertiseGame_Parms, steamIDGameServer), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_AdvertiseGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_serverPort,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_serverIP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_AdvertiseGame_Statics::NewProp_steamIDGameServer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_AdvertiseGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Set the rich presence data for an unsecured game server that the user is playing on. This allows friends to be able to view the game info and join your game.\n\x09*\n\x09* When you are using Steam authentication system this call is never required, the auth system automatically sets the appropriate rich presence.\n\x09*\n\x09* @param\x09steamIDGameServer\x09This should be k_steamIDNonSteamGS if you're setting the IP/Port, otherwise it should be k_steamIDNil if you're clearing this.\n\x09* @param\x09serverIP\x09\x09\x09The IP of the game server in host order, i.e 127.0.0.1 == 0x7f000001.\n\x09* @param\x09serverPort\x09\x09\x09The connection port of the game server, in host order.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Set the rich presence data for an unsecured game server that the user is playing on. This allows friends to be able to view the game info and join your game.\n\nWhen you are using Steam authentication system this call is never required, the auth system automatically sets the appropriate rich presence.\n\n@param        steamIDGameServer       This should be k_steamIDNonSteamGS if you're setting the IP/Port, otherwise it should be k_steamIDNil if you're clearing this.\n@param        serverIP                        The IP of the game server in host order, i.e 127.0.0.1 == 0x7f000001.\n@param        serverPort                      The connection port of the game server, in host order." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_AdvertiseGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "AdvertiseGame", nullptr, nullptr, sizeof(User_eventAdvertiseGame_Parms), Z_Construct_UFunction_UUser_AdvertiseGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_AdvertiseGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_AdvertiseGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_AdvertiseGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_AdvertiseGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_AdvertiseGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BeginAuthSession_Statics
	{
		struct User_eventBeginAuthSession_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventBeginAuthSession_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventBeginAuthSession_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ticket = { "ticket", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventBeginAuthSession_Parms, ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ticket_Inner = { "ticket", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BeginAuthSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_steamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ticket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BeginAuthSession_Statics::NewProp_ticket_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BeginAuthSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\x09*\n\x09* The ticket is created on the entity with GetAuthSessionTicket or ISteamGameServer::GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\n\x09* This registers for ValidateAuthTicketResponse_t callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\n\x09* When the multiplayer session terminates you must call EndAuthSession.\n\x09*\n\x09* @param\x09ticket\x09\x09The auth ticket to validate.\n\x09* @param\x09steamID\x09\x09The entity's Steam ID that sent this ticket.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Authenticate the ticket from the entity Steam ID to be sure it is valid and isn't reused.\n\nThe ticket is created on the entity with GetAuthSessionTicket or ISteamGameServer::GetAuthSessionTicket and then needs to be provided over the network for the other end to validate.\nThis registers for ValidateAuthTicketResponse_t callbacks if the entity goes offline or cancels the ticket. See EAuthSessionResponse for more information.\nWhen the multiplayer session terminates you must call EndAuthSession.\n\n@param        ticket          The auth ticket to validate.\n@param        steamID         The entity's Steam ID that sent this ticket." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BeginAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BeginAuthSession", nullptr, nullptr, sizeof(User_eventBeginAuthSession_Parms), Z_Construct_UFunction_UUser_BeginAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BeginAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BeginAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BeginAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BeginAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_BeginAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsBehindNAT_Statics
	{
		struct User_eventBIsBehindNAT_Parms
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
	void Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsBehindNAT_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventBIsBehindNAT_Parms), &Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks if the current users looks like they are behind a NAT device.\n\x09*\n\x09* This is only valid if the user is connected to the Steam servers and may not catch all forms of NAT.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Checks if the current users looks like they are behind a NAT device.\n\nThis is only valid if the user is connected to the Steam servers and may not catch all forms of NAT." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsBehindNAT", nullptr, nullptr, sizeof(User_eventBIsBehindNAT_Parms), Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsBehindNAT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_BIsBehindNAT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics
	{
		struct User_eventBIsPhoneIdentifying_Parms
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
	void Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsPhoneIdentifying_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventBIsPhoneIdentifying_Parms), &Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks whether the user's phone number is used to uniquely identify them.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Checks whether the user's phone number is used to uniquely identify them." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsPhoneIdentifying", nullptr, nullptr, sizeof(User_eventBIsPhoneIdentifying_Parms), Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsPhoneIdentifying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_BIsPhoneIdentifying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics
	{
		struct User_eventBIsPhoneRequiringVerification_Parms
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
	void Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsPhoneRequiringVerification_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventBIsPhoneRequiringVerification_Parms), &Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks whether the current user's phone number is awaiting (re)verification.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Checks whether the current user's phone number is awaiting (re)verification." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsPhoneRequiringVerification", nullptr, nullptr, sizeof(User_eventBIsPhoneRequiringVerification_Parms), Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics
	{
		struct User_eventBIsPhoneVerified_Parms
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
	void Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsPhoneVerified_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventBIsPhoneVerified_Parms), &Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks whether the current user has verified their phone number.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Checks whether the current user has verified their phone number." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsPhoneVerified", nullptr, nullptr, sizeof(User_eventBIsPhoneVerified_Parms), Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsPhoneVerified()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_BIsPhoneVerified_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics
	{
		struct User_eventBIsTwoFactorEnabled_Parms
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
	void Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBIsTwoFactorEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventBIsTwoFactorEnabled_Parms), &Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks whether the current user has Steam Guard two factor authentication enabled on their account.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Checks whether the current user has Steam Guard two factor authentication enabled on their account." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BIsTwoFactorEnabled", nullptr, nullptr, sizeof(User_eventBIsTwoFactorEnabled_Parms), Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BIsTwoFactorEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_BIsTwoFactorEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_BLoggedOn_Statics
	{
		struct User_eventBLoggedOn_Parms
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
	void Z_Construct_UFunction_UUser_BLoggedOn_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventBLoggedOn_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_BLoggedOn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventBLoggedOn_Parms), &Z_Construct_UFunction_UUser_BLoggedOn_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_BLoggedOn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_BLoggedOn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_BLoggedOn_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks if the current user's Steam client is connected to the Steam servers.\n\x09*\n\x09* If it's not then no real-time services provided by the Steamworks API will be enabled. \n\x09* The Steam client will automatically be trying to recreate the connection as often as possible. \n\x09* When the connection is restored a SteamServersConnected_t callback will be posted.\n\x09* You usually don't need to check for this yourself. \n\x09* All of the API calls that rely on this will check internally. Forcefully disabling \n\x09* stuff when the player loses access is usually not a very good experience for the player and you could be \n\x09* preventing them from accessing APIs that do not need a live connection to Steam.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Checks if the current user's Steam client is connected to the Steam servers.\n\nIf it's not then no real-time services provided by the Steamworks API will be enabled.\nThe Steam client will automatically be trying to recreate the connection as often as possible.\nWhen the connection is restored a SteamServersConnected_t callback will be posted.\nYou usually don't need to check for this yourself.\nAll of the API calls that rely on this will check internally. Forcefully disabling\nstuff when the player loses access is usually not a very good experience for the player and you could be\npreventing them from accessing APIs that do not need a live connection to Steam." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_BLoggedOn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "BLoggedOn", nullptr, nullptr, sizeof(User_eventBLoggedOn_Parms), Z_Construct_UFunction_UUser_BLoggedOn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BLoggedOn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_BLoggedOn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_BLoggedOn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_BLoggedOn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_BLoggedOn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_CancelAuthTicket_Statics
	{
		struct User_eventCancelAuthTicket_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::NewProp_ticketHandle = { "ticketHandle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventCancelAuthTicket_Parms, ticketHandle), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::NewProp_ticketHandle,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Cancels an auth ticket received from GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\x09*\n\x09* @param\x09ticketHandle\x09The active auth ticket to cancel.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Cancels an auth ticket received from GetAuthSessionTicket. This should be called when no longer playing with the specified entity.\n\n@param        ticketHandle    The active auth ticket to cancel." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "CancelAuthTicket", nullptr, nullptr, sizeof(User_eventCancelAuthTicket_Parms), Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_CancelAuthTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_CancelAuthTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_DecompressVoice_Statics
	{
		struct User_eventDecompressVoice_Parms
		{
			TArray<uint8> compressedBuffer;
			int32 desiredSampleRate;
			TArray<uint8> destBuffer;
			ESteamVoiceResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_destBuffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_destBuffer_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_desiredSampleRate;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_compressedBuffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_compressedBuffer_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventDecompressVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamVoiceResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_destBuffer = { "destBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventDecompressVoice_Parms, destBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_destBuffer_Inner = { "destBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_desiredSampleRate = { "desiredSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventDecompressVoice_Parms, desiredSampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_compressedBuffer = { "compressedBuffer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventDecompressVoice_Parms, compressedBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_compressedBuffer_Inner = { "compressedBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_DecompressVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_destBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_destBuffer_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_desiredSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_compressedBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_DecompressVoice_Statics::NewProp_compressedBuffer_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_DecompressVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Decodes the compressed voice data returned by GetVoice.\n\x09*\n\x09* The output data is raw single-channel 16-bit PCM audio. The decoder supports any sample rate from 11025 to 48000. See GetVoiceOptimalSampleRate for more information.\n\x09* It is recommended that you start with a 20KiB buffer and then reallocate as necessary.\n\x09*\n\x09* @param\x09""compressedBuffer\x09\x09The compressed data received from GetVoice.\n\x09* @param\x09uncompressedBufferSize\x09The size of the buffer passed into pCompressed.\n\x09* @param\x09""desiredSampleRate\x09\x09The sample rate that will be returned. This can be from 11025 to 48000, you should either use the rate that works best for your audio playback system, which likely takes the users audio hardware into account, or you can use GetVoiceOptimalSampleRate to get the native sample rate of the Steam voice decoder.\n\x09* @param\x09uncompressedBuffer\x09\x09The size of the buffer passed into pDestBuffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Decodes the compressed voice data returned by GetVoice.\n\nThe output data is raw single-channel 16-bit PCM audio. The decoder supports any sample rate from 11025 to 48000. See GetVoiceOptimalSampleRate for more information.\nIt is recommended that you start with a 20KiB buffer and then reallocate as necessary.\n\n@param        compressedBuffer                The compressed data received from GetVoice.\n@param        uncompressedBufferSize  The size of the buffer passed into pCompressed.\n@param        desiredSampleRate               The sample rate that will be returned. This can be from 11025 to 48000, you should either use the rate that works best for your audio playback system, which likely takes the users audio hardware into account, or you can use GetVoiceOptimalSampleRate to get the native sample rate of the Steam voice decoder.\n@param        uncompressedBuffer              The size of the buffer passed into pDestBuffer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_DecompressVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "DecompressVoice", nullptr, nullptr, sizeof(User_eventDecompressVoice_Parms), Z_Construct_UFunction_UUser_DecompressVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_DecompressVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_DecompressVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_DecompressVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_DecompressVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_DecompressVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_EndAuthSession_Statics
	{
		struct User_eventEndAuthSession_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_EndAuthSession_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventEndAuthSession_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_EndAuthSession_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_EndAuthSession_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_EndAuthSession_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\x09*\n\x09* @param\x09steamID\x09\x09The entity to end the active auth session with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Ends an auth session that was started with BeginAuthSession. This should be called when no longer playing with the specified entity.\n\n@param        steamID         The entity to end the active auth session with." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_EndAuthSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "EndAuthSession", nullptr, nullptr, sizeof(User_eventEndAuthSession_Parms), Z_Construct_UFunction_UUser_EndAuthSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_EndAuthSession_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_EndAuthSession_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_EndAuthSession_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_EndAuthSession()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_EndAuthSession_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics
	{
		struct User_eventGetAuthSessionTicket_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetAuthSessionTicket_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamTicketHandle, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_ticket = { "ticket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetAuthSessionTicket_Parms, ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_ticket_Inner = { "ticket", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_ticket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::NewProp_ticket_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\x09*\n\x09* After calling this you can send the ticket to the entity where they can then call BeginAuthSession/ISteamGameServer::BeginAuthSession \n\x09* to verify this entities integrity.\n\x09* When creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API, \n\x09* the calling application should wait for the GetAuthSessionTicketResponse_t callback generated by the \n\x09* API call before attempting to use the ticket to ensure that the ticket has been communicated to the server. \n\x09* If this callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam\n\x09* and the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\x09*\n\x09* @param\x09ticket\x09\x09The buffer where the new auth ticket will be copied into if the call was successful.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Retrieve a authentication ticket to be sent to the entity who wishes to authenticate you.\n\nAfter calling this you can send the ticket to the entity where they can then call BeginAuthSession/ISteamGameServer::BeginAuthSession\nto verify this entities integrity.\nWhen creating a ticket for use by the ISteamUserAuth/AuthenticateUserTicket Web API,\nthe calling application should wait for the GetAuthSessionTicketResponse_t callback generated by the\nAPI call before attempting to use the ticket to ensure that the ticket has been communicated to the server.\nIf this callback does not come in a timely fashion (10 - 20 seconds), then your client is not connected to Steam\nand the AuthenticateUserTicket call will fail because it can not authenticate the user.\n\n@param        ticket          The buffer where the new auth ticket will be copied into if the call was successful." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetAuthSessionTicket", nullptr, nullptr, sizeof(User_eventGetAuthSessionTicket_Parms), Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetAuthSessionTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetAuthSessionTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetAvailableVoice_Statics
	{
		struct User_eventGetAvailableVoice_Parms
		{
			int32 compressedBytes;
			int32 uncompressedBytes;
			int32 uncompressedVoiceDesiredSampleRate;
			ESteamVoiceResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_uncompressedVoiceDesiredSampleRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_uncompressedBytes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_compressedBytes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetAvailableVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamVoiceResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_uncompressedVoiceDesiredSampleRate = { "uncompressedVoiceDesiredSampleRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetAvailableVoice_Parms, uncompressedVoiceDesiredSampleRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_uncompressedBytes = { "uncompressedBytes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetAvailableVoice_Parms, uncompressedBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_compressedBytes = { "compressedBytes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetAvailableVoice_Parms, compressedBytes), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_uncompressedVoiceDesiredSampleRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_uncompressedBytes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::NewProp_compressedBytes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks to see if there is captured audio data available from GetVoice, and gets the size of the data.\n\x09*\n\x09* Most applications will only use compressed data and should ignore the other parameters, \n\x09* which exist primarily for backwards compatibility. See GetVoice for further explanation of \"uncompressed\" data.\n\x09*\n\x09* @param\x09""compressedBytes\x09\x09\x09\x09\x09\x09\x09Returns the size of the available voice data in bytes.\n\x09* @param\x09uncompressedBytes\x09\x09\x09\x09\x09\x09""Deprecated\n\x09* @param\x09uncompressedVoiceDesiredSampleRate\x09\x09""Deprecated\n\x09*/" },
		{ "CPP_Default_uncompressedVoiceDesiredSampleRate", "0" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Checks to see if there is captured audio data available from GetVoice, and gets the size of the data.\n\nMost applications will only use compressed data and should ignore the other parameters,\nwhich exist primarily for backwards compatibility. See GetVoice for further explanation of \"uncompressed\" data.\n\n@param        compressedBytes                                                 Returns the size of the available voice data in bytes.\n@param        uncompressedBytes                                               Deprecated\n@param        uncompressedVoiceDesiredSampleRate              Deprecated" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetAvailableVoice", nullptr, nullptr, sizeof(User_eventGetAvailableVoice_Parms), Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetAvailableVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetAvailableVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics
	{
		struct User_eventGetEncryptedAppTicket_Parms
		{
			TArray<uint8> ticket;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ticket;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ticket_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((User_eventGetEncryptedAppTicket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventGetEncryptedAppTicket_Parms), &Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ticket = { "ticket", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetEncryptedAppTicket_Parms, ticket), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ticket_Inner = { "ticket", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ticket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::NewProp_ticket_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Retrieve an encrypted ticket.\n\x09*\n\x09* This should be called after requesting an encrypted app ticket with RequestEncryptedAppTicket and receiving the EncryptedAppTicketResponse_t call result.\n\x09* You should then pass this encrypted ticket to your secure servers to be decrypted using your secret key using SteamEncryptedAppTicket::BDecryptTicket.\n\x09* NOTE: If you call this without calling RequestEncryptedAppTicket, the call may succeed but you will likely get a stale ticket.\n\x09*\n\x09* @param\x09ticket\x09\x09The encrypted app ticket is copied into this buffer.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Retrieve an encrypted ticket.\n\nThis should be called after requesting an encrypted app ticket with RequestEncryptedAppTicket and receiving the EncryptedAppTicketResponse_t call result.\nYou should then pass this encrypted ticket to your secure servers to be decrypted using your secret key using SteamEncryptedAppTicket::BDecryptTicket.\nNOTE: If you call this without calling RequestEncryptedAppTicket, the call may succeed but you will likely get a stale ticket.\n\n@param        ticket          The encrypted app ticket is copied into this buffer." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetEncryptedAppTicket", nullptr, nullptr, sizeof(User_eventGetEncryptedAppTicket_Parms), Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetEncryptedAppTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetEncryptedAppTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics
	{
		struct User_eventGetGameBadgeLevel_Parms
		{
			int32 series;
			bool bFoil;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bFoil_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFoil;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_series;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetGameBadgeLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_bFoil_SetBit(void* Obj)
	{
		((User_eventGetGameBadgeLevel_Parms*)Obj)->bFoil = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_bFoil = { "bFoil", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(User_eventGetGameBadgeLevel_Parms), &Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_bFoil_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_series = { "series", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetGameBadgeLevel_Parms, series), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_bFoil,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::NewProp_series,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the level of the users Steam badge for your game.\n\x09*\n\x09* The user can have two different badges for a series; the regular badge (max level 5) and the foil badge (max level 1).\n\x09*\n\x09* @param\x09series\x09If you only have one set of cards, the series will be 1.\n\x09* @param\x09""bFoil\x09""Check if they have received the foil badge.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Gets the level of the users Steam badge for your game.\n\nThe user can have two different badges for a series; the regular badge (max level 5) and the foil badge (max level 1).\n\n@param        series  If you only have one set of cards, the series will be 1.\n@param        bFoil   Check if they have received the foil badge." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetGameBadgeLevel", nullptr, nullptr, sizeof(User_eventGetGameBadgeLevel_Parms), Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetGameBadgeLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetGameBadgeLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics
	{
		struct User_eventGetPlayerSteamLevel_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetPlayerSteamLevel_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the Steam level of the user, as shown on their Steam community profile.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Gets the Steam level of the user, as shown on their Steam community profile." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetPlayerSteamLevel", nullptr, nullptr, sizeof(User_eventGetPlayerSteamLevel_Parms), Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetPlayerSteamLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetPlayerSteamLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetSteamID_Statics
	{
		struct User_eventGetSteamID_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_GetSteamID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetSteamID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetSteamID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetSteamID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetSteamID_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.\n\x09*\n\x09* A Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.\n\nA Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetSteamID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetSteamID", nullptr, nullptr, sizeof(User_eventGetSteamID_Parms), Z_Construct_UFunction_UUser_GetSteamID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetSteamID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetSteamID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetSteamID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetSteamID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetSteamID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics
	{
		struct User_eventGetSteamID_Pure_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetSteamID_Pure_Parms, ReturnValue), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.\n\x09*\n\x09* A Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API.\n\x09*/" },
		{ "DisplayName", "Get Steam ID (Pure)" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Gets the Steam ID of the account currently logged into the Steam client. This is commonly called the 'current user', or 'local user'.\n\nA Steam ID is a unique identifier for a Steam accounts, Steam groups, Lobbies and Chat rooms, and used to differentiate users in all parts of the Steamworks API." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetSteamID_Pure", nullptr, nullptr, sizeof(User_eventGetSteamID_Pure_Parms), Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetSteamID_Pure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetSteamID_Pure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetVoice_Statics
	{
		struct User_eventGetVoice_Parms
		{
			TArray<uint8> destBuffer;
			int32 bytesWritten;
			ESteamVoiceResult ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bytesWritten;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_destBuffer;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_destBuffer_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetVoice_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamVoiceResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_bytesWritten = { "bytesWritten", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetVoice_Parms, bytesWritten), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_destBuffer = { "destBuffer", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetVoice_Parms, destBuffer), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_destBuffer_Inner = { "destBuffer", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_bytesWritten,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_destBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoice_Statics::NewProp_destBuffer_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Read captured audio data from the microphone buffer.\n\x09*\n\x09* The compressed data can be transmitted by your application and decoded back into raw audio data using DecompressVoice \n\x09* on the other side. The compressed data provided is in an arbitrary format and is not meant to be played directly.\n\x09*\n\x09* This should be called once per frame, and at worst no more than four times a second to keep the microphone input delay as low as possible. \n\x09* Calling this any less may result in gaps in the returned stream.\n\x09*\n\x09* It is recommended that you pass in an 8 kilobytes or larger destination buffer for compressed audio. \n\x09* Static buffers are recommended for performance reasons. However, if you would like to allocate precisely the right \n\x09* amount of space for a buffer before each call you may use GetAvailableVoice to find out how much data is available to be read.\n\x09* NOTE: \"Uncompressed\" audio is a deprecated feature and should not be used by most applications. \n\x09* It is raw single-channel 16-bit PCM wave data which may have been run through preprocessing filters and/or had silence removed, \n\x09* so the uncompressed audio could have a shorter duration than you expect. \n\x09* There may be no data at all during long periods of silence. Also, fetching uncompressed audio will cause GetVoice to discard \n\x09* any leftover compressed audio, so you must fetch both types at once. Finally, GetAvailableVoice is not precisely accurate when the \n\x09* uncompressed size is requested. So if you really need to use uncompressed audio, you should call GetVoice frequently with two \n\x09* very large (20KiB+) output buffers instead of trying to allocate perfectly-sized buffers. But most applications should ignore \n\x09* all of these details and simply leave the \"uncompressed\" parameters as NULL/0.\n\x09*\n\x09* @param\x09""destBuffer\x09\x09\x09\x09\x09\x09\x09\x09The buffer where the audio data will be copied into.\n\x09* @param\x09""bytesWritten\x09\x09\x09\x09\x09\x09\x09Returns the number of bytes written into pDestBuffer. This should always be the size returned by ISteamUser::GetAvailableVoice.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Read captured audio data from the microphone buffer.\n\nThe compressed data can be transmitted by your application and decoded back into raw audio data using DecompressVoice\non the other side. The compressed data provided is in an arbitrary format and is not meant to be played directly.\n\nThis should be called once per frame, and at worst no more than four times a second to keep the microphone input delay as low as possible.\nCalling this any less may result in gaps in the returned stream.\n\nIt is recommended that you pass in an 8 kilobytes or larger destination buffer for compressed audio.\nStatic buffers are recommended for performance reasons. However, if you would like to allocate precisely the right\namount of space for a buffer before each call you may use GetAvailableVoice to find out how much data is available to be read.\nNOTE: \"Uncompressed\" audio is a deprecated feature and should not be used by most applications.\nIt is raw single-channel 16-bit PCM wave data which may have been run through preprocessing filters and/or had silence removed,\nso the uncompressed audio could have a shorter duration than you expect.\nThere may be no data at all during long periods of silence. Also, fetching uncompressed audio will cause GetVoice to discard\nany leftover compressed audio, so you must fetch both types at once. Finally, GetAvailableVoice is not precisely accurate when the\nuncompressed size is requested. So if you really need to use uncompressed audio, you should call GetVoice frequently with two\nvery large (20KiB+) output buffers instead of trying to allocate perfectly-sized buffers. But most applications should ignore\nall of these details and simply leave the \"uncompressed\" parameters as NULL/0.\n\n@param        destBuffer                                                              The buffer where the audio data will be copied into.\n@param        bytesWritten                                                    Returns the number of bytes written into pDestBuffer. This should always be the size returned by ISteamUser::GetAvailableVoice." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetVoice", nullptr, nullptr, sizeof(User_eventGetVoice_Parms), Z_Construct_UFunction_UUser_GetVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetVoice_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetVoice_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics
	{
		struct User_eventGetVoiceOptimalSampleRate_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventGetVoiceOptimalSampleRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Gets the native sample rate of the Steam voice decoder.\n\x09*\n\x09* Using this sample rate for DecompressVoice will perform the least CPU processing.\n\x09* However, the final audio quality will depend on how well the audio device (and/or your application's audio output SDK) \n\x09* deals with lower sample rates. You may find that you get the best audio output quality when you ignore this function and \n\x09* use the native sample rate of your audio output device, which is usually 48000 or 44100.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Gets the native sample rate of the Steam voice decoder.\n\nUsing this sample rate for DecompressVoice will perform the least CPU processing.\nHowever, the final audio quality will depend on how well the audio device (and/or your application's audio output SDK)\ndeals with lower sample rates. You may find that you get the best audio output quality when you ignore this function and\nuse the native sample rate of your audio output device, which is usually 48000 or 44100." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "GetVoiceOptimalSampleRate", nullptr, nullptr, sizeof(User_eventGetVoiceOptimalSampleRate_Parms), Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics
	{
		struct User_eventRequestEncryptedAppTicket_Parms
		{
			FScriptDelegate callback;
			TArray<uint8> dataToInclude;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_dataToInclude;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_dataToInclude_Inner;
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
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_dataToInclude = { "dataToInclude", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventRequestEncryptedAppTicket_Parms, dataToInclude), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_dataToInclude_Inner = { "dataToInclude", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventRequestEncryptedAppTicket_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicket__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_dataToInclude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_dataToInclude_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Requests an application ticket encrypted with the secret \"encrypted app ticket key\".\n\x09*\n\x09* The encryption key can be obtained from the Encrypted App Ticket Key page on the App Admin for your app.\n\x09* There can only be one EncryptedAppTicketResponse_t pending, and this call is subject to a 60 second rate limit.\n\x09* After receiving the response you should call GetEncryptedAppTicket to get the ticket data, and then you need to send it to a secure server to be decrypted with the SteamEncryptedAppTicket functions.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Requests an application ticket encrypted with the secret \"encrypted app ticket key\".\n\nThe encryption key can be obtained from the Encrypted App Ticket Key page on the App Admin for your app.\nThere can only be one EncryptedAppTicketResponse_t pending, and this call is subject to a 60 second rate limit.\nAfter receiving the response you should call GetEncryptedAppTicket to get the ticket data, and then you need to send it to a secure server to be decrypted with the SteamEncryptedAppTicket functions." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "RequestEncryptedAppTicket", nullptr, nullptr, sizeof(User_eventRequestEncryptedAppTicket_Parms), Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_RequestEncryptedAppTicket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_RequestEncryptedAppTicket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics
	{
		struct User_eventRequestStoreAuthURL_Parms
		{
			FScriptDelegate callback;
			FString redirectURL;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_redirectURL;
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_redirectURL = { "redirectURL", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventRequestStoreAuthURL_Parms, redirectURL), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventRequestStoreAuthURL_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnStoreAuthURLResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_redirectURL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.\n\x09*\n\x09* As long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.\n\x09* NOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.\n\x09* NOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Requests a URL which authenticates an in-game browser for store check-out, and then redirects to the specified URL.\n\nAs long as the in-game browser accepts and handles session cookies, Steam microtransaction checkout pages will automatically recognize the user instead of presenting a login page.\nNOTE: The URL has a very short lifetime to prevent history-snooping attacks, so you should only call this API when you are about to launch the browser, or else immediately navigate to the result URL using a hidden browser window.\nNOTE: The resulting authorization cookie has an expiration time of one day, so it would be a good idea to request and visit a new auth URL every 12 hours." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "RequestStoreAuthURL", nullptr, nullptr, sizeof(User_eventRequestStoreAuthURL_Parms), Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_RequestStoreAuthURL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_RequestStoreAuthURL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_StartVoiceRecording_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Starts voice recording.\n\x09*\n\x09* Once started, use GetAvailableVoice and GetVoice to get the data, and then call StopVoiceRecording when the user has released their push-to-talk hotkey or the game session has completed.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Starts voice recording.\n\nOnce started, use GetAvailableVoice and GetVoice to get the data, and then call StopVoiceRecording when the user has released their push-to-talk hotkey or the game session has completed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "StartVoiceRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_StartVoiceRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_StartVoiceRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_StopVoiceRecording_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Stops voice recording.\n\x09*\n\x09* Because people often release push-to-talk keys early, the system will keep recording for a little bit after this function is called. As such, GetVoice should continue to be called until it returns k_EVoiceResultNotRecording, only then will voice recording be stopped.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Stops voice recording.\n\nBecause people often release push-to-talk keys early, the system will keep recording for a little bit after this function is called. As such, GetVoice should continue to be called until it returns k_EVoiceResultNotRecording, only then will voice recording be stopped." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "StopVoiceRecording", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_StopVoiceRecording()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_StopVoiceRecording_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics
	{
		struct User_eventUserHasLicenseForApp_Parms
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
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventUserHasLicenseForApp_Parms, ReturnValue), Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_appID = { "appID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventUserHasLicenseForApp_Parms, appID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_steamID = { "steamID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(User_eventUserHasLicenseForApp_Parms, steamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_appID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::NewProp_steamID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|User" },
		{ "Comment", "/**\n\x09* Checks if the user owns a specific piece of Downloadable Content (DLC).\n\x09*\n\x09* This can only be called after sending the users auth ticket to ISteamGameServer::BeginAuthSession/\n\x09*\n\x09* @param\x09steamID\x09\x09The Steam ID of the user that sent the auth ticket.\n\x09* @param\x09""appID\x09\x09The DLC App ID to check if the user owns it.\n\x09*/" },
		{ "ModuleRelativePath", "Public/User/User.h" },
		{ "ToolTip", "Checks if the user owns a specific piece of Downloadable Content (DLC).\n\nThis can only be called after sending the users auth ticket to ISteamGameServer::BeginAuthSession/\n\n@param        steamID         The Steam ID of the user that sent the auth ticket.\n@param        appID           The DLC App ID to check if the user owns it." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUser, nullptr, "UserHasLicenseForApp", nullptr, nullptr, sizeof(User_eventUserHasLicenseForApp_Parms), Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUser_UserHasLicenseForApp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUser_UserHasLicenseForApp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUser_NoRegister()
	{
		return UUser::StaticClass();
	}
	struct Z_Construct_UClass_UUser_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EncryptedAppTicketResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_EncryptedAppTicketResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidateAuthTicketResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ValidateAuthTicketResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamServersDisconnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServersDisconnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamServersConnected_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServersConnected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamServerConnectFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_SteamServerConnectFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MicroTxnAuthorizationResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_MicroTxnAuthorizationResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LicensesUpdated_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_LicensesUpdated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IPCFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_IPCFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GetAuthSessionTicketResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GetAuthSessionTicketResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameWebCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GameWebCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClientGameServerDeny_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_ClientGameServerDeny;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUser_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUser_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUser_AdvertiseGame, "AdvertiseGame" }, // 820557552
		{ &Z_Construct_UFunction_UUser_BeginAuthSession, "BeginAuthSession" }, // 93396731
		{ &Z_Construct_UFunction_UUser_BIsBehindNAT, "BIsBehindNAT" }, // 3005929523
		{ &Z_Construct_UFunction_UUser_BIsPhoneIdentifying, "BIsPhoneIdentifying" }, // 367086859
		{ &Z_Construct_UFunction_UUser_BIsPhoneRequiringVerification, "BIsPhoneRequiringVerification" }, // 876970020
		{ &Z_Construct_UFunction_UUser_BIsPhoneVerified, "BIsPhoneVerified" }, // 1192133525
		{ &Z_Construct_UFunction_UUser_BIsTwoFactorEnabled, "BIsTwoFactorEnabled" }, // 3187023678
		{ &Z_Construct_UFunction_UUser_BLoggedOn, "BLoggedOn" }, // 950417763
		{ &Z_Construct_UFunction_UUser_CancelAuthTicket, "CancelAuthTicket" }, // 2831804548
		{ &Z_Construct_UFunction_UUser_DecompressVoice, "DecompressVoice" }, // 3270399761
		{ &Z_Construct_UFunction_UUser_EndAuthSession, "EndAuthSession" }, // 4192675673
		{ &Z_Construct_UFunction_UUser_GetAuthSessionTicket, "GetAuthSessionTicket" }, // 4231892580
		{ &Z_Construct_UFunction_UUser_GetAvailableVoice, "GetAvailableVoice" }, // 1394655282
		{ &Z_Construct_UFunction_UUser_GetEncryptedAppTicket, "GetEncryptedAppTicket" }, // 4015918134
		{ &Z_Construct_UFunction_UUser_GetGameBadgeLevel, "GetGameBadgeLevel" }, // 2321645716
		{ &Z_Construct_UFunction_UUser_GetPlayerSteamLevel, "GetPlayerSteamLevel" }, // 1169800675
		{ &Z_Construct_UFunction_UUser_GetSteamID, "GetSteamID" }, // 3781443262
		{ &Z_Construct_UFunction_UUser_GetSteamID_Pure, "GetSteamID_Pure" }, // 1793997950
		{ &Z_Construct_UFunction_UUser_GetVoice, "GetVoice" }, // 1275721847
		{ &Z_Construct_UFunction_UUser_GetVoiceOptimalSampleRate, "GetVoiceOptimalSampleRate" }, // 2074817616
		{ &Z_Construct_UFunction_UUser_RequestEncryptedAppTicket, "RequestEncryptedAppTicket" }, // 2099958955
		{ &Z_Construct_UFunction_UUser_RequestStoreAuthURL, "RequestStoreAuthURL" }, // 2977930075
		{ &Z_Construct_UFunction_UUser_StartVoiceRecording, "StartVoiceRecording" }, // 3667581171
		{ &Z_Construct_UFunction_UUser_StopVoiceRecording, "StopVoiceRecording" }, // 3758240087
		{ &Z_Construct_UFunction_UUser_UserHasLicenseForApp, "UserHasLicenseForApp" }, // 1557207406
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "User/User.h" },
		{ "ModuleRelativePath", "Public/User/User.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/User/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse = { "EncryptedAppTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, EncryptedAppTicketResponse), Z_Construct_UDelegateFunction_SteamCore_OnRequestEncryptedAppTicketResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/User/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse = { "ValidateAuthTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, ValidateAuthTicketResponse), Z_Construct_UDelegateFunction_SteamCore_OnValidateAuthTicketResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/User/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected = { "SteamServersDisconnected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, SteamServersDisconnected), Z_Construct_UDelegateFunction_SteamCore_OnSteamServersDisconnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/User/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected = { "SteamServersConnected", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, SteamServersConnected), Z_Construct_UDelegateFunction_SteamCore_OnSteamServersConnected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/User/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure = { "SteamServerConnectFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, SteamServerConnectFailure), Z_Construct_UDelegateFunction_SteamCore_OnSteamServerConnectFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/User/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse = { "MicroTxnAuthorizationResponse", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, MicroTxnAuthorizationResponse), Z_Construct_UDelegateFunction_SteamCore_OnMicroTxnAuthorizationResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/User/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated = { "LicensesUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, LicensesUpdated), Z_Construct_UDelegateFunction_SteamCore_OnLicensesUpdated__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_IPCFailure_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/User/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_IPCFailure = { "IPCFailure", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, IPCFailure), Z_Construct_UDelegateFunction_SteamCore_OnIPCFailure__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_IPCFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_IPCFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/User/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse = { "GetAuthSessionTicketResponse", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, GetAuthSessionTicketResponse), Z_Construct_UDelegateFunction_SteamCore_OnGetAuthSessionTicketResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/User/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback = { "GameWebCallback", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, GameWebCallback), Z_Construct_UDelegateFunction_SteamCore_OnGameWebCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny_MetaData[] = {
		{ "Category", "SteamCore|User|Delegates" },
		{ "ModuleRelativePath", "Public/User/User.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny = { "ClientGameServerDeny", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUser, ClientGameServerDeny), Z_Construct_UDelegateFunction_SteamCore_OnClientGameServerDeny__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_EncryptedAppTicketResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_ValidateAuthTicketResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_SteamServersDisconnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_SteamServersConnected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_SteamServerConnectFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_MicroTxnAuthorizationResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_LicensesUpdated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_IPCFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_GetAuthSessionTicketResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_GameWebCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUser_Statics::NewProp_ClientGameServerDeny,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUser_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUser>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUser_Statics::ClassParams = {
		&UUser::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUser_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUser_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUser_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUser()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUser_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUser, 2678317791);
	template<> STEAMCORE_API UClass* StaticClass<UUser>()
	{
		return UUser::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUser(Z_Construct_UClass_UUser, &UUser::StaticClass, TEXT("/Script/SteamCore"), TEXT("UUser"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUser);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
