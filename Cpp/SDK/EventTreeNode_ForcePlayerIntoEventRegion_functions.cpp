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

// Function EventTreeNode_ForcePlayerIntoEventRegion.EventTreeNode_ForcePlayerIntoEventRegion_C.Begin
// ()
void UEventTreeNode_ForcePlayerIntoEventRegion_C::Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_ForcePlayerIntoEventRegion.EventTreeNode_ForcePlayerIntoEventRegion_C.Begin");

	UEventTreeNode_ForcePlayerIntoEventRegion_C_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EventTreeNode_ForcePlayerIntoEventRegion.EventTreeNode_ForcePlayerIntoEventRegion_C.ExecuteUbergraph_EventTreeNode_ForcePlayerIntoEventRegion
// ()
void UEventTreeNode_ForcePlayerIntoEventRegion_C::ExecuteUbergraph_EventTreeNode_ForcePlayerIntoEventRegion()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_ForcePlayerIntoEventRegion.EventTreeNode_ForcePlayerIntoEventRegion_C.ExecuteUbergraph_EventTreeNode_ForcePlayerIntoEventRegion");

	UEventTreeNode_ForcePlayerIntoEventRegion_C_ExecuteUbergraph_EventTreeNode_ForcePlayerIntoEventRegion_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
