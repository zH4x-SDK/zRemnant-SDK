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

// BlueprintGeneratedClass BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C
// 0x0000
class ABP_DreamerEventRegionBarrier_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_DreamerEventRegionBarrier.BP_DreamerEventRegionBarrier_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature();
	void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature();
	void OnExitBarrier();
	void OnEnterBarrier();
	void ExecuteUbergraph_BP_DreamerEventRegionBarrier();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
