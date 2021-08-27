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

// BlueprintGeneratedClass Quest_FoundersPrison.Quest_FoundersPrison_C
// 0x0000
class AQuest_FoundersPrison_C : public AQuest_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_FoundersPrison.Quest_FoundersPrison_C");
		return ptr;
	}



	void FordWakeUp();
	void BndEvt__FordDoor_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature();
	void CustomEvent_1();
	void BndEvt__POI_K2Node_ComponentBoundEvent_0_QuestTileActiveDelegate__DelegateSignature();
	void ReceiveBeginPlay();
	void RootMotherSpokeToFounder();
	void BndEvt__Outside_Cell_Trigger_K2Node_ComponentBoundEvent_2_QuestTriggerPlayerDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_FoundersPrison();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
