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

// Function Trait_KeepersBlessing.Trait_KeepersBlessing_C.GetElementalResistance
// ()
void UTrait_KeepersBlessing_C::GetElementalResistance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_KeepersBlessing.Trait_KeepersBlessing_C.GetElementalResistance");

	UTrait_KeepersBlessing_C_GetElementalResistance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_KeepersBlessing.Trait_KeepersBlessing_C.OnComputeStats
// ()
void UTrait_KeepersBlessing_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_KeepersBlessing.Trait_KeepersBlessing_C.OnComputeStats");

	UTrait_KeepersBlessing_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_KeepersBlessing.Trait_KeepersBlessing_C.ExecuteUbergraph_Trait_KeepersBlessing
// ()
void UTrait_KeepersBlessing_C::ExecuteUbergraph_Trait_KeepersBlessing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_KeepersBlessing.Trait_KeepersBlessing_C.ExecuteUbergraph_Trait_KeepersBlessing");

	UTrait_KeepersBlessing_C_ExecuteUbergraph_Trait_KeepersBlessing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
