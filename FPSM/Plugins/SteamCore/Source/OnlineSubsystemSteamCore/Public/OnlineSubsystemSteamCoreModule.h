/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/
#pragma once

#include "CoreMinimal.h"

#include "OnlinesubsystemSteamCoreTypes.h"
#include "Modules/ModuleInterface.h"

class ONLINESUBSYSTEMSTEAMCORE_API FOnlineSubsystemSteamCoreModule : public IModuleInterface
{
public:
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	virtual bool SupportsDynamicReloading() override { return false; }
	virtual bool SupportsAutomaticShutdown() override { return false; }
private:
	class FOnlineFactorySteamCore* SteamCoreFactory;
};