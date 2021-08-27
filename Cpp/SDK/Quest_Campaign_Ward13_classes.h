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

// BlueprintGeneratedClass Quest_Campaign_Ward13.Quest_Campaign_Ward13_C
// 0x0000
class AQuest_Campaign_Ward13_C : public ARemnantQuest
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Campaign_Ward13.Quest_Campaign_Ward13_C");
		return ptr;
	}



	void BndEvt__Ward13_Mirror_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void On_Mirror_State_Changed();
	void OnTalkedToRootMother();
	void ExecuteUbergraph_Quest_Campaign_Ward13();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
