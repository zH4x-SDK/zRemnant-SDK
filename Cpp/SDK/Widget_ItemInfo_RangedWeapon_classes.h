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

// WidgetBlueprintGeneratedClass Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C
// 0x0000
class UWidget_ItemInfo_RangedWeapon_C : public UWidget_ItemInfo_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemInfo_RangedWeapon.Widget_ItemInfo_RangedWeapon_C");
		return ptr;
	}



	void CheckPulseUpgrade();
	void HasInputFocus();
	void EndEquipMod();
	void BeginEquipMod();
	void OnSetItem();
	void Construct();
	void OnSelectItem_Event_1();
	void OnItemAction_Event_1();
	void BndEvt__Widget_ButtonEx_K2Node_ComponentBoundEvent_0_OnAdvButtonClickedEvent__DelegateSignature();
	void EndInputFocus();
	void BndEvt__ModList_K2Node_ComponentBoundEvent_1_OnUpdateCustomEquipment__DelegateSignature();
	void DoAction();
	void BndEvt__Button_137_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_137_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_137_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void Init();
	void ApplySizeModifier();
	void ExecuteUbergraph_Widget_ItemInfo_RangedWeapon();
	void OnSubAction__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
