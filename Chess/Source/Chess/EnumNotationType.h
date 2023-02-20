// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EnumNotationType : uint8
{
	None,
	a UMETA(DisplayName = "a"),
	b UMETA(DisplayName = "b"),
	c UMETA(DisplayName = "c"),
	d UMETA(DisplayName = "d"),
	e UMETA(DisplayName = "e"),
	f UMETA(DisplayName = "f"),
	g UMETA(DisplayName = "g"),
	h UMETA(DisplayName = "h")
};
