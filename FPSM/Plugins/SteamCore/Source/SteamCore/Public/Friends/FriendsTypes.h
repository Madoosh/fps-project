/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamFriends
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "FriendsTypes.generated.h"

class UTexture2D;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

UENUM(BlueprintType)
enum class ESteamActivateGameOverlayToWebPageMode : uint8
{
	Default = 0, Modal = 1
};

UENUM(BlueprintType)
enum class ESteamFriendRelationship : uint8
{
	None = 0, Blocked = 1, RequestRecipient = 2, Friend = 3, RequestInitiator = 4, Ignored = 5, IgnoredFriend = 6, Suggested_DEPRECATED = 7, Max = 8,
};

UENUM(BlueprintType)
enum class ESteamPersonaState : uint8
{
	Offline = 0, Online = 1, Busy = 2, Away = 3, Snooze = 4, LookingToTrade = 5, LookingToPlay = 6, Max
};

UENUM(BlueprintType, meta = (Bitflags))
enum class ESteamFriendFlags : uint8
{
	None = 0 UMETA(Hidden),Blocked,FriendshipRequested,Immediate,ClanMember,OnGameServer,RequestingFriendship,
	RequestingInfo,Ignored,IgnoredFriend,ChatMember,All
};

FORCEINLINE int32 operator*(ESteamFriendFlags flags)
{
	int32 m_FlagValue = 0;

	switch (flags)
	{
	case ESteamFriendFlags::None:
		m_FlagValue = EFriendFlags::k_EFriendFlagNone;
		break;
	case ESteamFriendFlags::Blocked:
		m_FlagValue = EFriendFlags::k_EFriendFlagBlocked;
		break;
	case ESteamFriendFlags::FriendshipRequested:
		m_FlagValue = EFriendFlags::k_EFriendFlagFriendshipRequested;
		break;
	case ESteamFriendFlags::Immediate:
		m_FlagValue = EFriendFlags::k_EFriendFlagImmediate;
		break;
	case ESteamFriendFlags::ClanMember:
		m_FlagValue = EFriendFlags::k_EFriendFlagClanMember;
		break;
	case ESteamFriendFlags::OnGameServer:
		m_FlagValue = EFriendFlags::k_EFriendFlagOnGameServer;
		break;
	case ESteamFriendFlags::RequestingFriendship:
		m_FlagValue = EFriendFlags::k_EFriendFlagRequestingFriendship;
		break;
	case ESteamFriendFlags::RequestingInfo:
		m_FlagValue = EFriendFlags::k_EFriendFlagRequestingInfo;
		break;
	case ESteamFriendFlags::Ignored:
		m_FlagValue = EFriendFlags::k_EFriendFlagIgnored;
		break;
	case ESteamFriendFlags::IgnoredFriend:
		m_FlagValue = EFriendFlags::k_EFriendFlagIgnoredFriend;
		break;
	case ESteamFriendFlags::ChatMember:
		m_FlagValue = EFriendFlags::k_EFriendFlagChatMember;
		break;
	case ESteamFriendFlags::All:
		m_FlagValue = EFriendFlags::k_EFriendFlagAll;
		break;
	}

	return m_FlagValue;
}

UENUM(BlueprintType, meta = (Bitflags))
enum class ESteamUserRestriction : uint8
{
	None = 0,
	Unknown = EUserRestriction::k_nUserRestrictionUnknown,
	AnyChat = EUserRestriction::k_nUserRestrictionAnyChat,
	VoiceChat = EUserRestriction::k_nUserRestrictionVoiceChat,
	GroupChat = EUserRestriction::k_nUserRestrictionGroupChat,
	Rating = EUserRestriction::k_nUserRestrictionRating,
	GameInvites = EUserRestriction::k_nUserRestrictionGameInvites,
	Trading = EUserRestriction::k_nUserRestrictionTrading,
};

UENUM(BlueprintType, meta = (Bitflags))
enum class ESteamPersonaChange : uint8
{
	Name = 0,Status,ComeOnline,GoneOffline,GamePlayed,GameServer,Avatar,JoinedSource,LeftSource,RelationshipChanged,
	NameFirstSet,FacebookInfo,Nickname,SteamLevel
};

UENUM(BlueprintType)
enum class ESteamOverlayToStoreFlag : uint8
{
	None = 0, AddToCart = 1, AddToCartAndShow = 2
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct STEAMCORE_API FSteamFriendsGroupID
{
	GENERATED_BODY()
public:
	FSteamFriendsGroupID()
		: Value(0) {}
	FSteamFriendsGroupID(int16 value)
		: Value(value) {}
public:
	operator int16() const { return Value; }
private:
	int16 Value;
};

USTRUCT(BlueprintType)
struct FAvatarImageLoaded
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		UTexture2D* Image;

	int m_iImage, m_iWide, m_iTall;
public:
	FAvatarImageLoaded() = default;
	FAvatarImageLoaded(const AvatarImageLoaded_t& data)
		: SteamID(data.m_steamID), m_iImage(data.m_iImage), m_iWide(data.m_iWide), m_iTall(data.m_iTall)
	{}
};

USTRUCT(BlueprintType)
struct FFriendRichPresenceUpdate
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamIDFriend;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		int32 AppID;
public:
	FFriendRichPresenceUpdate() = default;
	FFriendRichPresenceUpdate(const FriendRichPresenceUpdate_t& data)
		: SteamIDFriend(data.m_steamIDFriend), AppID(data.m_nAppID)
	{}
};

USTRUCT(BlueprintType)
struct FGameConnectedChatJoin
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamIDClanChat;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamIDUser;
public:
	FGameConnectedChatJoin() = default;
	FGameConnectedChatJoin(const GameConnectedChatJoin_t& data)
		: SteamIDClanChat(data.m_steamIDClanChat), SteamIDUser(data.m_steamIDUser)
	{}
};

USTRUCT(BlueprintType)
struct FGameConnectedChatLeave
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamIDClanChat;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamIDUser;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		bool bKicked; 
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		bool bDropped;
public:
	FGameConnectedChatLeave() = default;
	FGameConnectedChatLeave(const GameConnectedChatLeave_t& data)
		: SteamIDClanChat(data.m_steamIDClanChat), SteamIDUser(data.m_steamIDUser), bKicked(data.m_bKicked), bDropped(data.m_bDropped)
	{}
};

USTRUCT(BlueprintType)
struct FGameConnectedClanChatMsg
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamIDUser;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamIDClanChat;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		int32 MessageID;
public:
	FGameConnectedClanChatMsg() = default;
	FGameConnectedClanChatMsg(const GameConnectedClanChatMsg_t& data)
		: SteamIDUser(data.m_steamIDUser), SteamIDClanChat(data.m_steamIDClanChat), MessageID(data.m_iMessageID)
	{}
};

USTRUCT(BlueprintType)
struct FGameConnectedFriendChatMsg
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamIDUser;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		int MessageID;
public:
	FGameConnectedFriendChatMsg() = default;
	FGameConnectedFriendChatMsg(const GameConnectedFriendChatMsg_t& data)
		: SteamIDUser(data.m_steamIDUser), MessageID(data.m_iMessageID)
	{}
};

USTRUCT(BlueprintType)
struct FGameLobbyJoinRequested
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamIDLobby;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamIDFriend;
public:
	FGameLobbyJoinRequested() = default;
	FGameLobbyJoinRequested(const GameLobbyJoinRequested_t& data)
		: SteamIDLobby(data.m_steamIDLobby), SteamIDFriend(data.m_steamIDFriend)
	{}
};

USTRUCT(BlueprintType)
struct FGameOverlayActivated
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		bool bActive;
public:
	FGameOverlayActivated() = default;
	FGameOverlayActivated(const GameOverlayActivated_t& data)
		: bActive(data.m_bActive > 0)
	{}
};

USTRUCT(BlueprintType)
struct FGameRichPresenceJoinRequested
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamIDFriend;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FString Connect;
public:
	FGameRichPresenceJoinRequested() = default;
	FGameRichPresenceJoinRequested(const GameRichPresenceJoinRequested_t& data)
		: SteamIDFriend(data.m_steamIDFriend), Connect(UTF8_TO_TCHAR(data.m_rgchConnect))
	{}
};

USTRUCT(BlueprintType)
struct FGameServerChangeRequested
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FString Server;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FString Password;
public:
	FGameServerChangeRequested() = default;
	FGameServerChangeRequested(const GameServerChangeRequested_t& data)
		: Server(UTF8_TO_TCHAR(data.m_rgchServer)), Password(UTF8_TO_TCHAR(data.m_rgchPassword))
	{}
};

USTRUCT(BlueprintType)
struct FPersonaStateChange
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		TArray<ESteamPersonaChange> Flags;
public:
	FPersonaStateChange() = default;
	FPersonaStateChange(const PersonaStateChange_t& data) 
		: SteamID(data.m_ulSteamID)
	{
		for (int32 i = 0; i <= 31; i++)
		{ 
			if (data.m_nChangeFlags & 1 << i)
			{  
				Flags.Add(static_cast<ESteamPersonaChange>(i));
			}
		}
	}
};

USTRUCT(BlueprintType)
struct FSetPersonaNameResponse
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		bool bSuccess;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		bool bLocalSuccess;
public:
	FSetPersonaNameResponse() = default;
	FSetPersonaNameResponse(const SetPersonaNameResponse_t& data)
		: Result(static_cast<ESteamResult>(data.m_result)), bSuccess(data.m_bSuccess), bLocalSuccess(data.m_bLocalSuccess)
	{}
};

USTRUCT(BlueprintType)
struct FDownloadClanActivityCountsResult
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		bool bSuccess;
public:
	FDownloadClanActivityCountsResult() = default;
	FDownloadClanActivityCountsResult(const DownloadClanActivityCountsResult_t& data)
		: bSuccess(data.m_bSuccess)
	{}
};

USTRUCT(BlueprintType)
struct FClanOfficerListResponse
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamIDClan;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		int32 Officers;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		bool bSuccess;
public:
	FClanOfficerListResponse() = default;
	FClanOfficerListResponse(const ClanOfficerListResponse_t& data)
		: SteamIDClan(data.m_steamIDClan), Officers(data.m_cOfficers), bSuccess(data.m_bSuccess > 0)
	{}
};

USTRUCT(BlueprintType)
struct FJoinClanChatRoomCompletionResult
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamIDClanChat;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		ESteamChatRoomEnterResponse ChatRoomEnterResponse;
public:
	FJoinClanChatRoomCompletionResult() = default;
	FJoinClanChatRoomCompletionResult(const JoinClanChatRoomCompletionResult_t& data)
		: SteamIDClanChat(data.m_steamIDClanChat), ChatRoomEnterResponse(static_cast<ESteamChatRoomEnterResponse>(data.m_eChatRoomEnterResponse))
	{}
};

USTRUCT(BlueprintType)
struct FFriendsGetFollowerCount
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		int32 Count;
public:
	FFriendsGetFollowerCount() = default;
	FFriendsGetFollowerCount(const FriendsGetFollowerCount_t& data)
		: Result(static_cast<ESteamResult>(data.m_eResult)), SteamID(data.m_steamID), Count(data.m_nCount)
	{}
};

USTRUCT(BlueprintType)
struct FFriendsIsFollowing
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		FSteamID SteamID;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		bool bIsFollowing;
public:
	FFriendsIsFollowing() = default;
	FFriendsIsFollowing(const FriendsIsFollowing_t& data)
		: Result(static_cast<ESteamResult>(data.m_eResult)), SteamID(data.m_steamID), bIsFollowing(data.m_bIsFollowing)
	{}
};

USTRUCT(BlueprintType)
struct FFriendsEnumerateFollowingList
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		TArray<FSteamID> SteamIDs;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		int32 Results;
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere, Category = "Friends")
		int32 TotalResult;
public:
	FFriendsEnumerateFollowingList() = default;
	FFriendsEnumerateFollowingList(const FriendsEnumerateFollowingList_t& data)
		: Result(static_cast<ESteamResult>(data.m_eResult)), Results(data.m_nResultsReturned), TotalResult(data.m_nTotalResultCount)
	{
		for (int i = 0; i < data.m_nResultsReturned; i++)
		{
			SteamIDs.Add(data.m_rgSteamID[i]);
		}
	}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameOverlayActivated, const FGameOverlayActivated&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAvatarImageLoaded, const FAvatarImageLoaded&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameServerChangeRequested, const FGameServerChangeRequested&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameConnectedFriendChatMsg, const FGameConnectedFriendChatMsg&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameLobbyJoinRequested, const FGameLobbyJoinRequested&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameRichPresenceJoinRequested, const FGameRichPresenceJoinRequested&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPersonaStateChange, const FPersonaStateChange&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnClanOfficerListResponse, const FClanOfficerListResponse&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFriendRichPresenceUpdate, const FFriendRichPresenceUpdate&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameConnectedClanChatMsg, const FGameConnectedClanChatMsg&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameConnectedChatJoin, const FGameConnectedChatJoin&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGameConnectedChatLeave, const FGameConnectedChatLeave&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDownloadClanActivityCountsResult, const FDownloadClanActivityCountsResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoinClanChatRoomCompletionResult, const FJoinClanChatRoomCompletionResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetPersonaNameResponse, const FSetPersonaNameResponse&, data);

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnDownloadClanActivityCounts, const FDownloadClanActivityCountsResult&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestClanOfficerList, const FClanOfficerListResponse&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnJoinClanChatRoom, const FJoinClanChatRoomCompletionResult&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnGetFollowerCount, const FFriendsGetFollowerCount&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnRequestFriendRichPresence, const FFriendRichPresenceUpdate&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnIsFollowing, const FFriendsIsFollowing&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnEnumerateFollowingList, const FFriendsEnumerateFollowingList&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSetPersonaName, const FSetPersonaNameResponse&, data, bool, bWasSuccessful);

