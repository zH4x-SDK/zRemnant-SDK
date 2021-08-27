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

// BlueprintGeneratedClass BP_EventRegionBarrier.BP_EventRegionBarrier_C
// 0x0000
class ABP_EventRegionBarrier_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_EventRegionBarrier.BP_EventRegionBarrier_C");
		return ptr;
	}



	void UpdateBarrierActiveState();
	void OnRep_HideBarrier();
	void AlignToBarrier();
	void SetupCollisionNotVisited();
	void SetupCollisionVisited();
	void IsActorOutside();
	void IsActorInside();
	void UpdateFlash();
	void SetHasVisited();
	void ShowBarrier();
	void UpdateBarrier();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnUpdateActiveState_Event_1();
	void OnShow();
	void OnHide();
	void Flash();
	void BeginWalkThroughBarrier();
	void ReceiveTick();
	void HideBarrier();
	void UnhideBarrier();
	void BndEvt__BarrierInsideTrigger_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature();
	void BndEvt__BarrierOutsideTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature();
	void BndEvt__BarrierInsideTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__BarrierOutsideTrigger_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature();
	void EnterBarrier();
	void ExitBarrier();
	void OnStateChange_Event_1();
	void ExecuteUbergraph_BP_EventRegionBarrier();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
