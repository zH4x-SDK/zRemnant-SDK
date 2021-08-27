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

// Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.GetPlayerAsCause
// ()
void UAction_Mod_SporeShot_C::GetPlayerAsCause()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.GetPlayerAsCause");

	UAction_Mod_SporeShot_C_GetPlayerAsCause_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.GetDamage
// ()
void UAction_Mod_SporeShot_C::GetDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.GetDamage");

	UAction_Mod_SporeShot_C_GetDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.OnActionStart
// ()
void UAction_Mod_SporeShot_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.OnActionStart");

	UAction_Mod_SporeShot_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.ExecuteUbergraph_Action_Mod_SporeShot
// ()
void UAction_Mod_SporeShot_C::ExecuteUbergraph_Action_Mod_SporeShot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_SporeShot.Action_Mod_SporeShot_C.ExecuteUbergraph_Action_Mod_SporeShot");

	UAction_Mod_SporeShot_C_ExecuteUbergraph_Action_Mod_SporeShot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
