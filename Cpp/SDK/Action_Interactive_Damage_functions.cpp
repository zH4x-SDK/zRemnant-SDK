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

// Function Action_Interactive_Damage.Action_Interactive_Damage_C.OnActionStart
// ()
void UAction_Interactive_Damage_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Interactive_Damage.Action_Interactive_Damage_C.OnActionStart");

	UAction_Interactive_Damage_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Interactive_Damage.Action_Interactive_Damage_C.ExecuteUbergraph_Action_Interactive_Damage
// ()
void UAction_Interactive_Damage_C::ExecuteUbergraph_Action_Interactive_Damage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Interactive_Damage.Action_Interactive_Damage_C.ExecuteUbergraph_Action_Interactive_Damage");

	UAction_Interactive_Damage_C_ExecuteUbergraph_Action_Interactive_Damage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
