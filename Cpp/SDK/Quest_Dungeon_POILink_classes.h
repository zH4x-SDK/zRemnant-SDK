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

// BlueprintGeneratedClass Quest_Dungeon_POILink.Quest_Dungeon_POILink_C
// 0x0000
class AQuest_Dungeon_POILink_C : public AQuest_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Dungeon_POILink.Quest_Dungeon_POILink_C");
		return ptr;
	}



	void BndEvt__POI_K2Node_ComponentBoundEvent_0_QuestCompleteDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_Dungeon_POILink();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
