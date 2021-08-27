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

// Function Trait_QuickHands.Trait_QuickHands_C.GetReloadSpeedMod
// ()
void UTrait_QuickHands_C::GetReloadSpeedMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_QuickHands.Trait_QuickHands_C.GetReloadSpeedMod");

	UTrait_QuickHands_C_GetReloadSpeedMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_QuickHands.Trait_QuickHands_C.OnComputeStats
// ()
void UTrait_QuickHands_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_QuickHands.Trait_QuickHands_C.OnComputeStats");

	UTrait_QuickHands_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_QuickHands.Trait_QuickHands_C.ExecuteUbergraph_Trait_QuickHands
// ()
void UTrait_QuickHands_C::ExecuteUbergraph_Trait_QuickHands()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_QuickHands.Trait_QuickHands_C.ExecuteUbergraph_Trait_QuickHands");

	UTrait_QuickHands_C_ExecuteUbergraph_Trait_QuickHands_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
