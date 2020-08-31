/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/ISteamInput
*/

#pragma once

#include "CoreMinimal.h"
#include "SteamCore/SteamCoreModule.h"
#include "InputTypes.h"
#include "Input.generated.h"

UCLASS()
class STEAMCORE_API UInput : public USteamCoreSubsystem
{
	GENERATED_BODY()
public:
	UInput() {SubsystemType = ESubsystem::Input;}
public:
	void Initialize(FSubsystemCollectionBase& Collection) override;
	void Deinitialize() override;
public:
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
	//		Steam API Functions
	// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //

	/**
	* Lookup the handle for an Action Set. Best to do this once on startup, and store the handles for all future API calls.
	*
	* @param	actionSetName	The string identifier of an action set defined in the game's VDF file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		FInputActionSetHandle GetActionSetHandle(FString actionSetName);
	
	/**
	* Reconfigure the controller to use the specified action set (ie "Menu", "Walk", or "Drive").
	*
	* This is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.
	*
	* @param	handle				The handle of the controller you want to activate an action set for.
	* @param	actionSetHandle		The handle of the action set you want to activate.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		void ActivateActionSet(FInputHandle handle, FInputActionSetHandle actionSetHandle);
	
	/**
	* Get the currently active action set for the specified controller.
	*
	* @param	handle	The handle of the controller you want to query.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		FInputActionSetHandle GetCurrentActionSet(FInputHandle handle);

	/**
	* Reconfigure the controller to use the specified action set layer.
	*
	* @param	handle					The handle of the controller you want to activate an action set layer for.
	* @param	actionSetLayerHandle	The handle of the action set layer you want to activate.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		void ActivateActionSetLayer(FInputHandle handle, FInputActionSetHandle actionSetLayerHandle);
	
	/**
	* Reconfigure the controller to stop using the specified action set layer.
	*
	* @param	handle					The handle of the controller you want to deactivate an action set layer for.
	* @param	actionSetLayerHandle	The handle of the action set layer you want to deactivate.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		void DeactivateActionSetLayer(FInputHandle handle, FInputActionSetHandle actionSetLayerHandle);
	
	/**
	* Reconfigure the controller to stop using all action set layers.
	*
	* @param	handle	The handle of the controller you want to deactivate all action set layers for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		void DeactivateAllActionSetLayers(FInputHandle handle);
	
	/**
	* Fill an array with all of the currently active action set layers for a specified controller handle.
	*
	* @param	handle		The handle of the controller you want to deactivate all action set layers for.
	* @param	data		This must point to a STEAM_INPUT_MAX_COUNT sized array of InputHandle_t.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		int32 GetActiveActionSetLayers(FInputHandle handle, TArray<FInputActionSetHandle>& data);
	
	/**
	* Get the handle of the specified digital action.
	*
	* @param	pszActionName	The string identifier of the digital action defined in the game's VDF file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		FInputDigitalActionHandle GetDigitalActionHandle(FString pszActionName);
	
	/**
	* Returns the current state of the supplied digital game action.
	*
	* @param	handle					The handle of the controller you want to query.
	* @param	digitalActionHandle		The handle of the digital action you want to query.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		FInputDigitalActionData GetDigitalActionData(FInputHandle handle, FInputDigitalActionHandle digitalActionHandle);
	
	/**
	* Get the origin(s) for a digital action within an action set by filling originsOut with EInputActionOrigin handles. Use this to display the appropriate on-screen prompt for the action.
	*
	* @param	handle					The handle of the controller you want to query.
	* @param	actionSetHandle			The handle of the action set you want to query.
	* @param	digitalActionHandle		The handle of the digital aciton you want to query.
	* @param	originsOut				A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin handles.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		int32 GetDigitalActionOrigins(FInputHandle handle, FInputActionSetHandle actionSetHandle, FInputDigitalActionHandle digitalActionHandle, TArray<ESteamCoreInputActionOrigin>& originsOut);
	
	/**
	* Get the handle of the specified Analog action.
	*
	* @param	pszActionName		The string identifier of the analog action defined in the game's VDF file.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		FInputAnalogActionHandle GetAnalogActionHandle(FString pszActionName);
	
	/**
	* Returns the current state of the supplied analog game action.
	*
	* @param	handle					The handle of the controller you want to query.
	* @param	analogActionHandle		The handle of the analog action you want to query.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		FInputAnalogActionData GetAnalogActionData(FInputHandle handle, FInputAnalogActionHandle analogActionHandle);
	
	/**
	* Get the origin(s) for an analog action within an action set by filling originsOut with EInputActionOrigin handles. Use this to display the appropriate on-screen prompt for the action.
	*
	* @param	handle					The handle of the controller you want to query.
	* @param	actionSetHandle			The handle of the action set you want to query.
	* @param	analogActionHandle		The handle of the analog action you want to query.
	* @param	originsOut				A STEAM_INPUT_MAX_ORIGINS sized array of EInputActionOrigin handles.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		int32 GetAnalogActionOrigins(FInputHandle handle, FInputActionSetHandle actionSetHandle, FInputAnalogActionHandle analogActionHandle, TArray<ESteamCoreInputActionOrigin>& originsOut);
	
	/**
	* Get a local path to art for on-screen glyph for a particular origin.
	*
	* @param	origin
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		FString GetGlyphForActionOrigin(ESteamCoreInputActionOrigin origin);
	
	/**
	* Returns a localized string (from Steam's language setting) for the specified origin.
	*
	* @param	origin
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		FString GetStringForActionOrigin(ESteamCoreInputActionOrigin origin);
	
	/**
	* Stops the momentum of an analog action (where applicable, ie a touchpad w/ virtual trackball settings).
	*
	* @param	handle		The handle of the controller to affect.
	* @param	eAction		The analog action to stop momentum for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		void StopAnalogActionMomentum(FInputHandle handle, FInputAnalogActionHandle eAction);
	
	/**
	* Returns raw motion data for the specified controller.
	*
	* @param	handle	The handle of the controller you want to get motion data for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		FInputMotionData GetMotionData(FInputHandle handle);
	
	/**
	* Trigger a vibration event on supported controllers.
	*
	* @param	handle			The handle of the controller to affect.
	* @param	leftSpeed		The intensity value for the left rumble motor.
	* @param	rightSpeed		The intensity value of the right rumble motor.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		void TriggerVibration(FInputHandle handle, uint8 leftSpeed, uint8 rightSpeed);
	
	/**
	* Set the controller LED color on supported controllers.
	*
	* @param	handle		The handle of the controller to affect.
	* @param	colorR		The red component of the color to set (0-255).
	* @param	colorG		The green component of the color to set (0-255).
	* @param	colorB		The blue component of the color to set (0-255).
	* @param	flags
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		void SetLEDColor(FInputHandle handle, uint8 colorR, uint8 colorG, uint8 colorB, ESteamCoreInputLEDFlag flags);
	
	/**
	* Triggers a (low-level) haptic pulse on supported controllers.
	*
	* @param	handle				The handle of the controller to affect.
	* @param	targetPad			Which haptic touch pad to affect.
	* @param	durationMicroSec	Duration of the pulse, in microseconds (1/1,000,000th of a second)
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		void TriggerHapticPulse(FInputHandle handle, ESteamCoreControllerPad targetPad, uint8 durationMicroSec);
	
	/**
	* Triggers a repeated haptic pulse on supported controllers.
	*
	* @param	handle				The handle of the controller to affect.
	* @param	targetPad			Which haptic touch pad to affect.
	* @param	durationMicroSec	Duration of the pulse, in microseconds (1/1,000,000th of a second).
	* @param	offMicroSec			Duration of the pause between pulses, in microseconds.
	* @param	repeat				Number of times to repeat the usDurationMicroSec / usOffMicroSec duty cycle.
	* @param	flags				Currently unused and reserved for future use.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		void TriggerRepeatedHapticPulse(FInputHandle handle, ESteamCoreControllerPad targetPad, uint8 durationMicroSec, uint8 offMicroSec, uint8 repeat, uint8 flags);
	
	/**
	* Invokes the Steam overlay and brings up the binding screen.
	*
	* @param	handle	The handle of the controller you want to bring up the binding screen for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		bool ShowBindingPanel(FInputHandle handle);
	
	/**
	* Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, XBox 360 controller, PS4 controller, etc. For more details, see Steam's Supported Controller Database.
	*
	* @param	handle	The handle of the controller whose input type (device model) you want to query
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		ESteamCoreInputType GetInputTypeForHandle(FInputHandle handle);
	
	/**
	* Returns the associated controller handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the controller type of a controller using Steam Input Gamepad Emulation.
	*
	* @param	index	The index of the emulated gamepad you want to get a controller handle for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		FInputHandle GetControllerForGamepadIndex(int32 index);
	
	/**
	* Returns the associated gamepad index for the specified controller, if emulating a gamepad.
	*
	* @param	handle		The handle of the controller you want to get a gamepad index for.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		int32 GetGamepadIndexForController(FInputHandle handle);
	
	/**
	* Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index
	*
	* @param	origin
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		FString GetStringForXboxOrigin(ESteamCoreXboxOrigin origin);
	
	/**
	* Returns the associated gamepad index for the specified controller, if emulating a gamepad or -1 if not associated with an Xinput index
	*
	* @param	origin
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		FString GetGlyphForXboxOrigin(ESteamCoreXboxOrigin origin);
	
	/**
	* Get an action origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin
	*
	* @param	handle		The handle of the controller to affect. You can use GetControllerForGamepadIndex to get this handle
	* @param	origin		This is the button you want to get the image for ex: k_EXboxOrigin_A
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		ESteamCoreInputActionOrigin GetActionOriginFromXboxOrigin(FInputHandle handle, ESteamCoreXboxOrigin origin);
	
	/**
	* Convert an origin to another controller type - for inputs not present on the other controller type this will return k_EInputActionOrigin_None
	*
	* When a new input type is added you will be able to pass in k_ESteamInputType_Unknown and the closest origin that your version of the SDK recognized will be returned
	* ex: if a Playstation 5 controller was released this function would return Playstation 4 origins.
	*
	* @param	destinationInputType
	* @param	sourceOrigin
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		ESteamCoreInputActionOrigin TranslateActionOrigin(ESteamCoreInputType destinationInputType, ESteamCoreInputActionOrigin sourceOrigin);
	
	/**
	* Get's the major and minor device binding revisions for Steam Input API configurations. Minor revisions are for small changes such as adding a new option action or updating localization in the configuration. When updating a Minor revision only one new configuration needs to be update with the "Use Action Block" flag set. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree that older configurations are no longer usable. When a user's binding disagree's with the major revision of the current official configuration Steam will forcibly update the user to the new configuration. New configurations will need to be made for every controller when updating the Major revision.
	*
	* @param	handle		The handle of the controller to query.
	* @param	major		Pointer to int that Major binding revision will be populated into
	* @param	minor		Pointer to int that Minor binding revision will be populated into
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		bool GetDeviceBindingRevision(FInputHandle handle, int32& major, int32& minor);
	
	/**
	* Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions
	*
	* @param	handle The handle of the controller to query.
	*/
	UFUNCTION(BlueprintCallable, Category = "SteamCore|Input")
		int32 GetRemotePlaySessionID(FInputHandle handle);

};
