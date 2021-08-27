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

// Function Trait_RapidStrike.Trait_RapidStrike_C.ModifyInspectInfo
// ()
void UTrait_RapidStrike_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_RapidStrike.Trait_RapidStrike_C.ModifyInspectInfo");

	UTrait_RapidStrike_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_RapidStrike.Trait_RapidStrike_C.GetAttackSpeedMod
// ()
void UTrait_RapidStrike_C::GetAttackSpeedMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_RapidStrike.Trait_RapidStrike_C.GetAttackSpeedMod");

	UTrait_RapidStrike_C_GetAttackSpeedMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_RapidStrike.Trait_RapidStrike_C.OnComputeStats
// ()
void UTrait_RapidStrike_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_RapidStrike.Trait_RapidStrike_C.OnComputeStats");

	UTrait_RapidStrike_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_RapidStrike.Trait_RapidStrike_C.ExecuteUbergraph_Trait_RapidStrike
// ()
void UTrait_RapidStrike_C::ExecuteUbergraph_Trait_RapidStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_RapidStrike.Trait_RapidStrike_C.ExecuteUbergraph_Trait_RapidStrike");

	UTrait_RapidStrike_C_ExecuteUbergraph_Trait_RapidStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
