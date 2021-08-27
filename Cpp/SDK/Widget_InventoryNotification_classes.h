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

// WidgetBlueprintGeneratedClass Widget_InventoryNotification.Widget_InventoryNotification_C
// 0x0000
class UWidget_InventoryNotification_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_InventoryNotification.Widget_InventoryNotification_C");
		return ptr;
	}



	void IsAmmo();
	void GetNumAmmo();
	void AdjustQuantity();
	void SetSmall();
	void Get_Descript_Visibility_1();
	void Build_Loot_Entry();
	void Construct();
	void WidgetAnimationEvt_Fade_Out_K2Node_WidgetAnimationEvent_1();
	void ExecuteUbergraph_Widget_InventoryNotification();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
