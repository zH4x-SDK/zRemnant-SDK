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

// Function Trait_Endurance.Trait_Endurance_C.GetMaxStamina
// ()
void UTrait_Endurance_C::GetMaxStamina()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Endurance.Trait_Endurance_C.GetMaxStamina");

	UTrait_Endurance_C_GetMaxStamina_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Endurance.Trait_Endurance_C.OnComputeStats
// ()
void UTrait_Endurance_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Endurance.Trait_Endurance_C.OnComputeStats");

	UTrait_Endurance_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Trait_Endurance.Trait_Endurance_C.ExecuteUbergraph_Trait_Endurance
// ()
void UTrait_Endurance_C::ExecuteUbergraph_Trait_Endurance()
{
	static auto fn = UObject::FindObject<UFunction>("Function Trait_Endurance.Trait_Endurance_C.ExecuteUbergraph_Trait_Endurance");

	UTrait_Endurance_C_ExecuteUbergraph_Trait_Endurance_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
