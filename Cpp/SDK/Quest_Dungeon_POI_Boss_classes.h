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

// BlueprintGeneratedClass Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C
// 0x0000
class AQuest_Dungeon_POI_Boss_C : public AQuest_Dungeon_POI_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Dungeon_POI_Boss.Quest_Dungeon_POI_Boss_C");
		return ptr;
	}



	void IncrementBossCounter();
	void CheckIntroCompleted_boss2_();
	void Reset_Objectives();
	void ActivateSpawnsPhase2();
	void IsIntroComplete_();
	void CheckIntroCompleted();
	void ActivateSpawnsPhase1();
	void AllSpawnsDestroyed();
	void UserConstructionScript();
	void OnFailure_B2D9F6314CBB67DADCA431A762B1FCB8();
	void OnSuccess_B2D9F6314CBB67DADCA431A762B1FCB8();
	void OnFailure_83BDCD214706A66B8FEAF69ECC91D664();
	void OnSuccess_83BDCD214706A66B8FEAF69ECC91D664();
	void OnFailure_3A0280904CD93F0AC06743A4D7339575();
	void OnSuccess_3A0280904CD93F0AC06743A4D7339575();
	void OnFailure_AED1456F4307B8E50D5D85B4E91E8F05();
	void OnSuccess_AED1456F4307B8E50D5D85B4E91E8F05();
	void SetupHighlight();
	void HighlightSummary();
	void HighlightClose();
	void BndEvt__BanditCamp_Boss_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature();
	void OnQuestComplete();
	void BndEvt__EventRegion_Fight_Space_K2Node_ComponentBoundEvent_1_EventRegionDelegate__DelegateSignature();
	void BndEvt__EventRegion_Fight_Space_K2Node_ComponentBoundEvent_0_EventRegionPlayerDelegate__DelegateSignature();
	void BndEvt__Phase1_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature();
	void BndEvt__Phase2_K2Node_ComponentBoundEvent_1_QuestManagerVoidDelegate__DelegateSignature();
	void OnCheckComplete();
	void BndEvt__POI_K2Node_ComponentBoundEvent_0_QuestTileActiveDelegate__DelegateSignature();
	void OnTargetChanged_Event_1();
	void BndEvt__Boss2_Optional_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature();
	void IntroCompleted();
	void BndEvt__Fight_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature();
	void BndEvt__Boss2_Optional__K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature();
	void BndEvt__Minions_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature();
	void ReceiveBeginPlay();
	void ShowSummary();
	void CloseHighlight();
	void ExecuteUbergraph_Quest_Dungeon_POI_Boss();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
