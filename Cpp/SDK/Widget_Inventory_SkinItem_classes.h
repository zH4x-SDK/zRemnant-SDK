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

// WidgetBlueprintGeneratedClass Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C
// 0x0000
class UWidget_Inventory_SkinItem_C : public UWidget_FocusWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Inventory_SkinItem.Widget_Inventory_SkinItem_C");
		return ptr;
	}



	void CheckEntitlement();
	void IsEquipped();
	void Get_OverlayIcon_ColorAndOpacity_1();
	void GetInspectInfo();
	void SetInspectInfo();
	void Get_Border_4_BrushColor_1();
	void GetEquippedVisibility();
	void GetVisibility_2();
	void SelectItem();
	void DoAction();
	void CacheInfo();
	void GetCachedInventory();
	void GetInventoryItem();
	void OnFocus_Event_1();
	void OnAdded();
	void OnInventoryChanged();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void SimulateAction();
	void Refresh();
	void ExecuteUbergraph_Widget_Inventory_SkinItem();
	void OnSelected__DelegateSignature();
	void OnItemAction__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
