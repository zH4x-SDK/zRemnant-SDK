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

// Function Action_Sound_Awareness.Action_Sound_Awareness_C.OnActionStart
// ()
void UAction_Sound_Awareness_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Sound_Awareness.Action_Sound_Awareness_C.OnActionStart");

	UAction_Sound_Awareness_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Sound_Awareness.Action_Sound_Awareness_C.ExecuteUbergraph_Action_Sound_Awareness
// ()
void UAction_Sound_Awareness_C::ExecuteUbergraph_Action_Sound_Awareness()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Sound_Awareness.Action_Sound_Awareness_C.ExecuteUbergraph_Action_Sound_Awareness");

	UAction_Sound_Awareness_C_ExecuteUbergraph_Action_Sound_Awareness_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
