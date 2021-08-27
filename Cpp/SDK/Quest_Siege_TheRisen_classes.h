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

// BlueprintGeneratedClass Quest_Siege_TheRisen.Quest_Siege_TheRisen_C
// 0x0000
class AQuest_Siege_TheRisen_C : public AQuest_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Siege_TheRisen.Quest_Siege_TheRisen_C");
		return ptr;
	}



	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_1_EventRegionDelegate__DelegateSignature();
	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_4_EventRegionPlayerDelegate__DelegateSignature();
	void BndEvt__Nexus1_K2Node_ComponentBoundEvent_9_QuestActorDelegate__DelegateSignature();
	void BndEvt__Nexus2_K2Node_ComponentBoundEvent_10_QuestActorDelegate__DelegateSignature();
	void BndEvt__Nexus3_K2Node_ComponentBoundEvent_11_QuestActorDelegate__DelegateSignature();
	void BndEvt__QuestObjective_Kill_Re_Animator1_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature();
	void BndEvt__QuestObjective_Kill_Re_Animator2_K2Node_ComponentBoundEvent_5_QuestVoidDelegate__DelegateSignature();
	void BndEvt__QuestObjective_Kill_Re_Animator3_K2Node_ComponentBoundEvent_6_QuestVoidDelegate__DelegateSignature();
	void OnQuestComplete();
	void StartNexusFight();
	void Reset_StartNexusFight();
	void OnWorldReset();
	void BndEvt__QuestObjective_Kill_K2Node_ComponentBoundEvent_8_QuestVoidDelegate__DelegateSignature();
	void BndEvt__QuestObjective_Kill1_K2Node_ComponentBoundEvent_12_QuestVoidDelegate__DelegateSignature();
	void BndEvt__QuestObjective_Kill2_K2Node_ComponentBoundEvent_13_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Re_Animator1_K2Node_ComponentBoundEvent_14_QuestActorDelegate__DelegateSignature();
	void BndEvt__Re_Animator2_K2Node_ComponentBoundEvent_15_QuestActorDelegate__DelegateSignature();
	void BndEvt__Re_Animator3_K2Node_ComponentBoundEvent_16_QuestActorDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_Siege_TheRisen();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
