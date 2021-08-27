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

// BlueprintGeneratedClass Quest_Boss_Fatty.Quest_Boss_Fatty_C
// 0x0000
class AQuest_Boss_Fatty_C : public AQuest_POI_Boss_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Boss_Fatty.Quest_Boss_Fatty_C");
		return ptr;
	}



	void DestroyPlayerSpawns();
	void CheckAllPlayersHiding();
	void BndEvt__EventTrigger_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature();
	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_1_EventRegionPlayerDelegate__DelegateSignature();
	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_2_EventRegionPlayerDelegate__DelegateSignature();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature();
	void OnBossTakeDamage();
	void ActivateAltEvent();
	void BeginAltEvent();
	void BndEvt__AltBoss_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature();
	void OnQuestComplete();
	void BndEvt__AltEventRegion_K2Node_ComponentBoundEvent_7_EventRegionDelegate__DelegateSignature();
	void CustomEvent();
	void NotifyPlayerHiding();
	void MulticastFadeIn();
	void MulticastFadeOut();
	void MulticastLockPots();
	void BeginUpstairsEvent();
	void NotifyPlayerBeginHiding();
	void MulticastFinishPotAnim();
	void OnWorldReset();
	void ExecuteUbergraph_Quest_Boss_Fatty();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
