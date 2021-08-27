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

// Function Trait_MothersBlessing.Trait_MothersBlessing_C.GetRangedDamageReduction
// ()
void UTrait_MothersBlessing_C::GetRangedDamageReduction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_MothersBlessing.Trait_MothersBlessing_C.GetRangedDamageReduction");

	UTrait_MothersBlessing_C_GetRangedDamageReduction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_MothersBlessing.Trait_MothersBlessing_C.OnComputeStats
// ()
void UTrait_MothersBlessing_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_MothersBlessing.Trait_MothersBlessing_C.OnComputeStats");

	UTrait_MothersBlessing_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_MothersBlessing.Trait_MothersBlessing_C.ExecuteUbergraph_Trait_MothersBlessing
// ()
void UTrait_MothersBlessing_C::ExecuteUbergraph_Trait_MothersBlessing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_MothersBlessing.Trait_MothersBlessing_C.ExecuteUbergraph_Trait_MothersBlessing");

	UTrait_MothersBlessing_C_ExecuteUbergraph_Trait_MothersBlessing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
