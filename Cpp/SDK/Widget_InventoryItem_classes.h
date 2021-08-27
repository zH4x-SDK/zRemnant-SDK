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

// WidgetBlueprintGeneratedClass Widget_InventoryItem.Widget_InventoryItem_C
// 0x0000
class UWidget_InventoryItem_C : public UWidget_FocusWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_InventoryItem.Widget_InventoryItem_C");
		return ptr;
	}



	void CheckEntitlement();
	void HasMaxQuantity();
	void GetModifiedPurchaseLevel();
	void MarkUpgradeIngredientsForRemoval();
	void IsRadialSlotted();
	void CacheRecipe();
	void Get_OverlayIcon_ColorAndOpacity_1();
	void GetInspectInfo();
	void SetInspectInfo();
	void Get_Border_4_BrushColor_1();
	void GetCost();
	void GetPrimaryStat();
	void UpgradeLevelColor();
	void Get_Cost_ColorAndOpacity_1();
	void GetEquippedVisibility();
	void Action_Panel_Visibility();
	void GetVisibility_2();
	void PlayEquipedSound();
	void ShouldRemoveUniqueItem();
	void PlayerHasItem();
	void IsUnique();
	void GetRecipeCost();
	void SelectItem();
	void Get_CostPanel_Visibility_1();
	void RefreshAction();
	void ValidateAction();
	void DoAction();
	void CacheInfo();
	void GetFillUpBarVisibility();
	void GetCachedInventory();
	void GetInventoryItem();
	void DoUpgrade();
	void OnUpgradeResult();
	void OnBuyResult();
	void Construct();
	void OnFocus_Event_1();
	void OnAdded();
	void OnInventoryChanged();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_92_OnAdvButtonPressedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__HoldButton_K2Node_ComponentBoundEvent_1388_OnPressAndHold__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_528_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void RemoveOnQuantityZero();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void SimulateAction();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature();
	void Refresh();
	void ExecuteUbergraph_Widget_InventoryItem();
	void OnItemSelected__DelegateSignature();
	void OnItemAction__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
