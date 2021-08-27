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

// WidgetBlueprintGeneratedClass Widget_HUDEquipmentSlot.Widget_HUDEquipmentSlot_C
// 0x0000
class UWidget_HUDEquipmentSlot_C : public UWidget_FocusWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HUDEquipmentSlot.Widget_HUDEquipmentSlot_C");
		return ptr;
	}



	void Get_Icon_Visibility_1();
	void SimulateClick();
	void CanUse();
	void GetQuantity();
	void Get_Quantity_Visibility_1();
	void Get_Quantity_Text_1();
	void Get_Icon_Brush_1();
	void CacheInfo();
	void Construct();
	void OnInventoryChanged_Event_1();
	void UpdateBindingImage();
	void ExecuteUbergraph_Widget_HUDEquipmentSlot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
