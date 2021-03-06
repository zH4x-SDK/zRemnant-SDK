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

// WidgetBlueprintGeneratedClass Widget_NewWorldTab.Widget_NewWorldTab_C
// 0x0000
class UWidget_NewWorldTab_C : public UFocusWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_NewWorldTab.Widget_NewWorldTab_C");
		return ptr;
	}



	void IsEnabled();
	void SetQuestInfo();
	void Refresh();
	void Construct();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnNavigationDelegate__DelegateSignature();
	void ExecuteUbergraph_Widget_NewWorldTab();
	void OnRight__DelegateSignature();
	void OnLeft__DelegateSignature();
	void OnSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
