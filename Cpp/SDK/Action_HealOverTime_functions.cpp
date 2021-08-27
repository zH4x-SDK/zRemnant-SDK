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

// Function Action_HealOverTime.Action_HealOverTime_C.OnActionStart
// ()
void UAction_HealOverTime_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_HealOverTime.Action_HealOverTime_C.OnActionStart");

	UAction_HealOverTime_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_HealOverTime.Action_HealOverTime_C.OnComputeStats
// ()
void UAction_HealOverTime_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_HealOverTime.Action_HealOverTime_C.OnComputeStats");

	UAction_HealOverTime_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_HealOverTime.Action_HealOverTime_C.ExecuteUbergraph_Action_HealOverTime
// ()
void UAction_HealOverTime_C::ExecuteUbergraph_Action_HealOverTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_HealOverTime.Action_HealOverTime_C.ExecuteUbergraph_Action_HealOverTime");

	UAction_HealOverTime_C_ExecuteUbergraph_Action_HealOverTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
