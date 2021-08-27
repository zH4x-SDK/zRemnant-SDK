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

// BlueprintGeneratedClass Quest_OverworldPOI_OldManAndConstruct.Quest_OverworldPOI_OldManAndConstruct_C
// 0x0000
class AQuest_OverworldPOI_OldManAndConstruct_C : public ARemnantQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_OverworldPOI_OldManAndConstruct.Quest_OverworldPOI_OldManAndConstruct_C");
		return ptr;
	}



	void IncrementBossCounter();
	void ResetObjectives();
	void BndEvt__RemnantQuestTrigger_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature();
	void BndEvt__Vyr_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void MakeVyrHostile();
	void AddArmorToNPC();
	void BndEvt__EventRegion_Fight_Space_K2Node_ComponentBoundEvent_0_EventRegionDelegate__DelegateSignature();
	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_6_EventRegionPlayerDelegate__DelegateSignature();
	void BndEvt__BacktrackDoor_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature();
	void OnStateChange_Event_1();
	void BndEvt__Vyr_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_OverworldPOI_OldManAndConstruct();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
