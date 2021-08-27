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

// Function Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C.ModifyInspectInfo
// ()
void AWeapon_Swamp_ButchersFlail_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C.ModifyInspectInfo");

	AWeapon_Swamp_ButchersFlail_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C.OnHitTarget
// ()
void AWeapon_Swamp_ButchersFlail_C::OnHitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C.OnHitTarget");

	AWeapon_Swamp_ButchersFlail_C_OnHitTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C.ExecuteUbergraph_Weapon_Swamp_ButchersFlail
// ()
void AWeapon_Swamp_ButchersFlail_C::ExecuteUbergraph_Weapon_Swamp_ButchersFlail()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Swamp_ButchersFlail.Weapon_Swamp_ButchersFlail_C.ExecuteUbergraph_Weapon_Swamp_ButchersFlail");

	AWeapon_Swamp_ButchersFlail_C_ExecuteUbergraph_Weapon_Swamp_ButchersFlail_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
