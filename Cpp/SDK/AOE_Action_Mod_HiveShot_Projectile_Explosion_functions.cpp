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

// Function AOE_Action_Mod_HiveShot_Projectile_Explosion.AOE_Action_Mod_HiveShot_Projectile_Explosion_C.OnActionStart
// ()
void UAOE_Action_Mod_HiveShot_Projectile_Explosion_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AOE_Action_Mod_HiveShot_Projectile_Explosion.AOE_Action_Mod_HiveShot_Projectile_Explosion_C.OnActionStart");

	UAOE_Action_Mod_HiveShot_Projectile_Explosion_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AOE_Action_Mod_HiveShot_Projectile_Explosion.AOE_Action_Mod_HiveShot_Projectile_Explosion_C.ExecuteUbergraph_AOE_Action_Mod_HiveShot_Projectile_Explosion
// ()
void UAOE_Action_Mod_HiveShot_Projectile_Explosion_C::ExecuteUbergraph_AOE_Action_Mod_HiveShot_Projectile_Explosion()
{
	static auto fn = UObject::FindObject<UFunction>("Function AOE_Action_Mod_HiveShot_Projectile_Explosion.AOE_Action_Mod_HiveShot_Projectile_Explosion_C.ExecuteUbergraph_AOE_Action_Mod_HiveShot_Projectile_Explosion");

	UAOE_Action_Mod_HiveShot_Projectile_Explosion_C_ExecuteUbergraph_AOE_Action_Mod_HiveShot_Projectile_Explosion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
