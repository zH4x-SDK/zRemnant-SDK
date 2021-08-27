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

// Function EventTreeNode_QuestReward.EventTreeNode_QuestReward_C.Begin
// ()
void UEventTreeNode_QuestReward_C::Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_QuestReward.EventTreeNode_QuestReward_C.Begin");

	UEventTreeNode_QuestReward_C_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EventTreeNode_QuestReward.EventTreeNode_QuestReward_C.ExecuteUbergraph_EventTreeNode_QuestReward
// ()
void UEventTreeNode_QuestReward_C::ExecuteUbergraph_EventTreeNode_QuestReward()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_QuestReward.EventTreeNode_QuestReward_C.ExecuteUbergraph_EventTreeNode_QuestReward");

	UEventTreeNode_QuestReward_C_ExecuteUbergraph_EventTreeNode_QuestReward_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
