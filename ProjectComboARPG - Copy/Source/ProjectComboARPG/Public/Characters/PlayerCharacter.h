// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputActionValue.h"
#include "PlayerStatus.h"
#include "PlayerCharacter.generated.h"

/*FWD Declaration*/
class UInputMappingContext;
class UInputAction;
class USpringArmComponent;
class UCameraComponent;
class UPlayerCombatComp;
class UPlayerStatsComponent;
class UVaultComp;
class UMotionWarpingComponent;



UCLASS()
class PROJECTCOMBOARPG_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	/*Unreal Internal / Constructors*/
	APlayerCharacter();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	/*<Unreal Internal / Constructors>*/

	/*Input Actions*/
	UPROPERTY(EditAnywhere, Category = "Input")
	UInputMappingContext* CharContext;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* MovementAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LookAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* JumpAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* DodgeAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LightAttackAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* HeavyAttackAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* SkillAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* LightSkillAttackAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* HeavySkillAttackAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* BlockAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* CrouchAction;

	UPROPERTY(EditAnywhere, Category = "Input")
	UInputAction* VaultAction;

	/*<Input Actions>*/


	/*Input action mappings*/
	void Move(const FInputActionValue& Value);

	void Look(const FInputActionValue& Value);

	void InitializeEnhancedInputSubSystem();

	virtual void Jump()override;

	void Dodge();

	void LightAttackInput();

	void HeavyAttackInput();

	void LightSkillAttackInput();

	void HeavySkillAttackInput();

	void BlockInputAction();

	void BlockReleaseAction();

	void CrouchInputAction();

	void VaultInputAction();
	/*<Input action mappings>*/

	
	/**Player Combat Comp*/
	UPROPERTY(EditAnywhere, Category = "Player Combat")
	UPlayerCombatComp* PlayerCombatComp;
	
	/**Player Stats*/
	UPROPERTY(EditAnywhere, Category = "Player Stats")
	UPlayerStatsComponent* PlayerStatsComp;

	/**Vault Comp*/
	UPROPERTY(EditAnywhere, Category = "Player Stats")
	UVaultComp* VaultComponent;

	UMotionWarpingComponent* MotionWarpingComp;

protected:
	
	/*Unreal Internal / Constructors*/
	virtual void BeginPlay() override;
	/*<Unreal Internal / Constructors>*/
	
	void InterpCapsuleHH(float DeltaTime);

private:

	/*Player Status*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player Status Or State", meta = (AllowPrivateAccess = "true"))
	EPlayerStatus PlayerStatus;
	/*<Player Status>*/

	/*Camera Components/ Variables*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera Variables", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera Variables", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* Camera;
	/*<Camera Components/ Variables>*/

	/*Movement/ Looking*/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Variables", meta = (AllowPrivateAccess = "true"))
	float BaseLookUpRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Variables", meta = (AllowPrivateAccess = "true"))
	float BaseTurnRate;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Variables", meta = (AllowPrivateAccess = "true"))
	float BaseMovementSpeed;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Movement Variables", meta = (AllowPrivateAccess = "true"))
	float BaseCrouchSpeed;
	/*<Movement/ Looking>*/

	/*Jumping*/
	UPROPERTY(VisibleAnywhere, Category = "Jumping", meta = (AllowPrivateAccess = "true"))
	bool bCanJump;
	/*<Jumping>*/

	/*Dodging*/
	UPROPERTY(VisibleAnywhere, Category = "Dodging", meta = (AllowPrivateAccess = "true"))
	bool bCanDodge;


	/**Dodge Montage*/
	UPROPERTY(EditAnywhere, Category = "Dodging", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* DodgeMontage;
	/*<Dodging>*/


	/*Crouching*/
	UPROPERTY(VisibleAnywhere, Category = "Crouch")
	bool bCrouching;

	UPROPERTY(EditAnywhere, Category = "Crouch", meta = (AllowPrivateAccess = "true"))
	float StandingCapsuleHH = 88.f;

	UPROPERTY(EditAnywhere, Category = "Crouch", meta = (AllowPrivateAccess = "true"))
	float CrouchingCapsuleHH = 44.f;
	
	/*<Crouching>*/

	/*Private FUNCTIONS*/

	bool CheckIfCanChangePlayerStatusToJumpOrDodge();

	void PlayerStatusManager();

public:
	/*Getters and Setters*/
	FORCEINLINE EPlayerStatus GetPlayerStatus()const { return PlayerStatus; }

	FORCEINLINE UPlayerCombatComp* GetPlayerCombatComp()const { return PlayerCombatComp; }

	FORCEINLINE bool GetCrouching()const { return bCrouching; }

	FORCEINLINE UMotionWarpingComponent* GetMotionWarpingComp()const { return MotionWarpingComp; }

	UFUNCTION(BlueprintCallable)
	void SetPlayerStatus(EPlayerStatus NewStatus) { PlayerStatus = NewStatus; }


	
};
