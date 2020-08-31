/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamFriends
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "FriendsTypes.h"
#include "Friends.generated.h"

UCLASS()
class STEAMCORE_API UFriends : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UFriends() {SubsystemType = ESubsystem::Friends;}
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnAvatarImageLoaded AvatarImageLoaded;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnFriendRichPresenceUpdate FriendRichPresenceUpdate;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnGameConnectedChatJoin GameConnectedChatJoin;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnGameConnectedChatLeave GameConnectedChatLeave;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnGameConnectedClanChatMsg GameConnectedClanChatMsg;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnGameConnectedFriendChatMsg GameConnectedFriendChatMsg;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnGameLobbyJoinRequested GameLobbyJoinRequested;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnGameOverlayActivated GameOverlayActivated;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnGameRichPresenceJoinRequested GameRichPresenceJoinRequested;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnGameServerChangeRequested GameServerChangeRequested;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnPersonaStateChange PersonaStateChange;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnSetPersonaNameResponse SetPersonaNameResponse;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnJoinClanChatRoomCompletionResult JoinClanChatRoomCompletionResult;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnClanOfficerListResponse ClanOfficerListResponse;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|Friends|Delegates")
		FOnDownloadClanActivityCountsResult DownloadClanActivityCountsResult;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Activates the Steam Overlay to a specific dialog.
	*
	* @param	dialog	The dialog to open. Valid options are: "friends", "community", "players", "settings", "officialgamegroup", "stats", "achievements".
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static void ActivateGameOverlay(FString dialog);

	/**
	* Activates the Steam Overlay to open the invite dialog.
	*
	* Invitations sent from this dialog will be for the provided lobby.
	*
	* @param	steamIDLobby	The Steam ID of the lobby that selected users will be invited to.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static void ActivateGameOverlayInvitedialog(FSteamID steamIDLobby);

	/**
	* Activates the Steam Overlay to the Steam store page for the provided app.
	*
	* Using k_uAppIdInvalid brings the user to the front page of the Steam store.
	*
	* @param	appID	The app ID to show the store page of.
	* @param	flag	Flags to modify the behavior when the page opens.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static void ActivateGameOverlayToStore(int32 appID, ESteamOverlayToStoreFlag flag);

	/**
	* Activates Steam Overlay to a specific dialog.
	*
	* "steamid" - Opens the overlay web browser to the specified user or groups profile.
	* "chat" - Opens a chat window to the specified user, or joins the group chat.
	* "jointrade" - Opens a window to a Steam Trading session that was started with the ISteamEconomy/StartTrade Web API.
	* "stats" - Opens the overlay web browser to the specified user's stats.
	* "achievements" - Opens the overlay web browser to the specified user's achievements.
	* "friendadd" - Opens the overlay in minimal mode prompting the user to add the target user as a friend.
	* "friendremove" - Opens the overlay in minimal mode prompting the user to remove the target friend.
	* "friendrequestaccept" - Opens the overlay in minimal mode prompting the user to accept an incoming friend invite.
	* "friendrequestignore" - Opens the overlay in minimal mode prompting the user to ignore an incoming friend invite.
	*
	* @param	dialog		The dialog to open.
	* @param	steamID		The Steam ID of the context to open this dialog to.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static void ActivateGameOverlayToUser(FString dialog, FSteamID steamID);

	/**
	* Activates Steam Overlay web browser directly to the specified URL.
	*
	* @param	url		The webpage to open. (A fully qualified address with the protocol is required, e.g. "http://www.steampowered.com")
	* @param	mode	(SDK 1.46+ only)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static void ActivateGameOverlayToWebPage(FString url, ESteamActivateGameOverlayToWebPageMode mode);

	/**
	* Clears all of the current user's Rich Presence key/values.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static void ClearRichPresence();

	/**
	* Closes the specified Steam group chat room in the Steam UI.
	*
	* @param	steamIDClanChat		The Steam ID of the Steam group chat room to close.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool CloseClanChatWindowInSteam(FSteamID steamIDClanChat);

	/**
	* Refresh the Steam Group activity data or get the data from groups other than one that the current user is a member.
	*
	* After receiving the callback you can then use GetClanActivityCounts to get the up to date user counts.
	*
	* @param	steamIDClans	A list of steam groups to get the updated data for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends", meta = (AutoCreateRefTerm = "callback"))
		void DownloadClanActivityCounts(const FOnDownloadClanActivityCounts& callback, TArray<FSteamID> steamIDClans);

	/**
	* Gets the list of users that the current user is following.
	*
	* You can be following people that are not your friends. 
	* Following allows you to receive updates when the person does things like 
	* post a new piece of content to the Steam Workshop.
	*
	* @param	startIndex	The index to start receiving followers from. This should be 0 on the initial call.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends", meta = (AutoCreateRefTerm = "callback"))
		void EnumerateFollowingList(const FOnEnumerateFollowingList& callback, int32 startIndex);

	/**
	* Gets the Steam ID at the given index in a Steam group chat.
	*
	* You must call GetClanChatMemberCount before calling this.
	* 
	* @param	steamIDClan		This MUST be the same source used in the previous call to GetClanChatMemberCount!
	* @param	user			An index between 0 and GetClanChatMemberCount.
	*/	
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FSteamID GetChatMemberByIndex(FSteamID steamIDClan, int32 user);

	/**
	* Gets the most recent information we have about what the users in a Steam Group are doing.
	*
	* This can only retrieve data that the local client knows about. 
	* To refresh the data or get data from a group other than one that the current 
	* user is a member of you must call DownloadClanActivityCounts.
	*
	* @param	steamIDClan		The Steam group to get the activity of.
	* @param	online			Returns the number of members that are online.
	* @param	inGame			Returns the number members that are in game (excluding those with their status set to offline).
	* @param	chatting		Returns the number of members in the group chat room.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool GetClanActivityCounts(FSteamID steamIDClan, int32& online, int32& inGame, int32& chatting);

	/**
	* Gets the Steam group's Steam ID at the given index.
	*
	* You must call GetClanCount before calling this.
	*
	* @param	clan	An index between 0 and GetClanCount.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FSteamID GetClanByIndex(int32 clan);

	/**
	* Get the number of users in a Steam group chat.
	*
	* Large steam groups cannot be iterated by the local user.
	* The current user must be in a lobby to retrieve the Steam IDs of other users in that lobby.
	* This is used for iteration, after calling this then GetChatMemberByIndex can 
	* be used to get the Steam ID of each person in the chat.
	*
	* @param	steamIDClan		The Steam group to get the chat count of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static int32 GetClanChatMemberCount(FSteamID steamIDClan);

	/**
	* Gets the data from a Steam group chat room message.
	*
	* This should only ever be called in response to a GameConnectedClanChatMsg_t callback.
	*
	* @param	steamIDClanChat		The Steam ID of the Steam group chat room.
	* @param	messageID			The index of the message. This should be the m_iMessageID field of GameConnectedClanChatMsg_t.
	* @param	text				The buffer where the chat message will be copied into. (Should be big enough to hold 2048 UTF-8 characters. So 8192 bytes + 1 for '\0')
	* @param	chatEntryType		Returns the type of chat entry that was received.
	* @param	steamIDChatter		Returns the Steam ID of the user that sent the message.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static int32 GetClanChatMessage(FSteamID steamIDClanChat, int32 messageID, FString& text, ESteamChatEntryType& chatEntryType, FSteamID& steamIDChatter);

	/**
	* Gets the number of Steam groups that the current user is a member of.
	*
	* This is used for iteration, after calling this then GetClanByIndex can be used to get the Steam ID of each Steam group.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static int32 GetClanCount();
	
	/**
	* Gets the display name for the specified Steam group; if the local client knows about it.
	*
	* @param	steamIDClan		The Steam group to get the name of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FString GetClanName(FSteamID steamIDClan);

	/**
	* Gets the Steam ID of the officer at the given index in a Steam group.
	*
	* You must call GetClanOfficerCount before calling this.
	*	
	* @param	steamIDClan		This must be the same steam group used in the previous call to GetClanOfficerCount!
	* @param	officer			An index between 0 and GetClanOfficerCount.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FSteamID GetClanOfficerByIndex(FSteamID steamIDClan, int32 officer);

	/**
	* Gets the number of officers (administrators and moderators) in a specified Steam group.
	*
	* This also includes the owner of the Steam group.
	* This is used for iteration, after calling this then GetClanOfficerByIndex can be used to get the Steam ID of each officer.
	*
	* @param	steamIDClan		The Steam group to get the officer count of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static int32 GetClanOfficerCount(FSteamID steamIDClan);

	/**
	* Gets the owner of a Steam Group.
	*
	* You must call RequestClanOfficerList before this to get the required data!
	*
	* @param	steamIDClan		The Steam ID of the Steam group to get the owner for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FSteamID GetClanOwner(FSteamID steamIDClan);

	/**
	* Gets the unique tag (abbreviation) for the specified Steam group; If the local client knows about it.
	*
	* The Steam group abbreviation is a unique way for people to identify the group and is limited to 12 characters. 
	* In some games this will appear next to the name of group members.
	*
	* @param	steamIDClan		The Steam group to get the tag of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FString GetClanTag(FSteamID steamIDClan);

	/**
	* Gets the Steam ID of the recently played with user at the given index.
	*
	* You must call GetCoplayFriendCount before calling this.
	*
	* @param	coplayFriend		An index between 0 and GetCoplayFriendCount.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FSteamID GetCoplayFriend(int32 coplayFriend);

	/**
	* Gets the number of players that the current users has recently played with, across all games.
	*
	* This is used for iteration, after calling this then GetCoplayFriend can be used to get the Steam ID of each player.
	* These players are have been set with previous calls to SetPlayedWith.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static int32 GetCoplayFriendCount();

	/**
	* Gets the number of users following the specified user.
	*
	* @param	steamID		The user to get the follower count for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends", meta = (AutoCreateRefTerm = "callback"))
		void GetFollowerCount(const FOnGetFollowerCount& callback, FSteamID steamID);

	/**
	* Gets the Steam ID of the user at the given index.
	*
	* You must call GetFriendCount before calling this.
	*
	* @param	ifriend			An index between 0 and GetFriendCount.
	* @param	flags		A combined union (binary "or") of EFriendFlags. This must be the same value as used in the previous call to GetFriendCount.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FSteamID GetFriendByIndex(int32 ifriend, TArray<ESteamFriendFlags> flags);

	/**
	* Gets the app ID of the game that user played with someone on their recently-played-with list.
	*
	* @param	steamIDFriend		The Steam ID of the user on the recently-played-with list to get the game played.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static int32 GetFriendCoplayGame(FSteamID steamIDFriend);

	/**
	* Gets the timestamp of when the user played with someone on their recently-played-with list.
	*
	* @param	steamIDFriend		The Steam ID of the user on the recently-played-with list to get the game played.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static int32 GetFriendCoplayTime(FSteamID steamIDFriend);

	/**
	* Gets the number of users the client knows about who meet a specified criteria. (Friends, blocked, users on the same server, etc)
	*
	* This can be used to iterate over all of the users by calling GetFriendByIndex to get the Steam IDs of each user.
	*
	* @param	flags		A combined union (binary "or") of one or more EFriendFlags.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static int32 GetFriendCount(TArray<ESteamFriendFlags> flags);

	/**
	* Get the number of users in a source (Steam group, chat room, lobby, or game server).
	*
	* Large Steam groups cannot be iterated by the local user.
	* If you're getting the number of lobby members then you should use ISteamMatchmaking::GetNumLobbyMembers instead.
	* This is used for iteration, after calling this then GetFriendFromSourceByIndex can be used to get the Steam ID of each person in the source.
	*
	* @param	steamIDSource	The Steam group, chat room, lobby or game server to get the user count of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static int32 GetFriendCountFromSource(FSteamID steamIDSource);

	/**
	* Gets the Steam ID at the given index from a source (Steam group, chat room, lobby, or game server).
	*
	* You must call GetFriendCountFromSource before calling this.
	*
	* @param	steamIDSource		This MUST be the same source used in the previous call to GetFriendCountFromSource!
	* @param	ifriend				An index between 0 and GetFriendCountFromSource.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FSteamID GetFriendFromSourceByIndex(FSteamID steamIDSource, int32 ifriend);

	/**
	* Checks if the specified friend is in a game, and gets info about the game if they are.
	*
	* @param	steamIDFriend		The Steam ID of the other user.
	* @param	gameID				Game information
	* @param	gameIP				Game information
	* @param	connectionPort		Game information
	* @param	queryPort			Game information
	* @param	steamIDLobby		Game information
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool GetFriendGamePlayed(FSteamID steamIDFriend, FSteamGameID& gameID, FString& gameIP, int32& connectionPort, int32& queryPort, FSteamID& steamIDLobby);

	/**
	* Gets the data from a Steam friends message.
	*
	* This should only ever be called in response to a GameConnectedFriendChatMsg_t callback.
	*
	* @param	steamIDFriend		The Steam ID of the friend that sent this message.
	* @param	messageID			The index of the message. This should be the m_iMessageID field of GameConnectedFriendChatMsg_t.
	* @param	text				The buffer where the chat message will be copied into.
	* @param	chatEntryType		Returns the type of chat entry that was received.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static int32 GetFriendMessage(FSteamID steamIDFriend, int32 messageID, FString& text, ESteamChatEntryType& chatEntryType);

	/**
	* Gets the specified user's persona (display) name.
	*
	* This will only be known to the current user if the other user is in their friends list, on the same game server, 
	* in a chat room or lobby, or in a small Steam group with the local user.
	* Upon on first joining a lobby, chat room, or game server the current user will not known the name 
	* of the other users automatically; that information will arrive asynchronously via PersonaStateChange_t callbacks.
	* To get the persona name of the current user use GetPersonaName.
	*
	* @param	steamIDFriend	The Steam ID of the other user.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FString GetFriendPersonaName(FSteamID steamIDFriend);

	/**
	* Gets one of the previous display names for the specified user.
	*
	* This only works for display names that the current user has seen on the local computer.
	*
	* @param	steamIDFriend		The Steam ID of the other user.
	* @param	personaName			The index of the history to receive. 0 is their current persona name, 1 is their most recent before they changed it, etc.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FString GetFriendPersonaNameHistory(FSteamID steamIDFriend, int32 personaName);

	/**
	* Gets the current status of the specified user.
	*
	* This will only be known to the current user if the other user is in their friends list, 
	* on the same game server, in a chat room or lobby, or in a small Steam group with the local user.
	* To get the state of the current user use GetPersonaState.
	*
	* @param	steamIDFriend	The Steam ID of the other user.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static ESteamPersonaState GetFriendPersonaState(FSteamID steamIDFriend);

	/**
	* Gets a relationship to a specified user.
	*
	* @param	steamIDFriend	The Steam ID of the other user.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static ESteamFriendRelationship GetFriendRelationship(FSteamID steamIDFriend);

	/**
	* Get a Rich Presence value from a specified friend.
	*
	* @param	steamIDFriend	The friend to get the Rich Presence value for.
	* @param	key				The Rich Presence key to request.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FString GetFriendRichPresence(FSteamID steamIDFriend, FString key);

	/**
	* Gets a Rich Presence key by index.
	*
	* @param	steamIDFriend	This should be the same user provided to the previous call to GetFriendRichPresenceKeyCount!
	* @param	key				An index between 0 and GetFriendRichPresenceKeyCount.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FString GetFriendRichPresenceKeyByIndex(FSteamID steamIDFriend, int32 key);

	/**
	* Gets the number of Rich Presence keys that are set on the specified user.
	*
	* This is used for iteration, after calling this then GetFriendRichPresenceKeyByIndex to get the rich presence keys.
	* This is typically only ever used for debugging purposes.
	*
	* @param	steamIDFriend	The Steam ID of the user to get the Rich Presence Key Count of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static int32 GetFriendRichPresenceKeyCount(FSteamID steamIDFriend);

	/**
	* Gets the number of friends groups (tags) the user has created.
	*
	* This is used for iteration, after calling this then GetFriendsGroupIDByIndex can be used to get the ID of each friend group.
	* This is not to be confused with Steam groups. Those can be obtained with GetClanCount.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static int32 GetFriendsGroupCount();

	/**
	* Gets the friends group ID for the given index.
	*
	* @param	friendGroup		An index between 0 and GetFriendsGroupCount.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FSteamFriendsGroupID GetFriendsGroupIDByIndex(int32 friendGroup);

	/**
	* Gets the number of friends in a given friends group.
	*
	* This should be called before getting the list of friends with GetFriendsGroupMembersList.
	*
	* @param	friendsGroupID		The friends group ID to get the number of friends in.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static int32 GetFriendsGroupMembersCount(FSteamFriendsGroupID friendsGroupID);

	/**
	* Gets the number of friends in the given friends group.
	*
	* If fewer friends exist than requested those positions' Steam IDs will be invalid.
	* You must call GetFriendsGroupMembersCount before calling this to set up the pOutSteamIDMembers array with an appropriate size!
	*
	* @param	friendsGroupID		The friends group ID to get the members list of.
	* @param	steamIDMembers		Returns the Steam IDs of the friends by setting them in this array.
	* @param	membersCount		This should match the number of elements allocated pOutSteamIDMembers and the value returned by GetFriendsGroupMembersCount.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static void GetFriendsGroupMembersList(FSteamFriendsGroupID friendsGroupID, TArray<FSteamID>& steamIDMembers, int32 membersCount);

	/**
	* Gets the name for the given friends group.
	*
	* @param	friendsGroupID		The friends group ID to get the name of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FString GetFriendsGroupName(FSteamFriendsGroupID friendsGroupID);

	/**
	* Gets the Steam level of the specified user.
	*
	* You can use the local users Steam ID (ISteamUser::GetSteamID) to get their level.
	*
	* @param	steamIDFriend	The Steam ID of the user.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static int GetFriendSteamLevel(FSteamID steamIDFriend);

	/**
	* Gets a handle to the large (128*128px) avatar for the specified user.
	*
	* You can pass in ISteamUser::GetSteamID to get the current users avatar.
	* This only works for users that the local user knows about. They will automatically know about their friends, 
	* people on leaderboards they've requested, or people in the same source as them 
	* (Steam group, chat room, lobby, or game server). If they don't know about them then you must call 
	* RequestUserInformation to cache the avatar locally.
	*
	* @param	steamIDFriend	The Steam ID of the user.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static UTexture2D* GetLargeFriendAvatar(FSteamID steamIDFriend);

	/**
	* Gets a handle to the large (64*64px) avatar for the specified user.
	*
	* You can pass in ISteamUser::GetSteamID to get the current users avatar.
	* This only works for users that the local user knows about. They will automatically know about their friends,
	* people on leaderboards they've requested, or people in the same source as them
	* (Steam group, chat room, lobby, or game server). If they don't know about them then you must call
	* RequestUserInformation to cache the avatar locally.
	*
	* @param	steamIDFriend	The Steam ID of the user.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static UTexture2D* GetMediumFriendAvatar(FSteamID steamIDFriend);

	/**
	* Gets the current users persona (display) name.
	*
	* This is the same name that is displayed the users community profile page.
	* To get the persona name of other users use GetFriendPersonaName.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Friends", meta = (DisplayName = "Get Persona Name (Pure)"))
		static FString GetPersonaName_Pure() { return UFriends::GetPersonaName(); }

	/**
	* Gets the current users persona (display) name.
	*
	* This is the same name that is displayed the users community profile page.
	* To get the persona name of other users use GetFriendPersonaName.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FString GetPersonaName();

	/**
	* Gets the friend status of the current user.
	*
	* To get the state of other users use GetFriendPersonaState.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Friends", meta = (DisplayName = "Get Persona State (Pure)"))
		static ESteamPersonaState GetPersonaState_Pure() { return UFriends::GetPersonaState(); }

	/**
	* Gets the friend status of the current user.
	*
	* To get the state of other users use GetFriendPersonaState.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static ESteamPersonaState GetPersonaState();

	/**
	* Gets the nickname that the current user has set for the specified user.
	*
	* @param	steamIDPlayer	The Steam ID of the user.
	*/
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "SteamCore|Friends", meta = (DisplayName = "Get Player Nickname (Pure)"))
		static FString GetPlayerNickname_Pure(FSteamID steamIDPlayer) { return UFriends::GetPlayerNickname(steamIDPlayer); }

	/**
	* Gets the nickname that the current user has set for the specified user.
	*
	* @param	steamIDPlayer	The Steam ID of the user.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static FString GetPlayerNickname(FSteamID steamIDPlayer);

	/**
	* Gets a handle to the large (32*32px) avatar for the specified user.
	*
	* You can pass in ISteamUser::GetSteamID to get the current users avatar.
	* This only works for users that the local user knows about. They will automatically know about their friends,
	* people on leaderboards they've requested, or people in the same source as them
	* (Steam group, chat room, lobby, or game server). If they don't know about them then you must call
	* RequestUserInformation to cache the avatar locally.
	*
	* @param	steamIDFriend	The Steam ID of the user.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static UTexture2D* GetSmallFriendAvatar(FSteamID steamIDFriend);

	/**
	* Checks if current user is chat restricted.
	*
	* If they are restricted, then they can't send or receive any text/voice chat messages, can't see custom avatars.
	* A chat restricted user can't add friends or join any groups.
	* Restricted users can still be online and send/receive game invites.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static TArray<ESteamUserRestriction> GetUserRestrictions();

	/**
	* Checks if the user meets the specified criteria. (Friends, blocked, users on the same server, etc)
	*
	* @param	steamIDFriend	The Steam user to check the friend status of.
	* @param	flags		A combined union (binary "or") of one or more EFriendFlags.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool HasFriend(FSteamID steamIDFriend, TArray<ESteamFriendFlags> flags);

	/**
	* Invites a friend or clan member to the current game using a special invite string.
	*
	* If the target user accepts the invite then the pchConnectString gets added to the command-line when launching the game.
	* If the game is already running for that user, then they will receive a GameRichPresenceJoinRequested_t callback with the connect string.
	*
	* @param	steamIDFriend	The Steam ID of the friend to invite.
	* @param	connectString	A string that lets the friend know how to join the game (I.E. the game server IP). This can not be longer than specified in k_cchMaxRichPresenceValueLength
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool InviteUserToGame(FSteamID steamIDFriend, FString connectString);

	/**
	* Checks if a user in the Steam group chat room is an admin.
	*
	* @param	steamIDClanChat		The Steam ID of the Steam group chat room.
	* @param	steamIDUser			The Steam ID of the user to check the admin status of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool IsClanChatAdmin(FSteamID steamIDClanChat, FSteamID steamIDUser);

	/**
	* Checks if the Steam group is public.
	*
	* @param	steamIDClan		The Steam ID of the Steam group.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool IsClanPublic(FSteamID steamIDClan);

	/**
	* Checks if the Steam group is an official game group/community hub.
	*
	* @param	steamIDClan		The Steam ID of the Steam group.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool IsClanOfficialGameGroup(FSteamID steamIDClan);

	/**
	* Checks if the Steam Group chat room is open in the Steam UI.
	*
	* @param	steamIDClanChat		The Steam ID of the Steam group chat room to check.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool IsClanChatWindowOpenInSteam(FSteamID steamIDClanChat);

	/**
	* Checks if the current user is following the specified user.
	*
	* @param	steamID		The Steam ID of the check if we are following.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends", meta = (AutoCreateRefTerm = "callback"))
		void IsFollowing(const FOnIsFollowing& callback, FSteamID steamID);

	/**
	* Checks if a specified user is in a source (Steam group, chat room, lobby, or game server).
	*
	* @param	steamIDUser		The user to check if they are in the source.
	* @param	steamIDSource	The source to check for the user.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool IsUserInSource(FSteamID steamIDUser, FSteamID steamIDSource);

	/**
	* Allows the user to join Steam group (clan) chats right within the game.
	*
	* The behavior is somewhat complicated, because the user may or may not be already in the group chat from outside the game or in the overlay.
	* You can use ActivateGameOverlayToUser to open the in-game overlay version of the chat.
	*
	* @param	steamIDClan		The Steam ID of the Steam group to join.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends", meta = (AutoCreateRefTerm = "callback"))
		void JoinClanChatRoom(const FOnJoinClanChatRoom& callback, FSteamID steamIDClan);

	/**
	* Leaves a Steam group chat that the user has previously entered with JoinClanChatRoom.
	*
	* @param	steamIDClan		The Steam ID of the Steam group chat to leave.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool LeaveClanChatRoom(FSteamID steamIDClan);

	/**
	* Opens the specified Steam group chat room in the Steam UI.
	*
	* @param	steamIDClanChat		The Steam ID of the Steam group chat room to open.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool OpenClanChatWindowInSteam(FSteamID steamIDClanChat);

	/**
	* Sends a message to a Steam friend.
	*
	* @param	steamIDFriend		The Steam ID of the friend to send the message to.
	* @param	msgToSend			The UTF-8 formatted message to send.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool ReplyToFriendMessage(FSteamID steamIDFriend, FString msgToSend);

	/**
	* Requests information about a Steam group officers (administrators and moderators).
	*
	* You can only ask about Steam groups that a user is a member of.
	* This won't download avatars for the officers automatically. If no avatar image is available for an officer, then call RequestUserInformation to download the avatar.
	*
	* @param	steamIDClan		The Steam group to get the officers list for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends", meta = (AutoCreateRefTerm = "callback"))
		void RequestClanOfficerList(const FOnRequestClanOfficerList& callback, FSteamID steamIDClan);

	/**
	* Requests Rich Presence data from a specific user.
	*
	* This is used to get the Rich Presence information from a user that is not a friend of the current user, like someone in the same lobby or game server.
	* This function is rate limited, if you call this too frequently for a particular user then it will just immediately post a callback without requesting new data from the server.
	*
	* @param	steamIDFriend	The Steam ID of the user to request the rich presence of.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static void RequestFriendRichPresence(FSteamID steamIDFriend);

	/**
	* Requests the persona name and optionally the avatar of a specified user.
	*
	* @param	steamIDUser			The user to request the information of.
	* @param	bRequireNameOnly	Retrieve the Persona name only (true)? Or both the name and the avatar (false)?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool RequestUserInformation(FSteamID steamIDUser, bool bRequireNameOnly);

	/**
	* Sends a message to a Steam group chat room.
	*
	* @param	steamIDClanChat		The Steam ID of the group chat to send the message to.
	* @param	text				The UTF-8 formatted message to send. This can be up to 2048 characters long.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool SendClanChatMessage(FSteamID steamIDClanChat, FString text);

	/**
	* Let Steam know that the user is currently using voice chat in game.
	*
	* This will suppress the microphone for all voice communication in the Steam UI.
	*
	* @param	steamIDUser		Unused.
	* @param	bSpeaking		Did the user start speaking in game (true) or stopped speaking in game (false)?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static void SetInGameVoiceSpeaking(FSteamID steamIDUser, bool bSpeaking);

	/**
	* Listens for Steam friends chat messages.
	*
	* You can then show these chats inline in the game. 
	* For example with a Blizzard style chat message system or the chat system in Dota 2.
	* After enabling this you will receive GameConnectedFriendChatMsg_t 
	* callbacks when ever the user receives a chat message. 
	* You can get the actual message data from this callback with GetFriendMessage. You can send messages with ReplyToFriendMessage.
	*
	* @param	bInterceptEnabled	Turn friends message interception on (true) or off (false)?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool SetListenForFriendsMessages(bool bInterceptEnabled);

	/**
	* Sets the current users persona name, stores it on the server and publishes the changes to all friends who are online.
	*
	* Changes take place locally immediately, and a PersonaStateChange_t callback is posted, presuming success.
	* If the name change fails to happen on the server, then an additional PersonaStateChange_t 
	* callback will be posted to change the name back, in addition to the final result available in the call result.
	*
	* @param	name	The users new persona name. Can not be longer than k_cchPersonaNameMax bytes.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends", meta = (AutoCreateRefTerm = "callback"))
		void SetPersonaName(const FOnSetPersonaName& callback, FString name);

	/**
	* Mark a target user as 'played with'.
	*
	* The current user must be in game with the other player for the association to work.
	*
	* @param	steamIDUserPlayedWith	The other user that we have played with.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static void SetPlayedWith(FSteamID steamIDUserPlayedWith);

	/**
	* Sets a Rich Presence key/value for the current user that is automatically shared to all friends playing the same game.
	*
	* Each user can have up to 20 keys set as defined by k_cchMaxRichPresenceKeys.
	*
	* @param	key		The rich presence 'key' to set. This can not be longer than specified in k_cchMaxRichPresenceKeyLength.
	* @param	value	The rich presence 'value' to associate with pchKey. This can not be longer than specified in k_cchMaxRichPresenceValueLength. If this is set to an empty string ("") or NULL then the key is removed if it's set.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Friends")
		static bool SetRichPresence(FString key, FString value);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	STEAM_CALLBACK_MANUAL(UFriends, OnAvatarImageLoaded, AvatarImageLoaded_t, OnAvatarImageLoadedCallback);
	STEAM_CALLBACK_MANUAL(UFriends, OnFriendRichPresenceUpdate, FriendRichPresenceUpdate_t, OnFriendRichPresenceUpdateCallback);
	STEAM_CALLBACK_MANUAL(UFriends, OnGameConnectedChatJoin, GameConnectedChatJoin_t, OnGameConnectedChatJoinCallback);
	STEAM_CALLBACK_MANUAL(UFriends, OnGameConnectedChatLeave, GameConnectedChatLeave_t, OnGameConnectedChatLeaveCallback);
	STEAM_CALLBACK_MANUAL(UFriends, OnGameConnectedFriendChatMsg, GameConnectedFriendChatMsg_t, OnGameConnectedFriendChatMsgCallback);
	STEAM_CALLBACK_MANUAL(UFriends, OnGameConnectedClanChatMsg, GameConnectedClanChatMsg_t, OnGameConnectedClanChatMsgCallback);
	STEAM_CALLBACK_MANUAL(UFriends, OnGameLobbyJoinRequested, GameLobbyJoinRequested_t, OnGameLobbyJoinRequestedCallback);
	STEAM_CALLBACK_MANUAL(UFriends, OnGameOverlayActivated, GameOverlayActivated_t, OnGameOverlayActivatedCallback);
	STEAM_CALLBACK_MANUAL(UFriends, OnGameRichPresenceJoinRequested, GameRichPresenceJoinRequested_t, OnGameRichPresenceJoinRequestedCallback);
	STEAM_CALLBACK_MANUAL(UFriends, OnGameServerChangeRequested, GameServerChangeRequested_t, OnGameServerChangeRequestedCallback);
	STEAM_CALLBACK_MANUAL(UFriends, OnPersonaStateChange, PersonaStateChange_t, OnPersonaStateChangeCallback);
	STEAM_CALLBACK_MANUAL(UFriends, OnSetPersonaNameResponse, SetPersonaNameResponse_t, OnSetPersonaNameResponseCallback);
	STEAM_CALLBACK_MANUAL(UFriends, OnJoinClanChatRoomCompletionResult, JoinClanChatRoomCompletionResult_t, OnJoinClanChatRoomCompletionResultCallback);
	STEAM_CALLBACK_MANUAL(UFriends, OnClanOfficerListResponse, ClanOfficerListResponse_t, OnClanOfficerListResponseCallback);
	STEAM_CALLBACK_MANUAL(UFriends, OnDownloadClanActivityCountsResult, DownloadClanActivityCountsResult_t, OnDownloadClanActivityCountsResultCallback);

private:
	/**
	* Get friend avatar
	*
	* @param	size			0=small, 1=medium, 2=large
	* @param	steamUserID		Steam ID of friend
	*/
	static UTexture2D* GetAvatar(uint8 size, FSteamID steamUserID);
};