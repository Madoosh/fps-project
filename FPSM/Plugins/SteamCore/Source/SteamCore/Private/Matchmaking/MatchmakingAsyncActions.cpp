/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamMatchmaking
*/

#include "Matchmaking/MatchmakingAsyncActions.h"
#include "Matchmaking/MatchmakingAsyncTasks.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingAsyncActionCreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreMatchmakingAsyncActionCreateLobby* USteamCoreMatchmakingAsyncActionCreateLobby::CreateLobbyAsync(UObject* WorldContextObject, ESteamLobbyType lobbyType, int32 maxMembers)
{
	if (SteamMatchmaking())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreMatchmakingAsyncActionCreateLobby>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreMatchmakingCreateLobby(m_Subsystem, m_AsyncObject, static_cast<ELobbyType>(lobbyType), maxMembers);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}

	return nullptr;
}

void USteamCoreMatchmakingAsyncActionCreateLobby::HandleCallback(const FCreateLobbyData& data, bool bWasSuccessful)
{
	const FCreateLobbyData m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingAsyncActionCreateLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreMatchmakingAsyncActionRequestLobbyList* USteamCoreMatchmakingAsyncActionRequestLobbyList::RequestLobbyListAsync(UObject* WorldContextObject)
{
	if (SteamMatchmaking())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreMatchmakingAsyncActionRequestLobbyList>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreRequestLobbyList(m_Subsystem, m_AsyncObject);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}

	return nullptr;
}

void USteamCoreMatchmakingAsyncActionRequestLobbyList::HandleCallback(const FLobbyMatchList& data, bool bWasSuccessful)
{
	const FLobbyMatchList m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreMatchmakingAsyncActionJoinLobby
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreMatchmakingAsyncActionJoinLobby* USteamCoreMatchmakingAsyncActionJoinLobby::JoinLobbyAsync(UObject* WorldContextObject, FSteamID steamIDLobby)
{
	if (SteamMatchmaking())
	{
		auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
		auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();

		auto* m_AsyncObject = NewObject<USteamCoreMatchmakingAsyncActionJoinLobby>();
		auto* m_Task = new FOnlineAsyncTaskSteamCoreJoinLobby(m_Subsystem, m_AsyncObject, steamIDLobby);
		m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
		m_Subsystem->QueueAsyncTask(m_Task);
		m_AsyncObject->Activate();

		return m_AsyncObject;
	}
	else
	{
		LogError("Steam is not loaded!");

		if (SteamCoreDebugging())
		{
			USteamUtilities::InvokeSteamMessage(ESteamMessageType::EWarning, FString::Printf(TEXT("[%s] Steam is not loaded!"), *FString(__FUNCTION__)));
		}
	}

	return nullptr;
}

void USteamCoreMatchmakingAsyncActionJoinLobby::HandleCallback(const FJoinLobbyData& data, bool bWasSuccessful)
{
	const FJoinLobbyData m_Data = data;

	if (bWasSuccessful)
		OnSuccess.Broadcast(m_Data);
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreCreateSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreCreateSession::USteamCoreCreateSession()
	: Delegate(FOnCreateSessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCompleted))
{
}

USteamCoreCreateSession* USteamCoreCreateSession::CreateSteamCoreSession(UObject* WorldContextObject, FName sessionName /* = "SteamCoreSession" */, int32 numPublicConnections /* = 5 */, int32 numPrivateConnections /* = 0 */, bool bUseLAN /* = false */, bool bAllowInvites /* = true */, bool bUsesPresence /* = true */, bool bAllowJoinViaPresence /* = true */, bool bAllowJoinViaPresenceFriendsOnly /* = false */, bool bAntiCheatProtected /* = false */, bool bUsesStats /* = false */, bool bShouldAdvertise /* = true */)
{
	auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();
	auto* m_AsyncObject = NewObject<USteamCoreCreateSession>();
	m_AsyncObject->RegisterWithGameInstance(m_GameInstance);

	const bool bIsDedicated = IsRunningDedicatedServer();

	m_AsyncObject->SessionName = sessionName;
	m_AsyncObject->SessionSettings.NumPublicConnections = numPublicConnections;
	m_AsyncObject->SessionSettings.NumPrivateConnections = numPrivateConnections;
	m_AsyncObject->SessionSettings.bShouldAdvertise = true;
	m_AsyncObject->SessionSettings.bAllowJoinInProgress = true;
	m_AsyncObject->SessionSettings.bIsLANMatch = bUseLAN;
	m_AsyncObject->SessionSettings.bAllowJoinViaPresence = true;
	m_AsyncObject->SessionSettings.bIsDedicated = bIsDedicated;
	m_AsyncObject->SessionSettings.bUsesPresence = bUsesPresence && !bIsDedicated;
	m_AsyncObject->SessionSettings.bAllowJoinViaPresenceFriendsOnly = bAllowJoinViaPresenceFriendsOnly;
	m_AsyncObject->SessionSettings.bAntiCheatProtected = bAntiCheatProtected;
	m_AsyncObject->SessionSettings.bUsesStats = bUsesStats;
	m_AsyncObject->SessionSettings.bShouldAdvertise = bShouldAdvertise;
	m_AsyncObject->SessionSettings.bAllowInvites = bAllowInvites;

	return m_AsyncObject;
}

void USteamCoreCreateSession::Activate()
{
	bool bSuccess = false;

	const auto m_SubSystem = IOnlineSubsystem::Get();

	if (m_SubSystem)
	{
		IOnlineSessionPtr SessionInt = m_SubSystem->GetSessionInterface();

		if (SessionInt.IsValid())
		{
			DelegateHandle = SessionInt->AddOnCreateSessionCompleteDelegate_Handle(Delegate);

			if (SessionInt->CreateSession(0, SessionName, SessionSettings))
			{
				bSuccess = true;

				if (SteamCoreDebugging())
					UE_LOG(SteamCoreLog, Warning, TEXT("Created session! %s"), *SessionName.ToString());
			}
			else
			{
				if (SteamCoreDebugging())
					UE_LOG(SteamCoreLog, Warning, TEXT("Created session %s failed!"), *SessionName.ToString());
			}
		}
	}

	if (!bSuccess)
		OnCompleted(SessionName, false);
}

void USteamCoreCreateSession::OnCompleted(FName sessionName, bool bSuccessful)
{
	bool bSuccess = false;

	if (SteamCoreDebugging())
		UE_LOG(SteamCoreLog, Warning, TEXT("Create Session %s Complete! %d"), *sessionName.ToString(), bSuccessful);

	const auto m_SubSystem = IOnlineSubsystem::Get();

	if (m_SubSystem)
	{
		IOnlineSessionPtr SessionInt = m_SubSystem->GetSessionInterface();

		if (SessionInt.IsValid() && bSuccessful)
		{
			SessionInt->StartSession(SessionName);
			SessionInt->ClearOnCreateSessionCompleteDelegate_Handle(DelegateHandle);

			bSuccess = true;
		}
	}

	if (bSuccess)
		OnSuccess.Broadcast();
	else
		OnFailure.Broadcast();

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreFindSession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreFindSession::USteamCoreFindSession()
	: Delegate(FOnFindSessionsCompleteDelegate::CreateUObject(this, &ThisClass::OnCompleted))
{
}

USteamCoreFindSession* USteamCoreFindSession::FindSteamCoreSessions(UObject* WorldContextObject, int32 maxResults /* = 50 */, bool bUseLAN /* = false */, ESteamSessionFindType serverType, bool bEmptyServersOnly /* = false */, bool bSecureServersOnly /* = false */)
{
	auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();
	auto* m_AsyncObject = NewObject<USteamCoreFindSession>();
	m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
	m_AsyncObject->MaxResults = maxResults;
	m_AsyncObject->bUseLAN = bUseLAN;
	m_AsyncObject->ServerType = serverType;
	m_AsyncObject->bEmptyServersOnly = bEmptyServersOnly;
	m_AsyncObject->bSecureServersOnly = bSecureServersOnly;

	return m_AsyncObject;
}

void USteamCoreFindSession::Activate()
{
	const auto m_SubSystem = IOnlineSubsystem::Get();

	if (m_SubSystem)
	{
		IOnlineSessionPtr SessionInt = m_SubSystem->GetSessionInterface();

		if (SessionInt.IsValid())
		{
			DelegateHandle = SessionInt->AddOnFindSessionsCompleteDelegate_Handle(Delegate);
			SearchSettings = MakeShareable(new FOnlineSessionSearch);
			SearchSettings->MaxSearchResults = MaxResults;
			SearchSettings->bIsLanQuery = bUseLAN;
			FOnlineSearchSettings& m_Settings = SearchSettings->QuerySettings;

			if (ServerType == ESteamSessionFindType::Listen)
			{
				m_Settings.Set(SEARCH_PRESENCE, true, EOnlineComparisonOp::Equals);
			}
			else
			{
				m_Settings.Set(SEARCH_DEDICATED_ONLY, 1, EOnlineComparisonOp::Equals);
			}

			if (bEmptyServersOnly)
				m_Settings.Set(SEARCH_EMPTY_SERVERS_ONLY, bEmptyServersOnly ? 1 : 0, EOnlineComparisonOp::Equals);
			if (bSecureServersOnly)
				m_Settings.Set(SEARCH_SECURE_SERVERS_ONLY, bSecureServersOnly ? 1 : 0, EOnlineComparisonOp::Equals);

			if (!SessionInt->FindSessions(0, SearchSettings.ToSharedRef()))
			{
				OnCompleted(false);
			}
		}
	}
}

void USteamCoreFindSession::OnCompleted(bool bSuccessful)
{
	const auto m_SubSystem = IOnlineSubsystem::Get();

	if (m_SubSystem)
	{
		IOnlineSessionPtr SessionInt = m_SubSystem->GetSessionInterface();

		if (SessionInt.IsValid())
		{
			SessionInt->ClearOnFindSessionsCompleteDelegate_Handle(DelegateHandle);

			if (SearchSettings.IsValid())
			{
				if (SteamCoreDebugging())
				{
					UE_LOG(SteamCoreLog, Warning, TEXT("Found sessions: %i"), SearchSettings->SearchResults.Num());
					GEngine->AddOnScreenDebugMessage(5, 15.f, FColor::Green, FString::Printf(TEXT(""), SearchSettings->SearchResults.Num()));
				}

				// Just log the results for now, will need to add a blueprint-compatible search result struct
				for (FOnlineSessionSearchResult& m_Result : SearchSettings->SearchResults)
				{
					FString ResultText = FString::Printf(TEXT("Found a session. Ping is %d"), m_Result.PingInMs);

					FFrame::KismetExecutionMessage(*ResultText, ELogVerbosity::Log);

					FBlueprintSessionResult BPResult;
					BPResult.OnlineResult = m_Result;
					SearchResults.Add(BPResult);
				}
				OnSuccess.Broadcast(SearchResults);
				return;
			}
		}
	}

	SetReadyToDestroy();
}

// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
//		USteamCoreDestroySession
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
USteamCoreDestroySession::USteamCoreDestroySession()
	: Delegate(FOnDestroySessionCompleteDelegate::CreateUObject(this, &ThisClass::OnCompleted))
{
}

USteamCoreDestroySession* USteamCoreDestroySession::DestroySteamCoreSession(UObject* WorldContextObject, FName sessionName /* = "SteamCoreSession" */)
{
	auto* m_GameInstance = WorldContextObject->GetWorld()->GetGameInstance();
	auto* m_Subsystem = m_GameInstance->GetSubsystem<USteamCoreSubsystem>();
	auto* m_AsyncObject = NewObject<USteamCoreDestroySession>();
	m_AsyncObject->RegisterWithGameInstance(m_GameInstance);
	m_AsyncObject->SessionName = sessionName;

	return m_AsyncObject;
}

void USteamCoreDestroySession::Activate()
{
	const auto m_SubSystem = IOnlineSubsystem::Get();

	if (m_SubSystem)
	{
		IOnlineSessionPtr SessionInt = m_SubSystem->GetSessionInterface();

		if (SessionInt.IsValid())
		{
			DelegateHandle = SessionInt->AddOnDestroySessionCompleteDelegate_Handle(Delegate);
			SessionInt->DestroySession(SessionName);

			return;
		}
	}

	OnFailure.Broadcast();
}

void USteamCoreDestroySession::OnCompleted(FName sessionName, bool bWasSuccessful)
{
	const auto m_SubSystem = IOnlineSubsystem::Get();

	if (m_SubSystem)
	{
		IOnlineSessionPtr SessionInt = m_SubSystem->GetSessionInterface();
		
		if (SessionInt.IsValid())
		{
			SessionInt->ClearOnDestroySessionCompleteDelegate_Handle(DelegateHandle);
		}
	}

	if (bWasSuccessful)
	{
		OnSuccess.Broadcast();
	}
	else
	{
		OnFailure.Broadcast();
	}

	SetReadyToDestroy();
}