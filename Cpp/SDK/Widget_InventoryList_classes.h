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

// WidgetBlueprintGeneratedClass Widget_InventoryList.Widget_InventoryList_C
// 0x0000
class UWidget_InventoryList_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_InventoryList.Widget_InventoryList_C");
		return ptr;
	}



	void ItemHasDoNotSellTag();
	void GetSortMethod();
	void UpdateInventoryIndex();
	void GetInventoryOwner();
	void SetInventoryOwner();
	void GetQueryFilter();
	void GetEmptyVisibility_2();
	void GetEmptyVisibility_1();
	void IsEmptyMerchantList();
	void GetPlayerInventory();
	void IsItemAtMaxStack();
	void SetBackgroundGridFadedSlotsSize();
	void ScreenSizeResolutionCalculation();
	void GetEquippedItem();
	void SetEnabled();
	void FocusFirstInventoryItem();
	void GetVisibility_1();
	void SetEquippedItem();
	void HasEquippedItem();
	void BuildUpdateEquippedItem();
	void ShouldHideItem();
	void SetPanelPadding();
	void GetPanelWidget();
	void GetInventoryItemByID();
	void GetVisibility_4Item();
	void GetVisibility_3Item();
	void PlayerHasItem();
	void IsItemUnique();
	void ShouldAddItem();
	void GetVisibility_2Item();
	void GetVisibility_1Item();
	void GetVisibility_Empty();
	void SetItemType();
	void FocusItem();
	void ShowInactiveFocus();
	void IsEmpty();
	void AddInventoryItem();
	void HasInventoryItem();
	void UpdateInventoryList();
	void Focus();
	void BuildInventoryList();
	void Construct();
	void OnSetInventory();
	void OnInventoryChanged();
	void ReFocus();
	void FocusFistAvailableEvent();
	void ResetScrollOffset();
	void OnItemSelected();
	void ExecuteUbergraph_Widget_InventoryList();
	void OnInventoryUpdate__DelegateSignature();
	void OnUpdateCustomEquipment__DelegateSignature();
	void OnRightClickEquipMod__DelegateSignature();
	void OnItemAction__DelegateSignature();
	void OnItemClicked__DelegateSignature();
	void OnSelectItem__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
