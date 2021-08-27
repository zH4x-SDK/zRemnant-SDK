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

// Function Widget_Fade.Widget_Fade_C.FadeIn
// ()
void UWidget_Fade_C::FadeIn()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Fade.Widget_Fade_C.FadeIn");

	UWidget_Fade_C_FadeIn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Fade.Widget_Fade_C.FadeOut
// ()
void UWidget_Fade_C::FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Fade.Widget_Fade_C.FadeOut");

	UWidget_Fade_C_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Fade.Widget_Fade_C.ExecuteUbergraph_Widget_Fade
// ()
void UWidget_Fade_C::ExecuteUbergraph_Widget_Fade()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Fade.Widget_Fade_C.ExecuteUbergraph_Widget_Fade");

	UWidget_Fade_C_ExecuteUbergraph_Widget_Fade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
