﻿// Name: Remnant, Version: 1.0

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

// Function Action_StatusEffect_Instant_Radiation.Action_StatusEffect_Instant_Radiation_C.OnValueChanged
// ()
void UAction_StatusEffect_Instant_Radiation_C::OnValueChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant_Radiation.Action_StatusEffect_Instant_Radiation_C.OnValueChanged");

	UAction_StatusEffect_Instant_Radiation_C_OnValueChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StatusEffect_Instant_Radiation.Action_StatusEffect_Instant_Radiation_C.ExecuteUbergraph_Action_StatusEffect_Instant_Radiation
// ()
void UAction_StatusEffect_Instant_Radiation_C::ExecuteUbergraph_Action_StatusEffect_Instant_Radiation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StatusEffect_Instant_Radiation.Action_StatusEffect_Instant_Radiation_C.ExecuteUbergraph_Action_StatusEffect_Instant_Radiation");

	UAction_StatusEffect_Instant_Radiation_C_ExecuteUbergraph_Action_StatusEffect_Instant_Radiation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
