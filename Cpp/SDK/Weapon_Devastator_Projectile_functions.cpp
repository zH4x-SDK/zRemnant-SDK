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

// Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.IsSprayHit
// ()
void AWeapon_Devastator_Projectile_C::IsSprayHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.IsSprayHit");

	AWeapon_Devastator_Projectile_C_IsSprayHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.ReceiveBeginPlay
// ()
void AWeapon_Devastator_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.ReceiveBeginPlay");

	AWeapon_Devastator_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.ExecuteUbergraph_Weapon_Devastator_Projectile
// ()
void AWeapon_Devastator_Projectile_C::ExecuteUbergraph_Weapon_Devastator_Projectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Devastator_Projectile.Weapon_Devastator_Projectile_C.ExecuteUbergraph_Weapon_Devastator_Projectile");

	AWeapon_Devastator_Projectile_C_ExecuteUbergraph_Weapon_Devastator_Projectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
