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

// WidgetBlueprintGeneratedClass Widget_OptionsLanguage.Widget_OptionsLanguage_C
// 0x0000
class UWidget_OptionsLanguage_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_OptionsLanguage.Widget_OptionsLanguage_C");
		return ptr;
	}



	void SetIsMainMenu();
	void Construct();
	void ResetScrollOffset();
	void ExecuteUbergraph_Widget_OptionsLanguage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
