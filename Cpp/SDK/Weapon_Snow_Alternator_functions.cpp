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

// Function Weapon_Snow_Alternator.Weapon_Snow_Alternator_C.OnFire
// ()
void AWeapon_Snow_Alternator_C::OnFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Snow_Alternator.Weapon_Snow_Alternator_C.OnFire");

	AWeapon_Snow_Alternator_C_OnFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Snow_Alternator.Weapon_Snow_Alternator_C.ExecuteUbergraph_Weapon_Snow_Alternator
// ()
void AWeapon_Snow_Alternator_C::ExecuteUbergraph_Weapon_Snow_Alternator()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Snow_Alternator.Weapon_Snow_Alternator_C.ExecuteUbergraph_Weapon_Snow_Alternator");

	AWeapon_Snow_Alternator_C_ExecuteUbergraph_Weapon_Snow_Alternator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
