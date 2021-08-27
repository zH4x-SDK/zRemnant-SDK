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

// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.GetWeapon
// ()
void UAction_Mod_Blizzard_C::GetWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.GetWeapon");

	UAction_Mod_Blizzard_C_GetWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.GetDamageCause
// ()
void UAction_Mod_Blizzard_C::GetDamageCause()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.GetDamageCause");

	UAction_Mod_Blizzard_C_GetDamageCause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.OnActionStart
// ()
void UAction_Mod_Blizzard_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.OnActionStart");

	UAction_Mod_Blizzard_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.OnDurationExpired
// ()
void UAction_Mod_Blizzard_C::OnDurationExpired()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.OnDurationExpired");

	UAction_Mod_Blizzard_C_OnDurationExpired_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.ExecuteUbergraph_Action_Mod_Blizzard
// ()
void UAction_Mod_Blizzard_C::ExecuteUbergraph_Action_Mod_Blizzard()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Blizzard.Action_Mod_Blizzard_C.ExecuteUbergraph_Action_Mod_Blizzard");

	UAction_Mod_Blizzard_C_ExecuteUbergraph_Action_Mod_Blizzard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
