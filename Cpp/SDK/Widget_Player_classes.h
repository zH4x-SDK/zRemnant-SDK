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

// WidgetBlueprintGeneratedClass Widget_Player.Widget_Player_C
// 0x0000
class UWidget_Player_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Player.Widget_Player_C");
		return ptr;
	}



	void Construct();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonPressedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnNavigationDelegate__DelegateSignature();
	void ExecuteUbergraph_Widget_Player();
	void Kick__DelegateSignature();
	void Navigate__DelegateSignature();
	void Selected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
