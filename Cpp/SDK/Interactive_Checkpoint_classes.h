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

// BlueprintGeneratedClass Interactive_Checkpoint.Interactive_Checkpoint_C
// 0x0000
class AInteractive_Checkpoint_C : public ACheckpoint
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Interactive_Checkpoint.Interactive_Checkpoint_C");
		return ptr;
	}



	void ShowPrompt();
	void IsActorInteracting();
	void IsAPlayerAtADifferentCheckpoint();
	void IsLocalPlayerAtAnyCheckpoint();
	void IsAnyoneInteracting();
	void RemoveGrabbingPlayer();
	void AddGrabbingPlayer();
	void ClearAllCheckpointNotifications();
	void IsPlayerUsingCheckpoint();
	void IsPlayerNotInCheckpointMenu();
	void RemoveCheckpointNotification();
	void AddCheckpointNotification();
	void IsCheckpointNotificationActive();
	void Get_Local_Player();
	void IsPlayerInCheckpointMenu();
	void CanCheckpointActivate();
	void AddTutorialPrompts();
	void RemoveTutorialPrompts();
	void ReplenishHealthOnly();
	void SetAsCurrentWaypoint();
	void TryUpdateLevelScaling();
	void IsActive();
	void CanUpgrade();
	void OnUpgrade();
	void TransitionFromMenu();
	void TransitionToMenu();
	void EndUseCheckpoint();
	void BeginUseCheckpoint();
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__ProximityTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature();
	void BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature();
	void BndEvt__TutorialProximityTrigger_K2Node_ComponentBoundEvent_4_ComponentEndOverlapSignature__DelegateSignature();
	void OnBeginActivation();
	void OnActivate();
	void OnFinishActivation();
	void DoActivation();
	void OnNewPawn();
	void DoRedShardActivation();
	void ReceiveTick();
	void OnBeginGrab();
	void OnEndGrab();
	void BndEvt__StateMachine_K2Node_ComponentBoundEvent_0_InteractiveDelegate__DelegateSignature();
	void OnShowPrompt();
	void ExecuteUbergraph_Interactive_Checkpoint();
	void CustomDepth__DelegateSignature();
	void CheckpointUpgraded__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
