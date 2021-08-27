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

// Function Weapon_ComputedStats.Weapon_ComputedStats_C.OnComputeDerivedStats
// ()
void UWeapon_ComputedStats_C::OnComputeDerivedStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_ComputedStats.Weapon_ComputedStats_C.OnComputeDerivedStats");

	UWeapon_ComputedStats_C_OnComputeDerivedStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_ComputedStats.Weapon_ComputedStats_C.ExecuteUbergraph_Weapon_ComputedStats
// ()
void UWeapon_ComputedStats_C::ExecuteUbergraph_Weapon_ComputedStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_ComputedStats.Weapon_ComputedStats_C.ExecuteUbergraph_Weapon_ComputedStats");

	UWeapon_ComputedStats_C_ExecuteUbergraph_Weapon_ComputedStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
