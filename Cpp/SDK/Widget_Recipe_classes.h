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

// WidgetBlueprintGeneratedClass Widget_Recipe.Widget_Recipe_C
// 0x0000
class UWidget_Recipe_C : public UWidget_FocusWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Recipe.Widget_Recipe_C");
		return ptr;
	}



	void GetItemLevelFromRecipe();
	void GetItemFromRecipe();
	void CheckEntitlement();
	void Get_ValidOverlay_Visibility_1();
	void Get_TextBlock_0_ColorAndOpacity_1();
	void Get_ItemName_Text_1();
	void GetPercent_1();
	void Get_Cost_Text_1();
	void GetCost();
	void Get_CostPanel_Visibility_1();
	void Get_Selection_White_Stripe_Visibility();
	void Get_ActionPanel_Visibility_1();
	void GetVisibility_1();
	void BuildStats();
	void Refresh();
	void GetCraftingComponent();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_116_OnAdvButtonPressedEvent__DelegateSignature();
	void Construct();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_94_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_291_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_260_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__HoldButton_K2Node_ComponentBoundEvent_0_OnPressAndHold__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_141_OnAdvButtonReleasedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void SimulateDoAction();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_2_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_3_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButton_K2Node_ComponentBoundEvent_4_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_Recipe();
	void OnSelectRecipe__DelegateSignature();
	void OnClearRecipe__DelegateSignature();
	void OnAttemptedCraft__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
