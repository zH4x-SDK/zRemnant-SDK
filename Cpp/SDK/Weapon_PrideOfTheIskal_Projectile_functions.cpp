// Name: Remnant, Version: 1.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Weapon_PrideOfTheIskal_Projectile.Weapon_PrideOfTheIskal_Projectile_C.OnProjectileHit
// ()
void AWeapon_PrideOfTheIskal_Projectile_C::OnProjectileHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_PrideOfTheIskal_Projectile.Weapon_PrideOfTheIskal_Projectile_C.OnProjectileHit");

	AWeapon_PrideOfTheIskal_Projectile_C_OnProjectileHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_PrideOfTheIskal_Projectile.Weapon_PrideOfTheIskal_Projectile_C.ExecuteUbergraph_Weapon_PrideOfTheIskal_Projectile
// ()
void AWeapon_PrideOfTheIskal_Projectile_C::ExecuteUbergraph_Weapon_PrideOfTheIskal_Projectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_PrideOfTheIskal_Projectile.Weapon_PrideOfTheIskal_Projectile_C.ExecuteUbergraph_Weapon_PrideOfTheIskal_Projectile");

	AWeapon_PrideOfTheIskal_Projectile_C_ExecuteUbergraph_Weapon_PrideOfTheIskal_Projectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
