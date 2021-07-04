// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ue4Test1 : ModuleRules
{
	public ue4Test1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
