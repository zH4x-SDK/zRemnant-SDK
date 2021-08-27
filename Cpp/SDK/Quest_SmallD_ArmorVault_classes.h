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

// BlueprintGeneratedClass Quest_SmallD_ArmorVault.Quest_SmallD_ArmorVault_C
// 0x0000
class AQuest_SmallD_ArmorVault_C : public AQuest_Dungeon_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_SmallD_ArmorVault.Quest_SmallD_ArmorVault_C");
		return ptr;
	}



	void OnInteractive_Event_1();
	void BndEvt__Head_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void BndEvt__Body_K2Node_ComponentBoundEvent_2_QuestActorDelegate__DelegateSignature();
	void CustomEvent_1();
	void CustomEvent_2();
	void BndEvt__Legs_K2Node_ComponentBoundEvent_3_QuestActorDelegate__DelegateSignature();
	void ExecuteUbergraph_Quest_SmallD_ArmorVault();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
