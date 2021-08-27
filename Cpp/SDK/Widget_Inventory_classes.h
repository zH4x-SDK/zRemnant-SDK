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

// WidgetBlueprintGeneratedClass Widget_Inventory.Widget_Inventory_C
// 0x0000
class UWidget_Inventory_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Inventory.Widget_Inventory_C");
		return ptr;
	}



	void DoSelectSkin();
	void Get_QuickSelect_Visibility_1();
	void SetAction();
	void FocusInventoryTab();
	void ParseEquipmentSlots();
	void GetItemToCompare();
	void SetItemResumeInfo();
	void CommandsVisibility();
	void FindInfo();
	void Get_ItemTypeLabel_Text_1();
	void GetVisibility_2();
	void GetVisibility_1();
	void ShowQuickSelect();
	void DoQuickSelect();
	void Get_Scrap_Text_1();
	void Refresh();
	void Construct();
	void OnInventoryChanged_Event_1();
	void OnTabFocus_Event_1();
	void BndEvt__QuickSelect_K2Node_ComponentBoundEvent_149_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__AdvancedStatsBtn_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__EquipUnequip_K2Node_ComponentBoundEvent_34_OnAdvButtonClickedEvent__DelegateSignature();
	void OnEquipmentFocused();
	void OnEquipmentClicked();
	void BndEvt__ItemInfo_K2Node_ComponentBoundEvent_1_OnSubAction__DelegateSignature();
	void BndEvt__InventoryList_K2Node_ComponentBoundEvent_2_OnSelectItem__DelegateSignature();
	void BndEvt__ResumeInfo_K2Node_ComponentBoundEvent_3_OnSubAction__DelegateSignature();
	void ExecuteUbergraph_Widget_Inventory();
	void AdvancedStats__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
