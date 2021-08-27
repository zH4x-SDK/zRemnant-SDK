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

// WidgetBlueprintGeneratedClass Widget_Emotes.Widget_Emotes_C
// 0x0000
class UWidget_Emotes_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Emotes.Widget_Emotes_C");
		return ptr;
	}



	void Get_Cancel_Visibility_1();
	void MakeSelection();
	void CanScroll();
	void Get_LeftButton_Visibility_1();
	void Get_RightButton_Visibility_1();
	void ResolveIndex();
	void SetIndex();
	void SelectEmote();
	void Init();
	void Tick();
	void DoRightScroll();
	void DoLeftScroll();
	void Construct();
	void OnFinishedScrollingRight();
	void OnFinishedScrollingLeft();
	void SetNavigate();
	void SelectNextEmote();
	void SelectPreviousEmote();
	void AttemptNavigation();
	void ExecuteUbergraph_Widget_Emotes();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
