/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official EOSCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "OnlineSubsystemTypes.h"
#include "IpConnection.h"
#include "SteamCoreNetConnection.generated.h"

UCLASS(transient, config = Engine)
class ONLINESUBSYSTEMSTEAMCORE_API USteamCoreNetConnection : public UIpConnection
{
	GENERATED_BODY()
};

