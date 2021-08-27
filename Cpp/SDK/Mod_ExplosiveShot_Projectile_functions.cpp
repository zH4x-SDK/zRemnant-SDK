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

// Function Mod_ExplosiveShot_Projectile.Mod_ExplosiveShot_Projectile_C.OnProjectileHit
// ()
void AMod_ExplosiveShot_Projectile_C::OnProjectileHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ExplosiveShot_Projectile.Mod_ExplosiveShot_Projectile_C.OnProjectileHit");

	AMod_ExplosiveShot_Projectile_C_OnProjectileHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_ExplosiveShot_Projectile.Mod_ExplosiveShot_Projectile_C.ExecuteUbergraph_Mod_ExplosiveShot_Projectile
// ()
void AMod_ExplosiveShot_Projectile_C::ExecuteUbergraph_Mod_ExplosiveShot_Projectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ExplosiveShot_Projectile.Mod_ExplosiveShot_Projectile_C.ExecuteUbergraph_Mod_ExplosiveShot_Projectile");

	AMod_ExplosiveShot_Projectile_C_ExecuteUbergraph_Mod_ExplosiveShot_Projectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
