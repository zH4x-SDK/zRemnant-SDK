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

// BlueprintGeneratedClass Remnant_PlayerController.Remnant_PlayerController_C
// 0x0000
class ARemnant_PlayerController_C : public ARemnantPlayerController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Remnant_PlayerController.Remnant_PlayerController_C");
		return ptr;
	}



	void RemoveStartingLevelEquipment();
	void PlaySurvivalNotification();
	void ShouldShowQuestInventory();
	void OnSurvivalEndPlay();
	void ResetSurvivalCvars();
	void InitializeSurvivalCvars();
	void ResetSurvivalPawn();
	void NotifySurvivalQuestPendingEnd();
	void CompleteSurvivalQuest();
	void InitializeSurvivalPawn();
	void RevertSurvivalPawn();
	void CheckSurvivalTransition();
	void SetPresence();
	void PollHighlights();
	void DisableHighlightsPolling();
	void TogglePollHighlights();
	void InitShadowPlay();
	void fade();
	void CanRespawnPlayers();
	void UpdateWorldReset();
	void Lock_Player_Position();
	void ShowInGameMenu();
	void Update_Minimap_Scale();
	void CloseDialogs();
	void HideLoadScreen();
	void ShowLoadScreen();
	void WorldReset__FinishedFunc();
	void WorldReset__UpdateFunc();
	void InpActEvt_ToggleHUD_K2Node_InputActionEvent_1();
	void InpActEvt_F4_K2Node_InputKeyEvent_2();
	void InpActEvt_Alt_X_K2Node_InputKeyEvent_1();
	void ServerCheckSurvivalTransition();
	void MultiRevertSurvivalPawn();
	void MultiCompleteSurvivalQuest();
	void MultiResetSurvivalPawn();
	void ClientPlaySurvivalNotification();
	void OnDeceased();
	void HandleSkipIntro();
	void ServerUseConsumable();
	void ValidateItemRemoval();
	void ServerItemRemoval();
	void ClientValidItemRemoval();
	void OnInitChroma();
	void SetChromaDefault();
	void SetChromaTravel();
	void SetChromaLowHealth();
	void SetChromaRest();
	void SetChromaDamage();
	void SetChromaTravelFinished();
	void OnChromaDamageEnd();
	void OnBeginTravel();
	void OnFinishTravel();
	void OnFinishTravelLoad();
	void OnServerFinalizeTravel();
	void PostUseWaypoint();
	void Set_Rich_Presence();
	void SetSoftwareOcclusionOverride();
	void DoCreditsFade();
	void OnReadyToTravel();
	void DoPostCreditFadeIn();
	void Server_Inspectable_Next();
	void Server_Inspectable_Prev();
	void ServerUseItem();
	void ClientUseItemFail();
	void ServerBeginInspect();
	void ServerEndInspect();
	void ClientRequestEndInspect();
	void ServerNotifyCompleteInspect();
	void EquipMod();
	void UnequipMod();
	void ServerCreateQuest();
	void ServerActivateQuest();
	void ServerDestroyQuest();
	void ShowDialogue();
	void ShowLootContainer();
	void ShowCraftingMenu();
	void DialogueSelectOptionByName();
	void DialogueAdvance();
	void ShowUpgradingMenu();
	void EndDialog();
	void OpenLootContainer();
	void ShowInfusionMenu();
	void Join_In_Progress_Dialog_Client();
	void Server_State_Machine_Interation();
	void DialogueSelectOption();
	void EndPlayerDialog();
	void ShowPlayerDialogue();
	void ShowPlayerCraftingMenu();
	void ShowPlayerInfusionMenu();
	void ShowPlayerLootContainer();
	void ShowPlayerUpgradingMenu();
	void Event_Show_Character_Select();
	void EventClosedCharacterSelect();
	void ShowTutorial();
	void ShowJoinSessionCharacterSelect();
	void FinishedJoinSessionCharacterSelect();
	void Server_SpectateCharacterSelected();
	void Client_SpectateSwapCharacter();
	void Join_In_Progress_Dialog_Server();
	void ServerTravelToWaypoint();
	void ServerTravelToDestination();
	void ServerTransitionToMenu();
	void ServerTransitionFromMenu();
	void ServerUpgradeCheckpoint();
	void ServerTravelToWaypointName();
	void ServerUseCheckpoint();
	void ClientBeginUseCheckpoint();
	void ClientEndUseCheckpoint();
	void ServerLeaveDungeon();
	void ServerActivateWaypoint();
	void OnBeginWorldReset();
	void OnFinishWorldReset();
	void SetWorldFadeOut();
	void PlayWorldReset();
	void StopWorldReset();
	void SetWorldResetTime();
	void ServerSetInCheckpointMenu();
	void ReceiveBeginPlay();
	void OnTimeout_Event_1();
	void OnDead();
	void Check_DLC();
	void Server_Remove_DLC_Item();
	void ExecuteUbergraph_Remnant_PlayerController();
	void OnDialogueStarted__DelegateSignature();
	void OnUseItemFail__DelegateSignature();
	void FinishedTravel__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
