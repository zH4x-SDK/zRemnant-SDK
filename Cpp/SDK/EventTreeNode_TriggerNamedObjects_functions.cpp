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

// Function EventTreeNode_TriggerNamedObjects.EventTreeNode_TriggerNamedObjects_C.Begin
// ()
void UEventTreeNode_TriggerNamedObjects_C::Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_TriggerNamedObjects.EventTreeNode_TriggerNamedObjects_C.Begin");

	UEventTreeNode_TriggerNamedObjects_C_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EventTreeNode_TriggerNamedObjects.EventTreeNode_TriggerNamedObjects_C.ExecuteUbergraph_EventTreeNode_TriggerNamedObjects
// ()
void UEventTreeNode_TriggerNamedObjects_C::ExecuteUbergraph_EventTreeNode_TriggerNamedObjects()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_TriggerNamedObjects.EventTreeNode_TriggerNamedObjects_C.ExecuteUbergraph_EventTreeNode_TriggerNamedObjects");

	UEventTreeNode_TriggerNamedObjects_C_ExecuteUbergraph_EventTreeNode_TriggerNamedObjects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
