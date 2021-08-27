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

// Function Trait_Climber.Trait_Climber_C.ModifyInspectInfo
// ()
void UTrait_Climber_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Climber.Trait_Climber_C.ModifyInspectInfo");

	UTrait_Climber_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Climber.Trait_Climber_C.GetVaultSpeedMod
// ()
void UTrait_Climber_C::GetVaultSpeedMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Climber.Trait_Climber_C.GetVaultSpeedMod");

	UTrait_Climber_C_GetVaultSpeedMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Climber.Trait_Climber_C.OnComputeStats
// ()
void UTrait_Climber_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Climber.Trait_Climber_C.OnComputeStats");

	UTrait_Climber_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Climber.Trait_Climber_C.ExecuteUbergraph_Trait_Climber
// ()
void UTrait_Climber_C::ExecuteUbergraph_Trait_Climber()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Climber.Trait_Climber_C.ExecuteUbergraph_Trait_Climber");

	UTrait_Climber_C_ExecuteUbergraph_Trait_Climber_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
