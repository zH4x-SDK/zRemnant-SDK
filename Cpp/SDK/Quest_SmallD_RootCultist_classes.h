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

// BlueprintGeneratedClass Quest_SmallD_RootCultist.Quest_SmallD_RootCultist_C
// 0x0000
class AQuest_SmallD_RootCultist_C : public AQuest_Dungeon_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_SmallD_RootCultist.Quest_SmallD_RootCultist_C");
		return ptr;
	}



	void BndEvt__Nexus1_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void BndEvt__KillNexus1_K2Node_ComponentBoundEvent_2_QuestVoidDelegate__DelegateSignature();
	void BndEvt__KillNexus2_K2Node_ComponentBoundEvent_3_QuestVoidDelegate__DelegateSignature();
	void MakeCultistHostile();
	void GiveOptionalReward();
	void BndEvt__Cultist_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature();
	void BndEvt__Kill_Cultist_K2Node_ComponentBoundEvent_9_QuestVoidDelegate__DelegateSignature();
	void BndEvt__Nexus2_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_SmallD_RootCultist();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
