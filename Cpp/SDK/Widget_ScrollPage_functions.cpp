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

// Function Widget_ScrollPage.Widget_ScrollPage_C.SetFont
// ()
void UWidget_ScrollPage_C::SetFont()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ScrollPage.Widget_ScrollPage_C.SetFont");

	UWidget_ScrollPage_C_SetFont_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ScrollPage.Widget_ScrollPage_C.Set Text
// ()
void UWidget_ScrollPage_C::Set_Text()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ScrollPage.Widget_ScrollPage_C.Set Text");

	UWidget_ScrollPage_C_Set_Text_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
