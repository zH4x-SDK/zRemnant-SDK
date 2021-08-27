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

// Function Widget_Subtitle.Widget_Subtitle_C.Construct
// ()
void UWidget_Subtitle_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitle.Widget_Subtitle_C.Construct");

	UWidget_Subtitle_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Subtitle.Widget_Subtitle_C.OnTextReady
// ()
void UWidget_Subtitle_C::OnTextReady()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitle.Widget_Subtitle_C.OnTextReady");

	UWidget_Subtitle_C_OnTextReady_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Subtitle.Widget_Subtitle_C.ExecuteUbergraph_Widget_Subtitle
// ()
void UWidget_Subtitle_C::ExecuteUbergraph_Widget_Subtitle()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Subtitle.Widget_Subtitle_C.ExecuteUbergraph_Widget_Subtitle");

	UWidget_Subtitle_C_ExecuteUbergraph_Widget_Subtitle_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
