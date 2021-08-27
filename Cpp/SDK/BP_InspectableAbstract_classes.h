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

// BlueprintGeneratedClass BP_InspectableAbstract.BP_InspectableAbstract_C
// 0x0000
class ABP_InspectableAbstract_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_InspectableAbstract.BP_InspectableAbstract_C");
		return ptr;
	}



	void Get_Inspector();
	void BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature();
	void Everyone_Start_Inspect();
	void Everyone_End_Inspect();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_InspectableAbstract();
	void InspectEnd__DelegateSignature();
	void InspectStart__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
