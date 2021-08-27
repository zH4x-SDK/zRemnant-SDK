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

// Function Trait_SleightOfHand.Trait_SleightOfHand_C.GetSwapSpeedMod
// ()
void UTrait_SleightOfHand_C::GetSwapSpeedMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_SleightOfHand.Trait_SleightOfHand_C.GetSwapSpeedMod");

	UTrait_SleightOfHand_C_GetSwapSpeedMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_SleightOfHand.Trait_SleightOfHand_C.OnComputeStats
// ()
void UTrait_SleightOfHand_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_SleightOfHand.Trait_SleightOfHand_C.OnComputeStats");

	UTrait_SleightOfHand_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_SleightOfHand.Trait_SleightOfHand_C.ExecuteUbergraph_Trait_SleightOfHand
// ()
void UTrait_SleightOfHand_C::ExecuteUbergraph_Trait_SleightOfHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_SleightOfHand.Trait_SleightOfHand_C.ExecuteUbergraph_Trait_SleightOfHand");

	UTrait_SleightOfHand_C_ExecuteUbergraph_Trait_SleightOfHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
