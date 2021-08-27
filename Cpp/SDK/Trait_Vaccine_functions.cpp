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

// Function Trait_Vaccine.Trait_Vaccine_C.ModifyInspectInfo
// ()
void UTrait_Vaccine_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Vaccine.Trait_Vaccine_C.ModifyInspectInfo");

	UTrait_Vaccine_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Vaccine.Trait_Vaccine_C.GetStatusEffectBuildupScalar
// ()
void UTrait_Vaccine_C::GetStatusEffectBuildupScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Vaccine.Trait_Vaccine_C.GetStatusEffectBuildupScalar");

	UTrait_Vaccine_C_GetStatusEffectBuildupScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Vaccine.Trait_Vaccine_C.OnPostComputeStats
// ()
void UTrait_Vaccine_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Vaccine.Trait_Vaccine_C.OnPostComputeStats");

	UTrait_Vaccine_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Vaccine.Trait_Vaccine_C.ExecuteUbergraph_Trait_Vaccine
// ()
void UTrait_Vaccine_C::ExecuteUbergraph_Trait_Vaccine()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Vaccine.Trait_Vaccine_C.ExecuteUbergraph_Trait_Vaccine");

	UTrait_Vaccine_C_ExecuteUbergraph_Trait_Vaccine_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
