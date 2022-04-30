// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Hopper/Hopper.h"
#include "Abilities/GameplayAbility.h"
#include "HopperGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class HOPPER_API UHopperGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UHopperGameplayAbility();

	// Способность активируется при нажатии кнопки ввода
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Abilities")
	EHopperAbilityInputID AbilityInputID = EHopperAbilityInputID::Cancel;
};
