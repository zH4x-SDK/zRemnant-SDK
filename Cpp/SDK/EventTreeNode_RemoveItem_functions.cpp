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

// Function EventTreeNode_RemoveItem.EventTreeNode_RemoveItem_C.Begin
// ()
void UEventTreeNode_RemoveItem_C::Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_RemoveItem.EventTreeNode_RemoveItem_C.Begin");

	UEventTreeNode_RemoveItem_C_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EventTreeNode_RemoveItem.EventTreeNode_RemoveItem_C.ExecuteUbergraph_EventTreeNode_RemoveItem
// ()
void UEventTreeNode_RemoveItem_C::ExecuteUbergraph_EventTreeNode_RemoveItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_RemoveItem.EventTreeNode_RemoveItem_C.ExecuteUbergraph_EventTreeNode_RemoveItem");

	UEventTreeNode_RemoveItem_C_ExecuteUbergraph_EventTreeNode_RemoveItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
