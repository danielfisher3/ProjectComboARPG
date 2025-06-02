// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

//FWD Decalaration
class APlayerCharacter;

UCLASS()
class PROJECTCOMBOARPG_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	/*Unreal Internal / Constructors*/
	UPlayerAnimInstance();

	UFUNCTION(BlueprintCallable)
	void UpdateAnimProperties(float DeltaTime);

	virtual void NativeInitializeAnimation()override;
	/*<Unreal Internal / Constructors*>/

private:

	/*Player Reference*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	APlayerCharacter* PLChar;
	/*<Player Reference>*/

	/*Movement variables*/
	/**Current Speed of the Character*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	float Speed;

	/**Checks if Character in in air*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	bool bIsInAir;

	/**Checks for acceleration of the fwd velocity of the character*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Movement, meta = (AllowPrivateAccess = "true"))
	bool bIsAccelerating;
	/*<Movement variables>*/
	
};
