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

// Function AOE_Action_Mod_SporeShot.AOE_Action_Mod_SporeShot_C.OnActionStart
// ()
void UAOE_Action_Mod_SporeShot_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function AOE_Action_Mod_SporeShot.AOE_Action_Mod_SporeShot_C.OnActionStart");

	UAOE_Action_Mod_SporeShot_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function AOE_Action_Mod_SporeShot.AOE_Action_Mod_SporeShot_C.ExecuteUbergraph_AOE_Action_Mod_SporeShot
// ()
void UAOE_Action_Mod_SporeShot_C::ExecuteUbergraph_AOE_Action_Mod_SporeShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function AOE_Action_Mod_SporeShot.AOE_Action_Mod_SporeShot_C.ExecuteUbergraph_AOE_Action_Mod_SporeShot");

	UAOE_Action_Mod_SporeShot_C_ExecuteUbergraph_AOE_Action_Mod_SporeShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
