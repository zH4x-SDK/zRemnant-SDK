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

// BlueprintGeneratedClass Quest_LabyrinthTower.Quest_LabyrinthTower_C
// 0x0000
class AQuest_LabyrinthTower_C : public AQuest_POI_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_LabyrinthTower.Quest_LabyrinthTower_C");
		return ptr;
	}



	void Cure_all_players_in_event_region();
	void Update_TOD_Modifier();
	void Invoke_Event_on_Teleport_Pad();
	void Invoke_Event_on_Tower();
	void GetLabyrinthLinkID();
	void GetLabyrinthZoneID();
	void TeleportPlayers();
	void Teleport_to_Labyrinth();
	void Stagger_Players_();
	void AllowAccess();
	void BndEvt__QuestGiver_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void SummonTower();
	void SummonCrater();
	void Teleported_To_Interior();
	void Activate_Approach_Objective();
	void OnQuestComplete();
	void Stagger();
	void TestCrater();
	void BndEvt__POI_K2Node_ComponentBoundEvent_2_QuestTileActiveDelegate__DelegateSignature();
	void DelayedTeleportPlayers();
	void BndEvt__BP_QuestTrigger_Exterior_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature();
	void BndEvt__BP_QuestTrigger_Exterior_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature();
	void BndEvt__BP_QuestTrigger_KeeperDialog_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature();
	void SetTeleportPadVisible();
	void SetTeleportPadHidden();
	void ExecuteUbergraph_Quest_LabyrinthTower();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
