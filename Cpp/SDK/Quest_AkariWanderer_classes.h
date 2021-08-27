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

// BlueprintGeneratedClass Quest_AkariWanderer.Quest_AkariWanderer_C
// 0x0000
class AQuest_AkariWanderer_C : public AQuest_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_AkariWanderer.Quest_AkariWanderer_C");
		return ptr;
	}



	void Attempt_to_Start_Intro();
	void UserConstructionScript();
	void BndEvt__SequenceTrigger_K2Node_ComponentBoundEvent_0_QuestTriggerPlayerDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_AkariWanderer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
