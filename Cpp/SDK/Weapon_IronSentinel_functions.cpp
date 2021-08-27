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

// Function Weapon_IronSentinel.Weapon_IronSentinel_C.OnComputeStats
// ()
void AWeapon_IronSentinel_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_IronSentinel.Weapon_IronSentinel_C.OnComputeStats");

	AWeapon_IronSentinel_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_IronSentinel.Weapon_IronSentinel_C.ExecuteUbergraph_Weapon_IronSentinel
// ()
void AWeapon_IronSentinel_C::ExecuteUbergraph_Weapon_IronSentinel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_IronSentinel.Weapon_IronSentinel_C.ExecuteUbergraph_Weapon_IronSentinel");

	AWeapon_IronSentinel_C_ExecuteUbergraph_Weapon_IronSentinel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
