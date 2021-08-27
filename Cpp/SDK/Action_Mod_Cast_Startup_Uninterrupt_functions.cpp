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

// Function Action_Mod_Cast_Startup_Uninterrupt.Action_Mod_Cast_Startup_Uninterrupt_C.FilterIncomingDamage
// ()
void UAction_Mod_Cast_Startup_Uninterrupt_C::FilterIncomingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Cast_Startup_Uninterrupt.Action_Mod_Cast_Startup_Uninterrupt_C.FilterIncomingDamage");

	UAction_Mod_Cast_Startup_Uninterrupt_C_FilterIncomingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Cast_Startup_Uninterrupt.Action_Mod_Cast_Startup_Uninterrupt_C.OnTick
// ()
void UAction_Mod_Cast_Startup_Uninterrupt_C::OnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Cast_Startup_Uninterrupt.Action_Mod_Cast_Startup_Uninterrupt_C.OnTick");

	UAction_Mod_Cast_Startup_Uninterrupt_C_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Cast_Startup_Uninterrupt.Action_Mod_Cast_Startup_Uninterrupt_C.ExecuteUbergraph_Action_Mod_Cast_Startup_Uninterrupt
// ()
void UAction_Mod_Cast_Startup_Uninterrupt_C::ExecuteUbergraph_Action_Mod_Cast_Startup_Uninterrupt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Cast_Startup_Uninterrupt.Action_Mod_Cast_Startup_Uninterrupt_C.ExecuteUbergraph_Action_Mod_Cast_Startup_Uninterrupt");

	UAction_Mod_Cast_Startup_Uninterrupt_C_ExecuteUbergraph_Action_Mod_Cast_Startup_Uninterrupt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
