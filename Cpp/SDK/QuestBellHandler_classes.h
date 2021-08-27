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

// BlueprintGeneratedClass QuestBellHandler.QuestBellHandler_C
// 0x0000
class UQuestBellHandler_C : public URemnantQuestEntity
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass QuestBellHandler.QuestBellHandler_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void OnSpawned_Event_1();
	void OnTriggered_Event_1();
	void ExecuteUbergraph_QuestBellHandler();
	void OnTriggered__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
