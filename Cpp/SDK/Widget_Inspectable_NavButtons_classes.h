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

// WidgetBlueprintGeneratedClass Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C
// 0x0000
class UWidget_Inspectable_NavButtons_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Inspectable_NavButtons.Widget_Inspectable_NavButtons_C");
		return ptr;
	}



	void ToggleNextButtonVisibility();
	void TogglePrevButtonVisibility();
	void Construct();
	void SetNavBindings();
	void OnNavLeft();
	void OnNavRight();
	void ExecuteUbergraph_Widget_Inspectable_NavButtons();
	void OnNavigatePrev__DelegateSignature();
	void OnNavigateNext__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
