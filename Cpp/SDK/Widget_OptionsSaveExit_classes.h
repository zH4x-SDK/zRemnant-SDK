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

// WidgetBlueprintGeneratedClass Widget_OptionsSaveExit.Widget_OptionsSaveExit_C
// 0x0000
class UWidget_OptionsSaveExit_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_OptionsSaveExit.Widget_OptionsSaveExit_C");
		return ptr;
	}



	void IsHardcoreSurvival();
	void CanChangeMatchmakingOptions();
	void CheckExitState();
	void ShowExitWarning();
	void IsInSurvival();
	void Get_ExitApplicationWarning_Visibility_1();
	void Get_ExitMainMenuWarning_Visibility_1();
	void GetbIsEnabled_2();
	void GetbIsEnabled_1();
	void AddMatchmakingOptions();
	void SaveUserSettings();
	void UpdateHostOptions();
	void GetExitApplicationVis();
	void SaveCharacterData();
	void Construct();
	void BndEvt__Widget_FixedSetting_1_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__Widget_FixedSetting_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void RefocusList();
	void BndEvt__Widget_FixedSetting_2_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void OnExitKickBan();
	void Destruct();
	void OnDialogResult();
	void UpdateMatchmakingSettings();
	void ExitToMenuWarningResult();
	void ExitGameWarningResult();
	void ExecuteUbergraph_Widget_OptionsSaveExit();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
