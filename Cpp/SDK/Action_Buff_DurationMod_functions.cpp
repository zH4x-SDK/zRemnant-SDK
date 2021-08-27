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

// Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.PotencyTraitGetDuration
// ()
void UAction_Buff_DurationMod_C::PotencyTraitGetDuration()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.PotencyTraitGetDuration");

	UAction_Buff_DurationMod_C_PotencyTraitGetDuration_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.OnActionStart
// ()
void UAction_Buff_DurationMod_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.OnActionStart");

	UAction_Buff_DurationMod_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.OnReapplyBuff
// ()
void UAction_Buff_DurationMod_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.OnReapplyBuff");

	UAction_Buff_DurationMod_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.ExecuteUbergraph_Action_Buff_DurationMod
// ()
void UAction_Buff_DurationMod_C::ExecuteUbergraph_Action_Buff_DurationMod()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_DurationMod.Action_Buff_DurationMod_C.ExecuteUbergraph_Action_Buff_DurationMod");

	UAction_Buff_DurationMod_C_ExecuteUbergraph_Action_Buff_DurationMod_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
