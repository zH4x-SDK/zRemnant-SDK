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

// BlueprintGeneratedClass NPCDialogueComponent.NPCDialogueComponent_C
// 0x0000
class UNPCDialogueComponent_C : public UDialogComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass NPCDialogueComponent.NPCDialogueComponent_C");
		return ptr;
	}



	void ExitIfHostile();
	void ExitOnCombat();
	void OnInteractive();
	void OnNotifyTakeDamage();
	void OnTargetChanged_Event_1();
	void OnTargeted_Event_1();
	void OnDialogBegin_Event_1();
	void OnDialogEnd_Event_1();
	void OnTargeted_Event_2();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_NPCDialogueComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
