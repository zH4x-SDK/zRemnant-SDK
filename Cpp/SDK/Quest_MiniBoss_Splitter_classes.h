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

// BlueprintGeneratedClass Quest_MiniBoss_Splitter.Quest_MiniBoss_Splitter_C
// 0x0000
class AQuest_MiniBoss_Splitter_C : public AQuest_Dungeon_POI_Boss_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_MiniBoss_Splitter.Quest_MiniBoss_Splitter_C");
		return ptr;
	}



	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_5_EventRegionPlayerDelegate__DelegateSignature();
	void AlarmOn();
	void AlarmOff();
	void BndEvt__Quest_Trigger_Alert1_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature();
	void BndEvt__Quest_Trigger_Alert1_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature();
	void Alert1();
	void BndEvt__Quest_Trigger_Alert2_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature();
	void BndEvt__Quest_Trigger_Alert2_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature();
	void Alert2();
	void Alert3();
	void BndEvt__Quest_Trigger_Alert3_K2Node_ComponentBoundEvent_6_QuestTriggerPlayerDelegate__DelegateSignature();
	void BndEvt__Quest_Trigger_Alert3_K2Node_ComponentBoundEvent_7_QuestTriggerPlayerDelegate__DelegateSignature();
	void ArmorReward();
	void BndEvt__Start_K2Node_ComponentBoundEvent_8_QuestTileActiveDelegate__DelegateSignature();
	void EscapedLetosLab();
	void BndEvt__Zone_K2Node_ComponentBoundEvent_9_QuestVoidDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_MiniBoss_Splitter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
