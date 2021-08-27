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

// BlueprintGeneratedClass BP_ContextualDialogComponent.BP_ContextualDialogComponent_C
// 0x0000
class UBP_ContextualDialogComponent_C : public UContextualDialogComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ContextualDialogComponent.BP_ContextualDialogComponent_C");
		return ptr;
	}



	void CheckPendingCombat();
	void UpdateCombatState();
	void ReceiveBeginPlay();
	void OnNotifyHitTarget_Event_1();
	void ReceiveTick();
	void DelayedExitCombat();
	void DelayedExitCombat30();
	void ExecuteUbergraph_BP_ContextualDialogComponent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
