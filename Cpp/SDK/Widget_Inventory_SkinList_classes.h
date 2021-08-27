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

// WidgetBlueprintGeneratedClass Widget_Inventory_SkinList.Widget_Inventory_SkinList_C
// 0x0000
class UWidget_Inventory_SkinList_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Inventory_SkinList.Widget_Inventory_SkinList_C");
		return ptr;
	}



	void DoAction();
	void Init();
	void Refresh();
	void OnEquipped();
	void OnSelected();
	void ExecuteUbergraph_Widget_Inventory_SkinList();
	void OnSkinEquipped__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
