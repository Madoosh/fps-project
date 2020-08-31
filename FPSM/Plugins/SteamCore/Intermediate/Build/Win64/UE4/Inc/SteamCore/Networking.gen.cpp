// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/Networking/Networking.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetworking() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UNetworking_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UNetworking();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamP2PSessionState();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamP2PSend();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UNetworking::execSendP2PPacket)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDRemote);
		P_GET_TARRAY(uint8,Z_Param_data);
		P_GET_ENUM(ESteamP2PSend,Z_Param_p2pSendType);
		P_GET_PROPERTY(FIntProperty,Z_Param_channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SendP2PPacket(Z_Param_steamIDRemote,Z_Param_data,ESteamP2PSend(Z_Param_p2pSendType),Z_Param_channel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworking::execReadP2PPacket)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out_data);
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_steamIDRemote);
		P_GET_PROPERTY(FIntProperty,Z_Param_channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadP2PPacket(Z_Param_Out_data,Z_Param_Out_steamIDRemote,Z_Param_channel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworking::execIsP2PPacketAvailable)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_msgSize);
		P_GET_PROPERTY(FIntProperty,Z_Param_channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsP2PPacketAvailable(Z_Param_Out_msgSize,Z_Param_channel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworking::execGetP2PSessionState)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDRemote);
		P_GET_STRUCT_REF(FSteamP2PSessionState,Z_Param_Out_connectionState);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetP2PSessionState(Z_Param_steamIDRemote,Z_Param_Out_connectionState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworking::execCloseP2PSessionWithUser)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDRemote);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CloseP2PSessionWithUser(Z_Param_steamIDRemote);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworking::execCloseP2PchannelWithUser)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDRemote);
		P_GET_PROPERTY(FIntProperty,Z_Param_channel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CloseP2PchannelWithUser(Z_Param_steamIDRemote,Z_Param_channel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworking::execAllowP2PPacketRelay)
	{
		P_GET_UBOOL(Z_Param_bAllow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AllowP2PPacketRelay(Z_Param_bAllow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNetworking::execAcceptP2PSessionWithUser)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDRemote);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->AcceptP2PSessionWithUser(Z_Param_steamIDRemote);
		P_NATIVE_END;
	}
	void UNetworking::StaticRegisterNativesUNetworking()
	{
		UClass* Class = UNetworking::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptP2PSessionWithUser", &UNetworking::execAcceptP2PSessionWithUser },
			{ "AllowP2PPacketRelay", &UNetworking::execAllowP2PPacketRelay },
			{ "CloseP2PchannelWithUser", &UNetworking::execCloseP2PchannelWithUser },
			{ "CloseP2PSessionWithUser", &UNetworking::execCloseP2PSessionWithUser },
			{ "GetP2PSessionState", &UNetworking::execGetP2PSessionState },
			{ "IsP2PPacketAvailable", &UNetworking::execIsP2PPacketAvailable },
			{ "ReadP2PPacket", &UNetworking::execReadP2PPacket },
			{ "SendP2PPacket", &UNetworking::execSendP2PPacket },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics
	{
		struct Networking_eventAcceptP2PSessionWithUser_Parms
		{
			FSteamID steamIDRemote;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDRemote;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventAcceptP2PSessionWithUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventAcceptP2PSessionWithUser_Parms), &Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::NewProp_steamIDRemote = { "steamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventAcceptP2PSessionWithUser_Parms, steamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::NewProp_steamIDRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* This allows the game to specify accept an incoming packet. This needs to be called before a real connection is established to a remote host, the game will get a chance to say whether or not the remote user is allowed to talk to them.\n\x09*\n\x09* When a remote user that you haven't sent a packet to recently, tries to first send you a packet, your game will receive a callback P2PSessionRequest_t. This callback contains the Steam ID of the user who wants to send you a packet. \n\x09* In response to this callback, you'll want to see if it's someone you want to talk to (for example, if they're in a lobby with you), and if so, accept the connection; otherwise if you don't want to talk to the user, just ignore the request. \n\x09* If the user continues to send you packets, another P2PSessionRequest_t will be posted periodically. If you've called SendP2PPacket on the other user, this implicitly accepts the session request.\n\x09* Note that this call should only be made in response to a P2PSessionRequest_t callback!\n\x09*\n\x09* @param\x09steamIDRemote\x09\x09The Steam ID of the user that sent the initial packet to us.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Networking/Networking.h" },
		{ "ToolTip", "This allows the game to specify accept an incoming packet. This needs to be called before a real connection is established to a remote host, the game will get a chance to say whether or not the remote user is allowed to talk to them.\n\nWhen a remote user that you haven't sent a packet to recently, tries to first send you a packet, your game will receive a callback P2PSessionRequest_t. This callback contains the Steam ID of the user who wants to send you a packet.\nIn response to this callback, you'll want to see if it's someone you want to talk to (for example, if they're in a lobby with you), and if so, accept the connection; otherwise if you don't want to talk to the user, just ignore the request.\nIf the user continues to send you packets, another P2PSessionRequest_t will be posted periodically. If you've called SendP2PPacket on the other user, this implicitly accepts the session request.\nNote that this call should only be made in response to a P2PSessionRequest_t callback!\n\n@param        steamIDRemote           The Steam ID of the user that sent the initial packet to us." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "AcceptP2PSessionWithUser", nullptr, nullptr, sizeof(Networking_eventAcceptP2PSessionWithUser_Parms), Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics
	{
		struct Networking_eventAllowP2PPacketRelay_Parms
		{
			bool bAllow;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAllow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventAllowP2PPacketRelay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventAllowP2PPacketRelay_Parms), &Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_bAllow_SetBit(void* Obj)
	{
		((Networking_eventAllowP2PPacketRelay_Parms*)Obj)->bAllow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_bAllow = { "bAllow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventAllowP2PPacketRelay_Parms), &Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_bAllow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::NewProp_bAllow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* Allow or disallow P2P connections to fall back to being relayed through the Steam servers if a direct connection or NAT-traversal cannot be established.\n\x09*\n\x09* This only applies to connections created after setting this value, or to existing connections that need to automatically reconnect after this value is set.\n\x09* P2P packet relay is allowed by default.\n\x09*\n\x09* @param\x09""bAllow\x09\x09\n\x09*/" },
		{ "ModuleRelativePath", "Public/Networking/Networking.h" },
		{ "ToolTip", "Allow or disallow P2P connections to fall back to being relayed through the Steam servers if a direct connection or NAT-traversal cannot be established.\n\nThis only applies to connections created after setting this value, or to existing connections that need to automatically reconnect after this value is set.\nP2P packet relay is allowed by default.\n\n@param        bAllow" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "AllowP2PPacketRelay", nullptr, nullptr, sizeof(Networking_eventAllowP2PPacketRelay_Parms), Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics
	{
		struct Networking_eventCloseP2PchannelWithUser_Parms
		{
			FSteamID steamIDRemote;
			int32 channel;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDRemote;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventCloseP2PchannelWithUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventCloseP2PchannelWithUser_Parms), &Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventCloseP2PchannelWithUser_Parms, channel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_steamIDRemote = { "steamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventCloseP2PchannelWithUser_Parms, steamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::NewProp_steamIDRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* Closes a P2P channel when you're done talking to a user on the specific channel.\n\x09*\n\x09* Once all channels to a user have been closed, the open session to the user will be closed and new data from this user will trigger a new P2PSessionRequest_t callback.\n\x09*\n\x09* @param\x09steamIDRemote\x09\x09The Steam ID of the user to close the connection with.\n\x09* @param\x09""channel\x09\x09\x09\x09The channel to close.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Networking/Networking.h" },
		{ "ToolTip", "Closes a P2P channel when you're done talking to a user on the specific channel.\n\nOnce all channels to a user have been closed, the open session to the user will be closed and new data from this user will trigger a new P2PSessionRequest_t callback.\n\n@param        steamIDRemote           The Steam ID of the user to close the connection with.\n@param        channel                         The channel to close." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "CloseP2PchannelWithUser", nullptr, nullptr, sizeof(Networking_eventCloseP2PchannelWithUser_Parms), Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics
	{
		struct Networking_eventCloseP2PSessionWithUser_Parms
		{
			FSteamID steamIDRemote;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDRemote;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventCloseP2PSessionWithUser_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventCloseP2PSessionWithUser_Parms), &Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::NewProp_steamIDRemote = { "steamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventCloseP2PSessionWithUser_Parms, steamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::NewProp_steamIDRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* This should be called when you're done communicating with a user, as this will free up all of the resources allocated for the connection under-the-hood.\n\x09*\n\x09* If the remote user tries to send data to you again, a new P2PSessionRequest_t callback will be posted.\n\x09*\n\x09* @param\x09steamIDRemote\x09The Steam ID of the user to close the connection with.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Networking/Networking.h" },
		{ "ToolTip", "This should be called when you're done communicating with a user, as this will free up all of the resources allocated for the connection under-the-hood.\n\nIf the remote user tries to send data to you again, a new P2PSessionRequest_t callback will be posted.\n\n@param        steamIDRemote   The Steam ID of the user to close the connection with." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "CloseP2PSessionWithUser", nullptr, nullptr, sizeof(Networking_eventCloseP2PSessionWithUser_Parms), Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics
	{
		struct Networking_eventGetP2PSessionState_Parms
		{
			FSteamID steamIDRemote;
			FSteamP2PSessionState connectionState;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_connectionState;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDRemote;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventGetP2PSessionState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventGetP2PSessionState_Parms), &Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_connectionState = { "connectionState", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventGetP2PSessionState_Parms, connectionState), Z_Construct_UScriptStruct_FSteamP2PSessionState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_steamIDRemote = { "steamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventGetP2PSessionState_Parms, steamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_connectionState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::NewProp_steamIDRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* Fills out a P2PSessionState_t structure with details about the connection like whether or not there is an active connection; number of bytes queued on the connection; the last error code, \n\x09*\n\x09* if any; whether or not a relay server is being used; and the IP and Port of the remote user, if known\n\x09* This should only needed for debugging purposes.\n\x09*\n\x09* @param\x09steamIDRemote\x09\x09The user to get the active session state information of.\n\x09* @param\x09""connectionState\x09\x09Returns the state.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Networking/Networking.h" },
		{ "ToolTip", "Fills out a P2PSessionState_t structure with details about the connection like whether or not there is an active connection; number of bytes queued on the connection; the last error code,\n\nif any; whether or not a relay server is being used; and the IP and Port of the remote user, if known\nThis should only needed for debugging purposes.\n\n@param        steamIDRemote           The user to get the active session state information of.\n@param        connectionState         Returns the state." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "GetP2PSessionState", nullptr, nullptr, sizeof(Networking_eventGetP2PSessionState_Parms), Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_GetP2PSessionState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_GetP2PSessionState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics
	{
		struct Networking_eventIsP2PPacketAvailable_Parms
		{
			int32 msgSize;
			int32 channel;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channel;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_msgSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventIsP2PPacketAvailable_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventIsP2PPacketAvailable_Parms), &Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventIsP2PPacketAvailable_Parms, channel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_msgSize = { "msgSize", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventIsP2PPacketAvailable_Parms, msgSize), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::NewProp_msgSize,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* Checks if a P2P packet is available to read, and gets the size of the message if there is one.\n\x09*\n\x09* This should be called in a loop for each channel that you use. If there is a packet available you should call ReadP2PPacket to get the packet data.\n\x09*\n\x09* @param\x09msgSize\x09\x09Returns the size of the packet.\n\x09* @param\x09""channel\x09\x09The channel to check if a packet is available in.\n\x09*/" },
		{ "CPP_Default_channel", "0" },
		{ "ModuleRelativePath", "Public/Networking/Networking.h" },
		{ "ToolTip", "Checks if a P2P packet is available to read, and gets the size of the message if there is one.\n\nThis should be called in a loop for each channel that you use. If there is a packet available you should call ReadP2PPacket to get the packet data.\n\n@param        msgSize         Returns the size of the packet.\n@param        channel         The channel to check if a packet is available in." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "IsP2PPacketAvailable", nullptr, nullptr, sizeof(Networking_eventIsP2PPacketAvailable_Parms), Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics
	{
		struct Networking_eventReadP2PPacket_Parms
		{
			TArray<uint8> data;
			FSteamID steamIDRemote;
			int32 channel;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channel;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDRemote;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_data_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventReadP2PPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventReadP2PPacket_Parms), &Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventReadP2PPacket_Parms, channel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_steamIDRemote = { "steamIDRemote", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventReadP2PPacket_Parms, steamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventReadP2PPacket_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_steamIDRemote,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::NewProp_data_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* Reads in a packet that has been sent from another user via SendP2PPacket.\n\x09*\n\x09* If the cubDest buffer is too small for the packet, then the message will be truncated.\n\x09* This call is not blocking, and will return false if no data is available.\n\x09* Before calling this you should have called IsP2PPacketAvailable.\n\x09* \n\x09* @param\x09""data\x09\x09\x09Returns the packet data by copying it into this buffer.\n\x09* @param\x09size\x09\x09\x09The size allocated for pubDest. This should be either the same size returned by IsP2PPacketAvailable, or the size of your largest packet.\n\x09* @param\x09steamIDRemote\x09Returns the Steam ID of the user that sent this packet.\n\x09* @param\x09""channel\x09\x09\x09The channel the packet was sent over.\n\x09*/" },
		{ "CPP_Default_channel", "0" },
		{ "ModuleRelativePath", "Public/Networking/Networking.h" },
		{ "ToolTip", "Reads in a packet that has been sent from another user via SendP2PPacket.\n\nIf the cubDest buffer is too small for the packet, then the message will be truncated.\nThis call is not blocking, and will return false if no data is available.\nBefore calling this you should have called IsP2PPacketAvailable.\n\n@param        data                    Returns the packet data by copying it into this buffer.\n@param        size                    The size allocated for pubDest. This should be either the same size returned by IsP2PPacketAvailable, or the size of your largest packet.\n@param        steamIDRemote   Returns the Steam ID of the user that sent this packet.\n@param        channel                 The channel the packet was sent over." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "ReadP2PPacket", nullptr, nullptr, sizeof(Networking_eventReadP2PPacket_Parms), Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_ReadP2PPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_ReadP2PPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics
	{
		struct Networking_eventSendP2PPacket_Parms
		{
			FSteamID steamIDRemote;
			TArray<uint8> data;
			ESteamP2PSend p2pSendType;
			int32 channel;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_channel;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_p2pSendType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_p2pSendType_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_data_Inner;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDRemote;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Networking_eventSendP2PPacket_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Networking_eventSendP2PPacket_Parms), &Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_channel = { "channel", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventSendP2PPacket_Parms, channel), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_p2pSendType = { "p2pSendType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventSendP2PPacket_Parms, p2pSendType), Z_Construct_UEnum_SteamCore_ESteamP2PSend, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_p2pSendType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventSendP2PPacket_Parms, data), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_data_Inner = { "data", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_steamIDRemote = { "steamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Networking_eventSendP2PPacket_Parms, steamIDRemote), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_channel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_p2pSendType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_p2pSendType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_data_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::NewProp_steamIDRemote,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|Networking" },
		{ "Comment", "/**\n\x09* Sends a P2P packet to the specified user.\n\x09*\n\x09* This is a session-less API which automatically establishes NAT-traversing or Steam relay server connections.\n\x09* NOTE: The first packet send may be delayed as the NAT-traversal code runs.\n\x09* See EP2PSend for descriptions of the different ways of sending packets.\n\x09* The type of data you send is arbitrary, you can use an off the shelf system like Protocol Buffers or Cap'n Proto to encode your packets in an efficient way, or you can create your own messaging system.\n\x09*\n\x09* @param\x09steamIDRemote\x09\x09The target user to send the packet to.\n\x09* @param\x09""data\x09\x09\x09\x09The raw byte array for the packet data to send. The maximum size of this packet is defined by eP2PSendType.\n\x09* @param\x09p2pSendType\x09\x09\x09Specifies how you want the data to be transmitted, such as reliably, unreliable, buffered, etc.\n\x09* @param\x09""channel\x09\x09\x09\x09The channel which acts as a virtual port to send this packet on and allows you help route message to different systems. You'll have to call ReadP2PPacket on the other end with the same channel number in order to retrieve the data on the other end. Using different channels to talk to the same user will still use the same underlying P2P connection, saving on resources. Use 0 for the primary channel, or if you do not use this feature.\n\x09*/" },
		{ "CPP_Default_channel", "0" },
		{ "ModuleRelativePath", "Public/Networking/Networking.h" },
		{ "ToolTip", "Sends a P2P packet to the specified user.\n\nThis is a session-less API which automatically establishes NAT-traversing or Steam relay server connections.\nNOTE: The first packet send may be delayed as the NAT-traversal code runs.\nSee EP2PSend for descriptions of the different ways of sending packets.\nThe type of data you send is arbitrary, you can use an off the shelf system like Protocol Buffers or Cap'n Proto to encode your packets in an efficient way, or you can create your own messaging system.\n\n@param        steamIDRemote           The target user to send the packet to.\n@param        data                            The raw byte array for the packet data to send. The maximum size of this packet is defined by eP2PSendType.\n@param        p2pSendType                     Specifies how you want the data to be transmitted, such as reliably, unreliable, buffered, etc.\n@param        channel                         The channel which acts as a virtual port to send this packet on and allows you help route message to different systems. You'll have to call ReadP2PPacket on the other end with the same channel number in order to retrieve the data on the other end. Using different channels to talk to the same user will still use the same underlying P2P connection, saving on resources. Use 0 for the primary channel, or if you do not use this feature." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNetworking, nullptr, "SendP2PPacket", nullptr, nullptr, sizeof(Networking_eventSendP2PPacket_Parms), Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNetworking_SendP2PPacket()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNetworking_SendP2PPacket_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNetworking_NoRegister()
	{
		return UNetworking::StaticClass();
	}
	struct Z_Construct_UClass_UNetworking_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnP2PSessionConnectFailDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnP2PSessionConnectFailDelegate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnP2PSessionRequestDelegate_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnP2PSessionRequestDelegate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetworking_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNetworking_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNetworking_AcceptP2PSessionWithUser, "AcceptP2PSessionWithUser" }, // 1764085366
		{ &Z_Construct_UFunction_UNetworking_AllowP2PPacketRelay, "AllowP2PPacketRelay" }, // 613775031
		{ &Z_Construct_UFunction_UNetworking_CloseP2PchannelWithUser, "CloseP2PchannelWithUser" }, // 3495376815
		{ &Z_Construct_UFunction_UNetworking_CloseP2PSessionWithUser, "CloseP2PSessionWithUser" }, // 2602189758
		{ &Z_Construct_UFunction_UNetworking_GetP2PSessionState, "GetP2PSessionState" }, // 3238594178
		{ &Z_Construct_UFunction_UNetworking_IsP2PPacketAvailable, "IsP2PPacketAvailable" }, // 1976070224
		{ &Z_Construct_UFunction_UNetworking_ReadP2PPacket, "ReadP2PPacket" }, // 3353481462
		{ &Z_Construct_UFunction_UNetworking_SendP2PPacket, "SendP2PPacket" }, // 3102461304
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworking_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Networking/Networking.h" },
		{ "ModuleRelativePath", "Public/Networking/Networking.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionConnectFailDelegate_MetaData[] = {
		{ "Category", "SteamCore|Networking|Delegates" },
		{ "ModuleRelativePath", "Public/Networking/Networking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionConnectFailDelegate = { "OnP2PSessionConnectFailDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetworking, OnP2PSessionConnectFailDelegate), Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionConnectFail__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionConnectFailDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionConnectFailDelegate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionRequestDelegate_MetaData[] = {
		{ "Category", "SteamCore|Networking|Delegates" },
		{ "ModuleRelativePath", "Public/Networking/Networking.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionRequestDelegate = { "OnP2PSessionRequestDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNetworking, OnP2PSessionRequestDelegate), Z_Construct_UDelegateFunction_SteamCore_OnP2PSessionRequest__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionRequestDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionRequestDelegate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetworking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionConnectFailDelegate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetworking_Statics::NewProp_OnP2PSessionRequestDelegate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetworking_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetworking>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNetworking_Statics::ClassParams = {
		&UNetworking::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNetworking_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetworking_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNetworking_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetworking_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetworking()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNetworking_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNetworking, 2902494492);
	template<> STEAMCORE_API UClass* StaticClass<UNetworking>()
	{
		return UNetworking::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNetworking(Z_Construct_UClass_UNetworking, &UNetworking::StaticClass, TEXT("/Script/SteamCore"), TEXT("UNetworking"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetworking);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
