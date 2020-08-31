/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamFriends
*/

#pragma once

#include "FriendsTypes.h"
#include "SteamCore/SteamCoreAsync.h"
#include "FriendsAsyncActions.generated.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		Delegate declarations
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSetPersonaNameAsyncDelegate, const FSetPersonaNameResponse&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDownloadClanActivityCountsAsyncDelegate, const FDownloadClanActivityCountsResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestClanOfficerListAsyncDelegate, const FClanOfficerListResponse&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnJoinClanChatRoomAsyncDelegate, const FJoinClanChatRoomCompletionResult&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnumerateFollowingListAsyncDelegate, const FFriendsEnumerateFollowingList&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnIsFollowingAsyncDelegate, const FFriendsIsFollowing&, data);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnGetFollowerCountAsyncDelegate, const FFriendsGetFollowerCount&, data);

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionSetPersonaName
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionSetPersonaName : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnSetPersonaNameAsyncDelegate OnSuccess;
public:
	/**
	* Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.
	* Changes take place locally immediately, and a PersonaStateChange_t callback is posted, presuming success.
	* If the name change fails to happen on the server, then an additional PersonaStateChange_t
	* callback will be posted to change the name back, in addition to the final result available in the call result.
	*
	* @param	name	The users new persona name. Can not be longer than k_cchPersonaNameMax bytes.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Set Persona Name"), Category = "SteamCore|Friends|Async")
		static USteamCoreFriendsAsyncActionSetPersonaName* SetPersonaNameAsync(UObject* WorldContextObject, FString name);
private:
	UFUNCTION()
		void HandleCallback(const FSetPersonaNameResponse& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionDownloadClanActivityCounts
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionDownloadClanActivityCounts : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnDownloadClanActivityCountsAsyncDelegate OnSuccess;
public:
	/**
	* Refresh the Steam Group activity data or get the data from groups other than one that the current
	* user is a member.
	* After receiving the callback you can then use GetClanActivityCounts to get the up to date user counts.
	*
	* @param	steamIDClans	A list of steam groups to get the updated data for.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Download Clan Activity Counts"), Category = "SteamCore|Friends|Async")
		static USteamCoreFriendsAsyncActionDownloadClanActivityCounts* DownloadClanActivityCountsAsync(UObject* WorldContextObject, TArray<FSteamID> steamIDClans);
private:
	UFUNCTION()
		void HandleCallback(const FDownloadClanActivityCountsResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionRequestClanOfficerList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionRequestClanOfficerList : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnRequestClanOfficerListAsyncDelegate OnSuccess;
public:
	/**
	* Requests information about a Steam group officers (administrators and moderators).
	* You can only ask about Steam groups that a user is a member of.
	* This won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.
	*
	* @param	steamIDClan		The Steam group to get the officers list for.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Request Clan Officer List"), Category = "SteamCore|Friends|Async")
		static USteamCoreFriendsAsyncActionRequestClanOfficerList* RequestClanOfficerListAsync(UObject* WorldContextObject, FSteamID steamIDClan);
private:
	UFUNCTION()
		void HandleCallback(const FClanOfficerListResponse& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionJoinClanChatRoom
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionJoinClanChatRoom : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnJoinClanChatRoomAsyncDelegate OnSuccess;
public:
	/**
	* Allows the user to join Steam group (clan) chats right within the game.
	* The behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.
	* You can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.
	*
	* @param	steamIDClan		The Steam ID of the Steam group to join.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Join Clan Chat Room"), Category = "SteamCore|Friends|Async")
		static USteamCoreFriendsAsyncActionJoinClanChatRoom* JoinClanChatRoomAsync(UObject* WorldContextObject, FSteamID steamIDClan);
private:
	UFUNCTION()
		void HandleCallback(const FJoinClanChatRoomCompletionResult& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionEnumerateFollowingList
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionEnumerateFollowingList : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnEnumerateFollowingListAsyncDelegate OnSuccess;
public:
	/**
	* Gets the list of users that the current user is following.
	* You can be following people that are not your friends.
	* Following allows you to receive updates when the person does things like
	* post a new piece of content to the Steam Workshop.
	*
	* @param	startIndex	The index to start receiving followers from. This should be 0 on the initial call.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Enumerate Following List"), Category = "SteamCore|Friends|Async")
		static USteamCoreFriendsAsyncActionEnumerateFollowingList* EnumerateFollowingListAsync(UObject* WorldContextObject, int32 startIndex);
private:
	UFUNCTION()
		void HandleCallback(const FFriendsEnumerateFollowingList& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionIsFollowing
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionIsFollowing : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnIsFollowingAsyncDelegate OnSuccess;
public:
	/**
	* Checks if the current user is following the specified user.
	*
	* @param	steamID		The Steam ID of the check if we are following.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Is Following"), Category = "SteamCore|Friends|Async")
		static USteamCoreFriendsAsyncActionIsFollowing* IsFollowingAsync(UObject* WorldContextObject, FSteamID steamID);
private:
	UFUNCTION()
		void HandleCallback(const FFriendsIsFollowing& data, bool bWasSuccessful);
};

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFriendsAsyncActionGetFollowerCount
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
UCLASS()
class STEAMCORE_API USteamCoreFriendsAsyncActionGetFollowerCount : public USteamCoreAsyncAction
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnGetFollowerCountAsyncDelegate OnSuccess;
public:
	/**
	* Gets the number of users following the specified user.
	*
	* @param	steamID		The user to get the follower count for.
	*/
	UFUNCTION(BlueprintCallable, meta = (BlueprintInternalUseOnly = "true", WorldContext = "WorldContextObject", DisplayName = "Get Follower Count"), Category = "SteamCore|Friends|Async")
		static USteamCoreFriendsAsyncActionGetFollowerCount* GetFollowerCountAsync(UObject* WorldContextObject, FSteamID steamID);
private:
	UFUNCTION()
		void HandleCallback(const FFriendsGetFollowerCount& data, bool bWasSuccessful);
};
