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

// WidgetBlueprintGeneratedClass Widget_HoldButton.Widget_HoldButton_C
// 0x0000
class UWidget_HoldButton_C : public UFocusWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HoldButton.Widget_HoldButton_C");
		return ptr;
	}



	void SetImageNameID();
	void GetPercent_1();
	void GetPressTimerPct();
	void Tick();
	void OnButtonPressed();
	void OnButtonReleased();
	void OnTimeExpired();
	void PlayHoldSuccess();
	void Construct();
	void OnButtonclick();
	void ExecuteUbergraph_Widget_HoldButton();
	void OnPressAndHold__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
