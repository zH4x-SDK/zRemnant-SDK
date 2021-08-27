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

// WidgetBlueprintGeneratedClass Widget_Window.Widget_Window_C
// 0x0000
class UWidget_Window_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Window.Widget_Window_C");
		return ptr;
	}



	void Get_Use_Visibility();
	void GetBrush_1();
	void Get_Overlay_Visibility_1();
	void SetCaption();
	void Get_Close_Visibility_1();
	void Construct();
	void BndEvt__FocusButtonWidget_101_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_276_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_Window();
	void Closed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
