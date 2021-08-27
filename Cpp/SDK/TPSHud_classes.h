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

// BlueprintGeneratedClass TPSHud.TPSHud_C
// 0x0000
class ATPSHud_C : public ARemnantHUD
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TPSHud.TPSHud_C");
		return ptr;
	}



	void ClearLocalPlayerAimTarget();
	void ClearAllCheckpointNotifications();
	void RemoveCheckpointNotification();
	void IsCheckpointNotificationActive();
	void AddCheckpointNotification();
	void AddNotifications();
	void RemoveNotifications();
	void ShowCinematicMenu();
	void ShouldShowCinematicMenu();
	void ToggleHUDVisibilityAndPinnedWidgets();
	void DisplayCinematicUI();
	void ShowJoinSpectate();
	void ClearHealthBarOnModeChange();
	void ValidateCurrentHealthBar();
	void TryUpdateHealthBar();
	void FadeInHUD();
	void FadeOutHUD();
	void ClearHealthBar();
	void UpdateWidgetVisibility();
	void ShowUtilityRadial();
	void ShowConsumableRadial();
	void FadeIn();
	void FadeOut();
	void UpdateAimTarget();
	void ShowDeathScreen();
	void EvaluateHudVisibility();
	void SetHUDVisibility();
	void RemoveHud();
	void IsRelevant();
	void Show_Loading();
	void ForceHideHUD();
	void HideSubtitle();
	void ShowSubtitle();
	void UpdateRelevantBoss();
	void UnregisterBoss();
	void RegisterBoss();
	void ShowInGameMenu();
	void InpActEvt_Menu_K2Node_InputActionEvent_10();
	void InpActEvt_Menu_Inventory_K2Node_InputActionEvent_9();
	void InpActEvt_Menu_Traits_K2Node_InputActionEvent_8();
	void InpActEvt_Menu_Options_K2Node_InputActionEvent_7();
	void InpActEvt_MiniMap_K2Node_InputActionEvent_6();
	void InpActEvt_ShowWorldDialog_K2Node_InputActionEvent_5();
	void InpActEvt_ShowQuestDialog_K2Node_InputActionEvent_4();
	void InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_3();
	void InpActEvt_ShowCheatsMenu_K2Node_InputActionEvent_2();
	void OnLoaded_11518D56437970EB654D3DBB78C12EA1();
	void InpActEvt_Menu_Character_K2Node_InputActionEvent_1();
	void InpActEvt_Escape_K2Node_InputKeyEvent_1();
	void OnStartPendingTravel();
	void OnStopPendingTravel();
	void ShowCharacterMenu();
	void ShowDethMenu();
	void Held_Mini_Map();
	void ReceiveTick();
	void BndEvt__UIHudInteract_K2Node_ComponentBoundEvent_15_InteractiveInfoDelegate__DelegateSignature();
	void PawnChanged();
	void OnHudEvent();
	void ReceiveBeginPlay();
	void OnDialogBegin();
	void OnDialogEnd();
	void OnSetVisbility();
	void ReceiveEndPlay();
	void OnPrimaryWeaponChanged();
	void CustomEvent_1();
	void ManualUpdateAmmoCounts();
	void ClearNotifications();
	void ExecuteUbergraph_TPSHud();
	void OnHudWidgetAssigned__DelegateSignature();
	void OnBossNotRelevant__DelegateSignature();
	void OnBossRelevant__DelegateSignature();
	void OnHideSubtitle__DelegateSignature();
	void OnShowSubtitle__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
