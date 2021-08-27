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

// Function Quest_AkariWanderer.Quest_AkariWanderer_C.Attempt to Start Intro
// ()
void AQuest_AkariWanderer_C::Attempt_to_Start_Intro()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_AkariWanderer.Quest_AkariWanderer_C.Attempt to Start Intro");

	AQuest_AkariWanderer_C_Attempt_to_Start_Intro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_AkariWanderer.Quest_AkariWanderer_C.UserConstructionScript
// ()
void AQuest_AkariWanderer_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_AkariWanderer.Quest_AkariWanderer_C.UserConstructionScript");

	AQuest_AkariWanderer_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_AkariWanderer.Quest_AkariWanderer_C.BndEvt__SequenceTrigger_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature
// ()
void AQuest_AkariWanderer_C::BndEvt__SequenceTrigger_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_AkariWanderer.Quest_AkariWanderer_C.BndEvt__SequenceTrigger_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature");

	AQuest_AkariWanderer_C_BndEvt__SequenceTrigger_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_AkariWanderer.Quest_AkariWanderer_C.ExecuteUbergraph_Quest_AkariWanderer
// ()
void AQuest_AkariWanderer_C::ExecuteUbergraph_Quest_AkariWanderer()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_AkariWanderer.Quest_AkariWanderer_C.ExecuteUbergraph_Quest_AkariWanderer");

	AQuest_AkariWanderer_C_ExecuteUbergraph_Quest_AkariWanderer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
