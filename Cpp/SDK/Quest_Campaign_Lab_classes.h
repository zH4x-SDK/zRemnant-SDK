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

// BlueprintGeneratedClass Quest_Campaign_Lab.Quest_Campaign_Lab_C
// 0x0000
class AQuest_Campaign_Lab_C : public ARemnantQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Campaign_Lab.Quest_Campaign_Lab_C");
		return ptr;
	}



	void Update_Campaign_Objectives();
	void BndEvt__Trait_Trigger_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature();
	void ActivateWaypoint();
	void BndEvt__Start_K2Node_ComponentBoundEvent_0_QuestTileActiveDelegate__DelegateSignature();
	void BndEvt__Door_Jungle_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature();
	void Door_Jungle_State_Change();
	void BndEvt__Door_Swamp_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature();
	void Door_Swamp_State_Change();
	void BndEvt__Door_Wasteland_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature();
	void Door_Wasteland_Interact();
	void ExecuteUbergraph_Quest_Campaign_Lab();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
