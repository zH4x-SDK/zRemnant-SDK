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

// Function Action_Shield_Splitter.Action_Shield_Splitter_C.OnActionStop
// ()
void UAction_Shield_Splitter_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield_Splitter.Action_Shield_Splitter_C.OnActionStop");

	UAction_Shield_Splitter_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Shield_Splitter.Action_Shield_Splitter_C.ExecuteUbergraph_Action_Shield_Splitter
// ()
void UAction_Shield_Splitter_C::ExecuteUbergraph_Action_Shield_Splitter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield_Splitter.Action_Shield_Splitter_C.ExecuteUbergraph_Action_Shield_Splitter");

	UAction_Shield_Splitter_C_ExecuteUbergraph_Action_Shield_Splitter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
