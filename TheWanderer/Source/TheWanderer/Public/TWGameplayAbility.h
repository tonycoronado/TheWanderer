// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../TheWanderer.h"
#include "Abilities/GameplayAbility.h"
#include "TWGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class THEWANDERER_API UTWGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category="Ability")
	EAbilityInputID AbilityInputID{ EAbilityInputID::None };
	
};
