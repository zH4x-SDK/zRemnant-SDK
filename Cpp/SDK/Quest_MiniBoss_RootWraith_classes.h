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

// BlueprintGeneratedClass Quest_MiniBoss_RootWraith.Quest_MiniBoss_RootWraith_C
// 0x0000
class AQuest_MiniBoss_RootWraith_C : public AQuest_Dungeon_POI_Boss_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_MiniBoss_RootWraith.Quest_MiniBoss_RootWraith_C");
		return ptr;
	}



	void SpawnWraith();
	void OnWraithSpawned();
	void OnWraithTakeDamage();
	void BndEvt__Zone_K2Node_ComponentBoundEvent_0_QuestVoidDelegate__DelegateSignature();
	void OnWorldReset();
	void BndEvt__GrimTotem_03_K2Node_ComponentBoundEvent_5_QuestActorDelegate__DelegateSignature();
	void BndEvt__GrimTotem_02_K2Node_ComponentBoundEvent_6_QuestActorDelegate__DelegateSignature();
	void BndEvt__Grim_Totem_01_K2Node_ComponentBoundEvent_7_QuestActorDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_MiniBoss_RootWraith();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
