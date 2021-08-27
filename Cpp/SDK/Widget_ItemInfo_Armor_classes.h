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

// WidgetBlueprintGeneratedClass Widget_ItemInfo_Armor.Widget_ItemInfo_Armor_C
// 0x0000
class UWidget_ItemInfo_Armor_C : public UWidget_ItemInfo_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemInfo_Armor.Widget_ItemInfo_Armor_C");
		return ptr;
	}



	void Init_1();
	void OnSetItem();
	void Construct();
	void Init();
	void ApplySizeModifier();
	void ExecuteUbergraph_Widget_ItemInfo_Armor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
