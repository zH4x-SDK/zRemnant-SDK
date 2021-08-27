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

// WidgetBlueprintGeneratedClass Widget_CheckpointOption.Widget_CheckpointOption_C
// 0x0000
class UWidget_CheckpointOption_C : public UWidget_FocusWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_CheckpointOption.Widget_CheckpointOption_C");
		return ptr;
	}



	void SurvivalMode();
	void OpenWorldSettingsDialog();
	void IsValid();
	void OpenTravelMenuDialog();
	void IsFocusedVisibility();
	void ActivateCheckpoint();
	void DoAction();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature();
	void SimulateClick();
	void ExecuteUbergraph_Widget_CheckpointOption();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
