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

// Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.DetermineRollDelta
// ()
void UAction_DOT_Fire_Stacking_C::DetermineRollDelta()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.DetermineRollDelta");

	UAction_DOT_Fire_Stacking_C_DetermineRollDelta_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.OnReapplyBuff
// ()
void UAction_DOT_Fire_Stacking_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.OnReapplyBuff");

	UAction_DOT_Fire_Stacking_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.OnActionStart
// ()
void UAction_DOT_Fire_Stacking_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.OnActionStart");

	UAction_DOT_Fire_Stacking_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.ExecuteUbergraph_Action_DOT_Fire_Stacking
// ()
void UAction_DOT_Fire_Stacking_C::ExecuteUbergraph_Action_DOT_Fire_Stacking()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C.ExecuteUbergraph_Action_DOT_Fire_Stacking");

	UAction_DOT_Fire_Stacking_C_ExecuteUbergraph_Action_DOT_Fire_Stacking_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
