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

// Function Trait_Revivalist.Trait_Revivalist_C.GetWoundedReviveSpeedMod
// ()
void UTrait_Revivalist_C::GetWoundedReviveSpeedMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Revivalist.Trait_Revivalist_C.GetWoundedReviveSpeedMod");

	UTrait_Revivalist_C_GetWoundedReviveSpeedMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Revivalist.Trait_Revivalist_C.OnComputeStats
// ()
void UTrait_Revivalist_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Revivalist.Trait_Revivalist_C.OnComputeStats");

	UTrait_Revivalist_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Revivalist.Trait_Revivalist_C.ExecuteUbergraph_Trait_Revivalist
// ()
void UTrait_Revivalist_C::ExecuteUbergraph_Trait_Revivalist()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Revivalist.Trait_Revivalist_C.ExecuteUbergraph_Trait_Revivalist");

	UTrait_Revivalist_C_ExecuteUbergraph_Trait_Revivalist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
