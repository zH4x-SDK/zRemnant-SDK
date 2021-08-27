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

// WidgetBlueprintGeneratedClass Widget_EquipmentSlot.Widget_EquipmentSlot_C
// 0x0000
class UWidget_EquipmentSlot_C : public UWidget_FocusWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_EquipmentSlot.Widget_EquipmentSlot_C");
		return ptr;
	}



	void GetEquippedItem();
	void SimulateAction();
	void GetSlotItemType();
	void Refresh();
	void Cache();
	void Construct();
	void OnInventoryChanged_Event_1();
	void ExecuteUbergraph_Widget_EquipmentSlot();
	void OnSelected__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
