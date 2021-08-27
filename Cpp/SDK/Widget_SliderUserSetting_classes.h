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

// WidgetBlueprintGeneratedClass Widget_SliderUserSetting.Widget_SliderUserSetting_C
// 0x0000
class UWidget_SliderUserSetting_C : public UFocusWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_SliderUserSetting.Widget_SliderUserSetting_C");
		return ptr;
	}



	void Get_Description_Text_1();
	void MenuSelection();
	void GetText_1();
	void GetVisibility_1();
	void GetPercent_1();
	void Get_Label_Text_1();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_366_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_406_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_5_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_131_OnNavigationDelegate__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_342_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__ArrowRight_K2Node_ComponentBoundEvent_170_OnAdvButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_82_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_SliderUserSetting();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
