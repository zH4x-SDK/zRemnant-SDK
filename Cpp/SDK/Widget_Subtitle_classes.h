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

// WidgetBlueprintGeneratedClass Widget_Subtitle.Widget_Subtitle_C
// 0x0000
class UWidget_Subtitle_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Subtitle.Widget_Subtitle_C");
		return ptr;
	}



	void Construct();
	void OnTextReady();
	void ExecuteUbergraph_Widget_Subtitle();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
