// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EPWAbilityInputID : uint8
{
	// 0 None
	None			UMETA(DisplayName = "None"),
	// 1 Confirm
	Confirm			UMETA(DisplayName = "Confirm"),
	// 2 Cancel
	Cancel			UMETA(DisplayName = "Cancel"),
	// 3 LMB
	LMB				UMETA(DisplayName = "LMB"),
	// 4 RMB
	RMB				UMETA(DisplayName = "RMB"),
	// 5 Q Attack
	QAttack			UMETA(DisplayName = "Q Attack"),
	// 6 E Attack
	EAttack			UMETA(DisplayName = "E Attack"),
	// 7 R Attack
	RAttack			UMETA(DisplayName = "R Attack"),
	// 8 Num 1
	Slot1			UMETA(DisplayName = "Consumable Slot 1"),
	// 9 Num 2
	Slot2			UMETA(DisplayName = "Consumable Slot 2"),
	// 10 Num 3
	Slot3			UMETA(DisplayName = "Consumable Slot 3"),
	// 11 Interact
	Interact		UMETA(DisplayName = "Interact")

};