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

// WidgetBlueprintGeneratedClass Widget_InGameMenu.Widget_InGameMenu_C
// 0x0000
class UWidget_InGameMenu_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_InGameMenu.Widget_InGameMenu_C");
		return ptr;
	}



	void InitTabPanel();
	void CreateTabPanel();
	void IsTabFocused();
	void CreateAndFocusWidget();
	void SetShowAdvancedPanel();
	void ShowAdvancedPanel();
	void IsSellFocused();
	void IsCraftingFocused();
	void IsBuyFocused();
	void IsUpgradeFocused();
	void FocusSell();
	void IsCharacterFocused();
	void IsOptionsFocused();
	void IsQuestFocused();
	void IsTraitsFocused();
	void IsInventoryFocused();
	void FocusOptions();
	void GetVisibility_1();
	void FocusTraits();
	void FocusUpgrade();
	void FocusBuy();
	void FocusCrafting();
	void ShowHideTabs();
	void FocusQuest();
	void FocusInventory();
	void FocusCharacter();
	void BndEvt__BuyTab_K2Node_ComponentBoundEvent_10_OnTabPressed__DelegateSignature();
	void BndEvt__TraitsTab_K2Node_ComponentBoundEvent_2_OnTabPressed__DelegateSignature();
	void Construct();
	void BndEvt__SellTab_K2Node_ComponentBoundEvent_7_OnTabPressed__DelegateSignature();
	void Tick();
	void BndEvt__UpgradeTab_K2Node_ComponentBoundEvent_6_OnTabPressed__DelegateSignature();
	void BndEvt__CharacterTab_K2Node_ComponentBoundEvent_1_OnTabPressed__DelegateSignature();
	void BndEvt__CraftingTab_K2Node_ComponentBoundEvent_4_OnTabPressed__DelegateSignature();
	void BndEvt__QuestTab_K2Node_ComponentBoundEvent_3_OnTabPressed__DelegateSignature();
	void BndEvt__InventoryTab_K2Node_ComponentBoundEvent_2_OnTabPressed__DelegateSignature();
	void AnimateLine_Inventory();
	void AnimateLine_Crafting();
	void AnimateLine_Trait();
	void AnimateLine_Quest();
	void AnimateLine_Options();
	void AnimateLine_Sell();
	void AnimateLine_Buy();
	void AnimateLine_Upgrade();
	void BndEvt__OptionsTab_K2Node_ComponentBoundEvent_1_OnTabPressed__DelegateSignature();
	void Destruct();
	void AdvancedStatsBtnClicked();
	void AnimateLine_Materials();
	void OnDialogPopped();
	void ExecuteUbergraph_Widget_InGameMenu();
	void Closed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
