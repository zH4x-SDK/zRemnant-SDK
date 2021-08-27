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

// Function EventTreeNode_ShowMenu.EventTreeNode_ShowMenu_C.GetEditorLabel
// ()
void UEventTreeNode_ShowMenu_C::GetEditorLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_ShowMenu.EventTreeNode_ShowMenu_C.GetEditorLabel");

	UEventTreeNode_ShowMenu_C_GetEditorLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EventTreeNode_ShowMenu.EventTreeNode_ShowMenu_C.Begin
// ()
void UEventTreeNode_ShowMenu_C::Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_ShowMenu.EventTreeNode_ShowMenu_C.Begin");

	UEventTreeNode_ShowMenu_C_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EventTreeNode_ShowMenu.EventTreeNode_ShowMenu_C.ExecuteUbergraph_EventTreeNode_ShowMenu
// ()
void UEventTreeNode_ShowMenu_C::ExecuteUbergraph_EventTreeNode_ShowMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_ShowMenu.EventTreeNode_ShowMenu_C.ExecuteUbergraph_EventTreeNode_ShowMenu");

	UEventTreeNode_ShowMenu_C_ExecuteUbergraph_EventTreeNode_ShowMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
