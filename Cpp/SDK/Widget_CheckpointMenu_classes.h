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

// WidgetBlueprintGeneratedClass Widget_CheckpointMenu.Widget_CheckpointMenu_C
// 0x0000
class UWidget_CheckpointMenu_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_CheckpointMenu.Widget_CheckpointMenu_C");
		return ptr;
	}



	void GetTutorial();
	void RefreshWaypointInfo();
	void IsInTown();
	void InDemoMode();
	void GetZoneLabel();
	void SetActionText();
	void SetSelectedAction();
	void UpdateActionText();
	void ShowTutorial();
	void UnbindEvents();
	void OnTravelStateChanged();
	void UpdateTravelEnabled();
	void CreateMenuEntry();
	void Init();
	void FocusFirst();
	void BuildMenuEntries();
	void OnLoaded_8DD6F9514A9A47A1BEC8FDA30BFBA923();
	void Construct();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature();
	void Destruct();
	void Tick();
	void LoadWaypointImage();
	void BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void ShowTutorialWithDelay();
	void OnDialogResult_Event_1();
	void ExecuteUbergraph_Widget_CheckpointMenu();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
