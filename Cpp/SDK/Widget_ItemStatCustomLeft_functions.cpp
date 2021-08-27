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

// Function Widget_ItemStatCustomLeft.Widget_ItemStatCustomLeft_C.Construct
// ()
void UWidget_ItemStatCustomLeft_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatCustomLeft.Widget_ItemStatCustomLeft_C.Construct");

	UWidget_ItemStatCustomLeft_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemStatCustomLeft.Widget_ItemStatCustomLeft_C.ExecuteUbergraph_Widget_ItemStatCustomLeft
// ()
void UWidget_ItemStatCustomLeft_C::ExecuteUbergraph_Widget_ItemStatCustomLeft()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatCustomLeft.Widget_ItemStatCustomLeft_C.ExecuteUbergraph_Widget_ItemStatCustomLeft");

	UWidget_ItemStatCustomLeft_C_ExecuteUbergraph_Widget_ItemStatCustomLeft_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
