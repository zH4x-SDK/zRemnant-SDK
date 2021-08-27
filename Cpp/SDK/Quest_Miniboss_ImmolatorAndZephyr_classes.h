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

// BlueprintGeneratedClass Quest_Miniboss_ImmolatorAndZephyr.Quest_MiniBoss_ImmolatorAndZephyr_C
// 0x0000
class AQuest_MiniBoss_ImmolatorAndZephyr_C : public AQuest_Dungeon_POI_Boss_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Miniboss_ImmolatorAndZephyr.Quest_MiniBoss_ImmolatorAndZephyr_C");
		return ptr;
	}



	void StartIntro();
	void AlertZephyr();
	void BndEvt__Boss_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void BndEvt__Boss2_Optional__K2Node_ComponentBoundEvent_1_QuestActorDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_MiniBoss_ImmolatorAndZephyr();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
