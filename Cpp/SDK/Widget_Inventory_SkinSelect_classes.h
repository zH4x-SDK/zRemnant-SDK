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

// WidgetBlueprintGeneratedClass Widget_Inventory_SkinSelect.Widget_Inventory_SkinSelect_C
// 0x0000
class UWidget_Inventory_SkinSelect_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Inventory_SkinSelect.Widget_Inventory_SkinSelect_C");
		return ptr;
	}



	void Init();
	void BndEvt__Skins_K2Node_ComponentBoundEvent_0_OnSkinEquipped__DelegateSignature();
	void BndEvt__Back_K2Node_ComponentBoundEvent_1_OnAdvButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_Widget_Inventory_SkinSelect();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
