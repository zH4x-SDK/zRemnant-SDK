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

// Function Action_AOE_Mod_ColdSpear.Action_AOE_Mod_ColdSpear_C.OnActionStart
// ()
void UAction_AOE_Mod_ColdSpear_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_ColdSpear.Action_AOE_Mod_ColdSpear_C.OnActionStart");

	UAction_AOE_Mod_ColdSpear_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Mod_ColdSpear.Action_AOE_Mod_ColdSpear_C.ExecuteUbergraph_Action_AOE_Mod_ColdSpear
// ()
void UAction_AOE_Mod_ColdSpear_C::ExecuteUbergraph_Action_AOE_Mod_ColdSpear()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_ColdSpear.Action_AOE_Mod_ColdSpear_C.ExecuteUbergraph_Action_AOE_Mod_ColdSpear");

	UAction_AOE_Mod_ColdSpear_C_ExecuteUbergraph_Action_AOE_Mod_ColdSpear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
