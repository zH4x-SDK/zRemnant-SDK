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

// WidgetBlueprintGeneratedClass Widget_StatusBar_Circle.Widget_StatusBar_Circle_C
// 0x0000
class UWidget_StatusBar_Circle_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_StatusBar_Circle.Widget_StatusBar_Circle_C");
		return ptr;
	}



	void Get_FillGamepad_Visibility_1();
	void Get_FillKeyboard_Visibility_1();
	void Get_FlashImage_Brush_1();
	void Get_FlashImage_ColorAndOpacity_2();
	void Get_FlashImage_ColorAndOpacity_1();
	void Flash();
	void SetPercentage();
	void DelayedSetPercentage();
	void PreConstruct();
	void ExecuteUbergraph_Widget_StatusBar_Circle();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
