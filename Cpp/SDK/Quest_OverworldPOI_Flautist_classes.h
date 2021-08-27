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

// BlueprintGeneratedClass Quest_OverworldPOI_Flautist.Quest_OverworldPOI_Flautist_C
// 0x0000
class AQuest_OverworldPOI_Flautist_C : public ARemnantQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_OverworldPOI_Flautist.Quest_OverworldPOI_Flautist_C");
		return ptr;
	}



	void BndEvt__Flautist_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void BndEvt__SongOfTheFlautist_K2Node_ComponentBoundEvent_1_OnTriggered__DelegateSignature();
	void BndEvt__SongOfTheGuardian_K2Node_ComponentBoundEvent_2_OnTriggered__DelegateSignature();
	void ExecuteUbergraph_Quest_OverworldPOI_Flautist();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
