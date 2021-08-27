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

// Function Action_FlickerCloakCooldown.Action_FlickerCloakCooldown_C.OnActionStart
// ()
void UAction_FlickerCloakCooldown_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_FlickerCloakCooldown.Action_FlickerCloakCooldown_C.OnActionStart");

	UAction_FlickerCloakCooldown_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_FlickerCloakCooldown.Action_FlickerCloakCooldown_C.OnActionStop
// ()
void UAction_FlickerCloakCooldown_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_FlickerCloakCooldown.Action_FlickerCloakCooldown_C.OnActionStop");

	UAction_FlickerCloakCooldown_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_FlickerCloakCooldown.Action_FlickerCloakCooldown_C.ExecuteUbergraph_Action_FlickerCloakCooldown
// ()
void UAction_FlickerCloakCooldown_C::ExecuteUbergraph_Action_FlickerCloakCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_FlickerCloakCooldown.Action_FlickerCloakCooldown_C.ExecuteUbergraph_Action_FlickerCloakCooldown");

	UAction_FlickerCloakCooldown_C_ExecuteUbergraph_Action_FlickerCloakCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
