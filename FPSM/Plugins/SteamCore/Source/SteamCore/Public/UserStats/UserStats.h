/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamUserStats
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "UserStatsTypes.h"
#include "UserStats.generated.h"

UCLASS()
class STEAMCORE_API UUserStats : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UUserStats() {SubsystemType = ESubsystem::UserStats;}
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

public:
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UserStats|Delegates")
		FOnUserAchievementIconFetched UserAchievementIconFetched;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UserStats|Delegates")
		FOnUserAchievementStored UserAchievementStored;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UserStats|Delegates")
		FOnUserStatsReceived UserStatsReceived;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UserStats|Delegates")
		FOnUserStatsStored UserStatsStored;
	UPROPERTY(BlueprintAssignable, Category = "SteamCore|UserStats|Delegates")
		FOnUserStatsUnloaded UserStatsUnloaded;

public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Attaches a piece of user generated content the current user's entry on a leaderboard.
	*
	* This content could be a replay of the user achieving the score or a ghost to race against. The attached handle will be available when the entry is retrieved and can be accessed by other users using GetDownloadedLeaderboardEntry which contains LeaderboardEntry_t.m_hUGC. To create and download user generated content see the documentation for the Steam Workshop.
	* Once attached, the content will be available even if the underlying Cloud file is changed or deleted by the user.
	* You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.
	*
	* @param	steamLeaderboard	A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	* @param	handle				Handle to a piece of user generated content that was shared using ISteamRemoteStorage::FileShare or ISteamUGC::CreateItem.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "callback"))
		void AttachLeaderboardUGC(const FOnAttachLeaderboardUGC& callback, FSteamLeaderboard steamLeaderboard, FSteamUGCHandle handle);

	/**
	* Resets the unlock status of an achievement.
	*
	* This is primarily only ever used for testing.
	* ou must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!
	* This call only modifies Steam's in-memory state so it is quite cheap. 
	* To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.
	*
	* @param	name	The 'API Name' of the Achievement to reset.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool ClearAchievement(FString name);

	/**
	* Fetches a series of leaderboard entries for a specified leaderboard.
	*
	* You can ask for more entries than exist, then this will return as many as do exist.
	* If you want to download entries for an arbitrary set of users, such as all of 
	* the users on a server then you can use DownloadLeaderboardEntriesForUsers which takes an array of Steam IDs.
	*
	* @param	steamLeaderboard	A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	* @param	dataRequest			The type of data request to make.
	* @param	rangeStart			The index to start downloading entries relative to eLeaderboardDataRequest.
	* @param	rangeEnd			The last index to retrieve entries for relative to eLeaderboardDataRequest.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "callback"))
		void DownloadLeaderboardEntries(const FOnDownloadLeaderboardEntries& callback, FSteamLeaderboard steamLeaderboard, ESteamLeaderboardDataRequest dataRequest, int32 rangeStart, int32 rangeEnd);

	/**
	* Fetches leaderboard entries for an arbitrary set of users on a specified leaderboard.
	*
	* A maximum of 100 users can be downloaded at a time, with only one outstanding call at a time. If a user doesn't have an entry on the specified leaderboard, they won't be included in the result.
	* If you want to download entries based on their ranking or friends of the current user then you should use DownloadLeaderboardEntries.
	* You must call FindLeaderboard or FindOrCreateLeaderboard to get a SteamLeaderboard_t prior to calling this function.
	*
	* @param	steamLeaderboard	A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	* @param	users				An array of Steam IDs to get the leaderboard entries for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "callback"))
		void DownloadLeaderboardEntriesForUsers(const FOnDownloadLeaderboardEntriesForUsers& callback, FSteamLeaderboard steamLeaderboard, TArray<FSteamID> users);

	/**
	* Gets a leaderboard by name.
	*
	* You must call either this or FindOrCreateLeaderboard to obtain the leaderboard handle which is valid for the game session for
	* each leaderboard you wish to access prior to calling any other Leaderboard functions.
	*
	* @param	leaderboardName		The name of the leaderboard to find. Must not be longer than k_cchLeaderboardNameMax.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "callback"))
		void FindLeaderboard(const FOnFindLeaderboard& callback, FString leaderboardName);

	/**
	* Gets a leaderboard by name, it will create it if it's not yet created.
	*
	* You must call either this or FindLeaderboard to obtain the leaderboard handle which is valid for the
	* game session for each leaderboard you wish to access prior to calling any other Leaderboard functions.
	* Leaderboards created with this function will not automatically show up in the Steam Community.
	* You must manually set the Community Name field in the App Admin panel of the Steamworks website.
	* As such it's generally recommended to prefer creating the leaderboards in the App Admin panel on the Steamworks
	* website and using FindLeaderboard unless you're expected to have a large amount of dynamically created leaderboards.
	* You should never pass k_ELeaderboardSortMethodNone for eLeaderboardSortMethod or k_ELeaderboardDisplayTypeNone
	* for eLeaderboardDisplayType as this is undefined behavior.
	*
	* @param	leaderboardName		The name of the leaderboard to find or create. Must not be longer than k_cchLeaderboardNameMax.
	* @param	sortMethod			The sort order of the new leaderboard if it's created.
	* @param	displayType			The display type (used by the Steam Community web site) of the new leaderboard if it's created.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "callback"))
		void FindOrCreateLeaderboard(const FOnFindOrCreateLeaderboard& callback, FString leaderboardName, ESteamLeaderboardSortMethod sortMethod, ESteamLeaderboardDisplayType displayType);

	/**
	* Gets the unlock status of the Achievement.
	*
	* The equivalent function for other users is GetUserAchievement.
	*
	* @param	name		The 'API Name' of the achievement.
	* @param	bAchieved	Returns the unlock status of the achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool GetAchievement(FString name, bool& bAchieved);

	/**
	* Returns the percentage of users who have unlocked the specified achievement.
	*
	* You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.
	*
	* @param	name		The 'API Name' of the achievement.
	* @param	percent		Variable to return the percentage of people that have unlocked this achievement from 0 to 100.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool GetAchievementAchievedPercent(FString name, float& percent);

	/**
	* Gets the achievement status, and the time it was unlocked if unlocked.
	*
	* If the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.
	* The equivalent function for other users is GetUserAchievementAndUnlockTime.
	*
	* @param	name		The 'API Name' of the achievement.
	* @param	bAchieved	Returns whether the current user has unlocked the achievement.
	* @param	unlockTime	Returns the time that the unchievement was unlocked; if pbAchieved is true.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool GetAchievementAndUnlockTime(FString name, bool& bAchieved, int32& unlockTime);

	/**
	* Get general attributes for an achievement. Currently provides: Name, Description, and Hidden status.
	*
	* This receives the value from a dictionary/map keyvalue store, so you must provide one of the following keys.
	*
	* This localization is provided based on the games language if it's set, otherwise it checks if a localization is avilable for the users Steam UI Language. If that fails too, then it falls back to english.
	*
	* @param	name		The 'API Name' of the achievement.
	* @param	key			The 'key' to get a value for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static FString GetAchievementDisplayAttribute(FString name, FString key);
	
	/**
	* Gets the icon for an achievement.
	*
	* @param	name	The 'API Name' of the achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static UTexture2D* GetAchievementIcon(FString name);

	/**
	* Gets the 'API name' for an achievement index between 0 and GetNumAchievements.
	*
	* This function must be used in cojunction with GetNumAchievements to loop over the list of achievements.
	* In general games should not need these functions as they should have the list of achievements compiled into them.
	*
	* @param	achievement			index of the achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static FString GetAchievementName(int32 achievement);

	/**
	* Retrieves the data for a single leaderboard entry.
	*
	* You should use a for loop from 0 to LeaderboardScoresDownloaded_t.m_cEntryCount to get all the downloaded entries.
	* Once you've accessed all the entries, the data will be freed, and the SteamLeaderboardEntries_t handle will become invalid.
	* Optionally details may be returned for the entry via the pDetails. If this is NULL then cDetailsMax MUST be 0.
	*
	* @param	leaderboardEntries		A leaderboard entries handle obtained from the most recently received LeaderboardScoresDownloaded_t call result.
	* @param	index					The index of the leaderboard entry to receive, must be between 0 and LeaderboardScoresDownloaded_t.m_cEntryCount.
	* @param	leaderboardEntry		Variable where the entry will be returned to.
	* @param	details					A preallocated array where the details of this entry get returned into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "details"))
		static bool GetDownloadedLeaderboardEntry(FSteamLeaderboardEntries leaderboardEntries, int32 index, FSteamLeaderboardEntry& leaderboardEntry, TArray<int32> details, TArray<int32>& outDetails);

	/**
	* Gets the lifetime totals for an aggregated stat.
	*
	* You must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.
	*
	* @param	statName	The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	data		The variable to return the stat value into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool GetGlobalStatInt(FString statName, int32& data);

	/**
	* Gets the lifetime totals for an aggregated stat.
	*
	* You must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.
	*
	* @param	statName	The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	data		The variable to return the stat value into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool GetGlobalStatFloat(FString statName, float& data);

	/**
	* Gets the daily history for an aggregated stat.
	*
	* pData will be filled with daily values, starting with today.
	* So when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.
	* You must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.
	*
	* @param	statName		The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	historyDays		The total size in bytes of the pData array.
	* @param	data			Array that the daily history will be returned into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static int32 GetGlobalStatHistoryInt(FString statName, int32 historyDays, TArray<int32>& data);

	/**
	* Gets the daily history for an aggregated stat.
	*
	* pData will be filled with daily values, starting with today.
	* So when called, pData[0] will be today, pData[1] will be yesterday, and pData[2] will be two days ago, etc.
	* You must have called RequestGlobalStats and it needs to return successfully via its callback prior to calling this.
	*
	* @param	statName		The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	historyDays		The total size in bytes of the pData array.
	* @param	data			Array that the daily history will be returned into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static int32 GetGlobalStatHistoryFloat(FString statName, int32 historyDays, TArray<float>& data);

	/**
	* Returns the display type of a leaderboard handle.
	*
	* @param	steamLeaderboard	A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static ESteamLeaderboardDisplayType GetLeaderboardDisplayType(FSteamLeaderboard steamLeaderboard);

	/**
	* Returns the total number of entries in a leaderboard.
	*
	* @param	steamLeaderboard	A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static int32 GetLeaderboardEntryCount(FSteamLeaderboard steamLeaderboard);

	/**
	* Returns the name of a leaderboard handle.
	*
	* @param	steamLeaderboard	A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static FString GetLeaderboardName(FSteamLeaderboard steamLeaderboard);

	/**
	* Returns the sort order of a leaderboard handle.
	*
	* @param	steamLeaderboard	A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static ESteamLeaderboardSortMethod GetLeaderboardSortMethod(FSteamLeaderboard steamLeaderboard);

	/**
	* Gets the info on the most achieved achievement for the game.
	*
	* You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.
	*
	* @param	name			String buffer to return the 'API Name' of the achievement into.
	* @param	percent			Variable to return the percentage of people that have unlocked this achievement from 0 to 100.
	* @param	bAchieved		Variable to return whether the current user has unlocked this achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static int32 GetMostAchievedAchievementInfo(FString& name, float& percent, bool& bAchieved);

	/**
	* Gets the info on the next most achieved achievement for the game.
	*
	* You must have called RequestGlobalAchievementPercentages and it needs to return successfully via its callback prior to calling this.
	*
	* @param	name			String buffer to return the 'API Name' of the achievement into.
	* @param	percent			Variable to return the percentage of people that have unlocked this achievement from 0 to 100.
	* @param	bAchieved		Variable to return whether the current user has unlocked this achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static int32 GetNextMostAchievedAchievementInfo(int32 iteratorPrevious, FString& name, float& percent, bool& bAchieved);

	/**
	* Get the number of achievements defined in the App Admin panel of the Steamworks website.
	*
	* This is used for iterating through all of the achievements with GetAchievementName.
	* In general games should not need these functions because they should have a list of existing achievements compiled into them.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static int32 GetNumAchievements();

	/**
	* Asynchronously retrieves the total number of players currently playing the current game. Both online and in offline mode.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "callback"))
		void GetNumberOfCurrentPlayers(const FOnGetNumberOfCurrentPlayers& callback);

	/**
	* Gets the current value of the a stat for the current user.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.
	* To receive stats for other users use GetUserStat.
	*
	* @param	steamIDUser	The Steam ID of the user to get the stat for.
	* @param	name		The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	data		The variable to return the stat value into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool GetUserStatInteger(FSteamID steamIDUser, FString name, int32& data);

	/**
	* Gets the current value of the a stat for the current user.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.
	* To receive stats for other users use GetUserStat.
	*
	* @param	steamIDUser	The Steam ID of the user to get the stat for.
	* @param	name		The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	data		The variable to return the stat value into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool GetUserStatFloat(FSteamID steamIDUser, FString name, float& data);

	/**
	* Gets the unlock status of the Achievement.
	*
	* The equivalent function for the local user is GetAchievement, the equivalent function for game servers is ISteamGameServerStats::GetUserAchievement.
	*
	* @param	steamIDUser		The Steam ID of the user to get the achievement for.
	* @param	name			The 'API Name' of the achievement.
	* @param	bAchieved		Returns the unlock status of the achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool GetUserAchievement(FSteamID steamIDUser, FString name, bool& bAchieved);

	/**
	* Gets the achievement status, and the time it was unlocked if unlocked.
	*
	* If the return value is true, but the unlock time is zero, that means it was unlocked before Steam began tracking achievement unlock times (December 2009). The time is provided in Unix epoch format, seconds since January 1, 1970 UTC.
	* The equivalent function for the local user is GetAchievementAndUnlockTime.
	*
	* @param	steamIDUser		The Steam ID of the user to get the achievement for.
	* @param	name			The 'API Name' of the achievement.
	* @param	bAchieved		Returns the unlock status of the achievement.
	* @param	unlockTime		Returns the time that the unchievement was unlocked; if pbAchieved is true.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool GetUserAchievementAndUnlockTime(FSteamID steamIDUser, FString name, bool& bAchieved, int32& unlockTime);

	/**
	* Gets the current value of the a stat for the current user.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.
	* To receive stats for other users use GetUserStat.
	*
	* @param	name	The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	data	The variable to return the stat value into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool GetStatInt(FString name, int32& data);

	/**
	* Gets the current value of the a stat for the current user.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.
	* To receive stats for other users use GetUserStat.
	*
	* @param	name	The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	data	The variable to return the stat value into.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool GetStatFloat(FString name, float& data);

	/**
	* Shows the user a pop-up notification with the current progress of an achievement.
	*
	* Calling this function will NOT set the progress or unlock the achievement, the game must do that manually by calling SetStat!
	*
	* @param	The 'API Name' of the achievement.
	* @param	The current progress.
	* @param	The progress required to unlock the achievement.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool IndicateAchievementProgress(FString name, int32 currentProgress, int32 maxProgress);

	/**
	* Asynchronously request the user's current stats and achievements from the server.
	*
	* You must always call this first to get the initial status of stats and achievements.
	* Only after the resulting callback comes back can you start calling the rest of the stats and achievement functions for the current user.
	* The equivalent function for other users is RequestUserStats.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool RequestCurrentStats();

	/**
	* Asynchronously fetch the data for the percentage of players who have received each achievement for the current game globally.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "callback"))
		void RequestGlobalAchievementPercentages(const FOnRequestGlobalAchievementPercentages& callback);

	/**
	* Asynchronously fetches global stats data, which is available for stats marked as "aggregated" in the App Admin panel of the Steamworks website.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this.
	*
	* @param	historyDays		How many days of day-by-day history to retrieve in addition to the overall totals. The limit is 60.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "callback"))
		void RequestGlobalStats(const FOnRequestGlobalStats& callback, int32 historyDays);

	/**
	* Asynchronously downloads stats and achievements for the specified user from the server.
	*
	* These stats are not automatically updated; you'll need to call this function again to refresh any data that may have change.
	* To keep from using too much memory, an least recently used cache (LRU) is maintained and other user's stats will occasionally be unloaded. When this happens a
	* UserStatsUnloaded_t callback is sent. After receiving this callback the user's stats will be unavailable until this function is called again.
	* The equivalent function for the local user is RequestCurrentStats, the equivalent function for game servers is ISteamGameServerStats::RequestUserStats.
	*
	* @param	steamID		The Steam ID of the user to request stats for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "callback"))
		void RequestUserStats(const FOnRequestUserStats& callback, FSteamID steamID);

	/**
	* Resets the current users stats and, optionally achievements.
	*
	* This automatically calls StoreStats to persist the changes to the server.
	* This should typically only be used for testing purposes during development.
	* Ensure that you sync up your stats with the new default values provided by Steam after calling this by calling RequestCurrentStats.
	*
	* @param	bAchievementsToo	Also reset the user's achievements?
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool ResetAllStats(bool bAchievementsToo);

	/**
	* Unlocks an achievement.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!
	* You can unlock an achievement multiple times so you don't need to worry about only setting achievements that aren't already set.
	* This call only modifies Steam's in-memory state so it is quite cheap. To send the unlock status to the server and to trigger the Steam overlay notification you must call StoreStats.
	*
	* @param	name	The 'API Name' of the Achievement to unlock.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool SetAchievement(FString name);

	/**
	* Sets / updates the value of a given stat for the current user.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!
	* This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.
	* To submit the stats to the server you must call StoreStats.
	* If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.
	*
	* @param	name	The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	data	The new value of the stat. This must be an absolute value, it will not increment or decrement for you.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool SetStatInt(FString name, int32 data);

	/**
	* Sets / updates the value of a given stat for the current user.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!
	* This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.
	* To submit the stats to the server you must call StoreStats.
	* If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.
	*
	* @param	name	The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	data	The new value of the stat. This must be an absolute value, it will not increment or decrement for you.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool SetStatFloat(FString name, float data);

	/**
	* Send the changed stats and achievements data to the server for permanent storage.
	*
	* If this fails then nothing is sent to the server. It's advisable to keep trying until the call is successful.
	* This call can be rate limited. Call frequency should be on the order of minutes, rather than seconds.
	* You should only be calling this during major state changes such as the end of a round, the map changing, or the user leaving a server.
	* This call is required to display the achievement unlock notification dialog though, so if you have called SetAchievement then it's advisable to call this soon after that.
	* If you have stats or achievements that you have saved locally but haven't uploaded with this function when your application process ends then this function will automatically be called.
	*
	* You can find additional debug information written to the %steam_install%\logs\stats_log.txt file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool StoreStats();

	/**
	* Updates an AVGRATE stat with new values.
	*
	* You must have called RequestCurrentStats and it needs to return successfully via its callback prior to calling this!
	* This call only modifies Steam's in-memory state and is very cheap. Doing so allows Steam to persist the changes even in the event of a game crash or unexpected shutdown.
	* To submit the stats to the server you must call StoreStats.
	* If this is returning false and everything appears correct, then check to ensure that your changes in the App Admin panel of the Steamworks website are published.
	*
	* @param	name				The 'API Name' of the stat. Must not be longer than k_cchStatNameMax.
	* @param	countThisSession	The value accumulation since the last call to this function.
	* @param	sessionLength		The amount of time in seconds since the last call to this function.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats")
		static bool UpdateAvgRateStat(FString name, float countThisSession, float sessionLength);

	/**
	* Uploads a user score to a specified leaderboard.
	*
	* Details are optional game-defined information which outlines how the user got that score. For example if it's a racing style time based leaderboard 
	* you could store the timestamps when the player hits each checkpoint. If you have collectibles along the way you could use bit fields as booleans to store the items the player picked up in the playthrough.
	* Uploading scores to Steam is rate limited to 10 uploads per 10 minutes and you may only have one outstanding call to this function at a time.
	*
	* @param	steamLeaderboard		A leaderboard handle obtained from FindLeaderboard or FindOrCreateLeaderboard.
	* @param	uploadScoreMethod		Do you want to force the score to change, or keep the previous score if it was better?
	* @param	score					The score to upload.
	* @param	scoreDetails			Optional: Array containing the details surrounding the unlocking of this score.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|UserStats", meta = (AutoCreateRefTerm = "callback"))
		void UploadLeaderboardScore(const FOnUploadLeaderboardScore& callback, FSteamLeaderboard steamLeaderboard, ESteamLeaderboardUploadScoreMethod uploadScoreMethod, int32 score, TArray<int32> scoreDetails);

private:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Callbacks
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	STEAM_CALLBACK_MANUAL(UUserStats, OnUserAchievementIconFetched, UserAchievementIconFetched_t, OnUserAchievementIconFetchedCallback);
	STEAM_CALLBACK_MANUAL(UUserStats, OnUserStatsReceived, UserStatsReceived_t, OnUserStatsReceivedCallback);
	STEAM_CALLBACK_MANUAL(UUserStats, OnUserStatsStored, UserStatsStored_t, OnUserStatsStoredCallback);
	STEAM_CALLBACK_MANUAL(UUserStats, OnUserAchievementStored, UserAchievementStored_t, OnUserAchievementStoredCallback);
	STEAM_CALLBACK_MANUAL(UUserStats, OnUserStatsUnloaded, UserStatsUnloaded_t, OnUserStatsUnloadedCallback);
};
