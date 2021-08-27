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

// WidgetBlueprintGeneratedClass Widget_ItemCard.Widget_ItemCard_C
// 0x0000
class UWidget_ItemCard_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_ItemCard.Widget_ItemCard_C");
		return ptr;
	}



	void ModDetect();
	void GetLabel();
	void GetVisibility_2();
	void GetVisibility_1();
	void SetInfo();
	void Get_Quantity_Visibility_1();
	void Get_Quantity_Text_1();
	void Get_Icon_Brush_1();
	void Construct();
	void ZoomIn();
	void ZoomOut();
	void ExecuteUbergraph_Widget_ItemCard();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
