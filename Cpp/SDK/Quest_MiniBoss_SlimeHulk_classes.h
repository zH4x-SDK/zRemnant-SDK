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

// BlueprintGeneratedClass Quest_MiniBoss_SlimeHulk.Quest_MiniBoss_SlimeHulk_C
// 0x0000
class AQuest_MiniBoss_SlimeHulk_C : public AQuest_Dungeon_POI_Boss_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_MiniBoss_SlimeHulk.Quest_MiniBoss_SlimeHulk_C");
		return ptr;
	}



	void StartPhase3();
	void StartPhase2();
	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_0_EventRegionDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_MiniBoss_SlimeHulk();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
