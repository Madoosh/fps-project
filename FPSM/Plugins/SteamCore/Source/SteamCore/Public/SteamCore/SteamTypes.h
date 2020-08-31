/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official SteamCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/Steam.h"
#include "OnlineSubsystemNames.h"
#include "OnlineSubsystemTypes.h"
#include "SteamTypes.generated.h"

DECLARE_LOG_CATEGORY_EXTERN(SteamCoreLog, Log, All);
#define LogDebug(format, ...) UE_LOG(SteamCoreLog, Log, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogVerbose(format, ...) UE_LOG(SteamCoreLog, Verbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogVeryVerbose(format, ...) UE_LOG(SteamCoreLog, VeryVerbose, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogError(format, ...) UE_LOG(SteamCoreLog, Error, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogFatal(format, ...) UE_LOG(SteamCoreLog, Fatal, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)
#define LogWarning(format, ...) UE_LOG(SteamCoreLog, Warning, TEXT("[%s] " format), *FString(__FUNCTION__), ##__VA_ARGS__)

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Global enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamMessageType : uint8
{
	ENotification = 0,
	EMessage,
	EWarning
};

UENUM(BlueprintType)
enum class EOnlineComparison : uint8
{
	Equals = 0, NotEquals, GreaterThan, GreaterThanEquals, LessThan, LessThanEquals
};

UENUM(BlueprintType)
enum class ESteamDenyReason : uint8
{
	Invalid = 0, InvalidVersion = 1, Generic = 2, NotLoggedOn = 3, NoLicense = 4, Cheater = 5, LoggedInElseWhere = 6, UnknownText = 7,
	IncompatibleAnticheat = 8, MemoryCorruption = 9, IncompatibleSoftware = 10, SteamConnectionLost = 11, SteamConnectionError = 12, SteamResponseTimedOut = 13, SteamValidationStalled = 14, SteamOwnerLeftGuestUser = 15
};

UENUM(BlueprintType)
enum class ESteamAuthSessionResponse : uint8
{
	OK = 0, UserNotConnectedToSteam = 1, NoLicenseOrExpired = 2, VACBanned = 3, LoggedInElseWhere = 4, VACCheckTimedOut = 5, AuthTicketCanceled = 6, AuthTicketInvalidAlreadyUsed = 7,
	AuthTicketInvalid = 8, PublisherIssuedBan = 9
};

UENUM(BlueprintType)
enum class ESteamUserHasLicenseForAppResult : uint8
{
	HasLicense = 0, DoesNotHaveLicense = 1, NoAuth = 2
};

UENUM(BlueprintType)
enum class ESteamBeginAuthSessionResult : uint8
{
	OK = 0, InvalidTicket = 1, DuplicateRequest = 2, InvalidVersion = 3, GameMismatch = 4, ExpiredTicket = 5
};

UENUM(BlueprintType)
enum class ESteamResult : uint8
{
	None = 0,
	OK = 1,							// success
	Fail = 2,							// generic failure 
	NoConnection = 3,					// no/failed network connection
	NoConnectionRetry = 4,				// OBSOLETE - removed
	InvalidPassword = 5,				// password/ticket is invalid
	LoggedInElsewhere = 6,				// same user logged in elsewhere
	InvalidProtocolVer = 7,			// protocol version is incorrect
	InvalidParam = 8,					// a parameter is incorrect
	FileNotFound = 9,					// file was not found
	Busy = 10,							// called method busy - action not taken
	InvalidState = 11,					// called object was in an invalid state
	InvalidName = 12,					// name is invalid
	InvalidEmail = 13,					// email is invalid
	DuplicateName = 14,				// name is not unique
	AccessDenied = 15,					// access is denied
	Timeout = 16,						// operation timed out
	Banned = 17,						// VAC2 banned
	AccountNotFound = 18,				// account not found
	InvalidSteamID = 19,				// steamID is invalid
	ServiceUnavailable = 20,			// The requested service is currently unavailable
	NotLoggedOn = 21,					// The user is not logged on
	Pending = 22,						// Request is pending (may be in process, or waiting on third party)
	EncryptionFailure = 23,			// Encryption or Decryption failed
	InsufficientPrivilege = 24,		// Insufficient privilege
	LimitExceeded = 25,				// Too much of a good thing
	Revoked = 26,						// Access has been revoked (used for revoked guest passes)
	Expired = 27,						// License/Guest pass the user is trying to access is expired
	AlreadyRedeemed = 28,				// Guest pass has already been redeemed by account, cannot be acked again
	DuplicateRequest = 29,				// The request is a duplicate and the action has already occurred in the past, ignored this time
	AlreadyOwned = 30,					// All the games in this guest pass redemption request are already owned by the user
	IPNotFound = 31,					// IP address not found
	PersistFailed = 32,				// failed to write change to the data store
	LockingFailed = 33,				// failed to acquire access lock for this operation
	LogonSessionReplaced = 34,
	ConnectFailed = 35,
	HandshakeFailed = 36,
	IOFailure = 37,
	RemoteDisconnect = 38,
	ShoppingCartNotFound = 39,			// failed to find the shopping cart requested
	Blocked = 40,						// a user didn't allow it
	Ignored = 41,						// target is ignoring sender
	NoMatch = 42,						// nothing matching the request found
	AccountDisabled = 43,
	ServiceReadOnly = 44,				// this service is not accepting content changes right now
	AccountNotFeatured = 45,			// account doesn't have value, so this feature isn't available
	AdministratorOK = 46,				// allowed to take this action, but only because requester is admin
	ContentVersion = 47,				// A Version mismatch in content transmitted within the Steam protocol.
	TryAnotherCM = 48,					// The current CM can't service the user making a request, user should try another.
	PasswordRequiredToKickSession = 49,// You are already logged in elsewhere, this cached credential login has failed.
	AlreadyLoggedInElsewhere = 50,		// You are already logged in elsewhere, you must wait
	Suspended = 51,					// Long running operation (content download) suspended/paused
	Cancelled = 52,					// Operation canceled (typically by user: content download)
	DataCorruption = 53,				// Operation canceled because data is ill formed or unrecoverable
	DiskFull = 54,						// Operation canceled - not enough disk space.
	RemoteCallFailed = 55,				// an remote call or IPC call failed
	PasswordUnset = 56,				// Password could not be verified as it's unset server side
	ExternalAccountUnlinked = 57,		// External account (PSN, Facebook...) is not linked to a Steam account
	PSNTicketInvalid = 58,				// PSN ticket was invalid
	ExternalAccountAlreadyLinked = 59,	// External account (PSN, Facebook...) is already linked to some other account, must explicitly request to replace/delete the link first
	RemoteFileConflict = 60,			// The sync cannot resume due to a conflict between the local and remote files
	IllegalPassword = 61,				// The requested new password is not legal
	SameAsPreviousValue = 62,			// new value is the same as the old one ( secret question and answer )
	AccountLogonDenied = 63,			// account login denied due to 2nd factor authentication failure
	CannotUseOldPassword = 64,			// The requested new password is not legal
	InvalidLoginAuthCode = 65,			// account login denied due to auth code invalid
	AccountLogonDeniedNoMail = 66,		// account login denied due to 2nd factor auth failure - and no mail has been sent
	HardwareNotCapableOfIPT = 67,		// 
	IPTInitError = 68,					// 
	ParentalControlRestricted = 69,	// operation failed due to parental control restrictions for current user
	FacebookQueryError = 70,			// Facebook query returned an error
	ExpiredLoginAuthCode = 71,			// account login denied due to auth code expired
	IPLoginRestrictionFailed = 72,
	AccountLockedDown = 73,
	AccountLogonDeniedVerifiedEmailRequired = 74,
	NoMatchingURL = 75,
	BadResponse = 76,					// parse failure, missing field, etc.
	RequirePasswordReEntry = 77,		// The user cannot complete the action until they re-enter their password
	ValueOutOfRange = 78,				// the value entered is outside the acceptable range
	UnexpectedError = 79,				// something happened that we didn't expect to ever happen
	Disabled = 80,						// The requested service has been configured to be unavailable
	InvalidCEGSubmission = 81,			// The set of files submitted to the CEG server are not valid !
	RestrictedDevice = 82,				// The device being used is not allowed to perform this action
	RegionLocked = 83,					// The action could not be complete because it is region restricted
	RateLimitExceeded = 84,			// Temporary rate limit exceeded, try again later, different from LimitExceeded which may be permanent
	AccountLoginDeniedNeedTwoFactor = 85,	// Need two-factor code to login
	ItemDeleted = 86,					// The thing we're trying to access has been deleted
	AccountLoginDeniedThrottle = 87,	// login attempt failed, try to throttle response to possible attacker
	TwoFactorCodeMismatch = 88,		// two factor code mismatch
	TwoFactorActivationCodeMismatch = 89,	// activation code for two-factor didn't match
	AccountAssociatedToMultiplePartners = 90,	// account has been associated with multiple partners
	NotModified = 91,					// data not modified
	NoMobileDevice = 92,				// the account does not have a mobile device associated with it
	TimeNotSynced = 93,					// the time presented is out of range or tolerance
	SmsCodeFailed = 94,					// SMS code failure (no match, none pending, etc.)
	AccountLimitExceeded = 95,			// Too many accounts access this resource
	AccountActivityLimitExceeded = 96,	// Too many changes to this account
	PhoneActivityLimitExceeded = 97,	// Too many changes to this phone
	RefundToWallet = 98,				// Cannot refund to payment method, must use wallet
	EmailSendFailure = 99,				// Cannot send an email
	NotSettled = 100,					// Can't perform operation till payment has settled
	NeedCaptcha = 101,					// Needs to provide a valid captcha
	GSLTDenied = 102,					// a game server login token owned by this token's owner has been banned
	GSOwnerDenied = 103,				// game server owner is denied for other reason (account lock, community ban, vac ban, missing phone)
	InvalidItemType = 104,				// the type of thing we were requested to act on is invalid
	IPBanned = 105,						// the ip address has been banned from taking this action
	GSLTExpired = 106,					// this token has expired from disuse; can be reset for use
	InsufficientFunds = 107,			// user doesn't have enough wallet funds to complete the action
	TooManyPending = 108,				// There are too many of this thing pending already
	NoSiteLicensesFound = 109,			// No site licenses found
	WGNetworkSendExceeded = 110,		// the WG couldn't send a response because we exceeded max network send size
	AccountNotFriends = 111,			// the user is not mutually friends
	LimitedUserAccount = 112,			// the user is limited
};

UENUM(BlueprintType)
enum class ESteamChatRoomEnterResponse : uint8
{
	None = 0, Success = 1, DoesntExist = 2, NotAllowed = 3, Full = 4, Error = 5, Banned = 6, Limited = 7,ClanDisabled = 8,
	CommunityBan = 9, MemberBlockedYou = 10, YouBlockedMember = 11, RatelimitExceeded = 15,
};

UENUM(BlueprintType)
enum class ESteamChatEntryType : uint8
{
	Invalid = 0, ChatMsg = 1,Typing = 2, InviteGame = 3, Emote = 4,	LeftConversation = 6, Entered = 7,
	WasKicked = 8, WasBanned = 9, Disconnected = 10, HistoricalChat = 11, LinkBlocked = 14,
};

UENUM(BlueprintType)
enum class ESteamAccountType : uint8
{
	Invalid = 0, Individual = 1, Multiseat = 2, GameServer = 3, AnonGameServer = 4, Pending = 5, ContentServer = 6,
	Clan = 7, Chat = 8, ConsoleUser = 9, AnonUser = 10, Max
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs 
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USTRUCT(BlueprintType, meta = (HasNativeMake = "SteamCore.SteamUtilities.MakeSteamID", HasNativeBreak = "SteamCore.SteamUtilities.BreakSteamID"))
struct STEAMCORE_API FSteamID
{
	GENERATED_BODY()
public:
	FSteamID()	
		: Value(0) {}
	FSteamID(uint64 value)
		: Value(value)	{}
	FSteamID(const CSteamID* data)
		: Value(data->ConvertToUint64()) {}
	FSteamID(const CSteamID& data)
		: Value(data.ConvertToUint64()) {}
public:
	operator uint64() const { return Value; }
	operator uint64() { return Value; }
	operator CSteamID() const { return CSteamID(Value); }
	void operator=(const CSteamID& data) { Value = data.ConvertToUint64(); }
	bool operator==(const FSteamID& data) { return data == Value; }
	bool operator!=(const FSteamID& data) { return data != Value; }
public:
	uint64 GetValue() const { return Value; }
	bool IsValid() const { return CSteamID(Value).IsValid(); }
private:
	uint64 Value;
};

USTRUCT(BlueprintType, meta = (HasNativeMake = "SteamCore.SteamUtilities.MakeSteamGameID", HasNativeBreak = "SteamCore.SteamUtilities.BreakSteamGameID"))
struct STEAMCORE_API FSteamGameID
{
	GENERATED_BODY()
public:
	FSteamGameID()
		: Value(0)
	{}
	FSteamGameID(uint64 value)
		: Value(value)
	{}
	FSteamGameID(const CGameID& data)
		: Value(data.ToUint64())
	{}
public:
	operator uint64() const { return Value;	}
	operator uint64() { return Value; }
	operator CGameID() const { return CGameID(Value); }
	void operator=(const CGameID& data)	{ Value = data.ToUint64(); }
	bool operator==(const CGameID& data) { return data.ToUint64() == Value; }
public:
	uint64 GetValue() const { return Value; }
	bool IsValid() const { return CGameID(Value).IsValid(); }
private:
	uint64 Value;
};

USTRUCT(BlueprintType, meta = (HasNativeMake = "SteamCore.SteamUtilities.MakeUGCHandle", HasNativeBreak = "SteamCore.SteamUtilities.BreakUGCHandle"))
struct STEAMCORE_API FSteamUGCHandle
{
	GENERATED_BODY()
public:
	FSteamUGCHandle()
		: Value(0) {}
	FSteamUGCHandle(uint64 value)
		: Value(value) {}
public:
	operator uint64() const { return Value; }
public:
	bool IsValid() const { return Value != k_UGCHandleInvalid; }
private:
	uint64 Value;
};

USTRUCT(BlueprintType, meta = (HasNativeMake = "SteamCore.SteamUtilities.MakeInventoryUpdateHandle", HasNativeBreak = "SteamCore.SteamUtilities.BreakInventoryUpdateHandle"))
struct STEAMCORE_API FSteamInventoryUpdateHandle
{
	GENERATED_BODY()
public:
	FSteamInventoryUpdateHandle()
		: Value(0) {}
	FSteamInventoryUpdateHandle(SteamInventoryUpdateHandle_t value)
		: Value(value) {}
public:
	operator uint64() const { return Value; }
public:
	bool IsValid() const { return Value != k_SteamInventoryUpdateHandleInvalid; }
private:
	uint64 Value;
};

USTRUCT(BlueprintType)
struct STEAMCORE_API FSteamTicketHandle
{
	GENERATED_BODY()

public:
	FSteamTicketHandle()
		: Value(0) {}
	FSteamTicketHandle(uint32 value)
		: Value(value) {}
public:
	operator uint32() const { return Value; }
public:
	bool IsValid() const {return Value != k_HAuthTicketInvalid; }
private:
	uint32 Value;
};

USTRUCT(BlueprintType)
struct FValidateAuthTicketResponse
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		FSteamID SteamID;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		ESteamAuthSessionResponse AuthSessionResponse;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		FSteamID OwnerSteamID;
public:
	FValidateAuthTicketResponse() = default;
	FValidateAuthTicketResponse(const ValidateAuthTicketResponse_t& data)
		: SteamID(data.m_SteamID), AuthSessionResponse(static_cast<ESteamAuthSessionResponse>(data.m_eAuthSessionResponse)), OwnerSteamID(data.m_OwnerSteamID)
	{}
};

USTRUCT(BlueprintType, meta = (HasNativeMake = "SteamCore.SteamUtilities.MakePublishedFileID", HasNativeBreak = "SteamCore.SteamUtilities.BreakPublishedFileID"))
struct FPublishedFileID
{
	GENERATED_BODY()
public:
	FPublishedFileID() 
		: Value(0) {}
	FPublishedFileID(uint64 val) 
		: Value(val) {}
public:
	operator uint64() const { return Value; }
	uint64 GetValue() const { return Value; }
	bool operator==(const FPublishedFileID& data) { return data.GetValue() == Value; }
	bool operator!=(const FPublishedFileID& data) { return data.GetValue() != Value; }
private:
	uint64 Value;
};

USTRUCT(BlueprintType)
struct FRemoteStorageSubscribePublishedFileResult
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "UGC")
		ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category = "UGC")
		FPublishedFileID PublishedFileID;
public:
	FRemoteStorageSubscribePublishedFileResult() = default;
	FRemoteStorageSubscribePublishedFileResult(const RemoteStorageSubscribePublishedFileResult_t& data)
		: Result(static_cast<ESteamResult>(data.m_eResult)), PublishedFileID(data.m_nPublishedFileId)
	{}
};

USTRUCT(BlueprintType)
struct FHostPingData
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "Steam")
		FString HostString;
public:
	FHostPingData() {}
	FHostPingData(FString string) 
		: HostString(string) {}
public:
	operator FString() const { return HostString; }
};