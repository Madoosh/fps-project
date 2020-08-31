/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmaking
*/

#pragma once

#include "MatchmakingTypes.h"
#include "SteamCore/SteamCoreAsync.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "Public/OnlineSessionSettings.h"
#include "Interfaces/OnlineSessionInterface.h"
#include "OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
#include "MatchmakingAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestLobbyListAsyncDelegate, const FLobbyMatchList&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCreateLobbyAsyncDelegate, const FCreateLobbyData&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoinLobbyAsyncDelegate, const FJoinLobbyData&, data);
DECLARE_MULTICAST_DELEGATE_TwoParams(FOnCreateSessionComplete, FName, bool);
typedef FOnCreateSessionComplete::FDelegate FOnCreateSessionCompleteDelegate;

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingAsyncActionCreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreMatchmakingAsyncActionCreateLobby : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnCreateLobbyAsyncDelegate OnSuccess;
public:
	/**
	* Create a new matchmaking lobby.
	*
	* @param	lobbyType		The type and visibility of this lobby. This can be changed later via SetLobbyType.
	* @param	maxMembers			The maximum number of players that can join this lobby. This can not be above 250.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Create Lobby"), Category = "SteamCore|Matchmaking|Async")
		static USteamCoreMatchmakingAsyncActionCreateLobby* CreateLobbyAsync(UObject* WorldContextObject, ESteamLobbyType lobbyType, int32 maxMembers);
private:
	UFUNCTION()
		void HandleCallback(const FCreateLobbyData& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingAsyncActionRequestLobbyList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreMatchmakingAsyncActionRequestLobbyList : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnRequestLobbyListAsyncDelegate OnSuccess;
public:
	/**
	* Get a filtered list of relevant lobbies.
	* There can only be one active lobby search at a time. The old request will be canceled if a new one is started. Depending on the users connection to the Steam back-end, this call can take from 300ms to 5 seconds to complete, and has a timeout of 20 seconds.
	* To filter the results you MUST call the AddRequestLobbyList* functions before calling this. The filters are cleared on each call to this function.
	* If AddRequestLobbyListDistanceFilter is not called, k_ELobbyDistanceFilterDefault will be used, which will only find matches in the same or nearby regions.
	* This will only return lobbies that are not full, and only lobbies that are k_ELobbyTypePublic or k_ELobbyTypeInvisible, and are set to joinable with SetLobbyJoinable.
	*
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Request Lobby List"), Category = "SteamCore|Matchmaking|Async")
		static USteamCoreMatchmakingAsyncActionRequestLobbyList* RequestLobbyListAsync(UObject* WorldContextObject);
private:
	UFUNCTION()
		void HandleCallback(const FLobbyMatchList& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingAsyncActionJoinLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreMatchmakingAsyncActionJoinLobby : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnJoinLobbyAsyncDelegate OnSuccess;
public:
	/**
	* Joins an existing lobby.
	* The lobby Steam ID can be obtained either from a search with RequestLobbyList, joining on a friend, or from an invite.
	*
	* @param	steamIDLobby	The Steam ID of the lobby to join.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Join Lobby"), Category = "SteamCore|Matchmaking|Async")
		static USteamCoreMatchmakingAsyncActionJoinLobby* JoinLobbyAsync(UObject* WorldContextObject, FSteamID steamIDLobby);
private:
	UFUNCTION()
		void HandleCallback(const FJoinLobbyData& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreCreateSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreCreateSession : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FEmptyOnlineDelegate OnSuccess;
public:
	USteamCoreCreateSession();
	/**
	* Creates an online session
	* 
	* Automatically detects if we're running a dedicated or listen server
	*
	* Listen servers will create a Lobby Session, use "FindSteamCoreSession" to find Listen Servers
	*
	*    @param sessionName				Name of our session
	*    @param numPublicConnections	Number of public connections
	*    @param PublicConnections		Number of private connections
	*    @param bUsesPresence			Create a lobby for the session (disabled for dedicated servers)
	*    @param bUseLAN					Used for LAN server
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "SteamCore|Matchmaking|Async")
		static USteamCoreCreateSession* CreateSteamCoreSession(UObject* WorldContextObject, FName sessionName = "SteamCoreSession", int32 numPublicConnections = 5, int32 numPrivateConnections = 0, bool bUseLAN = false, bool bAllowInvites = true, bool bUsesPresence = true, bool bAllowJoinViaPresence = true, bool bAllowJoinViaPresenceFriendsOnly = false, bool bAntiCheatProtected = false, bool bUsesStats = false, bool bShouldAdvertise = true);
protected:
	FOnlineSessionSettings SessionSettings;
	IOnlineSessionPtr SessionsPtr;
	FName SessionName;
private:
	FOnCreateSessionCompleteDelegate Delegate;
	FDelegateHandle DelegateHandle;
public:
	virtual void Activate() override;
public:
	void OnCompleted(FName sessionName, bool bSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFindSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFindSession : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FBlueprintFindSessionsResultDelegate OnSuccess;
public:
	USteamCoreFindSession();
	/**
	* Find Online Sessions
	*
	* This is primarily used to find Listen Servers (lobbies), can be used to find dedicated servers but will give less server info
	*
	* @param maxResults				Max Number of Servers
	* @param serverType				Search for Listen or Dedicated servers
	* @param bUseLAN				Search for LAN servers only
	* @param bEmptyServersOnly		Only empty servers
	* @param bSecureServersOnly		Only secure servers
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "SteamCore|Matchmaking|Async")
		static USteamCoreFindSession* FindSteamCoreSessions(UObject* WorldContextObject, int32 maxResults = 50, bool bUseLAN = false, ESteamSessionFindType serverType = ESteamSessionFindType::Listen, bool bEmptyServersOnly = false, bool bSecureServersOnly = false);

protected:
	TSharedPtr<class FOnlineSessionSearch> SearchSettings;
	TArray<FBlueprintSessionResult> SearchResults;
	int MaxResults;
	bool bUseLAN;
	ESteamSessionFindType ServerType;
	bool bEmptyServersOnly;
	bool bSecureServersOnly;
private:
	FOnFindSessionsCompleteDelegate Delegate;
	FDelegateHandle DelegateHandle;
public:
	virtual void Activate() override;
public:
	UFUNCTION()
		void OnCompleted(bool bSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreDestroySession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreDestroySession : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FEmptyOnlineDelegate OnSuccess;
public:
	USteamCoreDestroySession();
	/**
	* Destroy an Online Session
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject"), Category = "SteamCore|Matchmaking|Async")
		static USteamCoreDestroySession* DestroySteamCoreSession(UObject* WorldContextObject, FName sessionName = "SteamCoreSession");
protected:
	FName SessionName;
private:
	FOnDestroySessionCompleteDelegate Delegate;
	FDelegateHandle DelegateHandle;
public:
	virtual void Activate() override;
public:
	UFUNCTION()
		void OnCompleted(FName sessionName, bool bWasSuccessful);
};