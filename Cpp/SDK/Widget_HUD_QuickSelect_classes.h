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

// WidgetBlueprintGeneratedClass Widget_HUD_QuickSelect.Widget_HUD_QuickSelect_C
// 0x0000
class UWidget_HUD_QuickSelect_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HUD_QuickSelect.Widget_HUD_QuickSelect_C");
		return ptr;
	}



	void UpdateSchemaByInput();
	void Construct();
	void UpdateImageBindings();
	void ExecuteUbergraph_Widget_HUD_QuickSelect();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
