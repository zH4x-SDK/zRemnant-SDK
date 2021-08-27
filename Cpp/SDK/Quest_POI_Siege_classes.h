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

// BlueprintGeneratedClass Quest_POI_Siege.Quest_POI_Siege_C
// 0x0000
class AQuest_POI_Siege_C : public AQuest_Dungeon_SingleTile_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_POI_Siege.Quest_POI_Siege_C");
		return ptr;
	}



	void UpdateKillCounter();
	void Check_Holdout_Completion();
	void ResetObjectives();
	void IsQuestGiverAlive();
	void Check_Quest_Completion();
	void UserConstructionScript();
	void BndEvt__Fight_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature();
	void OnQuestComplete();
	void Start_Fight();
	void BndEvt__POI_K2Node_ComponentBoundEvent_0_QuestTileActiveDelegate__DelegateSignature();
	void BndEvt__Holdout_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature();
	void BndEvt__Holdout_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void BndEvt__Holdout_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature();
	void BndEvt__EventRegion_Fight_Space_K2Node_ComponentBoundEvent_0_EventRegionDelegate__DelegateSignature();
	void BndEvt__BossSpawns_K2Node_ComponentBoundEvent_0_QuestManagerVoidDelegate__DelegateSignature();
	void BndEvt__QuestGiver_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void BndEvt__QuestGiver_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature();
	void BndEvt__QuestGiver_K2Node_ComponentBoundEvent_5_QuestActivateDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_POI_Siege();
	void ObjectivesReset__DelegateSignature();
	void QuestSuccess__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
