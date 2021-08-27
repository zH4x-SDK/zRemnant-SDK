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

// BlueprintGeneratedClass Interactive_Waypoint.Interactive_Waypoint_C
// 0x0000
class AInteractive_Waypoint_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Waypoint.Interactive_Waypoint_C");
		return ptr;
	}



	void TryUpdateLevelScaling();
	void EndGrab();
	void BeginGrab();
	void AlignToWaypoint();
	void State_Activate();
	void State_Active();
	void State_Inactive();
	void InActiveState();
	void IsWaypointActive();
	void PlayBlastFX();
	void ReceiveBeginPlay();
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_StateChangeDelegate__DelegateSignature();
	void BndEvt__StateMachine_K2Node_ComponentBoundEvent_1_InteractiveDelegate__DelegateSignature();
	void ExecuteUbergraph_Interactive_Waypoint();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
