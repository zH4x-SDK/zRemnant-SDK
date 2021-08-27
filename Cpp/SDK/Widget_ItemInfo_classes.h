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

// WidgetBlueprintGeneratedClass Widget_ItemInfo.Widget_ItemInfo_C
// 0x0000
class UWidget_ItemInfo_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemInfo.Widget_ItemInfo_C");
		return ptr;
	}



	void SetSizeModifier();
	void GetEmptyVisibility_2();
	void GetEmptyVisibility_1();
	void SetInfoHidden();
	void DoAction();
	void HasInputFocus();
	void EndInputFocus();
	void GetCompareInspectInfo();
	void GetVisibility_1();
	void Get_AttributeName_Text_1();
	void SetInspectInfo();
	void GetInventoryItem();
	void SetItem();
	void Construct();
	void BndEvt__Weapons_K2Node_ComponentBoundEvent_5_OnClickMod__DelegateSignature();
	void BndEvt__Weapons_K2Node_ComponentBoundEvent_17_OnSelectMod__DelegateSignature();
	void BndEvt__RangedWeapon_K2Node_ComponentBoundEvent_0_OnSubAction__DelegateSignature();
	void ExecuteUbergraph_Widget_ItemInfo();
	void OnSubAction__DelegateSignature();
	void OnModSelected__DelegateSignature();
	void OnModClicked__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
