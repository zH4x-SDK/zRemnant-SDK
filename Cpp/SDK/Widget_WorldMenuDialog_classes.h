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

// WidgetBlueprintGeneratedClass Widget_WorldMenuDialog.Widget_WorldMenuDialog_C
// 0x0000
class UWidget_WorldMenuDialog_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_WorldMenuDialog.Widget_WorldMenuDialog_C");
		return ptr;
	}



	void BeginSurvivalMode();
	void GetDescriptionTextFromDifficulty();
	void GetDescriptionRowFromGameMode();
	void GetCreateCaptionForGameMode();
	void FocusCurrentSlot();
	void Get_Slot2_Visibility_1();
	void BeginSelectDifficulty();
	void Get_QuestSelectLeft_Visibility_1();
	void RefreshCreateButton();
	void LoadQuestAndClose();
	void Get_Select_bIsEnabled_1();
	void Get_CreateNewWorld_Visibility_1();
	void Get_QuestSelectRight_Visibility_1();
	void NextQuest();
	void PrevQuest();
	void BuildCreateQuestList();
	void BeginCreateQuest();
	void RefreshCreateQuest();
	void RefreshQuestSlots();
	void GetQuest();
	void GetQuestManager();
	void DestroyQuest();
	void SetContext();
	void OnLoaded_0E363505432DE7D2D120D18BF2E01914();
	void WaitForQuestToLoadThenExit();
	void OnQuestLoaded_Event_1();
	void BndEvt__FocusButtonWidget_254_K2Node_ComponentBoundEvent_0_OnNavigationDelegate__DelegateSignature();
	void BndEvt__QuestSelectRight_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__QuestSelectLeft_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__CreateNewWorld_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature();
	void OnDialogResult_Event_1();
	void CreateQuestEvent();
	void BndEvt__WorldTab_K2Node_ComponentBoundEvent_8_OnSelected__DelegateSignature();
	void BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_9_OnFocused__DelegateSignature();
	void BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_10_OnFocused__DelegateSignature();
	void BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_11_OnFocused__DelegateSignature();
	void BndEvt__Widget_ButtonEx_C_2_K2Node_ComponentBoundEvent_12_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__DifficultyNormal_K2Node_ComponentBoundEvent_13_OnSelected__DelegateSignature();
	void BndEvt__DifficultyHard_K2Node_ComponentBoundEvent_14_OnSelected__DelegateSignature();
	void BndEvt__DifficultyNightmare_K2Node_ComponentBoundEvent_15_OnSelected__DelegateSignature();
	void BndEvt__CancelCreate_K2Node_ComponentBoundEvent_846_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__CancelCreate2_K2Node_ComponentBoundEvent_16_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__BottomBtn_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButtonWidget_0_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__WorldTab_K2Node_ComponentBoundEvent_4_OnRight__DelegateSignature();
	void BndEvt__WorldTab_K2Node_ComponentBoundEvent_5_OnLeft__DelegateSignature();
	void BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_19_OnFocused__DelegateSignature();
	void BndEvt__DifficultyApocalipse_K2Node_ComponentBoundEvent_20_OnSelected__DelegateSignature();
	void BndEvt__FocusButtonWidget_1_K2Node_ComponentBoundEvent_11_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__Widget_DifficultyTab_C_0_K2Node_ComponentBoundEvent_17_OnSelected__DelegateSignature();
	void BndEvt__Widget_DifficultyTab_C_1_K2Node_ComponentBoundEvent_18_OnSelected__DelegateSignature();
	void BndEvt__Widget_DifficultyTab_C_2_K2Node_ComponentBoundEvent_21_OnSelected__DelegateSignature();
	void BndEvt__Widget_DifficultyTab_C_3_K2Node_ComponentBoundEvent_22_OnSelected__DelegateSignature();
	void BndEvt__SurvivalDifficultyNormal_K2Node_ComponentBoundEvent_23_OnFocused__DelegateSignature();
	void BndEvt__SurvivalDifficultyHard_K2Node_ComponentBoundEvent_24_OnFocused__DelegateSignature();
	void BndEvt__SurvivalDifficultyNightmare_K2Node_ComponentBoundEvent_25_OnFocused__DelegateSignature();
	void BndEvt__SurvivalDifficultyApocalypse_K2Node_ComponentBoundEvent_26_OnFocused__DelegateSignature();
	void Construct();
	void BndEvt__Slot0_K2Node_ComponentBoundEvent_343_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__Slot1_K2Node_ComponentBoundEvent_369_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__Slot2_K2Node_ComponentBoundEvent_396_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__Load_K2Node_ComponentBoundEvent_937_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void EndDialog();
	void BndEvt__Slot0_K2Node_ComponentBoundEvent_1_OnCreate__DelegateSignature();
	void BndEvt__Slot1_K2Node_ComponentBoundEvent_2_OnCreate__DelegateSignature();
	void BndEvt__Slot2_K2Node_ComponentBoundEvent_3_OnCreate__DelegateSignature();
	void BndEvt__Slot0_K2Node_ComponentBoundEvent_7_OnSelect__DelegateSignature();
	void BndEvt__Slot1_K2Node_ComponentBoundEvent_8_OnSelect__DelegateSignature();
	void BndEvt__Slot2_K2Node_ComponentBoundEvent_9_OnSelect__DelegateSignature();
	void BndEvt__Slot2_K2Node_ComponentBoundEvent_18_OnSelect__DelegateSignature();
	void BndEvt__Slot2_K2Node_ComponentBoundEvent_5_OnCreate__DelegateSignature();
	void BndEvt__Slot2_K2Node_ComponentBoundEvent_6_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__SurvivalBack_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_WorldMenuDialog();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
