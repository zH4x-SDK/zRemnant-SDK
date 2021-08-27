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

// Function Widget_FadeOut.Widget_FadeOut_C.Construct
// ()
void UWidget_FadeOut_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_FadeOut.Widget_FadeOut_C.Construct");

	UWidget_FadeOut_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FadeOut.Widget_FadeOut_C.ExecuteUbergraph_Widget_FadeOut
// ()
void UWidget_FadeOut_C::ExecuteUbergraph_Widget_FadeOut()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_FadeOut.Widget_FadeOut_C.ExecuteUbergraph_Widget_FadeOut");

	UWidget_FadeOut_C_ExecuteUbergraph_Widget_FadeOut_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
