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

// WidgetBlueprintGeneratedClass Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C
// 0x0000
class UWidget_HUD_QuickSelectSlot_C : public UWidget_FocusWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_HUD_QuickSelectSlot.Widget_HUD_QuickSelectSlot_C");
		return ptr;
	}



	void CheckEntitlement();
	void UpdateQuantity();
	void Get_Icon_Visibility_1();
	void CanUse();
	void Refresh();
	void Construct();
	void OnChanged_Event_1();
	void OnInventoryChanged_Event_1();
	void OnSlotUsed_Event_1();
	void UpdateImageBinding();
	void ExecuteUbergraph_Widget_HUD_QuickSelectSlot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
