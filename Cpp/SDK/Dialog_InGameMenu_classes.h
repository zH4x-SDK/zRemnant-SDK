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

// BlueprintGeneratedClass Dialog_InGameMenu.Dialog_InGameMenu_C
// 0x0000
class ADialog_InGameMenu_C : public ADialog_InGameBase_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dialog_InGameMenu.Dialog_InGameMenu_C");
		return ptr;
	}



	void FocusUpgradeTab();
	void FocusBuyTab();
	void FocusCraftingTab();
	void FocusQuestTab();
	void FocusOptionsTab();
	void FocusTraitsTab();
	void FocusInventoryTab();
	void FocusCharacterTab();
	void InpActEvt_Menu_Inventory_K2Node_InputActionEvent_6();
	void InpActEvt_Menu_Traits_K2Node_InputActionEvent_5();
	void InpActEvt_Menu_Options_K2Node_InputActionEvent_4();
	void InpActEvt_MiniMap_K2Node_InputActionEvent_3();
	void InpActEvt_Menu_K2Node_InputActionEvent_2();
	void InpActEvt_Menu_Character_K2Node_InputActionEvent_1();
	void OnEndDialog();
	void OnPopDialog();
	void End();
	void ExecuteUbergraph_Dialog_InGameMenu();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
