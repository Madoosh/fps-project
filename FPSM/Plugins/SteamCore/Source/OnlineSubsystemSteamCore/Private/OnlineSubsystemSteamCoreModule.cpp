/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#include "OnlineSubsystemSteamCoreModule.h"
#include "OnlineSubsystemSteamCore.h"
#include "OnlineSubsystemPrivateSteamCorePCH.h"

IMPLEMENT_MODULE(FOnlineSubsystemSteamCoreModule, OnlineSubsystemSteamCore);

namespace FNetworkProtocolTypes
{
	const FName SteamCore(TEXT("STEAMCORE"));
}

DEFINE_LOG_CATEGORY(LogSteamCoreSubsystem);

/**
 * Class responsible for creating instance(s) of the subsystem
 */
class FOnlineFactorySteamCore : public IOnlineFactory
{
public:
	FOnlineFactorySteamCore() = default;
	virtual ~FOnlineFactorySteamCore()
	{
		DestroySubsystem();
	}

	virtual void DestroySubsystem()
	{
		if (SteamCoreSingleton.IsValid())
		{
			SteamCoreSingleton->Shutdown();
			SteamCoreSingleton = NULL;
		}
	}

	virtual IOnlineSubsystemPtr CreateSubsystem(FName InstanceName)
	{
		bool bCreated = false;

		if (!SteamCoreSingleton)
		{
			SteamCoreSingleton = MakeShared<FOnlineSubsystemSteamCore, ESPMode::ThreadSafe>(InstanceName);
			bCreated = true;
		}

		if (SteamCoreSingleton)
		{
			if (!bCreated)
			{
				// Re-initialize because we didn't construct a new object
				SteamCoreSingleton->ReInit();
			}

			if (SteamCoreSingleton->IsEnabled())
			{
				if (!SteamCoreSingleton->Init())
				{
					UE_LOG_ONLINE(Warning, TEXT("OnlineSubsystemSteamCore failed to initialize!"));
					SteamCoreSingleton->Shutdown();
					SteamCoreSingleton = nullptr;
				}
			}
			else
			{
				UE_LOG_ONLINE(Warning, TEXT("OnlineSubsystemSteamCore is disabled!"));
				SteamCoreSingleton->Shutdown();
				SteamCoreSingleton = nullptr;
			}

			return SteamCoreSingleton;
		}

		return nullptr;
	}
private:
	static FOnlineSubsystemSteamCorePtr SteamCoreSingleton;
};

FOnlineSubsystemSteamCorePtr FOnlineFactorySteamCore::SteamCoreSingleton = nullptr;

void FOnlineSubsystemSteamCoreModule::StartupModule()
{
	FSteamSharedModule& SharedModule = FSteamSharedModule::Get();

	// Load the Steam modules before first call to API
	if (SharedModule.AreSteamDllsLoaded())
	{
		SteamCoreFactory = new FOnlineFactorySteamCore();
		FOnlineSubsystemModule& OSM = FModuleManager::LoadModuleChecked<FOnlineSubsystemModule>("OnlineSubsystem");
		OSM.RegisterPlatformService(STEAMCORE_SUBSYSTEM, SteamCoreFactory);
	}
	else
	{
		UE_LOG_ONLINE(Warning, TEXT("Steam SDK libraries not present at %s or failed to load!"), *SharedModule.GetSteamModulePath());
	}
	
}

void FOnlineSubsystemSteamCoreModule::ShutdownModule()
{
	if (SteamCoreFactory)
	{
		FOnlineSubsystemModule& OSM = FModuleManager::GetModuleChecked<FOnlineSubsystemModule>("OnlineSubsystem");
		OSM.UnregisterPlatformService(STEAMCORE_SUBSYSTEM);
		delete SteamCoreFactory;
		SteamCoreFactory = nullptr;
	}
}