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

// WidgetBlueprintGeneratedClass Widget_VoiceInputDeviceUserSetting.Widget_VoiceInputDeviceUserSetting_C
// 0x0000
class UWidget_VoiceInputDeviceUserSetting_C : public UFocusWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_VoiceInputDeviceUserSetting.Widget_VoiceInputDeviceUserSetting_C");
		return ptr;
	}



	void Get_Description_Text_1();
	void MenuSelection();
	void GetText_1();
	void GetVisibility_2();
	void GetVisibility_1();
	void Get_Label_Text_1();
	void ToggleValue();
	void Get_Check_Visibility_1();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_7_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_143_OnAdvButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__ArrowLeft_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__ArrowRight_K2Node_ComponentBoundEvent_5_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnNavigationDelegate__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_VoiceInputDeviceUserSetting();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
