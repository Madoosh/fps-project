/**
* Copyright (C) 2017-2020 | Dry Eel Development
*
* Official Steamworks Documentation: https://partner.steamgames.com/doc/api/
*/

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateStyle.h"

class FSteamCoreEditorStyle
{
public:
	static void Initialize();
	static void Shutdown();
	static void ReloadTextures();
	static const ISlateStyle& Get();
	static FName GetStyleSetName();
private:
	static TSharedRef< class FSlateStyleSet > Create();
private:
	static TSharedPtr< class FSlateStyleSet > StyleInstance;
};