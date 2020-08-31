/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once


#include "CoreMinimal.h"
#include "OnlineSubsystemTypes.h"
#include "OnlinesubsystemSteamCoreTypes.h"
 
/**
 * Steam specific implementation of the unique net id
 */
class FUniqueNetIdSteamCore : public FUniqueNetId
{
protected:
	/** Holds the net id for a player */
	uint64 UniqueNetId;
public:
	FUniqueNetIdSteamCore()
		: UniqueNetId(0)
	{}

	/**
	 * Copy Constructor
	 *
	 * @param Src the id to copy
	 */
	explicit FUniqueNetIdSteamCore(const FUniqueNetIdSteamCore& Src) :
		UniqueNetId(Src.UniqueNetId)
	{
	}

	/**
	 * Constructs this object with the specified net id
	 *
	 * @param InUniqueNetId the id to set ours to
	 */
	explicit FUniqueNetIdSteamCore(uint64 uniqueNetId) :
		UniqueNetId(uniqueNetId)
	{
	}

	/**
	 * Constructs this object with the steam id
	 *
	 * @param InUniqueNetId the id to set ours to
	 */
	explicit FUniqueNetIdSteamCore(CSteamID steamId) :
		UniqueNetId(steamId.ConvertToUint64())
	{
	}

	/**
	 * Constructs this object with the specified net id
	 *
	 * @param String textual representation of an id
	 */
	explicit FUniqueNetIdSteamCore(const FString& str) :
		UniqueNetId(FCString::Atoi64(*str))
	{
	}


	/**
	 * Constructs this object with the specified net id
	 *
	 * @param InUniqueNetId the id to set ours to (assumed to be FUniqueNetIdSteamCore in fact)
	 */
	explicit FUniqueNetIdSteamCore(const FUniqueNetId& uniqueNetId) :
		UniqueNetId(*(uint64*)uniqueNetId.GetBytes())
	{
	}

	virtual FName GetType() const override
	{
		return STEAMCORE_SUBSYSTEM;
	}

	/**
	 * Get the raw byte representation of this net id
	 * This data is platform dependent and shouldn't be manipulated directly
	 *
	 * @return byte array of size GetSize()
	 */
	virtual const uint8* GetBytes() const override
	{
		return (uint8*)&UniqueNetId;
	}

	/**
	 * Get the size of the id
	 *
	 * @return size in bytes of the id representation
	 */
	virtual int32 GetSize() const override
	{
		return sizeof(uint64);
	}

	/**
	 * Check the validity of the id
	 *
	 * @return true if this is a well formed ID, false otherwise
	 */
	virtual bool IsValid() const override
	{
		return UniqueNetId != 0 && CSteamID(UniqueNetId).IsValid();
	}

	/**
	 * Platform specific conversion to string representation of data
	 *
	 * @return data in string form
	 */
	virtual FString ToString() const override
	{
		return FString::Printf(TEXT("%llu"), UniqueNetId);
	}

	/**
	 * Get a human readable representation of the net id
	 * Shouldn't be used for anything other than logging/debugging
	 *
	 * @return id in string form
	 */
	virtual FString ToDebugString() const override
	{
		CSteamID SteamID(UniqueNetId);

		const FString UniqueNetIdStr = FString::Printf(TEXT("[0x%llX]"), UniqueNetId);
		if (SteamID.IsLobby())
		{
			return TEXT("Lobby") + OSS_UNIQUEID_REDACT(*this, UniqueNetIdStr);
		}
		else if (SteamID.BAnonGameServerAccount())
		{
			return TEXT("Server") + OSS_UNIQUEID_REDACT(*this, UniqueNetIdStr);
		}
		else if (SteamID.IsValid())
		{
			const FString NickName(SteamFriends() ? UTF8_TO_TCHAR(SteamFriends()->GetFriendPersonaName(UniqueNetId)) : TEXT("UNKNOWN"));
			return FString::Printf(TEXT("%s [0x%llX]"), *NickName, *OSS_UNIQUEID_REDACT(*this, UniqueNetIdStr));
		}
		else
		{
			return TEXT("INVALID") + OSS_UNIQUEID_REDACT(*this, UniqueNetIdStr);
		}
	}

	/** Needed for TMap::GetTypeHash() */
	friend uint32 GetTypeHash(const FUniqueNetIdSteamCore& A)
	{
		return GetTypeHash(A.UniqueNetId);
	}

	/** global static instance of invalid (zero) id */
	static const TSharedRef<const FUniqueNetId>& EmptyId()
	{
		static const TSharedRef<const FUniqueNetId> EmptyId(MakeShared<FUniqueNetIdSteamCore>());
		return EmptyId;
	}

	/** Convenience cast to CSteamID */
	operator CSteamID()
	{
		return UniqueNetId;
	}

	/** Convenience cast to CSteamID */
	operator const CSteamID() const
	{
		return UniqueNetId;
	}

	/** Convenience cast to CSteamID pointer */
	operator CSteamID*()
	{
		return (CSteamID*)&UniqueNetId;
	}

	/** Convenience cast to CSteamID pointer */
	operator const CSteamID*() const
	{
		return (const CSteamID*)&UniqueNetId;
	}

	friend FArchive& operator<<(FArchive& Ar, FUniqueNetIdSteamCore& UserId)
	{
		return Ar << UserId.UniqueNetId;
	}
};

