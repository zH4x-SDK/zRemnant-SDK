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

// Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.GetCharacter
// ()
void ACharacter_Root_Priest_Projectile_C::GetCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.GetCharacter");

	ACharacter_Root_Priest_Projectile_C_GetCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.OnHitGround
// ()
void ACharacter_Root_Priest_Projectile_C::OnHitGround()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.OnHitGround");

	ACharacter_Root_Priest_Projectile_C_OnHitGround_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.ExecuteUbergraph_Character_Root_Priest_Projectile
// ()
void ACharacter_Root_Priest_Projectile_C::ExecuteUbergraph_Character_Root_Priest_Projectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C.ExecuteUbergraph_Character_Root_Priest_Projectile");

	ACharacter_Root_Priest_Projectile_C_ExecuteUbergraph_Character_Root_Priest_Projectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
