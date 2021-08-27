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

// Function Character_Swamp_SlimeHulk_Projectile_Hit.Character_Swamp_SlimeHulk_Projectile_Hit_C.OnActionStart
// ()
void UCharacter_Swamp_SlimeHulk_Projectile_Hit_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_SlimeHulk_Projectile_Hit.Character_Swamp_SlimeHulk_Projectile_Hit_C.OnActionStart");

	UCharacter_Swamp_SlimeHulk_Projectile_Hit_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Swamp_SlimeHulk_Projectile_Hit.Character_Swamp_SlimeHulk_Projectile_Hit_C.ExecuteUbergraph_Character_Swamp_SlimeHulk_Projectile_Hit
// ()
void UCharacter_Swamp_SlimeHulk_Projectile_Hit_C::ExecuteUbergraph_Character_Swamp_SlimeHulk_Projectile_Hit()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Swamp_SlimeHulk_Projectile_Hit.Character_Swamp_SlimeHulk_Projectile_Hit_C.ExecuteUbergraph_Character_Swamp_SlimeHulk_Projectile_Hit");

	UCharacter_Swamp_SlimeHulk_Projectile_Hit_C_ExecuteUbergraph_Character_Swamp_SlimeHulk_Projectile_Hit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
