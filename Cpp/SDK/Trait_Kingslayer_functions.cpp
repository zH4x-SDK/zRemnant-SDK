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

// Function Trait_Kingslayer.Trait_Kingslayer_C.GetCritDamageMod
// ()
void UTrait_Kingslayer_C::GetCritDamageMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Kingslayer.Trait_Kingslayer_C.GetCritDamageMod");

	UTrait_Kingslayer_C_GetCritDamageMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Kingslayer.Trait_Kingslayer_C.OnComputeStats
// ()
void UTrait_Kingslayer_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Kingslayer.Trait_Kingslayer_C.OnComputeStats");

	UTrait_Kingslayer_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Kingslayer.Trait_Kingslayer_C.ExecuteUbergraph_Trait_Kingslayer
// ()
void UTrait_Kingslayer_C::ExecuteUbergraph_Trait_Kingslayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Kingslayer.Trait_Kingslayer_C.ExecuteUbergraph_Trait_Kingslayer");

	UTrait_Kingslayer_C_ExecuteUbergraph_Trait_Kingslayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
