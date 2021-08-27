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

// BlueprintGeneratedClass Quest_MiniBoss_Vyr.Quest_MiniBoss_Vyr_C
// 0x0000
class AQuest_MiniBoss_Vyr_C : public AQuest_Dungeon_POI_Boss_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_MiniBoss_Vyr.Quest_MiniBoss_Vyr_C");
		return ptr;
	}



	void DoSpawns();
	void OnInteractive_Event_1();
	void TombOpen1();
	void TombOpen2();
	void BndEvt__Quest_Miniboss_Vyr_Interactive_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void Reset_Objectives();
	void MageDead();
	void OnEvent_Event_1();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature();
	void ActivateSpawnsPhase1();
	void BndEvt__Boss2_Optional__K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_MiniBoss_Vyr();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
