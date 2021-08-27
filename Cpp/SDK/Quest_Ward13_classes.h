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

// BlueprintGeneratedClass Quest_Ward13.Quest_Ward13_C
// 0x0000
class AQuest_Ward13_C : public AQuest_RootQuest_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Ward13.Quest_Ward13_C");
		return ptr;
	}



	void IsFullGameAvailable();
	void ResetAce();
	void Stop_Action_PlayerInPlayerBase();
	void Invoke_Reset_on_Quest_Entity();
	void AddItemsToReggie();
	void CheckAddItem();
	void Set_PowerSource_B3_Enabled();
	void HagFree();
	void BndEvt__Zone_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Wallace_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void BndEvt__PowerSource_Default_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void BndEvt__PowerSource_B3_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature();
	void BndEvt__Fusebox_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature();
	void KnowsRootMotherIdentity();
	void OnTalkedToRootMother();
	void RootMotherSpokeToFounder();
	void BndEvt__Zone_K2Node_ComponentBoundEvent_4_QuestZonePlayerDelegate__DelegateSignature();
	void BndEvt__Reggie_K2Node_ComponentBoundEvent_5_QuestActorDelegate__DelegateSignature();
	void OnResetMirror();
	void FuseFailsafe();
	void StoryFinished();
	void BndEvt__Ward13_Mirror_K2Node_ComponentBoundEvent_7_QuestActorDelegate__DelegateSignature();
	void BndEvt__Ward13_Terminal_K2Node_ComponentBoundEvent_8_QuestActorDelegate__DelegateSignature();
	void BndEvt__Ward13_Keybox_K2Node_ComponentBoundEvent_9_QuestActorDelegate__DelegateSignature();
	void BndEvt__Ace_K2Node_ComponentBoundEvent_10_QuestActorDelegate__DelegateSignature();
	void BndEvt__Zone_K2Node_ComponentBoundEvent_12_QuestZonePlayerDelegate__DelegateSignature();
	void NotifyFullGameNotLoaded();
	void ExecuteUbergraph_Quest_Ward13();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
