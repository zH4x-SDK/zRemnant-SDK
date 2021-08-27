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

// Function Trait_Vigor.Trait_Vigor_C.GetHealthMax
// ()
void UTrait_Vigor_C::GetHealthMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Vigor.Trait_Vigor_C.GetHealthMax");

	UTrait_Vigor_C_GetHealthMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Vigor.Trait_Vigor_C.OnComputeStats
// ()
void UTrait_Vigor_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Vigor.Trait_Vigor_C.OnComputeStats");

	UTrait_Vigor_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Vigor.Trait_Vigor_C.ExecuteUbergraph_Trait_Vigor
// ()
void UTrait_Vigor_C::ExecuteUbergraph_Trait_Vigor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Vigor.Trait_Vigor_C.ExecuteUbergraph_Trait_Vigor");

	UTrait_Vigor_C_ExecuteUbergraph_Trait_Vigor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
