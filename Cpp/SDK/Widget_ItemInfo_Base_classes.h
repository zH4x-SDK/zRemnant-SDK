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

// WidgetBlueprintGeneratedClass Widget_ItemInfo_Base.Widget_ItemInfo_Base_C
// 0x0000
class UWidget_ItemInfo_Base_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemInfo_Base.Widget_ItemInfo_Base_C");
		return ptr;
	}



	void ApplySizeModifier();
	void Init();
	void DoAction();
	void HasInputFocus();
	void EndInputFocus();
	void GetLabel();
	void RefreshInspectInfo();
	void InitStats();
	void SetInspectInfo();
	void SetItem();
	void IsValid();
	void SetItemFromInventory();
	void OnSetItem();
	void ExecuteUbergraph_Widget_ItemInfo_Base();
	void OnClickMod__DelegateSignature();
	void OnSelectMod__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
