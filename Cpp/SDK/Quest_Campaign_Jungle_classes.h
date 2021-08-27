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

// BlueprintGeneratedClass Quest_Campaign_Jungle.Quest_Campaign_Jungle_C
// 0x0000
class AQuest_Campaign_Jungle_C : public ARemnantQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Campaign_Jungle.Quest_Campaign_Jungle_C");
		return ptr;
	}



	void BndEvt__Start_K2Node_ComponentBoundEvent_1_QuestTileActiveDelegate__DelegateSignature();
	void BndEvt__FoundersPrison_K2Node_ComponentBoundEvent_2_QuestCompleteDelegate__DelegateSignature();
	void ReceiveBeginPlay();
	void CheckProgressionItems();
	void ExecuteUbergraph_Quest_Campaign_Jungle();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
