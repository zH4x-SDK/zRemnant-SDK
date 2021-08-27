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

// Function Mod_ColdSpear_Projectile.Mod_ColdSpear_Projectile_C.MC_ExplosionFX
// ()
void AMod_ColdSpear_Projectile_C::MC_ExplosionFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear_Projectile.Mod_ColdSpear_Projectile_C.MC_ExplosionFX");

	AMod_ColdSpear_Projectile_C_MC_ExplosionFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_ColdSpear_Projectile.Mod_ColdSpear_Projectile_C.MC_BuildupFX
// ()
void AMod_ColdSpear_Projectile_C::MC_BuildupFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear_Projectile.Mod_ColdSpear_Projectile_C.MC_BuildupFX");

	AMod_ColdSpear_Projectile_C_MC_BuildupFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_ColdSpear_Projectile.Mod_ColdSpear_Projectile_C.OnProjectileHit
// ()
void AMod_ColdSpear_Projectile_C::OnProjectileHit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear_Projectile.Mod_ColdSpear_Projectile_C.OnProjectileHit");

	AMod_ColdSpear_Projectile_C_OnProjectileHit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_ColdSpear_Projectile.Mod_ColdSpear_Projectile_C.ExecuteUbergraph_Mod_ColdSpear_Projectile
// ()
void AMod_ColdSpear_Projectile_C::ExecuteUbergraph_Mod_ColdSpear_Projectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ColdSpear_Projectile.Mod_ColdSpear_Projectile_C.ExecuteUbergraph_Mod_ColdSpear_Projectile");

	AMod_ColdSpear_Projectile_C_ExecuteUbergraph_Mod_ColdSpear_Projectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
