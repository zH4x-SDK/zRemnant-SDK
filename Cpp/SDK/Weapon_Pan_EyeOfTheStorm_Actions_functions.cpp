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

// Function Weapon_Pan_EyeOfTheStorm_Actions.Weapon_Pan_EyeOfTheStorm_Actions_C.OnActionStart
// ()
void UWeapon_Pan_EyeOfTheStorm_Actions_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_EyeOfTheStorm_Actions.Weapon_Pan_EyeOfTheStorm_Actions_C.OnActionStart");

	UWeapon_Pan_EyeOfTheStorm_Actions_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Pan_EyeOfTheStorm_Actions.Weapon_Pan_EyeOfTheStorm_Actions_C.ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_Actions
// ()
void UWeapon_Pan_EyeOfTheStorm_Actions_C::ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_Actions()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Pan_EyeOfTheStorm_Actions.Weapon_Pan_EyeOfTheStorm_Actions_C.ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_Actions");

	UWeapon_Pan_EyeOfTheStorm_Actions_C_ExecuteUbergraph_Weapon_Pan_EyeOfTheStorm_Actions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
