using System.IO;
using UnrealBuildTool;

public class OnlineSubsystemSteamCore : ModuleRules
{
    public OnlineSubsystemSteamCore(ReadOnlyTargetRules Target) : base(Target)
    {
        PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
        PrivatePCHHeaderFile = "Private/OnlineSubsystemPrivateSteamCorePCH.h";

        PublicDependencyModuleNames.AddRange(
        new string[]
            {
                "Core",
                "PacketHandler"
            }
        );
        
        PrivateDependencyModuleNames.AddRange
        (
            new string[]
            {
                "Core",
                "CoreUObject",
                "Engine",
                "Projects",
                "Networking",
                "Sockets",
                "OnlineSubsystem",
                "OnlineSubsystemUtils",
                "Steamworks",
                
            }
        );

        if (Target.Version.MinorVersion >= 24)
        {
            PrivateDependencyModuleNames.AddRange
            (
                new string[]
                {
                    "SteamShared"
                }
            );
        }

        AddEngineThirdPartyPrivateStaticDependencies(Target, "Steamworks");
    }
}
