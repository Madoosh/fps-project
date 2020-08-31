// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamCore/Public/SteamCore/SteamTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamTypes() {}
// Cross Module References
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAccountType();
	UPackage* Z_Construct_UPackage__Script_SteamCore();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamResult();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamDenyReason();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_EOnlineComparison();
	STEAMCORE_API UEnum* Z_Construct_UEnum_SteamCore_ESteamMessageType();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FHostPingData();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FValidateAuthTicketResponse();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle();
	STEAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID();
// End Cross Module References
	static UEnum* ESteamAccountType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamAccountType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamAccountType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamAccountType>()
	{
		return ESteamAccountType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamAccountType(ESteamAccountType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamAccountType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamAccountType_Hash() { return 41747720U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamAccountType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamAccountType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamAccountType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamAccountType::Invalid", (int64)ESteamAccountType::Invalid },
				{ "ESteamAccountType::Individual", (int64)ESteamAccountType::Individual },
				{ "ESteamAccountType::Multiseat", (int64)ESteamAccountType::Multiseat },
				{ "ESteamAccountType::GameServer", (int64)ESteamAccountType::GameServer },
				{ "ESteamAccountType::AnonGameServer", (int64)ESteamAccountType::AnonGameServer },
				{ "ESteamAccountType::Pending", (int64)ESteamAccountType::Pending },
				{ "ESteamAccountType::ContentServer", (int64)ESteamAccountType::ContentServer },
				{ "ESteamAccountType::Clan", (int64)ESteamAccountType::Clan },
				{ "ESteamAccountType::Chat", (int64)ESteamAccountType::Chat },
				{ "ESteamAccountType::ConsoleUser", (int64)ESteamAccountType::ConsoleUser },
				{ "ESteamAccountType::AnonUser", (int64)ESteamAccountType::AnonUser },
				{ "ESteamAccountType::Max", (int64)ESteamAccountType::Max },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AnonGameServer.Name", "ESteamAccountType::AnonGameServer" },
				{ "AnonUser.Name", "ESteamAccountType::AnonUser" },
				{ "BlueprintType", "true" },
				{ "Chat.Name", "ESteamAccountType::Chat" },
				{ "Clan.Name", "ESteamAccountType::Clan" },
				{ "ConsoleUser.Name", "ESteamAccountType::ConsoleUser" },
				{ "ContentServer.Name", "ESteamAccountType::ContentServer" },
				{ "GameServer.Name", "ESteamAccountType::GameServer" },
				{ "Individual.Name", "ESteamAccountType::Individual" },
				{ "Invalid.Name", "ESteamAccountType::Invalid" },
				{ "Max.Name", "ESteamAccountType::Max" },
				{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
				{ "Multiseat.Name", "ESteamAccountType::Multiseat" },
				{ "Pending.Name", "ESteamAccountType::Pending" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamAccountType",
				"ESteamAccountType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamChatEntryType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamChatEntryType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamChatEntryType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamChatEntryType>()
	{
		return ESteamChatEntryType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamChatEntryType(ESteamChatEntryType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamChatEntryType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamChatEntryType_Hash() { return 308507461U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamChatEntryType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamChatEntryType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamChatEntryType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamChatEntryType::Invalid", (int64)ESteamChatEntryType::Invalid },
				{ "ESteamChatEntryType::ChatMsg", (int64)ESteamChatEntryType::ChatMsg },
				{ "ESteamChatEntryType::Typing", (int64)ESteamChatEntryType::Typing },
				{ "ESteamChatEntryType::InviteGame", (int64)ESteamChatEntryType::InviteGame },
				{ "ESteamChatEntryType::Emote", (int64)ESteamChatEntryType::Emote },
				{ "ESteamChatEntryType::LeftConversation", (int64)ESteamChatEntryType::LeftConversation },
				{ "ESteamChatEntryType::Entered", (int64)ESteamChatEntryType::Entered },
				{ "ESteamChatEntryType::WasKicked", (int64)ESteamChatEntryType::WasKicked },
				{ "ESteamChatEntryType::WasBanned", (int64)ESteamChatEntryType::WasBanned },
				{ "ESteamChatEntryType::Disconnected", (int64)ESteamChatEntryType::Disconnected },
				{ "ESteamChatEntryType::HistoricalChat", (int64)ESteamChatEntryType::HistoricalChat },
				{ "ESteamChatEntryType::LinkBlocked", (int64)ESteamChatEntryType::LinkBlocked },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ChatMsg.Name", "ESteamChatEntryType::ChatMsg" },
				{ "Disconnected.Name", "ESteamChatEntryType::Disconnected" },
				{ "Emote.Name", "ESteamChatEntryType::Emote" },
				{ "Entered.Name", "ESteamChatEntryType::Entered" },
				{ "HistoricalChat.Name", "ESteamChatEntryType::HistoricalChat" },
				{ "Invalid.Name", "ESteamChatEntryType::Invalid" },
				{ "InviteGame.Name", "ESteamChatEntryType::InviteGame" },
				{ "LeftConversation.Name", "ESteamChatEntryType::LeftConversation" },
				{ "LinkBlocked.Name", "ESteamChatEntryType::LinkBlocked" },
				{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
				{ "Typing.Name", "ESteamChatEntryType::Typing" },
				{ "WasBanned.Name", "ESteamChatEntryType::WasBanned" },
				{ "WasKicked.Name", "ESteamChatEntryType::WasKicked" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamChatEntryType",
				"ESteamChatEntryType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamChatRoomEnterResponse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamChatRoomEnterResponse"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamChatRoomEnterResponse>()
	{
		return ESteamChatRoomEnterResponse_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamChatRoomEnterResponse(ESteamChatRoomEnterResponse_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamChatRoomEnterResponse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse_Hash() { return 2074611949U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamChatRoomEnterResponse"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamChatRoomEnterResponse_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamChatRoomEnterResponse::None", (int64)ESteamChatRoomEnterResponse::None },
				{ "ESteamChatRoomEnterResponse::Success", (int64)ESteamChatRoomEnterResponse::Success },
				{ "ESteamChatRoomEnterResponse::DoesntExist", (int64)ESteamChatRoomEnterResponse::DoesntExist },
				{ "ESteamChatRoomEnterResponse::NotAllowed", (int64)ESteamChatRoomEnterResponse::NotAllowed },
				{ "ESteamChatRoomEnterResponse::Full", (int64)ESteamChatRoomEnterResponse::Full },
				{ "ESteamChatRoomEnterResponse::Error", (int64)ESteamChatRoomEnterResponse::Error },
				{ "ESteamChatRoomEnterResponse::Banned", (int64)ESteamChatRoomEnterResponse::Banned },
				{ "ESteamChatRoomEnterResponse::Limited", (int64)ESteamChatRoomEnterResponse::Limited },
				{ "ESteamChatRoomEnterResponse::ClanDisabled", (int64)ESteamChatRoomEnterResponse::ClanDisabled },
				{ "ESteamChatRoomEnterResponse::CommunityBan", (int64)ESteamChatRoomEnterResponse::CommunityBan },
				{ "ESteamChatRoomEnterResponse::MemberBlockedYou", (int64)ESteamChatRoomEnterResponse::MemberBlockedYou },
				{ "ESteamChatRoomEnterResponse::YouBlockedMember", (int64)ESteamChatRoomEnterResponse::YouBlockedMember },
				{ "ESteamChatRoomEnterResponse::RatelimitExceeded", (int64)ESteamChatRoomEnterResponse::RatelimitExceeded },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Banned.Name", "ESteamChatRoomEnterResponse::Banned" },
				{ "BlueprintType", "true" },
				{ "ClanDisabled.Name", "ESteamChatRoomEnterResponse::ClanDisabled" },
				{ "CommunityBan.Name", "ESteamChatRoomEnterResponse::CommunityBan" },
				{ "DoesntExist.Name", "ESteamChatRoomEnterResponse::DoesntExist" },
				{ "Error.Name", "ESteamChatRoomEnterResponse::Error" },
				{ "Full.Name", "ESteamChatRoomEnterResponse::Full" },
				{ "Limited.Name", "ESteamChatRoomEnterResponse::Limited" },
				{ "MemberBlockedYou.Name", "ESteamChatRoomEnterResponse::MemberBlockedYou" },
				{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
				{ "None.Name", "ESteamChatRoomEnterResponse::None" },
				{ "NotAllowed.Name", "ESteamChatRoomEnterResponse::NotAllowed" },
				{ "RatelimitExceeded.Name", "ESteamChatRoomEnterResponse::RatelimitExceeded" },
				{ "Success.Name", "ESteamChatRoomEnterResponse::Success" },
				{ "YouBlockedMember.Name", "ESteamChatRoomEnterResponse::YouBlockedMember" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamChatRoomEnterResponse",
				"ESteamChatRoomEnterResponse",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamResult"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamResult>()
	{
		return ESteamResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamResult(ESteamResult_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamResult_Hash() { return 2409889280U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamResult"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamResult::None", (int64)ESteamResult::None },
				{ "ESteamResult::OK", (int64)ESteamResult::OK },
				{ "ESteamResult::Fail", (int64)ESteamResult::Fail },
				{ "ESteamResult::NoConnection", (int64)ESteamResult::NoConnection },
				{ "ESteamResult::NoConnectionRetry", (int64)ESteamResult::NoConnectionRetry },
				{ "ESteamResult::InvalidPassword", (int64)ESteamResult::InvalidPassword },
				{ "ESteamResult::LoggedInElsewhere", (int64)ESteamResult::LoggedInElsewhere },
				{ "ESteamResult::InvalidProtocolVer", (int64)ESteamResult::InvalidProtocolVer },
				{ "ESteamResult::InvalidParam", (int64)ESteamResult::InvalidParam },
				{ "ESteamResult::FileNotFound", (int64)ESteamResult::FileNotFound },
				{ "ESteamResult::Busy", (int64)ESteamResult::Busy },
				{ "ESteamResult::InvalidState", (int64)ESteamResult::InvalidState },
				{ "ESteamResult::InvalidName", (int64)ESteamResult::InvalidName },
				{ "ESteamResult::InvalidEmail", (int64)ESteamResult::InvalidEmail },
				{ "ESteamResult::DuplicateName", (int64)ESteamResult::DuplicateName },
				{ "ESteamResult::AccessDenied", (int64)ESteamResult::AccessDenied },
				{ "ESteamResult::Timeout", (int64)ESteamResult::Timeout },
				{ "ESteamResult::Banned", (int64)ESteamResult::Banned },
				{ "ESteamResult::AccountNotFound", (int64)ESteamResult::AccountNotFound },
				{ "ESteamResult::InvalidSteamID", (int64)ESteamResult::InvalidSteamID },
				{ "ESteamResult::ServiceUnavailable", (int64)ESteamResult::ServiceUnavailable },
				{ "ESteamResult::NotLoggedOn", (int64)ESteamResult::NotLoggedOn },
				{ "ESteamResult::Pending", (int64)ESteamResult::Pending },
				{ "ESteamResult::EncryptionFailure", (int64)ESteamResult::EncryptionFailure },
				{ "ESteamResult::InsufficientPrivilege", (int64)ESteamResult::InsufficientPrivilege },
				{ "ESteamResult::LimitExceeded", (int64)ESteamResult::LimitExceeded },
				{ "ESteamResult::Revoked", (int64)ESteamResult::Revoked },
				{ "ESteamResult::Expired", (int64)ESteamResult::Expired },
				{ "ESteamResult::AlreadyRedeemed", (int64)ESteamResult::AlreadyRedeemed },
				{ "ESteamResult::DuplicateRequest", (int64)ESteamResult::DuplicateRequest },
				{ "ESteamResult::AlreadyOwned", (int64)ESteamResult::AlreadyOwned },
				{ "ESteamResult::IPNotFound", (int64)ESteamResult::IPNotFound },
				{ "ESteamResult::PersistFailed", (int64)ESteamResult::PersistFailed },
				{ "ESteamResult::LockingFailed", (int64)ESteamResult::LockingFailed },
				{ "ESteamResult::LogonSessionReplaced", (int64)ESteamResult::LogonSessionReplaced },
				{ "ESteamResult::ConnectFailed", (int64)ESteamResult::ConnectFailed },
				{ "ESteamResult::HandshakeFailed", (int64)ESteamResult::HandshakeFailed },
				{ "ESteamResult::IOFailure", (int64)ESteamResult::IOFailure },
				{ "ESteamResult::RemoteDisconnect", (int64)ESteamResult::RemoteDisconnect },
				{ "ESteamResult::ShoppingCartNotFound", (int64)ESteamResult::ShoppingCartNotFound },
				{ "ESteamResult::Blocked", (int64)ESteamResult::Blocked },
				{ "ESteamResult::Ignored", (int64)ESteamResult::Ignored },
				{ "ESteamResult::NoMatch", (int64)ESteamResult::NoMatch },
				{ "ESteamResult::AccountDisabled", (int64)ESteamResult::AccountDisabled },
				{ "ESteamResult::ServiceReadOnly", (int64)ESteamResult::ServiceReadOnly },
				{ "ESteamResult::AccountNotFeatured", (int64)ESteamResult::AccountNotFeatured },
				{ "ESteamResult::AdministratorOK", (int64)ESteamResult::AdministratorOK },
				{ "ESteamResult::ContentVersion", (int64)ESteamResult::ContentVersion },
				{ "ESteamResult::TryAnotherCM", (int64)ESteamResult::TryAnotherCM },
				{ "ESteamResult::PasswordRequiredToKickSession", (int64)ESteamResult::PasswordRequiredToKickSession },
				{ "ESteamResult::AlreadyLoggedInElsewhere", (int64)ESteamResult::AlreadyLoggedInElsewhere },
				{ "ESteamResult::Suspended", (int64)ESteamResult::Suspended },
				{ "ESteamResult::Cancelled", (int64)ESteamResult::Cancelled },
				{ "ESteamResult::DataCorruption", (int64)ESteamResult::DataCorruption },
				{ "ESteamResult::DiskFull", (int64)ESteamResult::DiskFull },
				{ "ESteamResult::RemoteCallFailed", (int64)ESteamResult::RemoteCallFailed },
				{ "ESteamResult::PasswordUnset", (int64)ESteamResult::PasswordUnset },
				{ "ESteamResult::ExternalAccountUnlinked", (int64)ESteamResult::ExternalAccountUnlinked },
				{ "ESteamResult::PSNTicketInvalid", (int64)ESteamResult::PSNTicketInvalid },
				{ "ESteamResult::ExternalAccountAlreadyLinked", (int64)ESteamResult::ExternalAccountAlreadyLinked },
				{ "ESteamResult::RemoteFileConflict", (int64)ESteamResult::RemoteFileConflict },
				{ "ESteamResult::IllegalPassword", (int64)ESteamResult::IllegalPassword },
				{ "ESteamResult::SameAsPreviousValue", (int64)ESteamResult::SameAsPreviousValue },
				{ "ESteamResult::AccountLogonDenied", (int64)ESteamResult::AccountLogonDenied },
				{ "ESteamResult::CannotUseOldPassword", (int64)ESteamResult::CannotUseOldPassword },
				{ "ESteamResult::InvalidLoginAuthCode", (int64)ESteamResult::InvalidLoginAuthCode },
				{ "ESteamResult::AccountLogonDeniedNoMail", (int64)ESteamResult::AccountLogonDeniedNoMail },
				{ "ESteamResult::HardwareNotCapableOfIPT", (int64)ESteamResult::HardwareNotCapableOfIPT },
				{ "ESteamResult::IPTInitError", (int64)ESteamResult::IPTInitError },
				{ "ESteamResult::ParentalControlRestricted", (int64)ESteamResult::ParentalControlRestricted },
				{ "ESteamResult::FacebookQueryError", (int64)ESteamResult::FacebookQueryError },
				{ "ESteamResult::ExpiredLoginAuthCode", (int64)ESteamResult::ExpiredLoginAuthCode },
				{ "ESteamResult::IPLoginRestrictionFailed", (int64)ESteamResult::IPLoginRestrictionFailed },
				{ "ESteamResult::AccountLockedDown", (int64)ESteamResult::AccountLockedDown },
				{ "ESteamResult::AccountLogonDeniedVerifiedEmailRequired", (int64)ESteamResult::AccountLogonDeniedVerifiedEmailRequired },
				{ "ESteamResult::NoMatchingURL", (int64)ESteamResult::NoMatchingURL },
				{ "ESteamResult::BadResponse", (int64)ESteamResult::BadResponse },
				{ "ESteamResult::RequirePasswordReEntry", (int64)ESteamResult::RequirePasswordReEntry },
				{ "ESteamResult::ValueOutOfRange", (int64)ESteamResult::ValueOutOfRange },
				{ "ESteamResult::UnexpectedError", (int64)ESteamResult::UnexpectedError },
				{ "ESteamResult::Disabled", (int64)ESteamResult::Disabled },
				{ "ESteamResult::InvalidCEGSubmission", (int64)ESteamResult::InvalidCEGSubmission },
				{ "ESteamResult::RestrictedDevice", (int64)ESteamResult::RestrictedDevice },
				{ "ESteamResult::RegionLocked", (int64)ESteamResult::RegionLocked },
				{ "ESteamResult::RateLimitExceeded", (int64)ESteamResult::RateLimitExceeded },
				{ "ESteamResult::AccountLoginDeniedNeedTwoFactor", (int64)ESteamResult::AccountLoginDeniedNeedTwoFactor },
				{ "ESteamResult::ItemDeleted", (int64)ESteamResult::ItemDeleted },
				{ "ESteamResult::AccountLoginDeniedThrottle", (int64)ESteamResult::AccountLoginDeniedThrottle },
				{ "ESteamResult::TwoFactorCodeMismatch", (int64)ESteamResult::TwoFactorCodeMismatch },
				{ "ESteamResult::TwoFactorActivationCodeMismatch", (int64)ESteamResult::TwoFactorActivationCodeMismatch },
				{ "ESteamResult::AccountAssociatedToMultiplePartners", (int64)ESteamResult::AccountAssociatedToMultiplePartners },
				{ "ESteamResult::NotModified", (int64)ESteamResult::NotModified },
				{ "ESteamResult::NoMobileDevice", (int64)ESteamResult::NoMobileDevice },
				{ "ESteamResult::TimeNotSynced", (int64)ESteamResult::TimeNotSynced },
				{ "ESteamResult::SmsCodeFailed", (int64)ESteamResult::SmsCodeFailed },
				{ "ESteamResult::AccountLimitExceeded", (int64)ESteamResult::AccountLimitExceeded },
				{ "ESteamResult::AccountActivityLimitExceeded", (int64)ESteamResult::AccountActivityLimitExceeded },
				{ "ESteamResult::PhoneActivityLimitExceeded", (int64)ESteamResult::PhoneActivityLimitExceeded },
				{ "ESteamResult::RefundToWallet", (int64)ESteamResult::RefundToWallet },
				{ "ESteamResult::EmailSendFailure", (int64)ESteamResult::EmailSendFailure },
				{ "ESteamResult::NotSettled", (int64)ESteamResult::NotSettled },
				{ "ESteamResult::NeedCaptcha", (int64)ESteamResult::NeedCaptcha },
				{ "ESteamResult::GSLTDenied", (int64)ESteamResult::GSLTDenied },
				{ "ESteamResult::GSOwnerDenied", (int64)ESteamResult::GSOwnerDenied },
				{ "ESteamResult::InvalidItemType", (int64)ESteamResult::InvalidItemType },
				{ "ESteamResult::IPBanned", (int64)ESteamResult::IPBanned },
				{ "ESteamResult::GSLTExpired", (int64)ESteamResult::GSLTExpired },
				{ "ESteamResult::InsufficientFunds", (int64)ESteamResult::InsufficientFunds },
				{ "ESteamResult::TooManyPending", (int64)ESteamResult::TooManyPending },
				{ "ESteamResult::NoSiteLicensesFound", (int64)ESteamResult::NoSiteLicensesFound },
				{ "ESteamResult::WGNetworkSendExceeded", (int64)ESteamResult::WGNetworkSendExceeded },
				{ "ESteamResult::AccountNotFriends", (int64)ESteamResult::AccountNotFriends },
				{ "ESteamResult::LimitedUserAccount", (int64)ESteamResult::LimitedUserAccount },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AccessDenied.Comment", "// name is not unique\n" },
				{ "AccessDenied.Name", "ESteamResult::AccessDenied" },
				{ "AccessDenied.ToolTip", "name is not unique" },
				{ "AccountActivityLimitExceeded.Comment", "// Too many accounts access this resource\n" },
				{ "AccountActivityLimitExceeded.Name", "ESteamResult::AccountActivityLimitExceeded" },
				{ "AccountActivityLimitExceeded.ToolTip", "Too many accounts access this resource" },
				{ "AccountAssociatedToMultiplePartners.Comment", "// activation code for two-factor didn't match\n" },
				{ "AccountAssociatedToMultiplePartners.Name", "ESteamResult::AccountAssociatedToMultiplePartners" },
				{ "AccountAssociatedToMultiplePartners.ToolTip", "activation code for two-factor didn't match" },
				{ "AccountDisabled.Comment", "// nothing matching the request found\n" },
				{ "AccountDisabled.Name", "ESteamResult::AccountDisabled" },
				{ "AccountDisabled.ToolTip", "nothing matching the request found" },
				{ "AccountLimitExceeded.Comment", "// SMS code failure (no match, none pending, etc.)\n" },
				{ "AccountLimitExceeded.Name", "ESteamResult::AccountLimitExceeded" },
				{ "AccountLimitExceeded.ToolTip", "SMS code failure (no match, none pending, etc.)" },
				{ "AccountLockedDown.Name", "ESteamResult::AccountLockedDown" },
				{ "AccountLoginDeniedNeedTwoFactor.Comment", "// Temporary rate limit exceeded, try again later, different from LimitExceeded which may be permanent\n" },
				{ "AccountLoginDeniedNeedTwoFactor.Name", "ESteamResult::AccountLoginDeniedNeedTwoFactor" },
				{ "AccountLoginDeniedNeedTwoFactor.ToolTip", "Temporary rate limit exceeded, try again later, different from LimitExceeded which may be permanent" },
				{ "AccountLoginDeniedThrottle.Comment", "// The thing we're trying to access has been deleted\n" },
				{ "AccountLoginDeniedThrottle.Name", "ESteamResult::AccountLoginDeniedThrottle" },
				{ "AccountLoginDeniedThrottle.ToolTip", "The thing we're trying to access has been deleted" },
				{ "AccountLogonDenied.Comment", "// new value is the same as the old one ( secret question and answer )\n" },
				{ "AccountLogonDenied.Name", "ESteamResult::AccountLogonDenied" },
				{ "AccountLogonDenied.ToolTip", "new value is the same as the old one ( secret question and answer )" },
				{ "AccountLogonDeniedNoMail.Comment", "// account login denied due to auth code invalid\n" },
				{ "AccountLogonDeniedNoMail.Name", "ESteamResult::AccountLogonDeniedNoMail" },
				{ "AccountLogonDeniedNoMail.ToolTip", "account login denied due to auth code invalid" },
				{ "AccountLogonDeniedVerifiedEmailRequired.Name", "ESteamResult::AccountLogonDeniedVerifiedEmailRequired" },
				{ "AccountNotFeatured.Comment", "// this service is not accepting content changes right now\n" },
				{ "AccountNotFeatured.Name", "ESteamResult::AccountNotFeatured" },
				{ "AccountNotFeatured.ToolTip", "this service is not accepting content changes right now" },
				{ "AccountNotFound.Comment", "// VAC2 banned\n" },
				{ "AccountNotFound.Name", "ESteamResult::AccountNotFound" },
				{ "AccountNotFound.ToolTip", "VAC2 banned" },
				{ "AccountNotFriends.Comment", "// the WG couldn't send a response because we exceeded max network send size\n" },
				{ "AccountNotFriends.Name", "ESteamResult::AccountNotFriends" },
				{ "AccountNotFriends.ToolTip", "the WG couldn't send a response because we exceeded max network send size" },
				{ "AdministratorOK.Comment", "// account doesn't have value, so this feature isn't available\n" },
				{ "AdministratorOK.Name", "ESteamResult::AdministratorOK" },
				{ "AdministratorOK.ToolTip", "account doesn't have value, so this feature isn't available" },
				{ "AlreadyLoggedInElsewhere.Comment", "// You are already logged in elsewhere, this cached credential login has failed.\n" },
				{ "AlreadyLoggedInElsewhere.Name", "ESteamResult::AlreadyLoggedInElsewhere" },
				{ "AlreadyLoggedInElsewhere.ToolTip", "You are already logged in elsewhere, this cached credential login has failed." },
				{ "AlreadyOwned.Comment", "// The request is a duplicate and the action has already occurred in the past, ignored this time\n" },
				{ "AlreadyOwned.Name", "ESteamResult::AlreadyOwned" },
				{ "AlreadyOwned.ToolTip", "The request is a duplicate and the action has already occurred in the past, ignored this time" },
				{ "AlreadyRedeemed.Comment", "// License/Guest pass the user is trying to access is expired\n" },
				{ "AlreadyRedeemed.Name", "ESteamResult::AlreadyRedeemed" },
				{ "AlreadyRedeemed.ToolTip", "License/Guest pass the user is trying to access is expired" },
				{ "BadResponse.Name", "ESteamResult::BadResponse" },
				{ "Banned.Comment", "// operation timed out\n" },
				{ "Banned.Name", "ESteamResult::Banned" },
				{ "Banned.ToolTip", "operation timed out" },
				{ "Blocked.Comment", "// failed to find the shopping cart requested\n" },
				{ "Blocked.Name", "ESteamResult::Blocked" },
				{ "Blocked.ToolTip", "failed to find the shopping cart requested" },
				{ "BlueprintType", "true" },
				{ "Busy.Comment", "// file was not found\n" },
				{ "Busy.Name", "ESteamResult::Busy" },
				{ "Busy.ToolTip", "file was not found" },
				{ "Cancelled.Comment", "// Long running operation (content download) suspended/paused\n" },
				{ "Cancelled.Name", "ESteamResult::Cancelled" },
				{ "Cancelled.ToolTip", "Long running operation (content download) suspended/paused" },
				{ "CannotUseOldPassword.Comment", "// account login denied due to 2nd factor authentication failure\n" },
				{ "CannotUseOldPassword.Name", "ESteamResult::CannotUseOldPassword" },
				{ "CannotUseOldPassword.ToolTip", "account login denied due to 2nd factor authentication failure" },
				{ "ConnectFailed.Name", "ESteamResult::ConnectFailed" },
				{ "ContentVersion.Comment", "// allowed to take this action, but only because requester is admin\n" },
				{ "ContentVersion.Name", "ESteamResult::ContentVersion" },
				{ "ContentVersion.ToolTip", "allowed to take this action, but only because requester is admin" },
				{ "DataCorruption.Comment", "// Operation canceled (typically by user: content download)\n" },
				{ "DataCorruption.Name", "ESteamResult::DataCorruption" },
				{ "DataCorruption.ToolTip", "Operation canceled (typically by user: content download)" },
				{ "Disabled.Comment", "// something happened that we didn't expect to ever happen\n" },
				{ "Disabled.Name", "ESteamResult::Disabled" },
				{ "Disabled.ToolTip", "something happened that we didn't expect to ever happen" },
				{ "DiskFull.Comment", "// Operation canceled because data is ill formed or unrecoverable\n" },
				{ "DiskFull.Name", "ESteamResult::DiskFull" },
				{ "DiskFull.ToolTip", "Operation canceled because data is ill formed or unrecoverable" },
				{ "DuplicateName.Comment", "// email is invalid\n" },
				{ "DuplicateName.Name", "ESteamResult::DuplicateName" },
				{ "DuplicateName.ToolTip", "email is invalid" },
				{ "DuplicateRequest.Comment", "// Guest pass has already been redeemed by account, cannot be acked again\n" },
				{ "DuplicateRequest.Name", "ESteamResult::DuplicateRequest" },
				{ "DuplicateRequest.ToolTip", "Guest pass has already been redeemed by account, cannot be acked again" },
				{ "EmailSendFailure.Comment", "// Cannot refund to payment method, must use wallet\n" },
				{ "EmailSendFailure.Name", "ESteamResult::EmailSendFailure" },
				{ "EmailSendFailure.ToolTip", "Cannot refund to payment method, must use wallet" },
				{ "EncryptionFailure.Comment", "// Request is pending (may be in process, or waiting on third party)\n" },
				{ "EncryptionFailure.Name", "ESteamResult::EncryptionFailure" },
				{ "EncryptionFailure.ToolTip", "Request is pending (may be in process, or waiting on third party)" },
				{ "Expired.Comment", "// Access has been revoked (used for revoked guest passes)\n" },
				{ "Expired.Name", "ESteamResult::Expired" },
				{ "Expired.ToolTip", "Access has been revoked (used for revoked guest passes)" },
				{ "ExpiredLoginAuthCode.Comment", "// Facebook query returned an error\n" },
				{ "ExpiredLoginAuthCode.Name", "ESteamResult::ExpiredLoginAuthCode" },
				{ "ExpiredLoginAuthCode.ToolTip", "Facebook query returned an error" },
				{ "ExternalAccountAlreadyLinked.Comment", "// PSN ticket was invalid\n" },
				{ "ExternalAccountAlreadyLinked.Name", "ESteamResult::ExternalAccountAlreadyLinked" },
				{ "ExternalAccountAlreadyLinked.ToolTip", "PSN ticket was invalid" },
				{ "ExternalAccountUnlinked.Comment", "// Password could not be verified as it's unset server side\n" },
				{ "ExternalAccountUnlinked.Name", "ESteamResult::ExternalAccountUnlinked" },
				{ "ExternalAccountUnlinked.ToolTip", "Password could not be verified as it's unset server side" },
				{ "FacebookQueryError.Comment", "// \n// \n// operation failed due to parental control restrictions for current user\n" },
				{ "FacebookQueryError.Name", "ESteamResult::FacebookQueryError" },
				{ "FacebookQueryError.ToolTip", "operation failed due to parental control restrictions for current user" },
				{ "Fail.Comment", "// success\n" },
				{ "Fail.Name", "ESteamResult::Fail" },
				{ "Fail.ToolTip", "success" },
				{ "FileNotFound.Comment", "// a parameter is incorrect\n" },
				{ "FileNotFound.Name", "ESteamResult::FileNotFound" },
				{ "FileNotFound.ToolTip", "a parameter is incorrect" },
				{ "GSLTDenied.Comment", "// Needs to provide a valid captcha\n" },
				{ "GSLTDenied.Name", "ESteamResult::GSLTDenied" },
				{ "GSLTDenied.ToolTip", "Needs to provide a valid captcha" },
				{ "GSLTExpired.Comment", "// the ip address has been banned from taking this action\n" },
				{ "GSLTExpired.Name", "ESteamResult::GSLTExpired" },
				{ "GSLTExpired.ToolTip", "the ip address has been banned from taking this action" },
				{ "GSOwnerDenied.Comment", "// a game server login token owned by this token's owner has been banned\n" },
				{ "GSOwnerDenied.Name", "ESteamResult::GSOwnerDenied" },
				{ "GSOwnerDenied.ToolTip", "a game server login token owned by this token's owner has been banned" },
				{ "HandshakeFailed.Name", "ESteamResult::HandshakeFailed" },
				{ "HardwareNotCapableOfIPT.Comment", "// account login denied due to 2nd factor auth failure - and no mail has been sent\n" },
				{ "HardwareNotCapableOfIPT.Name", "ESteamResult::HardwareNotCapableOfIPT" },
				{ "HardwareNotCapableOfIPT.ToolTip", "account login denied due to 2nd factor auth failure - and no mail has been sent" },
				{ "Ignored.Comment", "// a user didn't allow it\n" },
				{ "Ignored.Name", "ESteamResult::Ignored" },
				{ "Ignored.ToolTip", "a user didn't allow it" },
				{ "IllegalPassword.Comment", "// The sync cannot resume due to a conflict between the local and remote files\n" },
				{ "IllegalPassword.Name", "ESteamResult::IllegalPassword" },
				{ "IllegalPassword.ToolTip", "The sync cannot resume due to a conflict between the local and remote files" },
				{ "InsufficientFunds.Comment", "// this token has expired from disuse; can be reset for use\n" },
				{ "InsufficientFunds.Name", "ESteamResult::InsufficientFunds" },
				{ "InsufficientFunds.ToolTip", "this token has expired from disuse; can be reset for use" },
				{ "InsufficientPrivilege.Comment", "// Encryption or Decryption failed\n" },
				{ "InsufficientPrivilege.Name", "ESteamResult::InsufficientPrivilege" },
				{ "InsufficientPrivilege.ToolTip", "Encryption or Decryption failed" },
				{ "InvalidCEGSubmission.Comment", "// The requested service has been configured to be unavailable\n" },
				{ "InvalidCEGSubmission.Name", "ESteamResult::InvalidCEGSubmission" },
				{ "InvalidCEGSubmission.ToolTip", "The requested service has been configured to be unavailable" },
				{ "InvalidEmail.Comment", "// name is invalid\n" },
				{ "InvalidEmail.Name", "ESteamResult::InvalidEmail" },
				{ "InvalidEmail.ToolTip", "name is invalid" },
				{ "InvalidItemType.Comment", "// game server owner is denied for other reason (account lock, community ban, vac ban, missing phone)\n" },
				{ "InvalidItemType.Name", "ESteamResult::InvalidItemType" },
				{ "InvalidItemType.ToolTip", "game server owner is denied for other reason (account lock, community ban, vac ban, missing phone)" },
				{ "InvalidLoginAuthCode.Comment", "// The requested new password is not legal\n" },
				{ "InvalidLoginAuthCode.Name", "ESteamResult::InvalidLoginAuthCode" },
				{ "InvalidLoginAuthCode.ToolTip", "The requested new password is not legal" },
				{ "InvalidName.Comment", "// called object was in an invalid state\n" },
				{ "InvalidName.Name", "ESteamResult::InvalidName" },
				{ "InvalidName.ToolTip", "called object was in an invalid state" },
				{ "InvalidParam.Comment", "// protocol version is incorrect\n" },
				{ "InvalidParam.Name", "ESteamResult::InvalidParam" },
				{ "InvalidParam.ToolTip", "protocol version is incorrect" },
				{ "InvalidPassword.Comment", "// OBSOLETE - removed\n" },
				{ "InvalidPassword.Name", "ESteamResult::InvalidPassword" },
				{ "InvalidPassword.ToolTip", "OBSOLETE - removed" },
				{ "InvalidProtocolVer.Comment", "// same user logged in elsewhere\n" },
				{ "InvalidProtocolVer.Name", "ESteamResult::InvalidProtocolVer" },
				{ "InvalidProtocolVer.ToolTip", "same user logged in elsewhere" },
				{ "InvalidState.Comment", "// called method busy - action not taken\n" },
				{ "InvalidState.Name", "ESteamResult::InvalidState" },
				{ "InvalidState.ToolTip", "called method busy - action not taken" },
				{ "InvalidSteamID.Comment", "// account not found\n" },
				{ "InvalidSteamID.Name", "ESteamResult::InvalidSteamID" },
				{ "InvalidSteamID.ToolTip", "account not found" },
				{ "IOFailure.Name", "ESteamResult::IOFailure" },
				{ "IPBanned.Comment", "// the type of thing we were requested to act on is invalid\n" },
				{ "IPBanned.Name", "ESteamResult::IPBanned" },
				{ "IPBanned.ToolTip", "the type of thing we were requested to act on is invalid" },
				{ "IPLoginRestrictionFailed.Comment", "// account login denied due to auth code expired\n" },
				{ "IPLoginRestrictionFailed.Name", "ESteamResult::IPLoginRestrictionFailed" },
				{ "IPLoginRestrictionFailed.ToolTip", "account login denied due to auth code expired" },
				{ "IPNotFound.Comment", "// All the games in this guest pass redemption request are already owned by the user\n" },
				{ "IPNotFound.Name", "ESteamResult::IPNotFound" },
				{ "IPNotFound.ToolTip", "All the games in this guest pass redemption request are already owned by the user" },
				{ "IPTInitError.Comment", "// \n" },
				{ "IPTInitError.Name", "ESteamResult::IPTInitError" },
				{ "ItemDeleted.Comment", "// Need two-factor code to login\n" },
				{ "ItemDeleted.Name", "ESteamResult::ItemDeleted" },
				{ "ItemDeleted.ToolTip", "Need two-factor code to login" },
				{ "LimitedUserAccount.Comment", "// the user is not mutually friends\n" },
				{ "LimitedUserAccount.Name", "ESteamResult::LimitedUserAccount" },
				{ "LimitedUserAccount.ToolTip", "the user is not mutually friends" },
				{ "LimitExceeded.Comment", "// Insufficient privilege\n" },
				{ "LimitExceeded.Name", "ESteamResult::LimitExceeded" },
				{ "LimitExceeded.ToolTip", "Insufficient privilege" },
				{ "LockingFailed.Comment", "// failed to write change to the data store\n" },
				{ "LockingFailed.Name", "ESteamResult::LockingFailed" },
				{ "LockingFailed.ToolTip", "failed to write change to the data store" },
				{ "LoggedInElsewhere.Comment", "// password/ticket is invalid\n" },
				{ "LoggedInElsewhere.Name", "ESteamResult::LoggedInElsewhere" },
				{ "LoggedInElsewhere.ToolTip", "password/ticket is invalid" },
				{ "LogonSessionReplaced.Comment", "// failed to acquire access lock for this operation\n" },
				{ "LogonSessionReplaced.Name", "ESteamResult::LogonSessionReplaced" },
				{ "LogonSessionReplaced.ToolTip", "failed to acquire access lock for this operation" },
				{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
				{ "NeedCaptcha.Comment", "// Can't perform operation till payment has settled\n" },
				{ "NeedCaptcha.Name", "ESteamResult::NeedCaptcha" },
				{ "NeedCaptcha.ToolTip", "Can't perform operation till payment has settled" },
				{ "NoConnection.Comment", "// generic failure \n" },
				{ "NoConnection.Name", "ESteamResult::NoConnection" },
				{ "NoConnection.ToolTip", "generic failure" },
				{ "NoConnectionRetry.Comment", "// no/failed network connection\n" },
				{ "NoConnectionRetry.Name", "ESteamResult::NoConnectionRetry" },
				{ "NoConnectionRetry.ToolTip", "no/failed network connection" },
				{ "NoMatch.Comment", "// target is ignoring sender\n" },
				{ "NoMatch.Name", "ESteamResult::NoMatch" },
				{ "NoMatch.ToolTip", "target is ignoring sender" },
				{ "NoMatchingURL.Name", "ESteamResult::NoMatchingURL" },
				{ "NoMobileDevice.Comment", "// data not modified\n" },
				{ "NoMobileDevice.Name", "ESteamResult::NoMobileDevice" },
				{ "NoMobileDevice.ToolTip", "data not modified" },
				{ "None.Name", "ESteamResult::None" },
				{ "NoSiteLicensesFound.Comment", "// There are too many of this thing pending already\n" },
				{ "NoSiteLicensesFound.Name", "ESteamResult::NoSiteLicensesFound" },
				{ "NoSiteLicensesFound.ToolTip", "There are too many of this thing pending already" },
				{ "NotLoggedOn.Comment", "// The requested service is currently unavailable\n" },
				{ "NotLoggedOn.Name", "ESteamResult::NotLoggedOn" },
				{ "NotLoggedOn.ToolTip", "The requested service is currently unavailable" },
				{ "NotModified.Comment", "// account has been associated with multiple partners\n" },
				{ "NotModified.Name", "ESteamResult::NotModified" },
				{ "NotModified.ToolTip", "account has been associated with multiple partners" },
				{ "NotSettled.Comment", "// Cannot send an email\n" },
				{ "NotSettled.Name", "ESteamResult::NotSettled" },
				{ "NotSettled.ToolTip", "Cannot send an email" },
				{ "OK.Name", "ESteamResult::OK" },
				{ "ParentalControlRestricted.Comment", "// \n// \n" },
				{ "ParentalControlRestricted.Name", "ESteamResult::ParentalControlRestricted" },
				{ "PasswordRequiredToKickSession.Comment", "// The current CM can't service the user making a request, user should try another.\n" },
				{ "PasswordRequiredToKickSession.Name", "ESteamResult::PasswordRequiredToKickSession" },
				{ "PasswordRequiredToKickSession.ToolTip", "The current CM can't service the user making a request, user should try another." },
				{ "PasswordUnset.Comment", "// an remote call or IPC call failed\n" },
				{ "PasswordUnset.Name", "ESteamResult::PasswordUnset" },
				{ "PasswordUnset.ToolTip", "an remote call or IPC call failed" },
				{ "Pending.Comment", "// The user is not logged on\n" },
				{ "Pending.Name", "ESteamResult::Pending" },
				{ "Pending.ToolTip", "The user is not logged on" },
				{ "PersistFailed.Comment", "// IP address not found\n" },
				{ "PersistFailed.Name", "ESteamResult::PersistFailed" },
				{ "PersistFailed.ToolTip", "IP address not found" },
				{ "PhoneActivityLimitExceeded.Comment", "// Too many changes to this account\n" },
				{ "PhoneActivityLimitExceeded.Name", "ESteamResult::PhoneActivityLimitExceeded" },
				{ "PhoneActivityLimitExceeded.ToolTip", "Too many changes to this account" },
				{ "PSNTicketInvalid.Comment", "// External account (PSN, Facebook...) is not linked to a Steam account\n" },
				{ "PSNTicketInvalid.Name", "ESteamResult::PSNTicketInvalid" },
				{ "PSNTicketInvalid.ToolTip", "External account (PSN, Facebook...) is not linked to a Steam account" },
				{ "RateLimitExceeded.Comment", "// The action could not be complete because it is region restricted\n" },
				{ "RateLimitExceeded.Name", "ESteamResult::RateLimitExceeded" },
				{ "RateLimitExceeded.ToolTip", "The action could not be complete because it is region restricted" },
				{ "RefundToWallet.Comment", "// Too many changes to this phone\n" },
				{ "RefundToWallet.Name", "ESteamResult::RefundToWallet" },
				{ "RefundToWallet.ToolTip", "Too many changes to this phone" },
				{ "RegionLocked.Comment", "// The device being used is not allowed to perform this action\n" },
				{ "RegionLocked.Name", "ESteamResult::RegionLocked" },
				{ "RegionLocked.ToolTip", "The device being used is not allowed to perform this action" },
				{ "RemoteCallFailed.Comment", "// Operation canceled - not enough disk space.\n" },
				{ "RemoteCallFailed.Name", "ESteamResult::RemoteCallFailed" },
				{ "RemoteCallFailed.ToolTip", "Operation canceled - not enough disk space." },
				{ "RemoteDisconnect.Name", "ESteamResult::RemoteDisconnect" },
				{ "RemoteFileConflict.Comment", "// External account (PSN, Facebook...) is already linked to some other account, must explicitly request to replace/delete the link first\n" },
				{ "RemoteFileConflict.Name", "ESteamResult::RemoteFileConflict" },
				{ "RemoteFileConflict.ToolTip", "External account (PSN, Facebook...) is already linked to some other account, must explicitly request to replace/delete the link first" },
				{ "RequirePasswordReEntry.Comment", "// parse failure, missing field, etc.\n" },
				{ "RequirePasswordReEntry.Name", "ESteamResult::RequirePasswordReEntry" },
				{ "RequirePasswordReEntry.ToolTip", "parse failure, missing field, etc." },
				{ "RestrictedDevice.Comment", "// The set of files submitted to the CEG server are not valid !\n" },
				{ "RestrictedDevice.Name", "ESteamResult::RestrictedDevice" },
				{ "RestrictedDevice.ToolTip", "The set of files submitted to the CEG server are not valid !" },
				{ "Revoked.Comment", "// Too much of a good thing\n" },
				{ "Revoked.Name", "ESteamResult::Revoked" },
				{ "Revoked.ToolTip", "Too much of a good thing" },
				{ "SameAsPreviousValue.Comment", "// The requested new password is not legal\n" },
				{ "SameAsPreviousValue.Name", "ESteamResult::SameAsPreviousValue" },
				{ "SameAsPreviousValue.ToolTip", "The requested new password is not legal" },
				{ "ServiceReadOnly.Name", "ESteamResult::ServiceReadOnly" },
				{ "ServiceUnavailable.Comment", "// steamID is invalid\n" },
				{ "ServiceUnavailable.Name", "ESteamResult::ServiceUnavailable" },
				{ "ServiceUnavailable.ToolTip", "steamID is invalid" },
				{ "ShoppingCartNotFound.Name", "ESteamResult::ShoppingCartNotFound" },
				{ "SmsCodeFailed.Comment", "// the time presented is out of range or tolerance\n" },
				{ "SmsCodeFailed.Name", "ESteamResult::SmsCodeFailed" },
				{ "SmsCodeFailed.ToolTip", "the time presented is out of range or tolerance" },
				{ "Suspended.Comment", "// You are already logged in elsewhere, you must wait\n" },
				{ "Suspended.Name", "ESteamResult::Suspended" },
				{ "Suspended.ToolTip", "You are already logged in elsewhere, you must wait" },
				{ "TimeNotSynced.Comment", "// the account does not have a mobile device associated with it\n" },
				{ "TimeNotSynced.Name", "ESteamResult::TimeNotSynced" },
				{ "TimeNotSynced.ToolTip", "the account does not have a mobile device associated with it" },
				{ "Timeout.Comment", "// access is denied\n" },
				{ "Timeout.Name", "ESteamResult::Timeout" },
				{ "Timeout.ToolTip", "access is denied" },
				{ "TooManyPending.Comment", "// user doesn't have enough wallet funds to complete the action\n" },
				{ "TooManyPending.Name", "ESteamResult::TooManyPending" },
				{ "TooManyPending.ToolTip", "user doesn't have enough wallet funds to complete the action" },
				{ "TryAnotherCM.Comment", "// A Version mismatch in content transmitted within the Steam protocol.\n" },
				{ "TryAnotherCM.Name", "ESteamResult::TryAnotherCM" },
				{ "TryAnotherCM.ToolTip", "A Version mismatch in content transmitted within the Steam protocol." },
				{ "TwoFactorActivationCodeMismatch.Comment", "// two factor code mismatch\n" },
				{ "TwoFactorActivationCodeMismatch.Name", "ESteamResult::TwoFactorActivationCodeMismatch" },
				{ "TwoFactorActivationCodeMismatch.ToolTip", "two factor code mismatch" },
				{ "TwoFactorCodeMismatch.Comment", "// login attempt failed, try to throttle response to possible attacker\n" },
				{ "TwoFactorCodeMismatch.Name", "ESteamResult::TwoFactorCodeMismatch" },
				{ "TwoFactorCodeMismatch.ToolTip", "login attempt failed, try to throttle response to possible attacker" },
				{ "UnexpectedError.Comment", "// the value entered is outside the acceptable range\n" },
				{ "UnexpectedError.Name", "ESteamResult::UnexpectedError" },
				{ "UnexpectedError.ToolTip", "the value entered is outside the acceptable range" },
				{ "ValueOutOfRange.Comment", "// The user cannot complete the action until they re-enter their password\n" },
				{ "ValueOutOfRange.Name", "ESteamResult::ValueOutOfRange" },
				{ "ValueOutOfRange.ToolTip", "The user cannot complete the action until they re-enter their password" },
				{ "WGNetworkSendExceeded.Comment", "// No site licenses found\n" },
				{ "WGNetworkSendExceeded.Name", "ESteamResult::WGNetworkSendExceeded" },
				{ "WGNetworkSendExceeded.ToolTip", "No site licenses found" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamResult",
				"ESteamResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamBeginAuthSessionResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamBeginAuthSessionResult"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamBeginAuthSessionResult>()
	{
		return ESteamBeginAuthSessionResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamBeginAuthSessionResult(ESteamBeginAuthSessionResult_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamBeginAuthSessionResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult_Hash() { return 4009436936U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamBeginAuthSessionResult"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamBeginAuthSessionResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamBeginAuthSessionResult::OK", (int64)ESteamBeginAuthSessionResult::OK },
				{ "ESteamBeginAuthSessionResult::InvalidTicket", (int64)ESteamBeginAuthSessionResult::InvalidTicket },
				{ "ESteamBeginAuthSessionResult::DuplicateRequest", (int64)ESteamBeginAuthSessionResult::DuplicateRequest },
				{ "ESteamBeginAuthSessionResult::InvalidVersion", (int64)ESteamBeginAuthSessionResult::InvalidVersion },
				{ "ESteamBeginAuthSessionResult::GameMismatch", (int64)ESteamBeginAuthSessionResult::GameMismatch },
				{ "ESteamBeginAuthSessionResult::ExpiredTicket", (int64)ESteamBeginAuthSessionResult::ExpiredTicket },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DuplicateRequest.Name", "ESteamBeginAuthSessionResult::DuplicateRequest" },
				{ "ExpiredTicket.Name", "ESteamBeginAuthSessionResult::ExpiredTicket" },
				{ "GameMismatch.Name", "ESteamBeginAuthSessionResult::GameMismatch" },
				{ "InvalidTicket.Name", "ESteamBeginAuthSessionResult::InvalidTicket" },
				{ "InvalidVersion.Name", "ESteamBeginAuthSessionResult::InvalidVersion" },
				{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
				{ "OK.Name", "ESteamBeginAuthSessionResult::OK" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamBeginAuthSessionResult",
				"ESteamBeginAuthSessionResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamUserHasLicenseForAppResult_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamUserHasLicenseForAppResult"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamUserHasLicenseForAppResult>()
	{
		return ESteamUserHasLicenseForAppResult_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamUserHasLicenseForAppResult(ESteamUserHasLicenseForAppResult_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamUserHasLicenseForAppResult"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult_Hash() { return 3228294960U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamUserHasLicenseForAppResult"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamUserHasLicenseForAppResult_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamUserHasLicenseForAppResult::HasLicense", (int64)ESteamUserHasLicenseForAppResult::HasLicense },
				{ "ESteamUserHasLicenseForAppResult::DoesNotHaveLicense", (int64)ESteamUserHasLicenseForAppResult::DoesNotHaveLicense },
				{ "ESteamUserHasLicenseForAppResult::NoAuth", (int64)ESteamUserHasLicenseForAppResult::NoAuth },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "DoesNotHaveLicense.Name", "ESteamUserHasLicenseForAppResult::DoesNotHaveLicense" },
				{ "HasLicense.Name", "ESteamUserHasLicenseForAppResult::HasLicense" },
				{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
				{ "NoAuth.Name", "ESteamUserHasLicenseForAppResult::NoAuth" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamUserHasLicenseForAppResult",
				"ESteamUserHasLicenseForAppResult",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamAuthSessionResponse_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamAuthSessionResponse"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamAuthSessionResponse>()
	{
		return ESteamAuthSessionResponse_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamAuthSessionResponse(ESteamAuthSessionResponse_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamAuthSessionResponse"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse_Hash() { return 730408397U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamAuthSessionResponse"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamAuthSessionResponse::OK", (int64)ESteamAuthSessionResponse::OK },
				{ "ESteamAuthSessionResponse::UserNotConnectedToSteam", (int64)ESteamAuthSessionResponse::UserNotConnectedToSteam },
				{ "ESteamAuthSessionResponse::NoLicenseOrExpired", (int64)ESteamAuthSessionResponse::NoLicenseOrExpired },
				{ "ESteamAuthSessionResponse::VACBanned", (int64)ESteamAuthSessionResponse::VACBanned },
				{ "ESteamAuthSessionResponse::LoggedInElseWhere", (int64)ESteamAuthSessionResponse::LoggedInElseWhere },
				{ "ESteamAuthSessionResponse::VACCheckTimedOut", (int64)ESteamAuthSessionResponse::VACCheckTimedOut },
				{ "ESteamAuthSessionResponse::AuthTicketCanceled", (int64)ESteamAuthSessionResponse::AuthTicketCanceled },
				{ "ESteamAuthSessionResponse::AuthTicketInvalidAlreadyUsed", (int64)ESteamAuthSessionResponse::AuthTicketInvalidAlreadyUsed },
				{ "ESteamAuthSessionResponse::AuthTicketInvalid", (int64)ESteamAuthSessionResponse::AuthTicketInvalid },
				{ "ESteamAuthSessionResponse::PublisherIssuedBan", (int64)ESteamAuthSessionResponse::PublisherIssuedBan },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AuthTicketCanceled.Name", "ESteamAuthSessionResponse::AuthTicketCanceled" },
				{ "AuthTicketInvalid.Name", "ESteamAuthSessionResponse::AuthTicketInvalid" },
				{ "AuthTicketInvalidAlreadyUsed.Name", "ESteamAuthSessionResponse::AuthTicketInvalidAlreadyUsed" },
				{ "BlueprintType", "true" },
				{ "LoggedInElseWhere.Name", "ESteamAuthSessionResponse::LoggedInElseWhere" },
				{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
				{ "NoLicenseOrExpired.Name", "ESteamAuthSessionResponse::NoLicenseOrExpired" },
				{ "OK.Name", "ESteamAuthSessionResponse::OK" },
				{ "PublisherIssuedBan.Name", "ESteamAuthSessionResponse::PublisherIssuedBan" },
				{ "UserNotConnectedToSteam.Name", "ESteamAuthSessionResponse::UserNotConnectedToSteam" },
				{ "VACBanned.Name", "ESteamAuthSessionResponse::VACBanned" },
				{ "VACCheckTimedOut.Name", "ESteamAuthSessionResponse::VACCheckTimedOut" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamAuthSessionResponse",
				"ESteamAuthSessionResponse",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamDenyReason_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamDenyReason, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamDenyReason"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamDenyReason>()
	{
		return ESteamDenyReason_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamDenyReason(ESteamDenyReason_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamDenyReason"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamDenyReason_Hash() { return 2672718118U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamDenyReason()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamDenyReason"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamDenyReason_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamDenyReason::Invalid", (int64)ESteamDenyReason::Invalid },
				{ "ESteamDenyReason::InvalidVersion", (int64)ESteamDenyReason::InvalidVersion },
				{ "ESteamDenyReason::Generic", (int64)ESteamDenyReason::Generic },
				{ "ESteamDenyReason::NotLoggedOn", (int64)ESteamDenyReason::NotLoggedOn },
				{ "ESteamDenyReason::NoLicense", (int64)ESteamDenyReason::NoLicense },
				{ "ESteamDenyReason::Cheater", (int64)ESteamDenyReason::Cheater },
				{ "ESteamDenyReason::LoggedInElseWhere", (int64)ESteamDenyReason::LoggedInElseWhere },
				{ "ESteamDenyReason::UnknownText", (int64)ESteamDenyReason::UnknownText },
				{ "ESteamDenyReason::IncompatibleAnticheat", (int64)ESteamDenyReason::IncompatibleAnticheat },
				{ "ESteamDenyReason::MemoryCorruption", (int64)ESteamDenyReason::MemoryCorruption },
				{ "ESteamDenyReason::IncompatibleSoftware", (int64)ESteamDenyReason::IncompatibleSoftware },
				{ "ESteamDenyReason::SteamConnectionLost", (int64)ESteamDenyReason::SteamConnectionLost },
				{ "ESteamDenyReason::SteamConnectionError", (int64)ESteamDenyReason::SteamConnectionError },
				{ "ESteamDenyReason::SteamResponseTimedOut", (int64)ESteamDenyReason::SteamResponseTimedOut },
				{ "ESteamDenyReason::SteamValidationStalled", (int64)ESteamDenyReason::SteamValidationStalled },
				{ "ESteamDenyReason::SteamOwnerLeftGuestUser", (int64)ESteamDenyReason::SteamOwnerLeftGuestUser },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Cheater.Name", "ESteamDenyReason::Cheater" },
				{ "Generic.Name", "ESteamDenyReason::Generic" },
				{ "IncompatibleAnticheat.Name", "ESteamDenyReason::IncompatibleAnticheat" },
				{ "IncompatibleSoftware.Name", "ESteamDenyReason::IncompatibleSoftware" },
				{ "Invalid.Name", "ESteamDenyReason::Invalid" },
				{ "InvalidVersion.Name", "ESteamDenyReason::InvalidVersion" },
				{ "LoggedInElseWhere.Name", "ESteamDenyReason::LoggedInElseWhere" },
				{ "MemoryCorruption.Name", "ESteamDenyReason::MemoryCorruption" },
				{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
				{ "NoLicense.Name", "ESteamDenyReason::NoLicense" },
				{ "NotLoggedOn.Name", "ESteamDenyReason::NotLoggedOn" },
				{ "SteamConnectionError.Name", "ESteamDenyReason::SteamConnectionError" },
				{ "SteamConnectionLost.Name", "ESteamDenyReason::SteamConnectionLost" },
				{ "SteamOwnerLeftGuestUser.Name", "ESteamDenyReason::SteamOwnerLeftGuestUser" },
				{ "SteamResponseTimedOut.Name", "ESteamDenyReason::SteamResponseTimedOut" },
				{ "SteamValidationStalled.Name", "ESteamDenyReason::SteamValidationStalled" },
				{ "UnknownText.Name", "ESteamDenyReason::UnknownText" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamDenyReason",
				"ESteamDenyReason",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EOnlineComparison_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_EOnlineComparison, Z_Construct_UPackage__Script_SteamCore(), TEXT("EOnlineComparison"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<EOnlineComparison>()
	{
		return EOnlineComparison_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EOnlineComparison(EOnlineComparison_StaticEnum, TEXT("/Script/SteamCore"), TEXT("EOnlineComparison"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_EOnlineComparison_Hash() { return 3337347108U; }
	UEnum* Z_Construct_UEnum_SteamCore_EOnlineComparison()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EOnlineComparison"), 0, Get_Z_Construct_UEnum_SteamCore_EOnlineComparison_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EOnlineComparison::Equals", (int64)EOnlineComparison::Equals },
				{ "EOnlineComparison::NotEquals", (int64)EOnlineComparison::NotEquals },
				{ "EOnlineComparison::GreaterThan", (int64)EOnlineComparison::GreaterThan },
				{ "EOnlineComparison::GreaterThanEquals", (int64)EOnlineComparison::GreaterThanEquals },
				{ "EOnlineComparison::LessThan", (int64)EOnlineComparison::LessThan },
				{ "EOnlineComparison::LessThanEquals", (int64)EOnlineComparison::LessThanEquals },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Equals.Name", "EOnlineComparison::Equals" },
				{ "GreaterThan.Name", "EOnlineComparison::GreaterThan" },
				{ "GreaterThanEquals.Name", "EOnlineComparison::GreaterThanEquals" },
				{ "LessThan.Name", "EOnlineComparison::LessThan" },
				{ "LessThanEquals.Name", "EOnlineComparison::LessThanEquals" },
				{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
				{ "NotEquals.Name", "EOnlineComparison::NotEquals" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"EOnlineComparison",
				"EOnlineComparison",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESteamMessageType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SteamCore_ESteamMessageType, Z_Construct_UPackage__Script_SteamCore(), TEXT("ESteamMessageType"));
		}
		return Singleton;
	}
	template<> STEAMCORE_API UEnum* StaticEnum<ESteamMessageType>()
	{
		return ESteamMessageType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESteamMessageType(ESteamMessageType_StaticEnum, TEXT("/Script/SteamCore"), TEXT("ESteamMessageType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SteamCore_ESteamMessageType_Hash() { return 2354123106U; }
	UEnum* Z_Construct_UEnum_SteamCore_ESteamMessageType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESteamMessageType"), 0, Get_Z_Construct_UEnum_SteamCore_ESteamMessageType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESteamMessageType::ENotification", (int64)ESteamMessageType::ENotification },
				{ "ESteamMessageType::EMessage", (int64)ESteamMessageType::EMessage },
				{ "ESteamMessageType::EWarning", (int64)ESteamMessageType::EWarning },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Global enums\n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
				{ "EMessage.Name", "ESteamMessageType::EMessage" },
				{ "ENotification.Name", "ESteamMessageType::ENotification" },
				{ "EWarning.Name", "ESteamMessageType::EWarning" },
				{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
				{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Global enums\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SteamCore,
				nullptr,
				"ESteamMessageType",
				"ESteamMessageType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FHostPingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FHostPingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHostPingData, Z_Construct_UPackage__Script_SteamCore(), TEXT("HostPingData"), sizeof(FHostPingData), Get_Z_Construct_UScriptStruct_FHostPingData_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FHostPingData>()
{
	return FHostPingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHostPingData(FHostPingData::StaticStruct, TEXT("/Script/SteamCore"), TEXT("HostPingData"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFHostPingData
{
	FScriptStruct_SteamCore_StaticRegisterNativesFHostPingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HostPingData")),new UScriptStruct::TCppStructOps<FHostPingData>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFHostPingData;
	struct Z_Construct_UScriptStruct_FHostPingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HostString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HostString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHostPingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHostPingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHostPingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHostPingData_Statics::NewProp_HostString_MetaData[] = {
		{ "Category", "Steam" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FHostPingData_Statics::NewProp_HostString = { "HostString", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHostPingData, HostString), METADATA_PARAMS(Z_Construct_UScriptStruct_FHostPingData_Statics::NewProp_HostString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHostPingData_Statics::NewProp_HostString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHostPingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHostPingData_Statics::NewProp_HostString,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHostPingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"HostPingData",
		sizeof(FHostPingData),
		alignof(FHostPingData),
		Z_Construct_UScriptStruct_FHostPingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHostPingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHostPingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHostPingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHostPingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHostPingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HostPingData"), sizeof(FHostPingData), Get_Z_Construct_UScriptStruct_FHostPingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHostPingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHostPingData_Hash() { return 4280555569U; }
class UScriptStruct* FRemoteStorageSubscribePublishedFileResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult, Z_Construct_UPackage__Script_SteamCore(), TEXT("RemoteStorageSubscribePublishedFileResult"), sizeof(FRemoteStorageSubscribePublishedFileResult), Get_Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FRemoteStorageSubscribePublishedFileResult>()
{
	return FRemoteStorageSubscribePublishedFileResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult(FRemoteStorageSubscribePublishedFileResult::StaticStruct, TEXT("/Script/SteamCore"), TEXT("RemoteStorageSubscribePublishedFileResult"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageSubscribePublishedFileResult
{
	FScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageSubscribePublishedFileResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RemoteStorageSubscribePublishedFileResult")),new UScriptStruct::TCppStructOps<FRemoteStorageSubscribePublishedFileResult>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFRemoteStorageSubscribePublishedFileResult;
	struct Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PublishedFileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Result;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteStorageSubscribePublishedFileResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_PublishedFileID_MetaData[] = {
		{ "Category", "UGC" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageSubscribePublishedFileResult, PublishedFileID), Z_Construct_UScriptStruct_FPublishedFileID, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_PublishedFileID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_PublishedFileID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "UGC" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRemoteStorageSubscribePublishedFileResult, Result), Z_Construct_UEnum_SteamCore_ESteamResult, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_Result_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_PublishedFileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_Result,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::NewProp_Result_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"RemoteStorageSubscribePublishedFileResult",
		sizeof(FRemoteStorageSubscribePublishedFileResult),
		alignof(FRemoteStorageSubscribePublishedFileResult),
		Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RemoteStorageSubscribePublishedFileResult"), sizeof(FRemoteStorageSubscribePublishedFileResult), Get_Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRemoteStorageSubscribePublishedFileResult_Hash() { return 1112822705U; }
class UScriptStruct* FPublishedFileID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FPublishedFileID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPublishedFileID, Z_Construct_UPackage__Script_SteamCore(), TEXT("PublishedFileID"), sizeof(FPublishedFileID), Get_Z_Construct_UScriptStruct_FPublishedFileID_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FPublishedFileID>()
{
	return FPublishedFileID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPublishedFileID(FPublishedFileID::StaticStruct, TEXT("/Script/SteamCore"), TEXT("PublishedFileID"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFPublishedFileID
{
	FScriptStruct_SteamCore_StaticRegisterNativesFPublishedFileID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PublishedFileID")),new UScriptStruct::TCppStructOps<FPublishedFileID>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFPublishedFileID;
	struct Z_Construct_UScriptStruct_FPublishedFileID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPublishedFileID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "SteamCore.SteamUtilities.BreakPublishedFileID" },
		{ "HasNativeMake", "SteamCore.SteamUtilities.MakePublishedFileID" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPublishedFileID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPublishedFileID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPublishedFileID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"PublishedFileID",
		sizeof(FPublishedFileID),
		alignof(FPublishedFileID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPublishedFileID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPublishedFileID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPublishedFileID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPublishedFileID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PublishedFileID"), sizeof(FPublishedFileID), Get_Z_Construct_UScriptStruct_FPublishedFileID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPublishedFileID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPublishedFileID_Hash() { return 3213536753U; }
class UScriptStruct* FValidateAuthTicketResponse::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FValidateAuthTicketResponse, Z_Construct_UPackage__Script_SteamCore(), TEXT("ValidateAuthTicketResponse"), sizeof(FValidateAuthTicketResponse), Get_Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FValidateAuthTicketResponse>()
{
	return FValidateAuthTicketResponse::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FValidateAuthTicketResponse(FValidateAuthTicketResponse::StaticStruct, TEXT("/Script/SteamCore"), TEXT("ValidateAuthTicketResponse"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFValidateAuthTicketResponse
{
	FScriptStruct_SteamCore_StaticRegisterNativesFValidateAuthTicketResponse()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ValidateAuthTicketResponse")),new UScriptStruct::TCppStructOps<FValidateAuthTicketResponse>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFValidateAuthTicketResponse;
	struct Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnerSteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OwnerSteamID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthSessionResponse_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AuthSessionResponse;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AuthSessionResponse_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SteamID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SteamID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FValidateAuthTicketResponse>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_OwnerSteamID_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_OwnerSteamID = { "OwnerSteamID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidateAuthTicketResponse, OwnerSteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_OwnerSteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_OwnerSteamID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse = { "AuthSessionResponse", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidateAuthTicketResponse, AuthSessionResponse), Z_Construct_UEnum_SteamCore_ESteamAuthSessionResponse, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_SteamID_MetaData[] = {
		{ "Category", "GameServer" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_SteamID = { "SteamID", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FValidateAuthTicketResponse, SteamID), Z_Construct_UScriptStruct_FSteamID, METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_SteamID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_SteamID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_OwnerSteamID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_AuthSessionResponse_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::NewProp_SteamID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"ValidateAuthTicketResponse",
		sizeof(FValidateAuthTicketResponse),
		alignof(FValidateAuthTicketResponse),
		Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FValidateAuthTicketResponse()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ValidateAuthTicketResponse"), sizeof(FValidateAuthTicketResponse), Get_Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FValidateAuthTicketResponse_Hash() { return 3637046623U; }
class UScriptStruct* FSteamTicketHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamTicketHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamTicketHandle, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamTicketHandle"), sizeof(FSteamTicketHandle), Get_Z_Construct_UScriptStruct_FSteamTicketHandle_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamTicketHandle>()
{
	return FSteamTicketHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamTicketHandle(FSteamTicketHandle::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamTicketHandle"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamTicketHandle
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamTicketHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamTicketHandle")),new UScriptStruct::TCppStructOps<FSteamTicketHandle>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamTicketHandle;
	struct Z_Construct_UScriptStruct_FSteamTicketHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamTicketHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamTicketHandle",
		sizeof(FSteamTicketHandle),
		alignof(FSteamTicketHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamTicketHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamTicketHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamTicketHandle"), sizeof(FSteamTicketHandle), Get_Z_Construct_UScriptStruct_FSteamTicketHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamTicketHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamTicketHandle_Hash() { return 118646199U; }
class UScriptStruct* FSteamInventoryUpdateHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamInventoryUpdateHandle"), sizeof(FSteamInventoryUpdateHandle), Get_Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamInventoryUpdateHandle>()
{
	return FSteamInventoryUpdateHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamInventoryUpdateHandle(FSteamInventoryUpdateHandle::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamInventoryUpdateHandle"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryUpdateHandle
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryUpdateHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamInventoryUpdateHandle")),new UScriptStruct::TCppStructOps<FSteamInventoryUpdateHandle>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamInventoryUpdateHandle;
	struct Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "SteamCore.SteamUtilities.BreakInventoryUpdateHandle" },
		{ "HasNativeMake", "SteamCore.SteamUtilities.MakeInventoryUpdateHandle" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamInventoryUpdateHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamInventoryUpdateHandle",
		sizeof(FSteamInventoryUpdateHandle),
		alignof(FSteamInventoryUpdateHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamInventoryUpdateHandle"), sizeof(FSteamInventoryUpdateHandle), Get_Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamInventoryUpdateHandle_Hash() { return 166381744U; }
class UScriptStruct* FSteamUGCHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamUGCHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamUGCHandle, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamUGCHandle"), sizeof(FSteamUGCHandle), Get_Z_Construct_UScriptStruct_FSteamUGCHandle_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamUGCHandle>()
{
	return FSteamUGCHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamUGCHandle(FSteamUGCHandle::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamUGCHandle"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamUGCHandle
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamUGCHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamUGCHandle")),new UScriptStruct::TCppStructOps<FSteamUGCHandle>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamUGCHandle;
	struct Z_Construct_UScriptStruct_FSteamUGCHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamUGCHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "SteamCore.SteamUtilities.BreakUGCHandle" },
		{ "HasNativeMake", "SteamCore.SteamUtilities.MakeUGCHandle" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamUGCHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamUGCHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamUGCHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamUGCHandle",
		sizeof(FSteamUGCHandle),
		alignof(FSteamUGCHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamUGCHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamUGCHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamUGCHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamUGCHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamUGCHandle"), sizeof(FSteamUGCHandle), Get_Z_Construct_UScriptStruct_FSteamUGCHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamUGCHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamUGCHandle_Hash() { return 892698176U; }
class UScriptStruct* FSteamGameID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamGameID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamGameID, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamGameID"), sizeof(FSteamGameID), Get_Z_Construct_UScriptStruct_FSteamGameID_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamGameID>()
{
	return FSteamGameID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamGameID(FSteamGameID::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamGameID"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamGameID
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamGameID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamGameID")),new UScriptStruct::TCppStructOps<FSteamGameID>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamGameID;
	struct Z_Construct_UScriptStruct_FSteamGameID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamGameID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HasNativeBreak", "SteamCore.SteamUtilities.BreakSteamGameID" },
		{ "HasNativeMake", "SteamCore.SteamUtilities.MakeSteamGameID" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamGameID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamGameID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamGameID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamGameID",
		sizeof(FSteamGameID),
		alignof(FSteamGameID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamGameID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamGameID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamGameID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamGameID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamGameID"), sizeof(FSteamGameID), Get_Z_Construct_UScriptStruct_FSteamGameID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamGameID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamGameID_Hash() { return 93490413U; }
class UScriptStruct* FSteamID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STEAMCORE_API uint32 Get_Z_Construct_UScriptStruct_FSteamID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamID, Z_Construct_UPackage__Script_SteamCore(), TEXT("SteamID"), sizeof(FSteamID), Get_Z_Construct_UScriptStruct_FSteamID_Hash());
	}
	return Singleton;
}
template<> STEAMCORE_API UScriptStruct* StaticStruct<FSteamID>()
{
	return FSteamID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamID(FSteamID::StaticStruct, TEXT("/Script/SteamCore"), TEXT("SteamID"), false, nullptr, nullptr);
static struct FScriptStruct_SteamCore_StaticRegisterNativesFSteamID
{
	FScriptStruct_SteamCore_StaticRegisterNativesFSteamID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamID")),new UScriptStruct::TCppStructOps<FSteamID>);
	}
} ScriptStruct_SteamCore_StaticRegisterNativesFSteamID;
	struct Z_Construct_UScriptStruct_FSteamID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n//\x09\x09Structs \n// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //\n" },
		{ "HasNativeBreak", "SteamCore.SteamUtilities.BreakSteamID" },
		{ "HasNativeMake", "SteamCore.SteamUtilities.MakeSteamID" },
		{ "ModuleRelativePath", "Public/SteamCore/SteamTypes.h" },
		{ "ToolTip", "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n              Structs\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SteamCore,
		nullptr,
		&NewStructOps,
		"SteamID",
		sizeof(FSteamID),
		alignof(FSteamID),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SteamCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamID"), sizeof(FSteamID), Get_Z_Construct_UScriptStruct_FSteamID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamID_Hash() { return 1703642762U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
