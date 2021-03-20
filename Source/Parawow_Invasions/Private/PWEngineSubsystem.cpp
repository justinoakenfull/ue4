// Fill out your copyright notice in the Description page of Project Settings.


#include "PWEngineSubsystem.h"
#include "AbilitySystemGlobals.h"

void UPWEngineSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	UAbilitySystemGlobals::Get().InitGlobalData();
}
