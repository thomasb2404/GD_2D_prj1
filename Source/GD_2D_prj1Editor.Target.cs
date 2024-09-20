// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class GD_2D_prj1EditorTarget : TargetRules
{
	public GD_2D_prj1EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.Add("GD_2D_prj1");
		bOverrideBuildEnvironment = true;
	}
}
