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

// Function Weapon_Coachgun_AnimsBP.Weapon_Coachgun_AnimsBP_C.ExecuteUbergraph_Weapon_Coachgun_AnimsBP
// ()
void UWeapon_Coachgun_AnimsBP_C::ExecuteUbergraph_Weapon_Coachgun_AnimsBP()
{
	static auto fn = UObject::FindObject<UFunction>("Function Weapon_Coachgun_AnimsBP.Weapon_Coachgun_AnimsBP_C.ExecuteUbergraph_Weapon_Coachgun_AnimsBP");

	UWeapon_Coachgun_AnimsBP_C_ExecuteUbergraph_Weapon_Coachgun_AnimsBP_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
