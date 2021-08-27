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

// WidgetBlueprintGeneratedClass Widget_KeybindUserSetting.Widget_KeybindUserSetting_C
// 0x0000
class UWidget_KeybindUserSetting_C : public UFocusWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_KeybindUserSetting.Widget_KeybindUserSetting_C");
		return ptr;
	}



	void MenuSelect();
	void SetKeybind();
	void GetText_1();
	void GetVisibility_2();
	void GetVisibility_1();
	void Get_Label_Text_1();
	void BndEvt__FocusButtonWidget_2_K2Node_ComponentBoundEvent_266_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_7_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_143_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void OnKeyInput();
	void OnInvalidInput();
	void OnDuplicateInput();
	void ReturnFocus();
	void ExecuteUbergraph_Widget_KeybindUserSetting();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
