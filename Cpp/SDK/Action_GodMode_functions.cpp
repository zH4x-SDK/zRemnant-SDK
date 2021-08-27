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

// Function Action_GodMode.Action_GodMode_C.OnTick
// ()
void UAction_GodMode_C::OnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_GodMode.Action_GodMode_C.OnTick");

	UAction_GodMode_C_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_GodMode.Action_GodMode_C.ExecuteUbergraph_Action_GodMode
// ()
void UAction_GodMode_C::ExecuteUbergraph_Action_GodMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_GodMode.Action_GodMode_C.ExecuteUbergraph_Action_GodMode");

	UAction_GodMode_C_ExecuteUbergraph_Action_GodMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
