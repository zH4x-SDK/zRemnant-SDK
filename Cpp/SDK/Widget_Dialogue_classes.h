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

// WidgetBlueprintGeneratedClass Widget_Dialogue.Widget_Dialogue_C
// 0x0000
class UWidget_Dialogue_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Dialogue.Widget_Dialogue_C");
		return ptr;
	}



	void SetInititator();
	void FocusFirstUnvisitedOption();
	void UnbindEvents();
	void Get_Options_Visibility_1();
	void End();
	void HideOptions();
	void GetVisibility_1();
	void UpdateOptions();
	void UpdateDialogueText();
	void SetContext();
	void Construct();
	void BndEvt__Widget_ButtonEx_132_K2Node_ComponentBoundEvent_134_OnAdvButtonClickedEvent__DelegateSignature();
	void DelayShowPrompt();
	void DelayHideOptions();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_187_OnAdvButtonClickedEvent__DelegateSignature();
	void Destruct();
	void ExecuteUbergraph_Widget_Dialogue();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
