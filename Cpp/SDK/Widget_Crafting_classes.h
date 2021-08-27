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

// WidgetBlueprintGeneratedClass Widget_Crafting.Widget_Crafting_C
// 0x0000
class UWidget_Crafting_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Crafting.Widget_Crafting_C");
		return ptr;
	}



	void GetItemLevelFromRecipe();
	void GetItemFromRecipe();
	void MarkCraftIngredientsForRemoval();
	void UpdateItemInfo();
	void Get_RecipeInfo_Visibility_1();
	void Spacer_Visibility_Smaller();
	void Spacer_Visibility_Larger();
	void GetVisibility_1();
	void FocusFirstVisibleTab();
	void SetTabVisibility();
	void SetRecipeList();
	void Get_Craft_bIsEnabled_1();
	void SetContext();
	void Construct();
	void OnSelectRecipe_Event_1();
	void OnTabFocused_Event_1();
	void BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature();
	void OnClearRecipes();
	void OnCraft();
	void BndEvt__HoldtoCraft_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void OnDialogResult_Event_1();
	void OnInventoryChanged_Event_1();
	void ExecuteUbergraph_Widget_Crafting();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
