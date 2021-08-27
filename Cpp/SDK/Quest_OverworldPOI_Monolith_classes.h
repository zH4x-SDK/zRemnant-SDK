#pragma once

// Name: Remnant, Version: 1.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Quest_OverworldPOI_Monolith.Quest_OverworldPOI_Monolith_C
// 0x0000
class AQuest_OverworldPOI_Monolith_C : public ARemnantQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_OverworldPOI_Monolith.Quest_OverworldPOI_Monolith_C");
		return ptr;
	}



	void SetupPuzzleObject();
	void BndEvt__Button2_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature();
	void BndEvt__StartButton3_K2Node_ComponentBoundEvent_14_QuestActorDelegate__DelegateSignature();
	void RewardPlayer();
	void BndEvt__RemnantQuestAIDirector_K2Node_ComponentBoundEvent_4_QuestManagerVoidDelegate__DelegateSignature();
	void SpawnFailConditionEncounter();
	void BndEvt__Button1_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature();
	void OnCreateQuest();
	void BndEvt__Puzzle1_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void BndEvt__PuzzleHint1_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature();
	void BndEvt__Puzzle2_K2Node_ComponentBoundEvent_5_QuestActorDelegate__DelegateSignature();
	void BndEvt__PuzzleHint2_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature();
	void BndEvt__Puzzle3_K2Node_ComponentBoundEvent_7_QuestActorDelegate__DelegateSignature();
	void BndEvt__PuzzleHint3_K2Node_ComponentBoundEvent_8_QuestActorDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_OverworldPOI_Monolith();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
