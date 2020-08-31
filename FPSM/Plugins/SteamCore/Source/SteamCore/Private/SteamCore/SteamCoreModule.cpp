/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official SteamCore Documentation: https://eeldev.com
*/

#include "SteamCore/SteamCoreModule.h"
#include "SteamCore/Steam.h"
#include "SteamCore/SteamCoreAsync.h"
#include "SteamCore/SteamCorePluginPrivatePCH.h"

#define LOCTEXT_NAMESPACE "FSteamCoreModule"

DEFINE_LOG_CATEGORY(SteamCoreLog);
#define STEAM_SDK_ROOT_PATH TEXT("Binaries/ThirdParty/Steamworks")

static void __cdecl SteamworksWarningMessageHook(int Severity, const char *Message)
{
	ESteamMessageType m_MessageType = ESteamMessageType::ENotification;

	switch (Severity)
	{
		case 0:
			m_MessageType = ESteamMessageType::EMessage;
			UE_LOG(SteamCoreLog, Log, TEXT("Steamworks SDK: %s"), UTF8_TO_TCHAR(Message));
			break;
		case 1:
			m_MessageType = ESteamMessageType::EWarning;
			UE_LOG(SteamCoreLog, Warning, TEXT("Steamworks SDK: %s"), UTF8_TO_TCHAR(Message));
			break;
	}

	USteamUtilities::InvokeSteamMessage(m_MessageType, UTF8_TO_TCHAR(Message));
}

void FSteamCoreModule::StartupModule()
{
	OnlineAsyncTaskThreadRunnable = new FOnlineAsyncTaskManagerSteamCore();
	check(OnlineAsyncTaskThreadRunnable);

	OnlineAsyncTaskThread = FRunnableThread::Create(OnlineAsyncTaskThreadRunnable, TEXT("SteamCore"), 128 * 1024, TPri_Normal);
	check(OnlineAsyncTaskThread);
}

void FSteamCoreModule::ShutdownModule()
{
	if (OnlineAsyncTaskThread)
	{
		delete OnlineAsyncTaskThread;
		OnlineAsyncTaskThread = nullptr;
	}

	if (OnlineAsyncTaskThreadRunnable)
	{
		delete OnlineAsyncTaskThreadRunnable;
		OnlineAsyncTaskThreadRunnable = nullptr;
	}
}

static bool bHook = false;
bool FSteamCoreModule::Tick(float DeltaTime)
{
	if (OnlineAsyncTaskThreadRunnable)
	{
		OnlineAsyncTaskThreadRunnable->GameTick();
	}

	if (!bHook) 
	{
		if (GetUtils())
		{
			GetUtils()->SetWarningMessageHook(SteamworksWarningMessageHook);

			bHook = true;
		}
	}

	return true;
}

#undef LOCTEXT_NAMESPACE

IMPLEMENT_MODULE(FSteamCoreModule, SteamCore)

void USteamCoreSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	FSteamCoreModule* m_CoreModule = FModuleManager::Get().GetModulePtr<FSteamCoreModule>("SteamCore");

	if (m_CoreModule)
	{
		OnlineAsyncTaskThreadRunnable = m_CoreModule->OnlineAsyncTaskThreadRunnable;
		OnlineAsyncTaskThread = m_CoreModule->OnlineAsyncTaskThread;
	}
}

void USteamCoreSubsystem::Deinitialize()
{
	OnlineAsyncTaskThreadRunnable = nullptr;
	OnlineAsyncTaskThread = nullptr;
}

bool USteamCoreSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (SubsystemType == ESubsystem::SteamCore) return true;

	bool m_Result = true; 

	if (const USteamCoreSettings* m_Settings = GetDefault<USteamCoreSettings>())
	{
		m_Result = (m_Settings->DisabledSubsystems & (1 << (int32)SubsystemType)) == 0;
	}

#if WITH_EDITOR
	if (m_Result && STEAM_VERSION < 146) 
	{
		if (SubsystemType == ESubsystem::Input || SubsystemType == ESubsystem::NetworkingUtils || SubsystemType == ESubsystem::RemotePlay)
		{
			if (SteamCoreDebugging())
			{
				UE_LOG(SteamCoreLog, Error, TEXT("Subsystem %s is enabled but UNSUPPORTED in this version of Unreal Engine 4! Consider disabling it in the SteamCore Plugin Settings!"), *GetSteamCoreEnumAsString("ESubsystem", SubsystemType));
			}
		}
	}
#endif

	return m_Result;
}

void USteamCoreSubsystem::QueueAsyncTask(class FOnlineAsyncTask* asyncTask)
{
	check(OnlineAsyncTaskThreadRunnable);
	OnlineAsyncTaskThreadRunnable->AddToInQueue(asyncTask);
}

void USteamCoreSubsystem::QueueAsyncOutgoingItem(class FOnlineAsyncItem* asyncItem)
{
	check(OnlineAsyncTaskThreadRunnable);
	OnlineAsyncTaskThreadRunnable->AddToOutQueue(asyncItem);
}