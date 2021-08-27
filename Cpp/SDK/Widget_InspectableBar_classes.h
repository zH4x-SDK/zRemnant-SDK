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

// WidgetBlueprintGeneratedClass Widget_InspectableBar.Widget_InspectableBar_C
// 0x0000
class UWidget_InspectableBar_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_InspectableBar.Widget_InspectableBar_C");
		return ptr;
	}



	void Get_LoreButton_Visibility_1();
	void InitReadableButton();
	void Get_QuestInventoryButton_Visibility_1();
	void Get_Overlay_Visibility_1();
	void Get_Close_Visibility_1();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__QuestInventoryButton_K2Node_ComponentBoundEvent_92_OnAdvButtonClickedEvent__DelegateSignature();
	void Construct();
	void OnCloseButton();
	void OnQuestInventoryButton();
	void OnLoreButton();
	void BndEvt__LoreButton_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_InspectableBar();
	void ToggleInspectableInfo__DelegateSignature();
	void ToggleQuestInventory__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
