/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official SteamCore Documentation: https://eeldev.com
*/

#pragma once

#include "CoreMinimal.h"
#include "OnlineAsyncTaskManager.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "SteamCore/Steam.h"
#include "SteamCore/SteamCoreSettings.h"
#include "SteamCoreAsync.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFailure);

class FOnlineAsyncTaskSteamCore : public FOnlineAsyncTaskBasic<class USteamCoreSubsystem>
{
public:
	FOnlineAsyncTaskSteamCore(class USteamCoreSubsystem* subsystem, SteamAPICall_t handle)
		: FOnlineAsyncTaskBasic(subsystem)
		, bInit(false)
		, bTimedOut(false)
		, CallbackHandle(handle)
		, AsyncObject(nullptr)
	{}
	FOnlineAsyncTaskSteamCore(class USteamCoreSubsystem* subsystem, SteamAPICall_t handle, USteamCoreAsyncAction* asyncObject)
		: FOnlineAsyncTaskBasic(subsystem)
		, bInit(false)
		, bTimedOut(false)
		, CallbackHandle(handle)
		, AsyncObject(asyncObject)
	{}

	virtual ~FOnlineAsyncTaskSteamCore() {}
private:
	FOnlineAsyncTaskSteamCore()
		: FOnlineAsyncTaskBasic(NULL)
		, bInit(false)
		, bTimedOut(false)
		, CallbackHandle(k_uAPICallInvalid)
	{}
public:
	bool bInit;
	bool bTimedOut;
	SteamAPICall_t CallbackHandle;
	class USteamCoreAsyncAction* AsyncObject;
protected:
	virtual void Tick() override;
	virtual FString ToString() const override { return "SteamCoreAyncTask"; }
protected:
	float AsyncTimeout = GetDefault<USteamCoreSettings>()->AsyncTaskTimeout;
};

class FOnlineAsyncTaskManagerSteamCore : public FOnlineAsyncTaskManager
{
public:
	FOnlineAsyncTaskManagerSteamCore() { }
	FOnlineAsyncTaskManagerSteamCore(class USteamCoreSubsystem* subsystem) 
		: SteamCoreSubsystem(subsystem)
	{}
	
	virtual ~FOnlineAsyncTaskManagerSteamCore(){}
private:
	class USteamCoreSubsystem* SteamCoreSubsystem;
protected:
	virtual void OnlineTick() override;
};

UCLASS()
class STEAMCORE_API USteamCoreAsyncAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable)
		FOnFailure OnFailure;
public:
	virtual void Activate() override;
	virtual void SetReadyToDestroy() override;
private:
	// Timer to force end task
	FTimerHandle TimerHandle_Timeout;
};