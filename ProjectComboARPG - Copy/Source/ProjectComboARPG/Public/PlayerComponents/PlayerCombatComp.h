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

	void StrongAttack();

	UFUNCTION(BlueprintCallable)
	void LightAttackCombo();

	UFUNCTION(BlueprintCallable)
	void StrongAttackCombo();

	UFUNCTION(BlueprintCallable)
	void StopCombo();

	UFUNCTION()
	void HandleOnMontageNotifyBegin(FName NotifyName, const FBranchingPointNotifyPayload& BranchingPayload);

	UPROPERTY(VisibleAnywhere)
	bool bCanAttack;

	FHitResult MWHit;

	FHitResult LightAttackOneHit;
	FHitResult LightAttackTwoHit;
	FHitResult LightAttackThreeHit;
	FHitResult LightAttackFourHit;

	FHitResult StrongAttackOneHit;
	FHitResult StrongAttackTwoHit;
	FHitResult StrongAttackThreeHit;
	FHitResult StrongAttackFourHit;

	UPROPERTY(EditAnywhere, Category = Damage)
	float LightAttackDamage;

	UPROPERTY(EditAnywhere, Category = Damage)
	float HeavyAttackDamage;
	
	void HeavySkillAttack();

	void LightSkillAttack();

	/*<Attacking>*/

	/*Block*/
	void Block();

	UPROPERTY(VisibleAnywhere)
	bool bBlocking;
	/*<Block>*/

protected:
	/*Unreal Internal / Constructors*/
	virtual void BeginPlay() override;
	/*<Unreal Internal / Constructors>*/

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

	UFUNCTION()
	void UnarmedAttackTrace(FHitResult& HitResult, FName SocketStartName, FName SocketEndName, float SphereRadius);

	UFUNCTION()
	void AttackMotionWarp();

	

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

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	bool bIsAttacking;

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	bool bSaveAttack;

	UPROPERTY(VisibleAnywhere,  meta = (AllowPrivateAccess = "true"))
	int32 LightAttackIndex;

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	int32 HeavyAttackIndex;

	UPROPERTY(VisibleAnywhere, meta = (AllowPrivateAccess = "true"))
	bool bHasAttacked;

	void LightAttackOne();

	void LightAttackTwo();

	void LightAttackThree();

	void LightAttackFour();


	void StrongAttackOne();

	void StrongAttackTwo();

	void StrongAttackThree();

	void StrongAttackFour();

	void SphereTraceForMotionWarp(FHitResult& HitResult);

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float NonTargetLockMWDistance;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = "true"))
	float TargetLockMWDistance;


public:
	/*Getters and Setters*/
	FORCEINLINE EPlayerWeaponStatus GetWeaponStatus()const { return WeaponStatus; }
	FORCEINLINE UAnimMontage* GetLightAttackUnarmedMontage()const { return LightAttackMontageUnarmed1; }
	FORCEINLINE UAnimMontage* GetHeavyAttackUnarmedMontage()const { return HeavyAttackMontageUnarmed1; }
	FORCEINLINE UAnimMontage* GetLightSkillUnarmedMontage()const { return LightSkillAttackMontageUnarmed1; }
	FORCEINLINE UAnimMontage* GetHeavySkillUnarmedMontage()const { return HeavySkillAttackMontageUnarmed1; }
	/*<Getters and Setters>*/
};
