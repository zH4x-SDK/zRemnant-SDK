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

// Function Weapon_Root_Bow.Weapon_Root_Bow_C.OnFire
// ()
void AWeapon_Root_Bow_C::OnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Bow.Weapon_Root_Bow_C.OnFire");

	AWeapon_Root_Bow_C_OnFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Root_Bow.Weapon_Root_Bow_C.ExecuteUbergraph_Weapon_Root_Bow
// ()
void AWeapon_Root_Bow_C::ExecuteUbergraph_Weapon_Root_Bow()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Root_Bow.Weapon_Root_Bow_C.ExecuteUbergraph_Weapon_Root_Bow");

	AWeapon_Root_Bow_C_ExecuteUbergraph_Weapon_Root_Bow_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
