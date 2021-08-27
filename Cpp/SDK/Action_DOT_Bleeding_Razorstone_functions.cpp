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

// Function Action_DOT_Bleeding_Razorstone.Action_DOT_Bleeding_Razorstone_C.OnReapplyBuff
// ()
void UAction_DOT_Bleeding_Razorstone_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Bleeding_Razorstone.Action_DOT_Bleeding_Razorstone_C.OnReapplyBuff");

	UAction_DOT_Bleeding_Razorstone_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_DOT_Bleeding_Razorstone.Action_DOT_Bleeding_Razorstone_C.OnActionStart
// ()
void UAction_DOT_Bleeding_Razorstone_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Bleeding_Razorstone.Action_DOT_Bleeding_Razorstone_C.OnActionStart");

	UAction_DOT_Bleeding_Razorstone_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_DOT_Bleeding_Razorstone.Action_DOT_Bleeding_Razorstone_C.ExecuteUbergraph_Action_DOT_Bleeding_Razorstone
// ()
void UAction_DOT_Bleeding_Razorstone_C::ExecuteUbergraph_Action_DOT_Bleeding_Razorstone()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Bleeding_Razorstone.Action_DOT_Bleeding_Razorstone_C.ExecuteUbergraph_Action_DOT_Bleeding_Razorstone");

	UAction_DOT_Bleeding_Razorstone_C_ExecuteUbergraph_Action_DOT_Bleeding_Razorstone_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
