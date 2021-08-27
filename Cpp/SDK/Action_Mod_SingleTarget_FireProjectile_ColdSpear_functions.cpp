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

// Function Action_Mod_SingleTarget_FireProjectile_ColdSpear.Action_Mod_SingleTarget_FireProjectile_ColdSpear_C.GetFiringDirection
// ()
void UAction_Mod_SingleTarget_FireProjectile_ColdSpear_C::GetFiringDirection()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SingleTarget_FireProjectile_ColdSpear.Action_Mod_SingleTarget_FireProjectile_ColdSpear_C.GetFiringDirection");

	UAction_Mod_SingleTarget_FireProjectile_ColdSpear_C_GetFiringDirection_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
