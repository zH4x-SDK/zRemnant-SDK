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

// BlueprintGeneratedClass Quest_POI_Boss.Quest_POI_Boss_C
// 0x0000
class AQuest_POI_Boss_C : public AQuest_POI_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_POI_Boss.Quest_POI_Boss_C");
		return ptr;
	}



	void IncrementBossCounter();
	void Setup_Achievement_Tracking();
	void Should_Award_KillBossNoDamage_Achievement_();
	void Reset_Objectives();
	void ActivateSpawnsPhase2();
	void IsIntroComplete_();
	void CheckIntroCompleted();
	void ActivateSpawnsPhase1();
	void AllSpawnsDestroyed();
	void UserConstructionScript();
	void OnFailure_BC3958DE4DA88E42DEA2B989E764C822();
	void OnSuccess_BC3958DE4DA88E42DEA2B989E764C822();
	void OnFailure_130BD3A5448AC1EE542A568B790B3726();
	void OnSuccess_130BD3A5448AC1EE542A568B790B3726();
	void OnFailure_4B8145CF46F6CB4622D7F4934FD80EF0();
	void OnSuccess_4B8145CF46F6CB4622D7F4934FD80EF0();
	void OnFailure_31418C5A4FDB6D6B6D7D1DA584C10ACC();
	void OnSuccess_31418C5A4FDB6D6B6D7D1DA584C10ACC();
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
	void BndEvt__Boss2_Optional_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature();
	void BndEvt__Boss2_Optional_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature();
	void IntroCompleted();
	void BndEvt__Fight_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature();
	void BndEvt__Minions_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature();
	void ReceiveBeginPlay();
	void Notify_Player_Took_Damage();
	void ShowSummary();
	void CloseHighlight();
	void ExecuteUbergraph_Quest_POI_Boss();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
