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

// Function Trait_Invoker.Trait_Invoker_C.GetSummonedCreatureDamageMod
// ()
void UTrait_Invoker_C::GetSummonedCreatureDamageMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Invoker.Trait_Invoker_C.GetSummonedCreatureDamageMod");

	UTrait_Invoker_C_GetSummonedCreatureDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Invoker.Trait_Invoker_C.OnComputeStats
// ()
void UTrait_Invoker_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Invoker.Trait_Invoker_C.OnComputeStats");

	UTrait_Invoker_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Invoker.Trait_Invoker_C.ExecuteUbergraph_Trait_Invoker
// ()
void UTrait_Invoker_C::ExecuteUbergraph_Trait_Invoker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Invoker.Trait_Invoker_C.ExecuteUbergraph_Trait_Invoker");

	UTrait_Invoker_C_ExecuteUbergraph_Trait_Invoker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
