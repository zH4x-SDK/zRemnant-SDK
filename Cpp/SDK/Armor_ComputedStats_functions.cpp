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

// Function Armor_ComputedStats.Armor_ComputedStats_C.OnComputeDerivedStats
// ()
void UArmor_ComputedStats_C::OnComputeDerivedStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Armor_ComputedStats.Armor_ComputedStats_C.OnComputeDerivedStats");

	UArmor_ComputedStats_C_OnComputeDerivedStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Armor_ComputedStats.Armor_ComputedStats_C.ExecuteUbergraph_Armor_ComputedStats
// ()
void UArmor_ComputedStats_C::ExecuteUbergraph_Armor_ComputedStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Armor_ComputedStats.Armor_ComputedStats_C.ExecuteUbergraph_Armor_ComputedStats");

	UArmor_ComputedStats_C_ExecuteUbergraph_Armor_ComputedStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
