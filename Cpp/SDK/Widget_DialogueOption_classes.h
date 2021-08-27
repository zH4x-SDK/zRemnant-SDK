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

// WidgetBlueprintGeneratedClass Widget_DialogueOption.Widget_DialogueOption_C
// 0x0000
class UWidget_DialogueOption_C : public UFocusWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_DialogueOption.Widget_DialogueOption_C");
		return ptr;
	}



	void SetIcon();
	void Get_Icon_Visibility_1();
	void GetColorAndOpacity_1();
	void Get_Button_bIsEnabled_1();
	void GetText_1();
	void Construct();
	void BndEvt__Button_K2Node_ComponentBoundEvent_182_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_DialogueOption();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
