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

// WidgetBlueprintGeneratedClass Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C
// 0x0000
class UWidget_Checkpoint_Entry_C : public UWidget_FocusWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Checkpoint_Entry.Widget_Checkpoint_Entry_C");
		return ptr;
	}



	void ReturnToSurvivalLabyrinth();
	void DoActionConfirmed();
	void ShowConfirmDialog();
	void TravelToLastCheckpoint();
	void IsFocusedVisibility();
	void CanTravel();
	void LeaveDungeon();
	void ReturnToTown();
	void FastTravel();
	void DoAction();
	void OnLoaded_74207D154806E394FF9607BD3C1D42DE();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1278_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1315_OnAdvButtonClickedEvent__DelegateSignature();
	void Construct();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void OnDialogResult();
	void ExecuteUbergraph_Widget_Checkpoint_Entry();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
