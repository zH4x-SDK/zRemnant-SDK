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

// Function Weapon_Wasteland_Ruin.Weapon_Wasteland_Ruin_C.OnActivated
// ()
void AWeapon_Wasteland_Ruin_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Wasteland_Ruin.Weapon_Wasteland_Ruin_C.OnActivated");

	AWeapon_Wasteland_Ruin_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Wasteland_Ruin.Weapon_Wasteland_Ruin_C.ExecuteUbergraph_Weapon_Wasteland_Ruin
// ()
void AWeapon_Wasteland_Ruin_C::ExecuteUbergraph_Weapon_Wasteland_Ruin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Wasteland_Ruin.Weapon_Wasteland_Ruin_C.ExecuteUbergraph_Weapon_Wasteland_Ruin");

	AWeapon_Wasteland_Ruin_C_ExecuteUbergraph_Weapon_Wasteland_Ruin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
