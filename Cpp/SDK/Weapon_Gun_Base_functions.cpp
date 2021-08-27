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

// Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnFire
// ()
void AWeapon_Gun_Base_C::OnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnFire");

	AWeapon_Gun_Base_C_OnFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnEquipped
// ()
void AWeapon_Gun_Base_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnEquipped");

	AWeapon_Gun_Base_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnUnequipped
// ()
void AWeapon_Gun_Base_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Gun_Base.Weapon_Gun_Base_C.OnUnequipped");

	AWeapon_Gun_Base_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Gun_Base.Weapon_Gun_Base_C.ReceiveBeginPlay
// ()
void AWeapon_Gun_Base_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Gun_Base.Weapon_Gun_Base_C.ReceiveBeginPlay");

	AWeapon_Gun_Base_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Gun_Base.Weapon_Gun_Base_C.ExecuteUbergraph_Weapon_Gun_Base
// ()
void AWeapon_Gun_Base_C::ExecuteUbergraph_Weapon_Gun_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Gun_Base.Weapon_Gun_Base_C.ExecuteUbergraph_Weapon_Gun_Base");

	AWeapon_Gun_Base_C_ExecuteUbergraph_Weapon_Gun_Base_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
