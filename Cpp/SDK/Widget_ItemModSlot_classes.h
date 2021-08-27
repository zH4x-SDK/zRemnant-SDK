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

// WidgetBlueprintGeneratedClass Widget_ItemModSlot.Widget_ItemModSlot_C
// 0x0000
class UWidget_ItemModSlot_C : public UWidget_StatBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemModSlot.Widget_ItemModSlot_C");
		return ptr;
	}



	void GetSlotLabel();
	void GetVisibility_1();
	void CacheInspectInfo();
	void Refresh();
	void Construct();
	void BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_200_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_236_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_254_OnAdvButtonClickedEvent__DelegateSignature();
	void InitFromInspectInfo();
	void OnInstanceDataChanged();
	void ExecuteUbergraph_Widget_ItemModSlot();
	void OnModClicked__DelegateSignature();
	void OnModSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
