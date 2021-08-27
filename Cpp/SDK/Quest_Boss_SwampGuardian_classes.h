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

// BlueprintGeneratedClass Quest_Boss_SwampGuardian.Quest_Boss_SwampGuardian_C
// 0x0000
class AQuest_Boss_SwampGuardian_C : public AQuest_POI_Boss_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Boss_SwampGuardian.Quest_Boss_SwampGuardian_C");
		return ptr;
	}



	void BndEvt__Boss_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void BossFinishedEnrage();
	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_3_EventRegionDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_Boss_SwampGuardian();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
