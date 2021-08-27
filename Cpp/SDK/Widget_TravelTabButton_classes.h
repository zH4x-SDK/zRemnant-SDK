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

// WidgetBlueprintGeneratedClass Widget_TravelTabButton.Widget_TravelTabButton_C
// 0x0000
class UWidget_TravelTabButton_C : public UFocusWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TravelTabButton.Widget_TravelTabButton_C");
		return ptr;
	}



	void IsPressed();
	void Construct();
	void BndEvt__Button_K2Node_ComponentBoundEvent_77_OnTabFocusDelegate__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_83_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_TravelTabButton();
	void AnimateLine__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
