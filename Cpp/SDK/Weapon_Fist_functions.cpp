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

// Function Weapon_Fist.Weapon_Fist_C.ModifyDamage
// ()
void AWeapon_Fist_C::ModifyDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Fist.Weapon_Fist_C.ModifyDamage");

	AWeapon_Fist_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Fist.Weapon_Fist_C.IsDefaultEquipment
// ()
void AWeapon_Fist_C::IsDefaultEquipment()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Fist.Weapon_Fist_C.IsDefaultEquipment");

	AWeapon_Fist_C_IsDefaultEquipment_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Fist.Weapon_Fist_C.GetLevel
// ()
void AWeapon_Fist_C::GetLevel()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Fist.Weapon_Fist_C.GetLevel");

	AWeapon_Fist_C_GetLevel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Fist.Weapon_Fist_C.PostComputeCharacterStats
// ()
void AWeapon_Fist_C::PostComputeCharacterStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Fist.Weapon_Fist_C.PostComputeCharacterStats");

	AWeapon_Fist_C_PostComputeCharacterStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Fist.Weapon_Fist_C.ExecuteUbergraph_Weapon_Fist
// ()
void AWeapon_Fist_C::ExecuteUbergraph_Weapon_Fist()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Fist.Weapon_Fist_C.ExecuteUbergraph_Weapon_Fist");

	AWeapon_Fist_C_ExecuteUbergraph_Weapon_Fist_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
