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

// Function Weapon_Shotgun.Weapon_Shotgun_C.OnActivated
// ()
void AWeapon_Shotgun_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Shotgun.Weapon_Shotgun_C.OnActivated");

	AWeapon_Shotgun_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Shotgun.Weapon_Shotgun_C.ExecuteUbergraph_Weapon_Shotgun
// ()
void AWeapon_Shotgun_C::ExecuteUbergraph_Weapon_Shotgun()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Shotgun.Weapon_Shotgun_C.ExecuteUbergraph_Weapon_Shotgun");

	AWeapon_Shotgun_C_ExecuteUbergraph_Weapon_Shotgun_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
