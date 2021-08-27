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

// Function Action_ApplyBleed.Action_ApplyBleed_C.NoBleed
// ()
void UAction_ApplyBleed_C::NoBleed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyBleed.Action_ApplyBleed_C.NoBleed");

	UAction_ApplyBleed_C_NoBleed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ApplyBleed.Action_ApplyBleed_C.OnActionStart
// ()
void UAction_ApplyBleed_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyBleed.Action_ApplyBleed_C.OnActionStart");

	UAction_ApplyBleed_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ApplyBleed.Action_ApplyBleed_C.ExecuteUbergraph_Action_ApplyBleed
// ()
void UAction_ApplyBleed_C::ExecuteUbergraph_Action_ApplyBleed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyBleed.Action_ApplyBleed_C.ExecuteUbergraph_Action_ApplyBleed");

	UAction_ApplyBleed_C_ExecuteUbergraph_Action_ApplyBleed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
