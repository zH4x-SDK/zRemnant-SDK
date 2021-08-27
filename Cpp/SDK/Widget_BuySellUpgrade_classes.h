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

// WidgetBlueprintGeneratedClass Widget_BuySellUpgrade.Widget_BuySellUpgrade_C
// 0x0000
class UWidget_BuySellUpgrade_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BuySellUpgrade.Widget_BuySellUpgrade_C");
		return ptr;
	}



	void FocusTab();
	void HasFocusedTab();
	void SetActionEnabled();
	void GetVisibility_1();
	void CheckTutorial();
	void ShowHideTabs();
	void Get_Scrap_Text_1();
	void GetRelevantInventory();
	void FocusFirstVisibleTab();
	void Construct();
	void OnSelectItem();
	void OnTabFocus();
	void PreConstruct();
	void BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void OnAddedToFocusPath();
	void BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__HoldtoCraft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature();
	void ShowTutorialWithDelay();
	void FocusFirstAvailableEvent();
	void OnInventoryChanged_Event_1();
	void ExecuteUbergraph_Widget_BuySellUpgrade();
	void AdvancedStats__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
