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

// WidgetBlueprintGeneratedClass Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C
// 0x0000
class UWidget_Mod_HUD_Box_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Mod_HUD_Box.Widget_Mod_HUD_Box_C");
		return ptr;
	}



	void OnAnyChange();
	void PlayActivateSound();
	void PlayDeactivateSound();
	void Repeater_PowerUp();
	void RefreshActive();
	void GetMaxCharges();
	void RefreshMod();
	void Refresh();
	void RefreshModSlot();
	void Construct();
	void OnInventoryChanged_Event_1();
	void SetWeapon();
	void OnPowerChanged_Event_1();
	void OnChargesChanged_Event_1();
	void OnActivateMod_Event_1();
	void OnUpdateActive();
	void PowerUp();
	void PowerUpRepeater();
	void ReadyToBeUsed();
	void OnInstanceDataChanged();
	void ExecuteUbergraph_Widget_Mod_HUD_Box();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
