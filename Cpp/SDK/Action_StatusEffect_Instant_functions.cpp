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

// Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.Do Action
// ()
void UAction_StatusEffect_Instant_C::Do_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.Do Action");

	UAction_StatusEffect_Instant_C_Do_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.OnValueChanged
// ()
void UAction_StatusEffect_Instant_C::OnValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.OnValueChanged");

	UAction_StatusEffect_Instant_C_OnValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.OnActionStart
// ()
void UAction_StatusEffect_Instant_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.OnActionStart");

	UAction_StatusEffect_Instant_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.ExecuteUbergraph_Action_StatusEffect_Instant
// ()
void UAction_StatusEffect_Instant_C::ExecuteUbergraph_Action_StatusEffect_Instant()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant.Action_StatusEffect_Instant_C.ExecuteUbergraph_Action_StatusEffect_Instant");

	UAction_StatusEffect_Instant_C_ExecuteUbergraph_Action_StatusEffect_Instant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
