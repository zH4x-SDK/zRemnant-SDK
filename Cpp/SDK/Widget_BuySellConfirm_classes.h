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

// WidgetBlueprintGeneratedClass Widget_BuySellConfirm.Widget_BuySellConfirm_C
// 0x0000
class UWidget_BuySellConfirm_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_BuySellConfirm.Widget_BuySellConfirm_C");
		return ptr;
	}



	void GetMaxBuyQuantity();
	void GetScrap();
	void HasScrap();
	void SellItem();
	void BuyItem();
	void GetQuantity();
	void Get_QuantityLabel_Visibility_1();
	void Get_Cost_Visibility_1();
	void Get_Title_Text_1();
	void Get_Cost_ColorAndOpacity_1();
	void Get_QuantityLabel_ColorAndOpacity_1();
	void Get_Yes_bIsEnabled_1();
	void GetCost();
	void CanAfford();
	void Get_Cost_Text_1();
	void Get_QuantityAvailable_Text_1();
	void Get_QuantityLabel_Text_1();
	void Get_Label_Text_1();
	void Get_Icon_Brush_1();
	void Init();
	void GetInventoryItem();
	void BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButtonWidget_90_K2Node_ComponentBoundEvent_484_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__FocusButtonWidget_134_K2Node_ComponentBoundEvent_634_OnAdvButtonClickedEvent__DelegateSignature();
	void BndEvt__Widget_ButtonEx_C_0_K2Node_ComponentBoundEvent_1017_OnAdvButtonClickedEvent__DelegateSignature();
	void Construct();
	void ExecuteUbergraph_Widget_BuySellConfirm();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
