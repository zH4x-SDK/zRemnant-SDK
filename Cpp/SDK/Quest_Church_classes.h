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

// BlueprintGeneratedClass Quest_Church.Quest_Church_C
// 0x0000
class AQuest_Church_C : public AQuest_Dungeon_POI_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Church.Quest_Church_C");
		return ptr;
	}



	void Break_Wall();
	void Break_Pews();
	void SetHagState();
	void KillAll();
	void Kill_All_Enemies();
	void OnLoaded_CCB67E0A4E5A59CB3DBAAC9F9BFACA2B();
	void On25Percent();
	void On50Percent();
	void On75Percent();
	void StartEmoteTimers();
	void StopEmoteTimers();
	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_0_EventRegionDelegate__DelegateSignature();
	void BndEvt__Fight_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Fight_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature();
	void StartFight();
	void StopFight();
	void BndEvt__Church_RootHag_QuestGiver_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void BndEvt__Church_RootHag_QuestGiver_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature();
	void OnQuestComplete();
	void OnNotifyTakeDamage_Event_1();
	void BndEvt__POI_K2Node_ComponentBoundEvent_0_QuestTileActiveDelegate__DelegateSignature();
	void BndEvt__QuestTrigger_Church_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature();
	void BndEvt__Church_RootHag_QuestGiver_K2Node_ComponentBoundEvent_4_QuestNoActorDelegate__DelegateSignature();
	void Shockwave_Spawned();
	void BndEvt__BreakableChurchBarrier_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_Church();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
