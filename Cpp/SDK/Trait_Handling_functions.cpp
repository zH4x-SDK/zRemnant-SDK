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

// Function Trait_Handling.Trait_Handling_C.ModifyInspectInfo
// ()
void UTrait_Handling_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Handling.Trait_Handling_C.ModifyInspectInfo");

	UTrait_Handling_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Handling.Trait_Handling_C.GetGunMod
// ()
void UTrait_Handling_C::GetGunMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Handling.Trait_Handling_C.GetGunMod");

	UTrait_Handling_C_GetGunMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Handling.Trait_Handling_C.OnComputeStats
// ()
void UTrait_Handling_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Handling.Trait_Handling_C.OnComputeStats");

	UTrait_Handling_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Handling.Trait_Handling_C.ExecuteUbergraph_Trait_Handling
// ()
void UTrait_Handling_C::ExecuteUbergraph_Trait_Handling()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Handling.Trait_Handling_C.ExecuteUbergraph_Trait_Handling");

	UTrait_Handling_C_ExecuteUbergraph_Trait_Handling_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
