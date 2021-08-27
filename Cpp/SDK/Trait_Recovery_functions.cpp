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

// Function Trait_Recovery.Trait_Recovery_C.GetStaminaDelay
// ()
void UTrait_Recovery_C::GetStaminaDelay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Recovery.Trait_Recovery_C.GetStaminaDelay");

	UTrait_Recovery_C_GetStaminaDelay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Recovery.Trait_Recovery_C.ModifyInspectInfo
// ()
void UTrait_Recovery_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Recovery.Trait_Recovery_C.ModifyInspectInfo");

	UTrait_Recovery_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Recovery.Trait_Recovery_C.GetStaminaRegen
// ()
void UTrait_Recovery_C::GetStaminaRegen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Recovery.Trait_Recovery_C.GetStaminaRegen");

	UTrait_Recovery_C_GetStaminaRegen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Recovery.Trait_Recovery_C.OnComputeStats
// ()
void UTrait_Recovery_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Recovery.Trait_Recovery_C.OnComputeStats");

	UTrait_Recovery_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Recovery.Trait_Recovery_C.ExecuteUbergraph_Trait_Recovery
// ()
void UTrait_Recovery_C::ExecuteUbergraph_Trait_Recovery()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Recovery.Trait_Recovery_C.ExecuteUbergraph_Trait_Recovery");

	UTrait_Recovery_C_ExecuteUbergraph_Trait_Recovery_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
