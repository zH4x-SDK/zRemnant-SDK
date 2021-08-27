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

// Function Trait_MindsEye.Trait_MindsEye_C.GetRangedDamageMod
// ()
void UTrait_MindsEye_C::GetRangedDamageMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_MindsEye.Trait_MindsEye_C.GetRangedDamageMod");

	UTrait_MindsEye_C_GetRangedDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_MindsEye.Trait_MindsEye_C.OnComputeStats
// ()
void UTrait_MindsEye_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_MindsEye.Trait_MindsEye_C.OnComputeStats");

	UTrait_MindsEye_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_MindsEye.Trait_MindsEye_C.ExecuteUbergraph_Trait_MindsEye
// ()
void UTrait_MindsEye_C::ExecuteUbergraph_Trait_MindsEye()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_MindsEye.Trait_MindsEye_C.ExecuteUbergraph_Trait_MindsEye");

	UTrait_MindsEye_C_ExecuteUbergraph_Trait_MindsEye_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
