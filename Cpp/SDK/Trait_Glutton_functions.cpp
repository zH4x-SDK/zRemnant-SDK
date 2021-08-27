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

// Function Trait_Glutton.Trait_Glutton_C.GetConsumableUseSpeedMod
// ()
void UTrait_Glutton_C::GetConsumableUseSpeedMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Glutton.Trait_Glutton_C.GetConsumableUseSpeedMod");

	UTrait_Glutton_C_GetConsumableUseSpeedMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Glutton.Trait_Glutton_C.OnComputeStats
// ()
void UTrait_Glutton_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Glutton.Trait_Glutton_C.OnComputeStats");

	UTrait_Glutton_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Glutton.Trait_Glutton_C.ExecuteUbergraph_Trait_Glutton
// ()
void UTrait_Glutton_C::ExecuteUbergraph_Trait_Glutton()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Glutton.Trait_Glutton_C.ExecuteUbergraph_Trait_Glutton");

	UTrait_Glutton_C_ExecuteUbergraph_Trait_Glutton_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
