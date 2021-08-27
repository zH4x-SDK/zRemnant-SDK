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

// Function AOE_Action_HiveCannon_Projectile_Explosion.AOE_Action_HiveCannon_Projectile_Explosion_C.ModifyDamage
// ()
void UAOE_Action_HiveCannon_Projectile_Explosion_C::ModifyDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function AOE_Action_HiveCannon_Projectile_Explosion.AOE_Action_HiveCannon_Projectile_Explosion_C.ModifyDamage");

	UAOE_Action_HiveCannon_Projectile_Explosion_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
