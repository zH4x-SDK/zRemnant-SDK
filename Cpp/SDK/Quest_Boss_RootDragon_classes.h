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

// BlueprintGeneratedClass Quest_Boss_RootDragon.Quest_Boss_RootDragon_C
// 0x0000
class AQuest_Boss_RootDragon_C : public AQuest_POI_Boss_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Boss_RootDragon.Quest_Boss_RootDragon_C");
		return ptr;
	}



	void DoDemoCheck();
	void OnCharacterEvent();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_4_QuestActorDelegate__DelegateSignature();
	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_5_EventRegionDelegate__DelegateSignature();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_6_QuestNoActorDelegate__DelegateSignature();
	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_9_EventRegionPlayerDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_Boss_RootDragon();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
