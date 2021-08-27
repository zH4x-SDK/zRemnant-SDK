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

// BlueprintGeneratedClass Quest_Boss_WastelandGuardian.Quest_Boss_WastelandGuardian_C
// 0x0000
class AQuest_Boss_WastelandGuardian_C : public AQuest_POI_Boss_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Boss_WastelandGuardian.Quest_Boss_WastelandGuardian_C");
		return ptr;
	}



	void CanStartEvent();
	void UpdateRewardTag();
	void Spawn_Waves();
	void Add_Phase_Tag_To_Shields();
	void Restore_Shields();
	void Set_Floorways();
	void BndEvt__Breakable_ShieldPhase1_01_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature();
	void BndEvt__Breakable_ShieldPhase1_02_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature();
	void BndEvt__Breakable_ShieldPhase2_01_K2Node_ComponentBoundEvent_5_QuestActorDelegate__DelegateSignature();
	void BndEvt__Breakable_ShieldPhase2_02_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature();
	void Phase1_01();
	void Phase1_02();
	void Phase2_01();
	void Phase2_02();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void OnCharacterEvent();
	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_2_EventRegionDelegate__DelegateSignature();
	void BndEvt__InArenaTrigger_K2Node_ComponentBoundEvent_9_QuestTriggerPlayerDelegate__DelegateSignature();
	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_3_EventRegionPlayerDelegate__DelegateSignature();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_8_QuestActorDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_Boss_WastelandGuardian();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
