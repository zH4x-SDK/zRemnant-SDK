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

// Function Widget_ControllerDiagram.Widget_ControllerDiagram_C.Construct
// ()
void UWidget_ControllerDiagram_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ControllerDiagram.Widget_ControllerDiagram_C.Construct");

	UWidget_ControllerDiagram_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ControllerDiagram.Widget_ControllerDiagram_C.ExecuteUbergraph_Widget_ControllerDiagram
// ()
void UWidget_ControllerDiagram_C::ExecuteUbergraph_Widget_ControllerDiagram()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ControllerDiagram.Widget_ControllerDiagram_C.ExecuteUbergraph_Widget_ControllerDiagram");

	UWidget_ControllerDiagram_C_ExecuteUbergraph_Widget_ControllerDiagram_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
