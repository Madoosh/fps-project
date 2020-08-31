/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamGameServer
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "GameServerTypes.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Enums
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Structs
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

USTRUCT(BlueprintType)
struct FGSPolicyResponse
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		bool bSecure;
public:
	FGSPolicyResponse() = default;
	FGSPolicyResponse(const GSPolicyResponse_t& data)
		: bSecure(data.m_bSecure > 0)
	{}
};

USTRUCT(BlueprintType)
struct FGSClientGroupStatus
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		FSteamID SteamIDUser;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		FSteamID SteamIDGroup;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		bool bMember;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		bool bOfficer;
public:
	FGSClientGroupStatus() = default;
	FGSClientGroupStatus(const GSClientGroupStatus_t& data)
		: SteamIDUser(data.m_SteamIDUser), SteamIDGroup(data.m_SteamIDGroup), bMember(data.m_bMember), bOfficer(data.m_bOfficer)
	{}
};

USTRUCT(BlueprintType)
struct FAssociateWithClanResult
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		ESteamResult Result;
public:
	FAssociateWithClanResult() = default;
	FAssociateWithClanResult(const AssociateWithClanResult_t& data)
		: Result(static_cast<ESteamResult>(data.m_eResult))
	{}
};

USTRUCT(BlueprintType)
struct FComputeNewPlayerCompatibilityResult
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		ESteamResult Result;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		int PlayersThatDontLikeCandidate;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		int PlayersThatCandidateDoesntLike;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		int ClanPlayersThatDontLikeCandidate;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		FSteamID SteamIDCandidate;
public:
	FComputeNewPlayerCompatibilityResult() = default;
	FComputeNewPlayerCompatibilityResult(const ComputeNewPlayerCompatibilityResult_t& data)
		: Result(static_cast<ESteamResult>(data.m_eResult)), PlayersThatDontLikeCandidate(data.m_cPlayersThatDontLikeCandidate), PlayersThatCandidateDoesntLike(data.m_cPlayersThatCandidateDoesntLike), ClanPlayersThatDontLikeCandidate(data.m_cClanPlayersThatDontLikeCandidate), SteamIDCandidate(data.m_SteamIDCandidate)
	{}
};

USTRUCT(BlueprintType)
struct FGSClientApprove
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		FSteamID SteamID;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		FSteamID OwnerSteamID;
public:
	FGSClientApprove() = default;
	FGSClientApprove(const GSClientApprove_t& data)
		: SteamID(data.m_SteamID), OwnerSteamID(data.m_OwnerSteamID)
	{}
};

USTRUCT(BlueprintType)
struct FGSClientDeny
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		FSteamID SteamID;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		ESteamDenyReason DenyReason;
	UPROPERTY(BlueprintReadWrite, Category = "GameServer")
		FString OptionalText;
public:
	FGSClientDeny() = default;
	FGSClientDeny(const GSClientDeny_t& data)
		: SteamID(data.m_SteamID), DenyReason(static_cast<ESteamDenyReason>(data.m_eDenyReason)), OptionalText(UTF8_TO_TCHAR(data.m_rgchOptionalText))
	{}
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnAssociateWithClan, const FAssociateWithClanResult&, data, bool, bWasSuccessful);
DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnComputeNewPlayerCompatibility, const FComputeNewPlayerCompatibilityResult&, data, bool, bWasSuccessful);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSPolicyResponse, const FGSPolicyResponse&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSClientGroupStatus, const FGSClientGroupStatus&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSValidateAuthTicketResponse, const FValidateAuthTicketResponse&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSClientApprove, const FGSClientApprove&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGSClientDeny, const FGSClientDeny&, data);