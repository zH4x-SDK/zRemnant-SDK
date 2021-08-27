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

// Function Trait_WorldWalker.Trait_WorldWalker_C.GetStaminaDeltaMod
// ()
void UTrait_WorldWalker_C::GetStaminaDeltaMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_WorldWalker.Trait_WorldWalker_C.GetStaminaDeltaMod");

	UTrait_WorldWalker_C_GetStaminaDeltaMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_WorldWalker.Trait_WorldWalker_C.OnComputeStats
// ()
void UTrait_WorldWalker_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_WorldWalker.Trait_WorldWalker_C.OnComputeStats");

	UTrait_WorldWalker_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_WorldWalker.Trait_WorldWalker_C.ExecuteUbergraph_Trait_WorldWalker
// ()
void UTrait_WorldWalker_C::ExecuteUbergraph_Trait_WorldWalker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_WorldWalker.Trait_WorldWalker_C.ExecuteUbergraph_Trait_WorldWalker");

	UTrait_WorldWalker_C_ExecuteUbergraph_Trait_WorldWalker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
