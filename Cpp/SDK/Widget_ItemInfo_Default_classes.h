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

// WidgetBlueprintGeneratedClass Widget_ItemInfo_Default.Widget_ItemInfo_Default_C
// 0x0000
class UWidget_ItemInfo_Default_C : public UWidget_ItemInfo_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemInfo_Default.Widget_ItemInfo_Default_C");
		return ptr;
	}



	void UpdateInfoVisibility();
	void BuildBasicInfo();
	void GetItemLabel();
	void BuildStats();
	void Construct();
	void OnSetItem();
	void Init();
	void ExecuteUbergraph_Widget_ItemInfo_Default();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
