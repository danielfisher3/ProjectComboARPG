// Fill out your copyright notice in the Description page of Project Settings.


#include "DTObjectClasses/DTOneHandWeapon.h"

UDTOneHandWeapon::UDTOneHandWeapon()
{
	WeaponName = "DefaultOneHandedWeapon";
	WeaponDamage = 0.f;
	OneHandedWeaponType = EOneHandedWeaponType::EOHWT_MAX;

}

void UDTOneHandWeapon::SetOneHandedWeaponDetails(FString _Name, float _Damage, EOneHandedWeaponType _Type)
{
	WeaponName = _Name;
	WeaponDamage = _Damage;
	OneHandedWeaponType = _Type;
}
