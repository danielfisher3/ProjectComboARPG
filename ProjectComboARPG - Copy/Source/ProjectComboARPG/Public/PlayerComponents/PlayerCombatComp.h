// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerCombatStatus.h"
#include "PlayerCombatComp.generated.h"

//FWD Declaration
class UAnimMontage;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECTCOMBOARPG_API UPlayerCombatComp : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	/*Unreal Internal / Constructors*/
	UPlayerCombatComp();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	/*<Unreal Internal / Constructors>*/

protected:
	/*Unreal Internal / Constructors*/
	virtual void BeginPlay() override;
	/*<Unreal Internal / Constructors>*/

	
private:

	/*PlayerWeaponStatus*/
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite, Category = "Weapon", meta = (AllowPrivateAccess = "true"))
	EPlayerWeaponStatus WeaponStatus;
	/*<PlayerWeaponStatus>*/

	/*Attack Montages*/
	UPROPERTY(EditAnywhere, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* LightAttackMontageUnarmed;

	UPROPERTY(EditAnywhere, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HeavyAttackMontageUnarmed;

	UPROPERTY(EditAnywhere, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* LightSkillAttackMontageUnarmed;

	UPROPERTY(EditAnywhere, Category = "Attacks", meta = (AllowPrivateAccess = "true"))
	UAnimMontage* HeavySkillAttackMontageUnarmed;
	/*<Attack Montages>*/

		
public:
	/*Getters and Setters*/
	FORCEINLINE EPlayerWeaponStatus GetWeaponStatus()const { return WeaponStatus; }
	FORCEINLINE UAnimMontage* GetLightAttackUnarmedMontage()const { return LightAttackMontageUnarmed; }
	FORCEINLINE UAnimMontage* GetHeavyAttackUnarmedMontage()const { return HeavyAttackMontageUnarmed; }
	FORCEINLINE UAnimMontage* GetLightSkillUnarmedMontage()const { return LightSkillAttackMontageUnarmed; }
	FORCEINLINE UAnimMontage* GetHeavySkillUnarmedMontage()const { return HeavySkillAttackMontageUnarmed; }
	/*<Getters and Setters>*/
};
