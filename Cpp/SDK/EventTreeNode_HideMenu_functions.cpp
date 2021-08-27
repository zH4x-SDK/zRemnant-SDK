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

// Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.GetEditorLabel
// ()
void UEventTreeNode_HideMenu_C::GetEditorLabel()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.GetEditorLabel");

	UEventTreeNode_HideMenu_C_GetEditorLabel_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.Begin
// ()
void UEventTreeNode_HideMenu_C::Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.Begin");

	UEventTreeNode_HideMenu_C_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.ExecuteUbergraph_EventTreeNode_HideMenu
// ()
void UEventTreeNode_HideMenu_C::ExecuteUbergraph_EventTreeNode_HideMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_HideMenu.EventTreeNode_HideMenu_C.ExecuteUbergraph_EventTreeNode_HideMenu");

	UEventTreeNode_HideMenu_C_ExecuteUbergraph_EventTreeNode_HideMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
