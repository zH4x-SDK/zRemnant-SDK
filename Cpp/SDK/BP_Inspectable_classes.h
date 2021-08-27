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

// BlueprintGeneratedClass BP_Inspectable.BP_Inspectable_C
// 0x0000
class ABP_Inspectable_C : public ABP_InspectableAbstract_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Inspectable.BP_Inspectable_C");
		return ptr;
	}



	void OnInspectEnd();
	void EnablePlayerInteraction();
	void InitLore();
	void SetLore();
	void OnRep_Lore();
	void ReceiveBeginPlay();
	void On_Inspectable_Complete();
	void BndEvt__Inspectable_K2Node_ComponentBoundEvent_3_InspectableEvent__DelegateSignature();
	void Request_Dialog_Next();
	void Request_Dialog_Prev();
	void OnNextDialog();
	void OnPrevDialog();
	void BeginTransition();
	void ServerBeginInspect();
	void ServerEndInspect();
	void BndEvt__Inspectable_K2Node_ComponentBoundEvent_0_InspectableEvent__DelegateSignature();
	void ForceUpdateUI();
	void OnNotifyReadEvent();
	void OnNotifyCacheUIPageEvent();
	void BndEvt__Inspectable_K2Node_ComponentBoundEvent_4_InspectableEvent__DelegateSignature();
	void OnClientRequestEndInspect();
	void ServerRequestEndInspect();
	void BndEvt__Inspectable_K2Node_ComponentBoundEvent_1_InspectablePlayerEvent__DelegateSignature();
	void NotifyCompleteInspect();
	void ExecuteUbergraph_BP_Inspectable();
	void OnNotifyCacheUIPage__DelegateSignature();
	void OnNotifyRead__DelegateSignature();
	void OnInspectableHUDForceUpdate__DelegateSignature();
	void OnInspectableHUDInit__DelegateSignature();
	void OnLoreNotify__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
