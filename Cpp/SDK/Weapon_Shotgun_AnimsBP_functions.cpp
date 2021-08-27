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

// Function Weapon_Shotgun_AnimsBP.Weapon_Shotgun_AnimsBP_C.BlueprintUpdateAnimation
// ()
void UWeapon_Shotgun_AnimsBP_C::BlueprintUpdateAnimation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Shotgun_AnimsBP.Weapon_Shotgun_AnimsBP_C.BlueprintUpdateAnimation");

	UWeapon_Shotgun_AnimsBP_C_BlueprintUpdateAnimation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Shotgun_AnimsBP.Weapon_Shotgun_AnimsBP_C.ExecuteUbergraph_Weapon_Shotgun_AnimsBP
// ()
void UWeapon_Shotgun_AnimsBP_C::ExecuteUbergraph_Weapon_Shotgun_AnimsBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Shotgun_AnimsBP.Weapon_Shotgun_AnimsBP_C.ExecuteUbergraph_Weapon_Shotgun_AnimsBP");

	UWeapon_Shotgun_AnimsBP_C_ExecuteUbergraph_Weapon_Shotgun_AnimsBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
