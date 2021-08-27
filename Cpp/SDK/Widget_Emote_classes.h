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

// WidgetBlueprintGeneratedClass Widget_Emote.Widget_Emote_C
// 0x0000
class UWidget_Emote_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Emote.Widget_Emote_C");
		return ptr;
	}



	void SetSelected();
	void Init();
	void Construct();
	void Tick();
	void UpdateIcon();
	void OnIconLoaded();
	void ExecuteUbergraph_Widget_Emote();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
