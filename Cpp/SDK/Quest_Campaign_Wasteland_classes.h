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

// BlueprintGeneratedClass Quest_Campaign_Wasteland.Quest_Campaign_Wasteland_C
// 0x0000
class AQuest_Campaign_Wasteland_C : public ARemnantQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Campaign_Wasteland.Quest_Campaign_Wasteland_C");
		return ptr;
	}



	void BndEvt__AkariWanderer_K2Node_ComponentBoundEvent_0_QuestCompleteDelegate__DelegateSignature();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_2_QuestCompleteDelegate__DelegateSignature();
	void BndEvt__UndyingKing_K2Node_ComponentBoundEvent_3_QuestCompleteDelegate__DelegateSignature();
	void ActivateReturnLabyrinth();
	void ReceiveBeginPlay();
	void CheckProgressionItems();
	void ExecuteUbergraph_Quest_Campaign_Wasteland();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
