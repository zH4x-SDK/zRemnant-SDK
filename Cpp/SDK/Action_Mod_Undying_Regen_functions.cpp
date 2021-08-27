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

// Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.OnActionStart
// ()
void UAction_Mod_Undying_Regen_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.OnActionStart");

	UAction_Mod_Undying_Regen_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.OnTick
// ()
void UAction_Mod_Undying_Regen_C::OnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.OnTick");

	UAction_Mod_Undying_Regen_C_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.ExecuteUbergraph_Action_Mod_Undying_Regen
// ()
void UAction_Mod_Undying_Regen_C::ExecuteUbergraph_Action_Mod_Undying_Regen()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying_Regen.Action_Mod_Undying_Regen_C.ExecuteUbergraph_Action_Mod_Undying_Regen");

	UAction_Mod_Undying_Regen_C_ExecuteUbergraph_Action_Mod_Undying_Regen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
