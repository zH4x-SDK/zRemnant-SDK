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

// Function Trait_Triage.Trait_Triage_C.GetHealthRegenMod
// ()
void UTrait_Triage_C::GetHealthRegenMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Triage.Trait_Triage_C.GetHealthRegenMod");

	UTrait_Triage_C_GetHealthRegenMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Triage.Trait_Triage_C.OnComputeStats
// ()
void UTrait_Triage_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Triage.Trait_Triage_C.OnComputeStats");

	UTrait_Triage_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Triage.Trait_Triage_C.ExecuteUbergraph_Trait_Triage
// ()
void UTrait_Triage_C::ExecuteUbergraph_Trait_Triage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Triage.Trait_Triage_C.ExecuteUbergraph_Trait_Triage");

	UTrait_Triage_C_ExecuteUbergraph_Trait_Triage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
