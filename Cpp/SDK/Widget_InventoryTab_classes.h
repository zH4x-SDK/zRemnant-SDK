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

// WidgetBlueprintGeneratedClass Widget_InventoryTab.Widget_InventoryTab_C
// 0x0000
class UWidget_InventoryTab_C : public UWidget_FocusWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_InventoryTab.Widget_InventoryTab_C");
		return ptr;
	}



	void OverrideVisibility();
	void HasValidItems();
	void GetColorAndOpacity_1();
	void IsValidCategory();
	void IsValidItemType();
	void EvaluateVisibility();
	void Init();
	void GetLabel();
	void Construct();
	void BndEvt__TabButton_0_K2Node_ComponentBoundEvent_59_OnTabFocusDelegate__DelegateSignature();
	void BndEvt__TabButton_0_K2Node_ComponentBoundEvent_81_OnButtonPressedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_InventoryTab();
	void OnTabFocus__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
