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

// BlueprintGeneratedClass BP_Aura_Base.BP_Aura_Base_C
// 0x0000
class ABP_Aura_Base_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Aura_Base.BP_Aura_Base_C");
		return ptr;
	}



	void EvaluatePendingOverlaps();
	void CanDoAction();
	void RouteDoAction();
	void Stop();
	void FadeOut();
	void StopAction();
	void DoAction();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature();
	void Destroy();
	void OnDead_Event_1();
	void MulticastFadeOut();
	void StopAura();
	void ReceiveTick();
	void ExecuteUbergraph_BP_Aura_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
