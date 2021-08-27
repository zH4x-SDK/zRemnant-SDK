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

// WidgetBlueprintGeneratedClass Widget_Subtitles.Widget_Subtitles_C
// 0x0000
class UWidget_Subtitles_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Subtitles.Widget_Subtitles_C");
		return ptr;
	}



	void ShouldShowSubtitle();
	void RemoveSubtitle();
	void AddSubtitle();
	void Construct();
	void OnAddSubtitle_Event_1();
	void OnRemoveSubtitle_Event_1();
	void ExecuteUbergraph_Widget_Subtitles();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
