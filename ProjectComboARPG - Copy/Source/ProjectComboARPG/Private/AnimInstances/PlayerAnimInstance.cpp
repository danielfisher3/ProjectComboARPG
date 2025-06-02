// Fill out your copyright notice in the Description page of Project Settings.


#include "AnimInstances/PlayerAnimInstance.h"
#include "Characters/PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

UPlayerAnimInstance::UPlayerAnimInstance() :
	/*Variable Initialization*/
	Speed(0.f),
	bIsInAir(false),
	bIsAccelerating(false)
	/*<Variable Initialization>*/
{
}

/**Updates Animation Properties*/
void UPlayerAnimInstance::UpdateAnimProperties(float DeltaTime)
{
	/*Get Player Character Ref if null*/
	if (PLChar == nullptr) 
	{
		PLChar = Cast<APlayerCharacter>(TryGetPawnOwner());
	}

	/*Player Character Ref is Valid*/
	if (PLChar) 
	{
		/*Set Speed*/
		FVector PLVelocity{ PLChar->GetVelocity() };
		PLVelocity.Z = 0.f;
		Speed = PLVelocity.Size();

		/*Set Is In Air*/
		bIsInAir = PLChar->GetCharacterMovement()->IsFalling();

		/*Set Acceleration*/
		if (PLChar->GetCharacterMovement()->GetCurrentAcceleration().Size() > 0) 
		{
			bIsAccelerating = true;
		}
		else 
		{
			bIsAccelerating = false;
		}
	}
}

/**On Anim Instance Initialize*/
void UPlayerAnimInstance::NativeInitializeAnimation()
{
	/*Attempt to get Ref to Player Character*/
	PLChar = Cast<APlayerCharacter>(TryGetPawnOwner());
}
