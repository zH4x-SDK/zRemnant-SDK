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

// Function PlayStateEffect_WorldReset.PlayStateEffect_WorldReset_C.TickTransition
// ()
void UPlayStateEffect_WorldReset_C::TickTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_WorldReset.PlayStateEffect_WorldReset_C.TickTransition");

	UPlayStateEffect_WorldReset_C_TickTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayStateEffect_WorldReset.PlayStateEffect_WorldReset_C.Apply
// ()
void UPlayStateEffect_WorldReset_C::Apply()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_WorldReset.PlayStateEffect_WorldReset_C.Apply");

	UPlayStateEffect_WorldReset_C_Apply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayStateEffect_WorldReset.PlayStateEffect_WorldReset_C.GetEditorLabel
// ()
void UPlayStateEffect_WorldReset_C::GetEditorLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_WorldReset.PlayStateEffect_WorldReset_C.GetEditorLabel");

	UPlayStateEffect_WorldReset_C_GetEditorLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
