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

// WidgetBlueprintGeneratedClass Widget_MashProgressBar.Widget_MashProgressBar_C
// 0x0000
class UWidget_MashProgressBar_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MashProgressBar.Widget_MashProgressBar_C");
		return ptr;
	}



	void Get_Image_114_Brush_1();
	void Update_Mashable();
	void Get_MashValue_Percent();
	void Construct();
	void Tick();
	void ExecuteUbergraph_Widget_MashProgressBar();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
