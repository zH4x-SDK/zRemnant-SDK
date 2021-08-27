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

// WidgetBlueprintGeneratedClass Widget_Trait.Widget_Trait_C
// 0x0000
class UWidget_Trait_C : public UFocusWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Trait.Widget_Trait_C");
		return ptr;
	}



	void HasNoTraitManualLevelUp();
	void PickStat();
	void HasTraitPoints();
	void Get_Border_4_Visibility_1();
	void Get_Stats_Visibility_1();
	void Get_Description_Visibility_1();
	void CanSpendTraitPoint();
	void Add_TraitLevel();
	void ShowUpgrade();
	void Refresh();
	void CacheInspectInfo();
	void Construct();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_90_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_136_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_348_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_397_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnAction__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void OnTraitLevelChanged_Event_1();
	void SimulateClick();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void OnConfirm();
	void UpgradeEffectEvent();
	void ExecuteUbergraph_Widget_Trait();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
