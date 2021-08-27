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

// Function Trait_WillToLive.Trait_WillToLive_C.GetWoundedHealth
// ()
void UTrait_WillToLive_C::GetWoundedHealth()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_WillToLive.Trait_WillToLive_C.GetWoundedHealth");

	UTrait_WillToLive_C_GetWoundedHealth_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_WillToLive.Trait_WillToLive_C.OnComputeStats
// ()
void UTrait_WillToLive_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_WillToLive.Trait_WillToLive_C.OnComputeStats");

	UTrait_WillToLive_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_WillToLive.Trait_WillToLive_C.ExecuteUbergraph_Trait_WillToLive
// ()
void UTrait_WillToLive_C::ExecuteUbergraph_Trait_WillToLive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_WillToLive.Trait_WillToLive_C.ExecuteUbergraph_Trait_WillToLive");

	UTrait_WillToLive_C_ExecuteUbergraph_Trait_WillToLive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
