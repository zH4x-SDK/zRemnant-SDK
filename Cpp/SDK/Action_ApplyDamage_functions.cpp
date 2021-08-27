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

// Function Action_ApplyDamage.Action_ApplyDamage_C.OnActionStart
// ()
void UAction_ApplyDamage_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyDamage.Action_ApplyDamage_C.OnActionStart");

	UAction_ApplyDamage_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ApplyDamage.Action_ApplyDamage_C.ExecuteUbergraph_Action_ApplyDamage
// ()
void UAction_ApplyDamage_C::ExecuteUbergraph_Action_ApplyDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyDamage.Action_ApplyDamage_C.ExecuteUbergraph_Action_ApplyDamage");

	UAction_ApplyDamage_C_ExecuteUbergraph_Action_ApplyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
