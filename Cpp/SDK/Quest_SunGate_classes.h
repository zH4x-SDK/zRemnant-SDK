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

// BlueprintGeneratedClass Quest_SunGate.Quest_SunGate_C
// 0x0000
class AQuest_SunGate_C : public AQuest_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_SunGate.Quest_SunGate_C");
		return ptr;
	}



	void GiveTrait();
	void BndEvt__ZoneToKing_K2Node_ComponentBoundEvent_0_QuestActorDelegate__DelegateSignature();
	void OnHowlingKeyUsed();
	void ExecuteUbergraph_Quest_SunGate();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
