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

// Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.FilterIncomingDamage
// ()
void UAction_Debuff_Corrosive_C::FilterIncomingDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.FilterIncomingDamage");

	UAction_Debuff_Corrosive_C_FilterIncomingDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.OnPostComputeStats
// ()
void UAction_Debuff_Corrosive_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.OnPostComputeStats");

	UAction_Debuff_Corrosive_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.OnActionStart
// ()
void UAction_Debuff_Corrosive_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.OnActionStart");

	UAction_Debuff_Corrosive_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.ExecuteUbergraph_Action_Debuff_Corrosive
// ()
void UAction_Debuff_Corrosive_C::ExecuteUbergraph_Action_Debuff_Corrosive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_Corrosive.Action_Debuff_Corrosive_C.ExecuteUbergraph_Action_Debuff_Corrosive");

	UAction_Debuff_Corrosive_C_ExecuteUbergraph_Action_Debuff_Corrosive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
