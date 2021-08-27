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

// Function Trait_Executioner.Trait_Executioner_C.GetCritChance
// ()
void UTrait_Executioner_C::GetCritChance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Executioner.Trait_Executioner_C.GetCritChance");

	UTrait_Executioner_C_GetCritChance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Executioner.Trait_Executioner_C.OnComputeStats
// ()
void UTrait_Executioner_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Executioner.Trait_Executioner_C.OnComputeStats");

	UTrait_Executioner_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Executioner.Trait_Executioner_C.ExecuteUbergraph_Trait_Executioner
// ()
void UTrait_Executioner_C::ExecuteUbergraph_Trait_Executioner()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Executioner.Trait_Executioner_C.ExecuteUbergraph_Trait_Executioner");

	UTrait_Executioner_C_ExecuteUbergraph_Trait_Executioner_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
