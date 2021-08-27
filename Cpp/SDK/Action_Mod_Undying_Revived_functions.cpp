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

// Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.FilterIncomingDamage
// ()
void UAction_Mod_Undying_Revived_C::FilterIncomingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.FilterIncomingDamage");

	UAction_Mod_Undying_Revived_C_FilterIncomingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.OnComputeStats
// ()
void UAction_Mod_Undying_Revived_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.OnComputeStats");

	UAction_Mod_Undying_Revived_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.ExecuteUbergraph_Action_Mod_Undying_Revived
// ()
void UAction_Mod_Undying_Revived_C::ExecuteUbergraph_Action_Mod_Undying_Revived()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Mod_Undying_Revived.Action_Mod_Undying_Revived_C.ExecuteUbergraph_Action_Mod_Undying_Revived");

	UAction_Mod_Undying_Revived_C_ExecuteUbergraph_Action_Mod_Undying_Revived_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
