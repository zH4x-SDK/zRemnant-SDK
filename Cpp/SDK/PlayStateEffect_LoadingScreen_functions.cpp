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

// Function PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C.TickTransition
// ()
void UPlayStateEffect_LoadingScreen_C::TickTransition()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C.TickTransition");

	UPlayStateEffect_LoadingScreen_C_TickTransition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C.GetEditorLabel
// ()
void UPlayStateEffect_LoadingScreen_C::GetEditorLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C.GetEditorLabel");

	UPlayStateEffect_LoadingScreen_C_GetEditorLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C.Apply
// ()
void UPlayStateEffect_LoadingScreen_C::Apply()
{
	static auto fn = UObject::FindObject<UFunction>("Function PlayStateEffect_LoadingScreen.PlayStateEffect_LoadingScreen_C.Apply");

	UPlayStateEffect_LoadingScreen_C_Apply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
