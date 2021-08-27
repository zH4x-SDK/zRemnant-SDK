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

// BlueprintGeneratedClass Quest_UndyingKing.Quest_UndyingKing_C
// 0x0000
class AQuest_UndyingKing_C : public AQuest_POI_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_UndyingKing.Quest_UndyingKing_C");
		return ptr;
	}



	void IncrementBossCounter();
	void Set_Cutscene_Light_Visibility();
	void Check_Anointed_Dead();
	void Aggro_King___Anointed();
	void TestPortal();
	void BndEvt__IntroTrigger_K2Node_ComponentBoundEvent_1_QuestTriggerPlayerDelegate__DelegateSignature();
	void BndEvt__Fight_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Undying_King_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void ShowKing();
	void OnQuestComplete();
	void BndEvt__Event_Region_K2Node_ComponentBoundEvent_5_EventRegionDelegate__DelegateSignature();
	void IntroCutsceneComplete();
	void GuardianHeartCutsceneStarted();
	void GuardianHeartCutsceneComplete();
	void TestFight();
	void IntroCutsceneStarted();
	void BndEvt__Undying_King_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature();
	void VyrHuntingAkari();
	void AkariAndBasha();
	void ExecuteUbergraph_Quest_UndyingKing();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
