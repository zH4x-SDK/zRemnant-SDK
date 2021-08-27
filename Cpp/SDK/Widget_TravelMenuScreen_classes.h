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

// WidgetBlueprintGeneratedClass Widget_TravelMenuScreen.Widget_TravelMenuScreen_C
// 0x0000
class UWidget_TravelMenuScreen_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_TravelMenuScreen.Widget_TravelMenuScreen_C");
		return ptr;
	}



	void IsInSurvivalHub();
	void IsSurvivalMode();
	void IsInTown();
	void BuildLastCheckpointEntry();
	void GetZoneLabel();
	void SetActionText();
	void HideEmptyTabs();
	void GetList();
	void ControlletVisibility();
	void UpdateTravelEnabled();
	void IsInDungeon();
	void CreateMenuEntry();
	void CreateMenuEntryIfTagExists();
	void BuildFastTravelEntries();
	void Init();
	void FocusFirst();
	void BuildMenuEntries();
	void Construct();
	void BndEvt__BackButton_K2Node_ComponentBoundEvent_18_OnAdvButtonClickedEvent__DelegateSignature();
	void Tick();
	void LeaveTravelMenu();
	void BndEvt__DoitAction_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_TravelMenuScreen();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
