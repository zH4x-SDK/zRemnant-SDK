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

// Function Weapon_Melee_Base.Weapon_Melee_Base_C.GetWeaponDamageScalar
// ()
void AWeapon_Melee_Base_C::GetWeaponDamageScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Melee_Base.Weapon_Melee_Base_C.GetWeaponDamageScalar");

	AWeapon_Melee_Base_C_GetWeaponDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
