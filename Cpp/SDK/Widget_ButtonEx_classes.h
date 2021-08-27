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

// WidgetBlueprintGeneratedClass Widget_ButtonEx.Widget_ButtonEx_C
// 0x0000
class UWidget_ButtonEx_C : public UFocusWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ButtonEx.Widget_ButtonEx_C");
		return ptr;
	}



	void GetInvisibleVisibility_1();
	void GetInvisible();
	void SetInvisible();
	void Get_PulseImg_Brush_1();
	void Get_HoldButton_ColorAndOpacity_1();
	void IsolatedBtnVisibility();
	void SetPressAndHoldTime();
	void StopPulse();
	void StartPulse();
	void GetHoldPercentage();
	void Get_LabelWidget_ColorAndOpacity_1();
	void Set_Image_Size();
	void SetLabel();
	void Construct();
	void OnDeviceChangedDelegate_Event_1();
	void BndEvt__Btn_K2Node_ComponentBoundEvent_370_OnAdvButtonPressedEvent__DelegateSignature();
	void BndEvt__Btn_K2Node_ComponentBoundEvent_401_OnAdvButtonReleasedEvent__DelegateSignature();
	void BndEvt__HoldButton_K2Node_ComponentBoundEvent_1302_OnPressAndHold__DelegateSignature();
	void BndEvt__HoldButton_K2Node_ComponentBoundEvent_1357_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void Tick();
	void ExecuteUbergraph_Widget_ButtonEx();
	void OnAction__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
