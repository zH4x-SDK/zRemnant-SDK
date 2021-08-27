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

// Function Widget_FocusWidget.Widget_FocusWidget_C.GetCrafting
// ()
void UWidget_FocusWidget_C::GetCrafting()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_FocusWidget.Widget_FocusWidget_C.GetCrafting");

	UWidget_FocusWidget_C_GetCrafting_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FocusWidget.Widget_FocusWidget_C.GetInventory
// ()
void UWidget_FocusWidget_C::GetInventory()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_FocusWidget.Widget_FocusWidget_C.GetInventory");

	UWidget_FocusWidget_C_GetInventory_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_FocusWidget.Widget_FocusWidget_C.GetContextActor
// ()
void UWidget_FocusWidget_C::GetContextActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_FocusWidget.Widget_FocusWidget_C.GetContextActor");

	UWidget_FocusWidget_C_GetContextActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
