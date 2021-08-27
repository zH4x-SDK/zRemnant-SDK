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

// Function Weapon_RepeaterPistol.Weapon_RepeaterPistol_C.OnActivated
// ()
void AWeapon_RepeaterPistol_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_RepeaterPistol.Weapon_RepeaterPistol_C.OnActivated");

	AWeapon_RepeaterPistol_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_RepeaterPistol.Weapon_RepeaterPistol_C.ExecuteUbergraph_Weapon_RepeaterPistol
// ()
void AWeapon_RepeaterPistol_C::ExecuteUbergraph_Weapon_RepeaterPistol()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_RepeaterPistol.Weapon_RepeaterPistol_C.ExecuteUbergraph_Weapon_RepeaterPistol");

	AWeapon_RepeaterPistol_C_ExecuteUbergraph_Weapon_RepeaterPistol_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
