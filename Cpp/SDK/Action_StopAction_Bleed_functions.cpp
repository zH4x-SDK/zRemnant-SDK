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

// Function Action_StopAction_Bleed.Action_StopAction_Bleed_C.Stop Action
// ()
void UAction_StopAction_Bleed_C::Stop_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StopAction_Bleed.Action_StopAction_Bleed_C.Stop Action");

	UAction_StopAction_Bleed_C_Stop_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_StopAction_Bleed.Action_StopAction_Bleed_C.ExecuteUbergraph_Action_StopAction_Bleed
// ()
void UAction_StopAction_Bleed_C::ExecuteUbergraph_Action_StopAction_Bleed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_StopAction_Bleed.Action_StopAction_Bleed_C.ExecuteUbergraph_Action_StopAction_Bleed");

	UAction_StopAction_Bleed_C_ExecuteUbergraph_Action_StopAction_Bleed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
