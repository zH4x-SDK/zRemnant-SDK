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

// BlueprintGeneratedClass Quest_Ward17.Quest_Ward17_C
// 0x0000
class AQuest_Ward17_C : public ARemnantQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Ward17.Quest_Ward17_C");
		return ptr;
	}



	void CheckPlayersInRegion();
	void ModifyPlayerSoloPing();
	void IncrementBossCounter();
	void Protect_Player_from_Dying_after_Dreamer_Death();
	void Invoke_Event_on_Dreamer_Bed();
	void Check_Status();
	void Zone_to_Ward_13();
	void Mus_Combat02_Success();
	void Mus_Combat01_FadeIn();
	void Mus_Reset_Fadeout();
	void Mus_Combat02_Resume();
	void Mus_Transition02();
	void Mus_Transition01();
	void BndEvt__NightmareEventRegion_K2Node_ComponentBoundEvent_10_EventRegionPlayerDelegate__DelegateSignature();
	void BndEvt__NightmareEventRegion_K2Node_ComponentBoundEvent_11_EventRegionPlayerDelegate__DelegateSignature();
	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_0_EventRegionPlayerDelegate__DelegateSignature();
	void OnPlayerWounded();
	void OnTriggerDreamer();
	void OnTeleportToBoss();
	void BndEvt__Trigger_DreamerFirstTime_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature();
	void ZoneOut();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature();
	void BndEvt__Boss2_Optional__K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature();
	void BndEvt__Boss2_Optional__K2Node_ComponentBoundEvent_5_QuestActorDelegate__DelegateSignature();
	void OnUpdateState();
	void OnDreamerCharacterEvent();
	void OnNightmareCharacterEvent();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature();
	void StartCredits();
	void OnExitCredits();
	void NotifyStopCredits();
	void SetOceanLODVolumeActive();
	void BndEvt__Start_K2Node_ComponentBoundEvent_7_QuestTileActiveDelegate__DelegateSignature();
	void OnQuestComplete();
	void BndEvt__Dreamer_Bed_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature();
	void OnResetQuest();
	void FadeOut();
	void OnDead_Event_1();
	void ExecuteUbergraph_Quest_Ward17();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
