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

// Function Weapon_Spear.Weapon_Spear_C.ReceiveBeginPlay
// ()
void AWeapon_Spear_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Spear.Weapon_Spear_C.ReceiveBeginPlay");

	AWeapon_Spear_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Spear.Weapon_Spear_C.OnInHand
// ()
void AWeapon_Spear_C::OnInHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Spear.Weapon_Spear_C.OnInHand");

	AWeapon_Spear_C_OnInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Spear.Weapon_Spear_C.OnNotInHand
// ()
void AWeapon_Spear_C::OnNotInHand()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Spear.Weapon_Spear_C.OnNotInHand");

	AWeapon_Spear_C_OnNotInHand_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Spear.Weapon_Spear_C.ExecuteUbergraph_Weapon_Spear
// ()
void AWeapon_Spear_C::ExecuteUbergraph_Weapon_Spear()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Spear.Weapon_Spear_C.ExecuteUbergraph_Weapon_Spear");

	AWeapon_Spear_C_ExecuteUbergraph_Weapon_Spear_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
