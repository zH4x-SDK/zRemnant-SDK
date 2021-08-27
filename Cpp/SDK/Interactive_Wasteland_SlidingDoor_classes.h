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

// BlueprintGeneratedClass Interactive_Wasteland_SlidingDoor.Interactive_Wasteland_SlidingDoor_C
// 0x0000
class AInteractive_Wasteland_SlidingDoor_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Wasteland_SlidingDoor.Interactive_Wasteland_SlidingDoor_C");
		return ptr;
	}



	void PlayFF_Middle();
	void PrepForceFeedback();
	void PlayFF_StartStop();
	void ReceiveBeginPlay();
	void BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_StateChangeDelegate__DelegateSignature();
	void DoorOpen();
	void DoorClose();
	void SetOpenIdle();
	void SetClosedIdle();
	void SetTriggerState();
	void ExecuteUbergraph_Interactive_Wasteland_SlidingDoor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
