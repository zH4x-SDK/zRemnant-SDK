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

// BlueprintGeneratedClass Quest_Campaign_City.Quest_Campaign_City_C
// 0x0000
class AQuest_Campaign_City_C : public ARemnantQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Campaign_City.Quest_Campaign_City_C");
		return ptr;
	}



	void BndEvt__Church_K2Node_ComponentBoundEvent_0_QuestCompleteDelegate__DelegateSignature();
	void BndEvt__Start_K2Node_ComponentBoundEvent_0_QuestTileActiveDelegate__DelegateSignature();
	void OnTalkedToRootMother();
	void BndEvt__Lore_FordsNote_K2Node_ComponentBoundEvent_3_OnLoreNotify__DelegateSignature();
	void ArmorReward();
	void BndEvt__Trigger_ExploreCity_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature();
	void BndEvt__ZoneToChurchDungeon_K2Node_ComponentBoundEvent_5_QuestActorDelegate__DelegateSignature();
	void ZoneToChurchDungeonUsed();
	void ClearObjectives();
	void BndEvt__Church_Region_K2Node_ComponentBoundEvent_6_EventRegionPlayerDelegate__DelegateSignature();
	void Activate_MeetRootMother();
	void ExecuteUbergraph_Quest_Campaign_City();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
