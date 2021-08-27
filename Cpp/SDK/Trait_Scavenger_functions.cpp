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

// Function Trait_Scavenger.Trait_Scavenger_C.GetCurrencyMod
// ()
void UTrait_Scavenger_C::GetCurrencyMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Scavenger.Trait_Scavenger_C.GetCurrencyMod");

	UTrait_Scavenger_C_GetCurrencyMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Scavenger.Trait_Scavenger_C.OnComputeStats
// ()
void UTrait_Scavenger_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Scavenger.Trait_Scavenger_C.OnComputeStats");

	UTrait_Scavenger_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Scavenger.Trait_Scavenger_C.ExecuteUbergraph_Trait_Scavenger
// ()
void UTrait_Scavenger_C::ExecuteUbergraph_Trait_Scavenger()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Scavenger.Trait_Scavenger_C.ExecuteUbergraph_Trait_Scavenger");

	UTrait_Scavenger_C_ExecuteUbergraph_Trait_Scavenger_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
