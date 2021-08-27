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

// WidgetBlueprintGeneratedClass Widget_HUD.Widget_HUD_C
// 0x0000
class UWidget_HUD_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HUD.Widget_HUD_C");
		return ptr;
	}



	void GetSurvivalTimer();
	void HideMutedPing();
	void ShowMutedPing();
	void IsInIntroQuest();
	void UpdateDifficultyIcon();
	void Refresh_Health_Bar();
	void OnDamageTaken();
	void OnCinematicStopping();
	void OnCinematicPlaying();
	void BindToCinematicEvents();
	void IsPlayerRelevantToCinematic();
	void ToggleWidgetPinning();
	void DragonHeartVisibility();
	void Get_SUBS_Visibility();
	void Get_MAIN_Visibility();
	void Get_SecundaryModHolder_Visibility_1();
	void DragonHeartQuantity();
	void GetUserSetting();
	void UpdateHUDSettings();
	void HUD_1_Control();
	void Get_STA_Size();
	void Get_HP_Size();
	void Get_AltWeaponAmmo_Text_2();
	void Get_TextBlock_1_Visibility_1();
	void GetVisibility_1();
	void PopScale_Dragonheart();
	void PopScale_Ammo();
	void Do_Pop_Scale();
	void Get_ZoneLevel_Text_1();
	void Get_ChargeLabel_Text_1();
	void Get_AltWeaponAmmo_Text_1();
	void Get_AltWeaponIcon_Brush_1();
	void GetAltRangedWeapon();
	void GetActiveRangedWeapon();
	void Get_Ammo_Text_1();
	void Get_WeaponIcon_Brush_1();
	void Get_InGameHUD_Visibility_1();
	void GetHud();
	void Get_ChargeProgress_Percent_1();
	void Get_ChargeProgress_Visibility_1();
	void Get_Ammo_In_Clip();
	void Get_StaminaBar_Percent_1();
	void OnHudEvent();
	void Construct();
	void OnNotifyTakeDamage_Event_1();
	void OnVitalityChanged_Event_1();
	void ShowSummonPopup();
	void HideSummonPopup();
	void fade();
	void OnHUDOpacityChanged();
	void OnHUDChanged_Size_HUD1();
	void OnHUDChanged_Size_HUD2();
	void OnHUDChanged_Opacity_Minimap();
	void HurtAnimation();
	void EnteringZoneAnimation();
	void OnPrimaryWeaponChanged();
	void RetractAnimationEvent();
	void ExpandAnimationEvent();
	void OnHUDChanged_ExpandOrNot();
	void SwapWeaponsAnimation();
	void OnEquipmentActivated();
	void OnWoundedState_Event_1();
	void OnHandGunAmmoChanged();
	void OnLongGunAmmoChanged();
	void OnAmmoUpdate();
	void OnInventoryUpdated();
	void OnHealthChanged();
	void ResetIconCache();
	void ManualUpdateAmmoCounts();
	void ExecuteUbergraph_Widget_HUD();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
