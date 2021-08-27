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

// Function Weapon_Snow_ChainBlade.Weapon_Snow_ChainBlade_C.ModifyInspectInfo
// ()
void AWeapon_Snow_ChainBlade_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Snow_ChainBlade.Weapon_Snow_ChainBlade_C.ModifyInspectInfo");

	AWeapon_Snow_ChainBlade_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
