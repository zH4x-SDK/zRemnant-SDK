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

// Function AOE_Action_Mod_FrozenMist.AOE_Action_Mod_FrozenMist_C.OnActionStart
// ()
void UAOE_Action_Mod_FrozenMist_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AOE_Action_Mod_FrozenMist.AOE_Action_Mod_FrozenMist_C.OnActionStart");

	UAOE_Action_Mod_FrozenMist_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AOE_Action_Mod_FrozenMist.AOE_Action_Mod_FrozenMist_C.ExecuteUbergraph_AOE_Action_Mod_FrozenMist
// ()
void UAOE_Action_Mod_FrozenMist_C::ExecuteUbergraph_AOE_Action_Mod_FrozenMist()
{
	static auto fn = UObject::FindObject<UFunction>("Function AOE_Action_Mod_FrozenMist.AOE_Action_Mod_FrozenMist_C.ExecuteUbergraph_AOE_Action_Mod_FrozenMist");

	UAOE_Action_Mod_FrozenMist_C_ExecuteUbergraph_AOE_Action_Mod_FrozenMist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
