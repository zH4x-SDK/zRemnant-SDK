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

// BlueprintGeneratedClass Quest_Boss_TotemFather.Quest_Boss_TotemFather_C
// 0x0000
class AQuest_Boss_TotemFather_C : public AQuest_POI_Boss_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Boss_TotemFather.Quest_Boss_TotemFather_C");
		return ptr;
	}



	void FireStart1();
	void FireStart2();
	void FireStart3();
	void FireStart4();
	void BndEvt__Fight_K2Node_ComponentBoundEvent_1_QuestVoidDelegate__DelegateSignature();
	void BndEvt__EventRegion_K2Node_ComponentBoundEvent_0_EventRegionDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_Boss_TotemFather();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
