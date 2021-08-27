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

// WidgetBlueprintGeneratedClass Widget_Options.Widget_Options_C
// 0x0000
class UWidget_Options_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Options.Widget_Options_C");
		return ptr;
	}



	void InitList();
	void SetEnableResetButton();
	void Get_ResetBtn_Visibility_1();
	void Get_LanguageTab_Visibility_1();
	void MenuSelect();
	void GetVisibility_1();
	void Get_ItemTypeLabel_Text_1();
	void Construct();
	void BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__SaveAndExitTab_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__VideoTab_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__AudioTab_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__GameplayTab_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__KeybindsTab_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature();
	void Destruct();
	void OnUpdateVideoSettings();
	void SaveNonResolutionSettings();
	void ShowResolutionConfirmation();
	void BndEvt__AudioTab_K2Node_ComponentBoundEvent_4_OnTabFocusDelegate__DelegateSignature();
	void BndEvt__GameplayTab_K2Node_ComponentBoundEvent_5_OnTabFocusDelegate__DelegateSignature();
	void BndEvt__KeybindsTab_K2Node_ComponentBoundEvent_6_OnTabFocusDelegate__DelegateSignature();
	void BndEvt__VideoTab_K2Node_ComponentBoundEvent_10_OnTabFocusDelegate__DelegateSignature();
	void BndEvt__LanguageTab_K2Node_ComponentBoundEvent_7_OnTabFocusDelegate__DelegateSignature();
	void BndEvt__LanguageTab_K2Node_ComponentBoundEvent_13_OnButtonPressedEvent__DelegateSignature();
	void RefocusOptions();
	void BndEvt__ResetBtn_K2Node_ComponentBoundEvent_9_OnAdvButtonClickedEvent__DelegateSignature();
	void OnReset();
	void ExecuteUbergraph_Widget_Options();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
