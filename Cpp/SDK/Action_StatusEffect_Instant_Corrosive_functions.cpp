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

// Function Action_StatusEffect_Instant_Corrosive.Action_StatusEffect_Instant_Corrosive_C.OnValueChanged
// ()
void UAction_StatusEffect_Instant_Corrosive_C::OnValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant_Corrosive.Action_StatusEffect_Instant_Corrosive_C.OnValueChanged");

	UAction_StatusEffect_Instant_Corrosive_C_OnValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect_Instant_Corrosive.Action_StatusEffect_Instant_Corrosive_C.ExecuteUbergraph_Action_StatusEffect_Instant_Corrosive
// ()
void UAction_StatusEffect_Instant_Corrosive_C::ExecuteUbergraph_Action_StatusEffect_Instant_Corrosive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant_Corrosive.Action_StatusEffect_Instant_Corrosive_C.ExecuteUbergraph_Action_StatusEffect_Instant_Corrosive");

	UAction_StatusEffect_Instant_Corrosive_C_ExecuteUbergraph_Action_StatusEffect_Instant_Corrosive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
