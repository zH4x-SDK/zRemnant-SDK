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

// WidgetBlueprintGeneratedClass Widget_WorldSlot.Widget_WorldSlot_C
// 0x0000
class UWidget_WorldSlot_C : public UFocusWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_WorldSlot.Widget_WorldSlot_C");
		return ptr;
	}



	void Get_ActivePanel_Visibility_1();
	void GetPrompt();
	void Get_Create_Visibility_1();
	void SetGameMode();
	void RefreshDifficulty();
	void RefreshGameMode();
	void RefreshPlayTime();
	void Refresh();
	void GetQuest();
	void Construct();
	void BndEvt__Create_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__Select_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButtonWidget_160_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_WorldSlot();
	void OnSelect__DelegateSignature();
	void OnCreate__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
