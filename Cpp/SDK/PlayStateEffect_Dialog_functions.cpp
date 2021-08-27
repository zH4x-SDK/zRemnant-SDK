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

// Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.TickTransition
// ()
void UPlayStateEffect_Dialog_C::TickTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.TickTransition");

	UPlayStateEffect_Dialog_C_TickTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.WasShowingDeathScreen
// ()
void UPlayStateEffect_Dialog_C::WasShowingDeathScreen()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.WasShowingDeathScreen");

	UPlayStateEffect_Dialog_C_WasShowingDeathScreen_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.Apply
// ()
void UPlayStateEffect_Dialog_C::Apply()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.Apply");

	UPlayStateEffect_Dialog_C_Apply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.GetEditorLabel
// ()
void UPlayStateEffect_Dialog_C::GetEditorLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_Dialog.PlayStateEffect_Dialog_C.GetEditorLabel");

	UPlayStateEffect_Dialog_C_GetEditorLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
