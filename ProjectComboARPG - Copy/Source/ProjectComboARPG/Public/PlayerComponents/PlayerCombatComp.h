// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerCombatStatus.h"
#include "PlayerCombatComp.generated.h"

//FWD Declaration
class UAnimMontage;
class APlayerCharacter;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCOMBOARPG_API UPlayerCombatComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	/*Unreal Internal / Constructors*/
	UPlayerCombatComp();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	/*<Unreal Internal / Constructors>*/

	/*Attacking*/
	void LightAttack();

	void HeavyAttack();

	void HeavySkillAttack();

	void LightSkillAttack();


	/*<Attacking>*/

protected:
	/*Unreal Internal / Constructors*/
	virtual void BeginPlay() override;
	/*<Unreal Internal / Constructors>*/

	
private:
	/*Player Ref*/
	UPROPERTY(VisibleAnywhere)
	APlayerCharacter* PLChar;

	UAnimInstance* PLAnimInstance;
	/*<Player Ref>*/

	/*PlayerWeaponStatus*/
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite, Category = "Weapon", meta = (AllowPrivateAccess = "true"))
	EPlayerWeaponStatus WeaponStatus;
	/*<PlayerWeaponStatus>*/

	/*Attack Montages*/
	UPROPERTY(EditAnywhere, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* LightAttackMontageUnarmed1;

	UPROPERTY(EditAnywhere, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* LightAttackMontageUnarmed2;

	UPROPERTY(EditAnywhere, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* LightAttackMontageUnarmed3;

	UPROPERTY(EditAnywhere, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* LightAttackMontageUnarmed4;

	UPROPERTY(EditAnywhere, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HeavyAttackMontageUnarmed1;

	UPROPERTY(EditAnywhere, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HeavyAttackMontageUnarmed2;

	UPROPERTY(EditAnywhere, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HeavyAttackMontageUnarmed3;

	UPROPERTY(EditAnywhere, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HeavyAttackMontageUnarmed4;

	UPROPERTY(EditAnywhere, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* LightSkillAttackMontageUnarmed1;

	UPROPERTY(EditAnywhere, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HeavySkillAttackMontageUnarmed1;
	/*<Attack Montages>*/

	/*Combo System*/
	UPROPERTY(VisibleAnywhere, Category = "Combo")
	int32 ComboCount;

	UPROPERTY(EditAnywhere, Category = "Combo")
	float ComboWindow = 0.5f;

	UPROPERTY(VisibleAnywhere, Category = "Combo")
	bool bCanAttack = true;

	FTimerHandle ComboTimerHandle;

	void ResetCombo();
	/*Combo System*/


public:
	/*Getters and Setters*/
	FORCEINLINE EPlayerWeaponStatus GetWeaponStatus()const { return WeaponStatus; }
	FORCEINLINE UAnimMontage* GetLightAttackUnarmedMontage()const { return LightAttackMontageUnarmed1; }
	FORCEINLINE UAnimMontage* GetHeavyAttackUnarmedMontage()const { return HeavyAttackMontageUnarmed1; }
	FORCEINLINE UAnimMontage* GetLightSkillUnarmedMontage()const { return LightSkillAttackMontageUnarmed1; }
	FORCEINLINE UAnimMontage* GetHeavySkillUnarmedMontage()const { return HeavySkillAttackMontageUnarmed1; }
	/*<Getters and Setters>*/
};
