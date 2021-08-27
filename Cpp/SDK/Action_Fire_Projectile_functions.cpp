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

// Function Action_Fire_Projectile.Action_Fire_Projectile_C.GetAutoArc
// ()
void UAction_Fire_Projectile_C::GetAutoArc()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Projectile.Action_Fire_Projectile_C.GetAutoArc");

	UAction_Fire_Projectile_C_GetAutoArc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Fire_Projectile.Action_Fire_Projectile_C.FireTheProjectile
// ()
void UAction_Fire_Projectile_C::FireTheProjectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Projectile.Action_Fire_Projectile_C.FireTheProjectile");

	UAction_Fire_Projectile_C_FireTheProjectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Fire_Projectile.Action_Fire_Projectile_C.OnActionStart
// ()
void UAction_Fire_Projectile_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Projectile.Action_Fire_Projectile_C.OnActionStart");

	UAction_Fire_Projectile_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Fire_Projectile.Action_Fire_Projectile_C.ExecuteUbergraph_Action_Fire_Projectile
// ()
void UAction_Fire_Projectile_C::ExecuteUbergraph_Action_Fire_Projectile()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Fire_Projectile.Action_Fire_Projectile_C.ExecuteUbergraph_Action_Fire_Projectile");

	UAction_Fire_Projectile_C_ExecuteUbergraph_Action_Fire_Projectile_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
