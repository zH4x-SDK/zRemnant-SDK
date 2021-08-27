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

// WidgetBlueprintGeneratedClass Widget_RadialItem.Widget_RadialItem_C
// 0x0000
class UWidget_RadialItem_C : public UWidget_FocusWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_RadialItem.Widget_RadialItem_C");
		return ptr;
	}



	void CheckEntitlement();
	void PlayEquipSound();
	void RefreshChildren();
	void IsEquipped();
	void HasValidItem();
	void Equip();
	void GetItemBP();
	void SetEquipItemBP();
	void Refresh();
	void BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_58_OnAdvButtonClickedEvent__DelegateSignature();
	void SimulateClick();
	void Construct();
	void ExecuteUbergraph_Widget_RadialItem();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
