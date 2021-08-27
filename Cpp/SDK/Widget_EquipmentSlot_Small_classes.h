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

// WidgetBlueprintGeneratedClass Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C
// 0x0000
class UWidget_EquipmentSlot_Small_C : public UWidget_EquipmentSlot_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_EquipmentSlot_Small.Widget_EquipmentSlot_Small_C");
		return ptr;
	}



	void GetCachedInventory();
	void CacheInfo();
	void SelectedVisibility();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature();
	void Construct();
	void Refresh();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_5_OnAdvButtonClickedEvent__DelegateSignature();
	void SimulateAction();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_EquipmentSlot_Small();
	void LostFocus__DelegateSignature();
	void Focused__DelegateSignature();
	void Clicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
