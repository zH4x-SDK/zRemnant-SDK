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

// Function Widget_Debug_Property.Widget_Debug_Property_C.Construct
// ()
void UWidget_Debug_Property_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_Property.Widget_Debug_Property_C.Construct");

	UWidget_Debug_Property_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Debug_Property.Widget_Debug_Property_C.ExecuteUbergraph_Widget_Debug_Property
// ()
void UWidget_Debug_Property_C::ExecuteUbergraph_Widget_Debug_Property()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Debug_Property.Widget_Debug_Property_C.ExecuteUbergraph_Widget_Debug_Property");

	UWidget_Debug_Property_C_ExecuteUbergraph_Widget_Debug_Property_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
