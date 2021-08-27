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

// Function Weapon_Pan_EyeOfTheStorm.Weapon_Pan_EyeOfTheStorm_C.OnActivated
// ()
void AWeapon_Pan_EyeOfTheStorm_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_EyeOfTheStorm.Weapon_Pan_EyeOfTheStorm_C.OnActivated");

	AWeapon_Pan_EyeOfTheStorm_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Pan_EyeOfTheStorm.Weapon_Pan_EyeOfTheStorm_C.ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm
// ()
void AWeapon_Pan_EyeOfTheStorm_C::ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_EyeOfTheStorm.Weapon_Pan_EyeOfTheStorm_C.ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm");

	AWeapon_Pan_EyeOfTheStorm_C_ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
