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

// WidgetBlueprintGeneratedClass Widget_OptionsList.Widget_OptionsList_C
// 0x0000
class UWidget_OptionsList_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_OptionsList.Widget_OptionsList_C");
		return ptr;
	}



	void OnVSyncApplied();
	void Get_Controller_Visibility_1();
	void Get_Keybind_Visibility_1();
	void FocusFirst();
	void ResetOptions();
	void GetCategorySettings();
	void GetListMaxIndex();
	void CleanList();
	void ToggleResolutionOptions();
	void OnFullscreenModeApplied();
	void UpdateVideoSetting();
	void IsKeyAlreadyBound();
	void BuildList();
	void Construct();
	void ResetScrollOffset();
	void Destruct();
	void DeviceChanged();
	void ResetToDefault();
	void PopulateList();
	void Conditionally_Reset_PC_Image_Cache();
	void ExecuteUbergraph_Widget_OptionsList();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
