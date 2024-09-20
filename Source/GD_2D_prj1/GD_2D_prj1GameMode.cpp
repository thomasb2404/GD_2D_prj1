// Copyright Epic Games, Inc. All Rights Reserved.

#include "GD_2D_prj1GameMode.h"
#include "GD_2D_prj1Character.h"

AGD_2D_prj1GameMode::AGD_2D_prj1GameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = AGD_2D_prj1Character::StaticClass();	
}
