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

// Function Weapon_Swamp_HiveCannon.Weapon_Swamp_HiveCannon_C.OnFire
// ()
void AWeapon_Swamp_HiveCannon_C::OnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_HiveCannon.Weapon_Swamp_HiveCannon_C.OnFire");

	AWeapon_Swamp_HiveCannon_C_OnFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Swamp_HiveCannon.Weapon_Swamp_HiveCannon_C.ExecuteUbergraph_Weapon_Swamp_HiveCannon
// ()
void AWeapon_Swamp_HiveCannon_C::ExecuteUbergraph_Weapon_Swamp_HiveCannon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_HiveCannon.Weapon_Swamp_HiveCannon_C.ExecuteUbergraph_Weapon_Swamp_HiveCannon");

	AWeapon_Swamp_HiveCannon_C_ExecuteUbergraph_Weapon_Swamp_HiveCannon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
