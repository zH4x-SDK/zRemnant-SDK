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

// BlueprintGeneratedClass Quest_SlaveRevolt.Quest_SlaveRevolt_C
// 0x0000
class AQuest_SlaveRevolt_C : public AQuest_POI_Siege_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_SlaveRevolt.Quest_SlaveRevolt_C");
		return ptr;
	}



	void Activate_Town();
	void Set_POIs_Enabled();
	void BndEvt__NPCs_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature();
	void BndEvt__QuestGiver_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature();
	void BndEvt__Fight_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Leader_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature();
	void TestTalkingHead();
	void BndEvt__Trigger_StartFight_K2Node_ComponentBoundEvent_4_QuestTriggerPlayerDelegate__DelegateSignature();
	void GiveReward_Revolt();
	void BndEvt__Start_K2Node_ComponentBoundEvent_5_QuestTileActiveDelegate__DelegateSignature();
	void KillPlayFighters();
	void ExecuteUbergraph_Quest_SlaveRevolt();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
