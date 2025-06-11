// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/PlayerCharacter.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "PlayerComponents/PlayerCombatComp.h"
#include "PlayerComponents/PlayerStatsComponent.h"



APlayerCharacter::APlayerCharacter():
	/*Variable Initialization*/
	BaseLookUpRate(45.f),
	BaseTurnRate(45.f),
	BaseMovementSpeed(600.f),
	PlayerStatus(EPlayerStatus::EPS_Unoccupied),
	DodgeForce(500.f)
	
{
 	
	PrimaryActorTick.bCanEverTick = true;

	/*Create Components and Set Controller Values*/
	/*Set Character Contoller Rotational values*/
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
	bUseControllerRotationYaw = false;

	GetCharacterMovement()->bOrientRotationToMovement = true;

	/*Create Camera / Camera Boom Components*/
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera Boom"));
	CameraBoom->SetupAttachment(GetRootComponent());
	CameraBoom->TargetArmLength = 300.f;
	CameraBoom->bUsePawnControlRotation = true;
	CameraBoom->SocketOffset = FVector(0.f, 20.f, 60.f);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
	Camera->bUsePawnControlRotation = false;

	/*Create Actor Components*/
	//PlayerCombatComp = CreateDefaultSubobject<UPlayerCombatComp>(TEXT("PlayerCombatComp"));
	//PlayerStatsComp = CreateDefaultSubobject<UPlayerStatsComponent>(TEXT("PlayerStatsComp"));
	/*<Create Components and Set Controller Values>*/
}



void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	InitializeEnhancedInputSubSystem();

}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	PlayerStatusManager();
	
}

/**Sets up input bindings*/
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = CastChecked<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MovementAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Move);
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Look);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Jump);
		EnhancedInputComponent->BindAction(DodgeAction, ETriggerEvent::Triggered, this, &APlayerCharacter::Dodge);
		EnhancedInputComponent->BindAction(LightAttackAction, ETriggerEvent::Triggered, this, &APlayerCharacter::LightAttack);
		EnhancedInputComponent->BindAction(HeavyAttackAction, ETriggerEvent::Triggered, this, &APlayerCharacter::HeavyAttack);
		EnhancedInputComponent->BindAction(LightSkillAttackAction, ETriggerEvent::Started, this, &APlayerCharacter::LightSkillAttack);
		EnhancedInputComponent->BindAction(HeavySkillAttackAction, ETriggerEvent::Started, this, &APlayerCharacter::HeavySkillAttack);
		
	}

}

/**Initialize Enhanced Input System and Subsystems*/
void APlayerCharacter::InitializeEnhancedInputSubSystem()
{
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(CharContext, 0);
		}

	}
}

/**Checks if Player Can change statuses for Jump and Dodge*/
bool APlayerCharacter::CheckIfCanChangePlayerStatusToJumpOrDodge()
{
	/*Can Change to Jump or Dodge if character is not in air and is not currently in an action*/
	if (!GetCharacterMovement()->IsFalling() && GetPlayerStatus() == EPlayerStatus::EPS_Unoccupied) return true;

	return false;
}

/**Helps Maintain Order in Player Status Changing*/
void APlayerCharacter::PlayerStatusManager()
{
	/*Eliminates jumping and dodging overwriting each other*/
	//if (GetCharacterMovement()->IsFalling() && GetPlayerStatus()!=EPlayerStatus::EPS_Dodging)SetPlayerStatus(EPlayerStatus::EPS_Falling);
	/*Checks if player is in a status where they can jump*/
	bCanJump = CheckIfCanChangePlayerStatusToJumpOrDodge();
	/*Checks if player is in a status where they can Dodge*/
	bCanDodge = CheckIfCanChangePlayerStatusToJumpOrDodge();
}

/**Move functionality for the player*/
void APlayerCharacter::Move(const FInputActionValue& Value)
{
	/*Make sure player is not in the middle of another action*/
	if (GetPlayerStatus()== EPlayerStatus::EPS_Unoccupied) 
	{
		/*Ref for For Input Value*/
		const FVector2D MovementVector = Value.Get<FVector2D>();

		/*Ref for For Rotational Value*/
		const FRotator Rotation = Controller->GetControlRotation();

		/*Ref for Yaw Rotation*/
		const FRotator YawRotation(0.f, Rotation.Yaw, 0.f);

		//Create FWD dir for movement from a Rotational Matrix based on YAW and X axis
		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		//Move character based off of Rot Matrix
		AddMovementInput(ForwardDirection, MovementVector.Y);

		//Create FWD dir for movement from a Rotational Matrix based on YAW and Y axis
		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		//Move character based off of Rot Matrix
		AddMovementInput(RightDirection, MovementVector.X);
	}
	
}

/**Look functionality for the player*/
void APlayerCharacter::Look(const FInputActionValue& Value)
{
	/*Ref to Input Value*/
	const FVector2D LookAxisVector = Value.Get<FVector2D>();

	/*Add the values based on Y* Rate* Delta Time for pitch*/
	AddControllerPitchInput(LookAxisVector.Y * BaseLookUpRate * GetWorld()->GetDeltaSeconds());

	/*Add the values based on X* Rate* Delta Time for yaw*/
	AddControllerYawInput(LookAxisVector.X * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

/**Jump functionality for the player*/
void APlayerCharacter::Jump()
{
	/*Make sure we are able to jump*/
	if (bCanJump) 
	{
		/*Utilize built in function from character internal base class*/
		ACharacter::Jump();
	}
}

/**Dodge functionality for the player*/
void APlayerCharacter::Dodge()
{
	/*Check we are able to dodge*/
	if (bCanDodge)
	{
		/*Set Player Status*/
		SetPlayerStatus(EPlayerStatus::EPS_Dodging);
		/*Ref to Anim instance on Mesh*/
		UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
		/*Make sure Montage is not null and AnimInstance Ref is not null*/
		if (DodgeMontage && AnimInstance)
		{
			/*Play Dodge Montage*/
			AnimInstance->Montage_Play(DodgeMontage);
		}
		/*Move Character in forward direction * Dodge force*/
		LaunchCharacter(GetActorForwardVector() * DodgeForce, true, true);
		
	}
	
}

void APlayerCharacter::LightAttack()
{
	if (PlayerCombatComp == nullptr)return;
	if (GetPlayerStatus() == EPlayerStatus::EPS_Unoccupied) 
	{
		SetPlayerStatus(EPlayerStatus::EPS_Attacking);
		switch (PlayerCombatComp->GetWeaponStatus())
		{
		case EPlayerWeaponStatus::EPWS_Unarmed:
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Green, TEXT("Light Attack Unarmed"));
			}
			if (PlayerCombatComp->GetLightAttackUnarmedMontage() != nullptr) 
			{
				UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
				if (PlayerCombatComp->GetLightAttackUnarmedMontage() && AnimInstance)
				{
					AnimInstance->Montage_Play(PlayerCombatComp->GetLightAttackUnarmedMontage());
				}
			}

			break;
		case EPlayerWeaponStatus::EPWS_ArmedMelee:
			break;
		case EPlayerWeaponStatus::EPWS_ArmedRanged:
			break;
		}
	}
	
}

void APlayerCharacter::HeavyAttack()
{
	if (PlayerCombatComp == nullptr)return;
	if (GetPlayerStatus() == EPlayerStatus::EPS_Unoccupied)
	{
		SetPlayerStatus(EPlayerStatus::EPS_Attacking);
		switch (PlayerCombatComp->GetWeaponStatus())
		{
		case EPlayerWeaponStatus::EPWS_Unarmed:
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Green, TEXT("Heavy Attack Unarmed"));
			}
			if (PlayerCombatComp->GetHeavyAttackUnarmedMontage() != nullptr)
			{
				UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
				if (PlayerCombatComp->GetHeavyAttackUnarmedMontage() && AnimInstance)
				{
					AnimInstance->Montage_Play(PlayerCombatComp->GetHeavyAttackUnarmedMontage());
				}
			}

			break;
		case EPlayerWeaponStatus::EPWS_ArmedMelee:
			break;
		case EPlayerWeaponStatus::EPWS_ArmedRanged:
			break;
		}
	}
}

void APlayerCharacter::LightSkillAttack()
{
	if (PlayerCombatComp == nullptr)return;
	if (GetPlayerStatus() == EPlayerStatus::EPS_Unoccupied)
	{
		SetPlayerStatus(EPlayerStatus::EPS_Attacking);
		switch (PlayerCombatComp->GetWeaponStatus())
		{
		case EPlayerWeaponStatus::EPWS_Unarmed:
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Green, TEXT("Light Skill Attack Unarmed"));
			}
			if (PlayerCombatComp->GetLightSkillUnarmedMontage() != nullptr)
			{
				UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
				if (PlayerCombatComp->GetLightSkillUnarmedMontage() && AnimInstance)
				{
					AnimInstance->Montage_Play(PlayerCombatComp->GetLightSkillUnarmedMontage());
				}
			}

			break;
		case EPlayerWeaponStatus::EPWS_ArmedMelee:
			break;
		case EPlayerWeaponStatus::EPWS_ArmedRanged:
			break;
		}
	}
}

void APlayerCharacter::HeavySkillAttack()
{
	if (PlayerCombatComp == nullptr)return;
	if (GetPlayerStatus() == EPlayerStatus::EPS_Unoccupied)
	{
		SetPlayerStatus(EPlayerStatus::EPS_Attacking);
		switch (PlayerCombatComp->GetWeaponStatus())
		{
		case EPlayerWeaponStatus::EPWS_Unarmed:
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(1, 2.f, FColor::Green, TEXT("Heavy Skill Attack Unarmed"));
			}
			if (PlayerCombatComp->GetHeavySkillUnarmedMontage() != nullptr)
			{
				UAnimInstance* AnimInstance = GetMesh()->GetAnimInstance();
				if (PlayerCombatComp->GetHeavySkillUnarmedMontage() && AnimInstance)
				{
					AnimInstance->Montage_Play(PlayerCombatComp->GetHeavySkillUnarmedMontage());
				}
			}

			break;
		case EPlayerWeaponStatus::EPWS_ArmedMelee:
			break;
		case EPlayerWeaponStatus::EPWS_ArmedRanged:
			break;
		}
	}
}





