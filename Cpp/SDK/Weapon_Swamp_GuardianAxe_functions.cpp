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

// Function Weapon_Swamp_GuardianAxe.Weapon_Swamp_GuardianAxe_C.ModifyInspectInfo
// ()
void AWeapon_Swamp_GuardianAxe_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_GuardianAxe.Weapon_Swamp_GuardianAxe_C.ModifyInspectInfo");

	AWeapon_Swamp_GuardianAxe_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
