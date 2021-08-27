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

// Function Trait_TriggerHappy.Trait_TriggerHappy_C.GetFireSpeedMod
// ()
void UTrait_TriggerHappy_C::GetFireSpeedMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_TriggerHappy.Trait_TriggerHappy_C.GetFireSpeedMod");

	UTrait_TriggerHappy_C_GetFireSpeedMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_TriggerHappy.Trait_TriggerHappy_C.OnComputeStats
// ()
void UTrait_TriggerHappy_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_TriggerHappy.Trait_TriggerHappy_C.OnComputeStats");

	UTrait_TriggerHappy_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_TriggerHappy.Trait_TriggerHappy_C.ExecuteUbergraph_Trait_TriggerHappy
// ()
void UTrait_TriggerHappy_C::ExecuteUbergraph_Trait_TriggerHappy()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_TriggerHappy.Trait_TriggerHappy_C.ExecuteUbergraph_Trait_TriggerHappy");

	UTrait_TriggerHappy_C_ExecuteUbergraph_Trait_TriggerHappy_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
