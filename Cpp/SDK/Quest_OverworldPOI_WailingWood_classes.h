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

// BlueprintGeneratedClass Quest_OverworldPOI_WailingWood.Quest_OverworldPOI_WailingWood_C
// 0x0000
class AQuest_OverworldPOI_WailingWood_C : public ARemnantQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_OverworldPOI_WailingWood.Quest_OverworldPOI_WailingWood_C");
		return ptr;
	}



	void OnEvent_Event_1();
	void BndEvt__KillTree_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature();
	void ActivateKillTree();
	void BndEvt__WailingWood_NamedActorRef_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void BndEvt__WailingWood_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature();
	void OnWorldReset();
	void ExecuteUbergraph_Quest_OverworldPOI_WailingWood();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
