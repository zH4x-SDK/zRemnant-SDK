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

// BlueprintGeneratedClass Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C
// 0x0000
class AInteractive_ZoneDoor_Default_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_ZoneDoor_Default.Interactive_ZoneDoor_Default_C");
		return ptr;
	}



	void ShouldBeActive();
	void GetAllOtherPCs();
	void OnSetNotActive();
	void OnSetActive();
	void RefreshActive();
	void SetupUsed();
	void HidePrompt();
	void ShowPrompt();
	void OnRep_Active();
	void IsReady();
	void UserConstructionScript();
	void BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature();
	void BndEvt__ZoneLink_K2Node_ComponentBoundEvent_0_ZoneVoidDelegate__DelegateSignature();
	void ReceiveBeginPlay();
	void SetTriggerState();
	void ReceiveEndPlay();
	void OnShowPrompt();
	void DoTravel();
	void ExecuteUbergraph_Interactive_ZoneDoor_Default();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
