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

// Function Action_UndyingCooldown.Action_UndyingCooldown_C.OnActionStart
// ()
void UAction_UndyingCooldown_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_UndyingCooldown.Action_UndyingCooldown_C.OnActionStart");

	UAction_UndyingCooldown_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_UndyingCooldown.Action_UndyingCooldown_C.OnActionStop
// ()
void UAction_UndyingCooldown_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_UndyingCooldown.Action_UndyingCooldown_C.OnActionStop");

	UAction_UndyingCooldown_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_UndyingCooldown.Action_UndyingCooldown_C.ExecuteUbergraph_Action_UndyingCooldown
// ()
void UAction_UndyingCooldown_C::ExecuteUbergraph_Action_UndyingCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_UndyingCooldown.Action_UndyingCooldown_C.ExecuteUbergraph_Action_UndyingCooldown");

	UAction_UndyingCooldown_C_ExecuteUbergraph_Action_UndyingCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
