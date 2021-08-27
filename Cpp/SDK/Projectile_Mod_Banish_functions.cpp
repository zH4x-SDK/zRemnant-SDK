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

// Function Projectile_Mod_Banish.Projectile_Mod_Banish_C.OnProjectileHit
// ()
void AProjectile_Mod_Banish_C::OnProjectileHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Banish.Projectile_Mod_Banish_C.OnProjectileHit");

	AProjectile_Mod_Banish_C_OnProjectileHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Projectile_Mod_Banish.Projectile_Mod_Banish_C.ExecuteUbergraph_Projectile_Mod_Banish
// ()
void AProjectile_Mod_Banish_C::ExecuteUbergraph_Projectile_Mod_Banish()
{
	static auto fn = UObject::FindObject<UFunction>("Function Projectile_Mod_Banish.Projectile_Mod_Banish_C.ExecuteUbergraph_Projectile_Mod_Banish");

	AProjectile_Mod_Banish_C_ExecuteUbergraph_Projectile_Mod_Banish_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
