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

// WidgetBlueprintGeneratedClass Widget_Tutorial_Base.Widget_Tutorial_Base_C
// 0x0000
class UWidget_Tutorial_Base_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Tutorial_Base.Widget_Tutorial_Base_C");
		return ptr;
	}



	void UpdateOrientation();
	void SetupPips();
	void SetupNextPage();
	void Init();
	void GetTutorial();
	void SetupPage();
	void BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_1_OnAction__DelegateSignature();
	void Construct();
	void BndEvt__OkButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_Tutorial_Base();
	void Tutorial_Window_Closed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
