// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/GameServerStats/GameServerStats.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameServerStats() {}
// Cross Module References
	STEAMCORE_API UClass* Z_Construct_UClass_UGameServerStats_NoRegister();
	STEAMCORE_API UClass* Z_Construct_UClass_UGameServerStats();
	STEAMCORE_API UClass* Z_Construct_UClass_USteamCoreSubsystem();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature();
	STEAMCORE_API UFunction* Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature();
// End Cross Module References
	DEFINE_FUNCTION(UGameServerStats::execUpdateUserAvgRateStat)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_countThisSession);
		P_GET_PROPERTY(FFloatProperty,Z_Param_sessionLength);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateUserAvgRateStat(Z_Param_steamIDUser,Z_Param_name,Z_Param_countThisSession,Z_Param_sessionLength);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execSetUserStatInt)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FIntProperty,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUserStatInt(Z_Param_steamIDUser,Z_Param_name,Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execSetUserStatFloat)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY(FFloatProperty,Z_Param_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUserStatFloat(Z_Param_steamIDUser,Z_Param_name,Z_Param_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execSetUserAchievement)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetUserAchievement(Z_Param_steamIDUser,Z_Param_name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execServerStoreUserStats)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerStoreUserStats(FOnServerStoreUserStats(Z_Param_Out_callback),Z_Param_steamIDUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execServerRequestUserStats)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_callback);
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ServerRequestUserStats(FOnServerRequestUserStats(Z_Param_Out_callback),Z_Param_steamIDUser);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execGetUserStatInt)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserStatInt(Z_Param_steamIDUser,Z_Param_name,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execGetUserStatFloat)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserStatFloat(Z_Param_steamIDUser,Z_Param_name,Z_Param_Out_data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execGetUserAchievement)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL_REF(Z_Param_Out_bAchieved);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUserAchievement(Z_Param_steamIDUser,Z_Param_name,Z_Param_Out_bAchieved);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameServerStats::execClearUserAchievement)
	{
		P_GET_STRUCT(FSteamID,Z_Param_steamIDUser);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ClearUserAchievement(Z_Param_steamIDUser,Z_Param_name);
		P_NATIVE_END;
	}
	void UGameServerStats::StaticRegisterNativesUGameServerStats()
	{
		UClass* Class = UGameServerStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearUserAchievement", &UGameServerStats::execClearUserAchievement },
			{ "GetUserAchievement", &UGameServerStats::execGetUserAchievement },
			{ "GetUserStatFloat", &UGameServerStats::execGetUserStatFloat },
			{ "GetUserStatInt", &UGameServerStats::execGetUserStatInt },
			{ "ServerRequestUserStats", &UGameServerStats::execServerRequestUserStats },
			{ "ServerStoreUserStats", &UGameServerStats::execServerStoreUserStats },
			{ "SetUserAchievement", &UGameServerStats::execSetUserAchievement },
			{ "SetUserStatFloat", &UGameServerStats::execSetUserStatFloat },
			{ "SetUserStatInt", &UGameServerStats::execSetUserStatInt },
			{ "UpdateUserAvgRateStat", &UGameServerStats::execUpdateUserAvgRateStat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics
	{
		struct GameServerStats_eventClearUserAchievement_Parms
		{
			FSteamID steamIDUser;
			FString name;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventClearUserAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventClearUserAchievement_Parms), &Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventClearUserAchievement_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventClearUserAchievement_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Resets the unlock status of an achievement for the specified user.\n\x09*\n\x09* This is primarily only ever used for testing.\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09The Steam ID of the user to clear the achievement for.\n\x09* @param\x09name\x09\x09\x09The 'API Name' of the Achievement to reset.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServerStats/GameServerStats.h" },
		{ "ToolTip", "Resets the unlock status of an achievement for the specified user.\n\nThis is primarily only ever used for testing.\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param        steamIDUser             The Steam ID of the user to clear the achievement for.\n@param        name                    The 'API Name' of the Achievement to reset." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "ClearUserAchievement", nullptr, nullptr, sizeof(GameServerStats_eventClearUserAchievement_Parms), Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_ClearUserAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_ClearUserAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics
	{
		struct GameServerStats_eventGetUserAchievement_Parms
		{
			FSteamID steamIDUser;
			FString name;
			bool bAchieved;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_bAchieved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAchieved;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventGetUserAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit(void* Obj)
	{
		((GameServerStats_eventGetUserAchievement_Parms*)Obj)->bAchieved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved = { "bAchieved", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventGetUserAchievement_Parms), &Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserAchievement_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserAchievement_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_bAchieved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Gets the unlock status of the Achievement.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09The Steam ID of the user to get the achievement for.\n\x09* @param\x09name\x09\x09\x09The 'API Name' of the achievement.\n\x09* @param\x09""bAchieved\x09\x09Returns the unlock status of the achievement.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServerStats/GameServerStats.h" },
		{ "ToolTip", "Gets the unlock status of the Achievement.\n\n@param        steamIDUser             The Steam ID of the user to get the achievement for.\n@param        name                    The 'API Name' of the achievement.\n@param        bAchieved               Returns the unlock status of the achievement." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "GetUserAchievement", nullptr, nullptr, sizeof(GameServerStats_eventGetUserAchievement_Parms), Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_GetUserAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_GetUserAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics
	{
		struct GameServerStats_eventGetUserStatFloat_Parms
		{
			FSteamID steamIDUser;
			FString name;
			float data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventGetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventGetUserStatFloat_Parms), &Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatFloat_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatFloat_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatFloat_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Gets the current value of the a stat for the specified user.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09The Steam ID of the user to get the stat for.\n\x09* @param\x09name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""data\x09\x09\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServerStats/GameServerStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the specified user.\n\n@param        steamIDUser             The Steam ID of the user to get the stat for.\n@param        name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        data                    The variable to return the stat value into." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "GetUserStatFloat", nullptr, nullptr, sizeof(GameServerStats_eventGetUserStatFloat_Parms), Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_GetUserStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_GetUserStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics
	{
		struct GameServerStats_eventGetUserStatInt_Parms
		{
			FSteamID steamIDUser;
			FString name;
			int32 data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventGetUserStatInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventGetUserStatInt_Parms), &Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatInt_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatInt_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventGetUserStatInt_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Gets the current value of the a stat for the specified user.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09The Steam ID of the user to get the stat for.\n\x09* @param\x09name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""data\x09\x09\x09The variable to return the stat value into.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServerStats/GameServerStats.h" },
		{ "ToolTip", "Gets the current value of the a stat for the specified user.\n\n@param        steamIDUser             The Steam ID of the user to get the stat for.\n@param        name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        data                    The variable to return the stat value into." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "GetUserStatInt", nullptr, nullptr, sizeof(GameServerStats_eventGetUserStatInt_Parms), Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_GetUserStatInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_GetUserStatInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics
	{
		struct GameServerStats_eventServerRequestUserStats_Parms
		{
			FScriptDelegate callback;
			FSteamID steamIDUser;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventServerRequestUserStats_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventServerRequestUserStats_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnServerRequestUserStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_steamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Asynchronously downloads stats and achievements for the specified user from the server.\n\x09*\n\x09* These stats will only be auto-updated for clients currently playing on the server. For other users you'll need to call this function again to refresh any data.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09The Steam ID of the user to request the stats for.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServerStats/GameServerStats.h" },
		{ "ToolTip", "Asynchronously downloads stats and achievements for the specified user from the server.\n\nThese stats will only be auto-updated for clients currently playing on the server. For other users you'll need to call this function again to refresh any data.\n\n@param        steamIDUser             The Steam ID of the user to request the stats for." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "ServerRequestUserStats", nullptr, nullptr, sizeof(GameServerStats_eventServerRequestUserStats_Parms), Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics
	{
		struct GameServerStats_eventServerStoreUserStats_Parms
		{
			FScriptDelegate callback;
			FSteamID steamIDUser;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventServerStoreUserStats_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_callback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_callback = { "callback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventServerStoreUserStats_Parms, callback), Z_Construct_UDelegateFunction_SteamCore_OnServerStoreUserStats__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_callback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_callback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_steamIDUser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::NewProp_callback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "callback" },
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Send the changed stats and achievements data to the server for permanent storage for the specified user.\n\x09*\n\x09* If this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\n\x09* This call can be rate limited. Call frequency should be on the order of minutes, rather than seconds. \n\x09* You should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.\n\x09* If you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process \n\x09* ends then this function will automatically be called.\n\x09* You can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09The Steam ID of the user to store the stats of.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServerStats/GameServerStats.h" },
		{ "ToolTip", "Send the changed stats and achievements data to the server for permanent storage for the specified user.\n\nIf this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.\nThis call can be rate limited. Call frequency should be on the order of minutes, rather than seconds.\nYou should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.\nIf you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process\nends then this function will automatically be called.\nYou can find additional debug information written to the %steam_install%\\logs\\stats_log.txt file.\n\n@param        steamIDUser             The Steam ID of the user to store the stats of." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "ServerStoreUserStats", nullptr, nullptr, sizeof(GameServerStats_eventServerStoreUserStats_Parms), Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics
	{
		struct GameServerStats_eventSetUserAchievement_Parms
		{
			FSteamID steamIDUser;
			FString name;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventSetUserAchievement_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventSetUserAchievement_Parms), &Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserAchievement_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserAchievement_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Unlocks an achievement for the specified user.\n\x09*\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09The Steam ID of the user to unlock the achievement for.\n\x09* @param\x09name\x09\x09\x09The 'API Name' of the Achievement to unlock.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServerStats/GameServerStats.h" },
		{ "ToolTip", "Unlocks an achievement for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param        steamIDUser             The Steam ID of the user to unlock the achievement for.\n@param        name                    The 'API Name' of the Achievement to unlock." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "SetUserAchievement", nullptr, nullptr, sizeof(GameServerStats_eventSetUserAchievement_Parms), Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_SetUserAchievement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_SetUserAchievement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics
	{
		struct GameServerStats_eventSetUserStatFloat_Parms
		{
			FSteamID steamIDUser;
			FString name;
			float data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventSetUserStatFloat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventSetUserStatFloat_Parms), &Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatFloat_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatFloat_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatFloat_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Sets / updates the value of a given stat for the specified user.\n\x09*\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09The Steam ID of the user to set the stat on.\n\x09* @param\x09name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""data\x09\x09\x09The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServerStats/GameServerStats.h" },
		{ "ToolTip", "Sets / updates the value of a given stat for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param        steamIDUser             The Steam ID of the user to set the stat on.\n@param        name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        data                    The new value of the stat. This must be an absolute value, it will not increment or decrement for you." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "SetUserStatFloat", nullptr, nullptr, sizeof(GameServerStats_eventSetUserStatFloat_Parms), Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_SetUserStatFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_SetUserStatFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics
	{
		struct GameServerStats_eventSetUserStatInt_Parms
		{
			FSteamID steamIDUser;
			FString name;
			int32 data;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventSetUserStatInt_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventSetUserStatInt_Parms), &Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatInt_Parms, data), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatInt_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventSetUserStatInt_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Sets / updates the value of a given stat for the specified user.\n\x09*\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09*\n\x09* @param\x09steamIDUser\x09\x09The Steam ID of the user to set the stat on.\n\x09* @param\x09name\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""data\x09\x09\x09The new value of the stat. This must be an absolute value, it will not increment or decrement for you.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServerStats/GameServerStats.h" },
		{ "ToolTip", "Sets / updates the value of a given stat for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\n@param        steamIDUser             The Steam ID of the user to set the stat on.\n@param        name                    The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        data                    The new value of the stat. This must be an absolute value, it will not increment or decrement for you." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "SetUserStatInt", nullptr, nullptr, sizeof(GameServerStats_eventSetUserStatInt_Parms), Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_SetUserStatInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_SetUserStatInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics
	{
		struct GameServerStats_eventUpdateUserAvgRateStat_Parms
		{
			FSteamID steamIDUser;
			FString name;
			float countThisSession;
			float sessionLength;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sessionLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_countThisSession;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_steamIDUser;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameServerStats_eventUpdateUserAvgRateStat_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameServerStats_eventUpdateUserAvgRateStat_Parms), &Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_sessionLength = { "sessionLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventUpdateUserAvgRateStat_Parms, sessionLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_countThisSession = { "countThisSession", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventUpdateUserAvgRateStat_Parms, countThisSession), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventUpdateUserAvgRateStat_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_steamIDUser = { "steamIDUser", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameServerStats_eventUpdateUserAvgRateStat_Parms, steamIDUser), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_sessionLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_countThisSession,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::NewProp_steamIDUser,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamCore|GameServerStats" },
		{ "Comment", "/**\n\x09* Updates an AVGRATE stat with new values for the specified user.\n\x09*\n\x09* You must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\n\x09* This call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\n\x09* These updates will work only on stats that game servers are allowed to edit. \n\x09* If the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as officially \n\x09* controlled by you will be able to set it. To do this you must set the IP range of your official servers in the \n\x09* Dedicated Servers section of App Admin.\n\n\x09*\n\x09* @param\x09steamIDUser\x09\x09\x09The Steam ID of the user to update the AVGRATE stat for.\n\x09* @param\x09name\x09\x09\x09\x09The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n\x09* @param\x09""countThisSession\x09The value accumulation since the last call to this function.\n\x09* @param\x09sessionLength\x09\x09The amount of time in seconds since the last call to this function.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GameServerStats/GameServerStats.h" },
		{ "ToolTip", "Updates an AVGRATE stat with new values for the specified user.\n\nYou must have called RequestUserStats and it needs to return successfully via its callback prior to calling this!\nThis call only modifies Steam's in-memory state and is very cheap. To submit the stats to the server you must call StoreUserStats.\nThese updates will work only on stats that game servers are allowed to edit.\nIf the \"Set By\" field for this stat is \"Official GS\" then only game servers that have been declared as officially\ncontrolled by you will be able to set it. To do this you must set the IP range of your official servers in the\nDedicated Servers section of App Admin.\n\n\n@param        steamIDUser                     The Steam ID of the user to update the AVGRATE stat for.\n@param        name                            The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.\n@param        countThisSession        The value accumulation since the last call to this function.\n@param        sessionLength           The amount of time in seconds since the last call to this function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameServerStats, nullptr, "UpdateUserAvgRateStat", nullptr, nullptr, sizeof(GameServerStats_eventUpdateUserAvgRateStat_Parms), Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameServerStats_NoRegister()
	{
		return UGameServerStats::StaticClass();
	}
	struct Z_Construct_UClass_UGameServerStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GSStatsUnloaded_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_GSStatsUnloaded;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameServerStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USteamCoreSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameServerStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameServerStats_ClearUserAchievement, "ClearUserAchievement" }, // 1893008015
		{ &Z_Construct_UFunction_UGameServerStats_GetUserAchievement, "GetUserAchievement" }, // 1956954446
		{ &Z_Construct_UFunction_UGameServerStats_GetUserStatFloat, "GetUserStatFloat" }, // 3754151213
		{ &Z_Construct_UFunction_UGameServerStats_GetUserStatInt, "GetUserStatInt" }, // 3172746655
		{ &Z_Construct_UFunction_UGameServerStats_ServerRequestUserStats, "ServerRequestUserStats" }, // 1299591359
		{ &Z_Construct_UFunction_UGameServerStats_ServerStoreUserStats, "ServerStoreUserStats" }, // 225467602
		{ &Z_Construct_UFunction_UGameServerStats_SetUserAchievement, "SetUserAchievement" }, // 1887701919
		{ &Z_Construct_UFunction_UGameServerStats_SetUserStatFloat, "SetUserStatFloat" }, // 855216669
		{ &Z_Construct_UFunction_UGameServerStats_SetUserStatInt, "SetUserStatInt" }, // 2912984754
		{ &Z_Construct_UFunction_UGameServerStats_UpdateUserAvgRateStat, "UpdateUserAvgRateStat" }, // 1542843418
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameServerStats_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameServerStats/GameServerStats.h" },
		{ "ModuleRelativePath", "Public/GameServerStats/GameServerStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameServerStats_Statics::NewProp_GSStatsUnloaded_MetaData[] = {
		{ "Category", "SteamCore|GameServerStats|Delegates" },
		{ "ModuleRelativePath", "Public/GameServerStats/GameServerStats.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameServerStats_Statics::NewProp_GSStatsUnloaded = { "GSStatsUnloaded", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameServerStats, GSStatsUnloaded), Z_Construct_UDelegateFunction_SteamCore_OnGSStatsUnloaded__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGameServerStats_Statics::NewProp_GSStatsUnloaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameServerStats_Statics::NewProp_GSStatsUnloaded_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameServerStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameServerStats_Statics::NewProp_GSStatsUnloaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameServerStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameServerStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameServerStats_Statics::ClassParams = {
		&UGameServerStats::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameServerStats_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameServerStats_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGameServerStats_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameServerStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameServerStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameServerStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameServerStats, 2469682299);
	template<> STEAMCORE_API UClass* StaticClass<UGameServerStats>()
	{
		return UGameServerStats::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameServerStats(Z_Construct_UClass_UGameServerStats, &UGameServerStats::StaticClass, TEXT("/Script/SteamCore"), TEXT("UGameServerStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameServerStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
