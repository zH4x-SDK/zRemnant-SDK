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

// Function Trait_Swiftness.Trait_Swiftness_C.GetMoveSpeedMod
// ()
void UTrait_Swiftness_C::GetMoveSpeedMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Swiftness.Trait_Swiftness_C.GetMoveSpeedMod");

	UTrait_Swiftness_C_GetMoveSpeedMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Swiftness.Trait_Swiftness_C.OnComputeStats
// ()
void UTrait_Swiftness_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Swiftness.Trait_Swiftness_C.OnComputeStats");

	UTrait_Swiftness_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Swiftness.Trait_Swiftness_C.ExecuteUbergraph_Trait_Swiftness
// ()
void UTrait_Swiftness_C::ExecuteUbergraph_Trait_Swiftness()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Swiftness.Trait_Swiftness_C.ExecuteUbergraph_Trait_Swiftness");

	UTrait_Swiftness_C_ExecuteUbergraph_Trait_Swiftness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
