/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official SteamCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SteamTypes.h"
#include "SteamCoreAsync.h"
#include "SteamUtilities.generated.h"

DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnSteamMessage, ESteamMessageType, type, const FString&, message);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Steam Utilities Class
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

template <typename TEnum>
static FORCEINLINE FString GetSteamCoreEnumAsString(const FString& name, TEnum val)
{
	const UEnum* EnumPtr = FindObject<UEnum>(ANY_PACKAGE, *name, true);
	if (!EnumPtr)
		return "";

	return EnumPtr->GetNameStringByValue((int64)val);
}

UENUM(BlueprintType)
enum class ESteamCoreValid : uint8
{
	Valid,NotValid
};

UENUM(BlueprintType)
enum class ESteamCoreIdentical : uint8
{
	Identical,NotIdentical
};

UCLASS(abstract)
class STEAMCORE_API USteamUtilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Native Make Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamID MakeSteamID(FString value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamGameID MakeSteamGameID(FString value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FPublishedFileID MakePublishedFileID(FString value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamUGCHandle MakeUGCHandle(FString value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamInventoryUpdateHandle MakeInventoryUpdateHandle(FString value);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeMakeFunc))
		static FSteamTicketHandle MakeTicketHandle(FString value);
		

	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Native Break Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
		static FString BreakSteamID(FSteamID steamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
		static FString BreakSteamGameID(FSteamGameID steamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
		static FString BreakPublishedFileID(FPublishedFileID fileID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
		static FString BreakUGCHandle(FSteamUGCHandle handle);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
		static FString BreakInventoryUpdateHandle(FSteamInventoryUpdateHandle handle);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (NativeBreakFunc))
		static FString BreakTicketHandle(FSteamTicketHandle handle);
	
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Is Valid
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
		static bool IsValid(FSteamID steamID);
	
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "result"), Category = "SteamCore|Utilities")
		static void IsSteamIDValid_Exec(FSteamID steamID, ESteamCoreValid& result) { result = steamID.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
		static bool IsGameIDValid(FSteamGameID gameID) { return gameID.IsValid(); }
	 
	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "result"), Category = "SteamCore|Utilities")
		static void IsGameIDValid_Exec(FSteamGameID gameID, ESteamCoreValid& result) { result = gameID.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }

	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
		static bool IsUGCHandleValid(FSteamUGCHandle handle) { return handle.IsValid(); }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "result"), Category = "SteamCore|Utilities")
		static void IsUGCHandleValid_Exec(FSteamUGCHandle handle, ESteamCoreValid& result) { result = handle.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
		static bool IsSteamTicketHandleValid(FSteamTicketHandle handle) { return handle.IsValid(); }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "result"), Category = "SteamCore|Utilities")
		static void IsSteamTicketHandleValid_Exec(FSteamTicketHandle handle, ESteamCoreValid& result) { result = handle.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (DisplayName = "Is Valid"), Category = "SteamCore|Utilities")
		static bool IsSteamInventoryUpdateHandleValid(FSteamInventoryUpdateHandle handle) { return handle.IsValid(); }

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Is Valid (Exec)", ExpandEnumAsExecs = "result"), Category = "SteamCore|Utilities")
		static void IsSteamInventoryUpdateHandleValid_Exec(FSteamInventoryUpdateHandle handle, ESteamCoreValid& result) { result = handle.IsValid() ? ESteamCoreValid::Valid : ESteamCoreValid::NotValid; }
		
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "==", Keywords = "equal == identical"))
		static bool Equal(FSteamID a, FSteamID b);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (Keywords = "equal == identical", ExpandEnumAsExecs = "result"))
		static void Equal_Exec(FSteamID a, FSteamID b, ESteamCoreIdentical& result) { result = a == b ? ESteamCoreIdentical::Identical : ESteamCoreIdentical::NotIdentical; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "!=", Keywords = "not equal != not identical"))
		static bool NotEqual(FSteamID a, FSteamID b);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "==", Keywords = "equal == identical"))
		static bool PublishedFileID_Equals(FPublishedFileID a, FPublishedFileID b);

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (Keywords = "equal == identical", ExpandEnumAsExecs = "result"))
		static void PublishedFileID_Equals_Exec(FPublishedFileID a, FPublishedFileID b, ESteamCoreIdentical& result) { result = a == b ? ESteamCoreIdentical::Identical : ESteamCoreIdentical::NotIdentical; }

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities", meta = (CompactNodeTitle = "!=", Keywords = "not equal != not identical"))
		static bool PublishedFileID_NotEquals(FPublishedFileID a, FPublishedFileID b);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
		static ESteamAccountType GetAccountType(FSteamID steamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
		static bool IsLobby(FSteamID steamID);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities")
		static bool IsSteamAvailable();

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities", meta = (WorldContext="WorldContextObject"))
		static UServerFilter* ConstructServerFilter(UObject* WorldContextObject);

	/**
	 * Returns if this application is set up to use the Steam P2P Relay Network
	 * for communication.
	 *
	 * Uses OnlineSubsystemSteam.bAllowP2PPacketRelay
	 *
	 * @return true if relays are enabled for P2P connections.
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities|Ping")
		static bool IsUsingP2PRelays();

	/**
	 * Returns the P2P relay ping information for the current machine. This information can be
	 * serialized over the network and used to calculate the ping data between a client and a host.
	 *
	 * @return relay information blob stored as a string for relaying over the network.
	 *         If an error occurred, the return is an empty string.
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities|Ping")
		static FHostPingData GetHostPingData();

	/**
	 * Calculates the ping of this client using the given host's ping data obtained from GetHostPingData.
	 *
	 * @param HostPingStr The relay information blob we got from the host. This information
	 *                    should be directly serialized over the network and not tampered with.
	 *
	 * @return The ping value to the given host if it can be calculated, otherwise -1 on error.
	 */
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities|Ping")
		static int32 GetPingFromHostData(const FHostPingData& data);

	/**
	* An informative member that allows us to check if we are recalculating our ping
	* information over the Valve network. Data is additively modified during recalculation
	* such that we do not need to block on this function returning false before using
	* ping data.
	*
	* @return true if we're recalculating our ping within the Valve relay network.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Utilities|Ping")
		static bool IsRecalculatingPing();

	UFUNCTION(BlueprintCallable, Category = "SteamCore|Utilities")
		static void ListenForSteamMessages(const FOnSteamMessage& callback);

	static void InvokeSteamMessage(ESteamMessageType type, const FString& message);
public:
	static TArray<FOnSteamMessage> s_SteamMessageListeners;
};