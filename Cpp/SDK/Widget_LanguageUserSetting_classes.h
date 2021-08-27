﻿#pragma once

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

// WidgetBlueprintGeneratedClass Widget_LanguageUserSetting.Widget_LanguageUserSetting_C
// 0x0000
class UWidget_LanguageUserSetting_C : public UFocusWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_LanguageUserSetting.Widget_LanguageUserSetting_C");
		return ptr;
	}



	void Get_Check_Visibility_2();
	void Get_Border_2_Visibility_1();
	void MenuSelection();
	void Get_Label_Text_1();
	void SetLanguage();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButtonWidget_2_K2Node_ComponentBoundEvent_266_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_7_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_143_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_Widget_LanguageUserSetting();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif