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

// Function Action_StatusEffect_Instant_Frostbite.Action_StatusEffect_Instant_Frostbite_C.OnValueChanged
// ()
void UAction_StatusEffect_Instant_Frostbite_C::OnValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant_Frostbite.Action_StatusEffect_Instant_Frostbite_C.OnValueChanged");

	UAction_StatusEffect_Instant_Frostbite_C_OnValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect_Instant_Frostbite.Action_StatusEffect_Instant_Frostbite_C.ExecuteUbergraph_Action_StatusEffect_Instant_Frostbite
// ()
void UAction_StatusEffect_Instant_Frostbite_C::ExecuteUbergraph_Action_StatusEffect_Instant_Frostbite()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant_Frostbite.Action_StatusEffect_Instant_Frostbite_C.ExecuteUbergraph_Action_StatusEffect_Instant_Frostbite");

	UAction_StatusEffect_Instant_Frostbite_C_ExecuteUbergraph_Action_StatusEffect_Instant_Frostbite_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
