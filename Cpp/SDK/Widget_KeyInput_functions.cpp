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

// Function Widget_KeyInput.Widget_KeyInput_C.Init
// ()
void UWidget_KeyInput_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyInput.Widget_KeyInput_C.Init");

	UWidget_KeyInput_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_KeyInput.Widget_KeyInput_C.Construct
// ()
void UWidget_KeyInput_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyInput.Widget_KeyInput_C.Construct");

	UWidget_KeyInput_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_KeyInput.Widget_KeyInput_C.ExecuteUbergraph_Widget_KeyInput
// ()
void UWidget_KeyInput_C::ExecuteUbergraph_Widget_KeyInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_KeyInput.Widget_KeyInput_C.ExecuteUbergraph_Widget_KeyInput");

	UWidget_KeyInput_C_ExecuteUbergraph_Widget_KeyInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
