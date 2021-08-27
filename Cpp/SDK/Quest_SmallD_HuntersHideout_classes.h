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

// BlueprintGeneratedClass Quest_SmallD_HuntersHideout.Quest_SmallD_HuntersHideout_C
// 0x0000
class AQuest_SmallD_HuntersHideout_C : public AQuest_Dungeon_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_SmallD_HuntersHideout.Quest_SmallD_HuntersHideout_C");
		return ptr;
	}



	void GavePlayerKey();
	void BndEvt__Start_K2Node_ComponentBoundEvent_2_QuestTileActiveDelegate__DelegateSignature();
	void Activate_Find_the_Key();
	void BndEvt__HuntersHideoutDoor_K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_SmallD_HuntersHideout();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
