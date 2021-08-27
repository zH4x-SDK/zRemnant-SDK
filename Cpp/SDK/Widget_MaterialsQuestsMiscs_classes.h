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

// WidgetBlueprintGeneratedClass Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C
// 0x0000
class UWidget_MaterialsQuestsMiscs_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MaterialsQuestsMiscs.Widget_MaterialsQuestsMiscs_C");
		return ptr;
	}



	void GetItemLabel();
	void RequiredUseConfirm();
	void CanBeHotKeyed();
	void GetSelectedItem();
	void GetRelevantInventory();
	void GetVisibility_3();
	void CommandsVisibility();
	void FindInfo();
	void FocusList();
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
	void BndEvt__InventoryList_K2Node_ComponentBoundEvent_0_OnSelectItem__DelegateSignature();
	void BndEvt__UseItem_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__InventoryList_K2Node_ComponentBoundEvent_2_OnItemClicked__DelegateSignature();
	void RefocusList();
	void OnSelectItem_Event();
	void OnDialogResult_Event_1();
	void ExecuteUbergraph_Widget_MaterialsQuestsMiscs();
	void AdvancedStats__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
