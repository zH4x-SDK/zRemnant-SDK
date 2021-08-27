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

// WidgetBlueprintGeneratedClass Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C
// 0x0000
class UWidget_Recipe_Ingredient_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Recipe_Ingredient.Widget_Recipe_Ingredient_C");
		return ptr;
	}



	void Get_Icon_Brush_1();
	void HasRequiredQuantity();
	void GetTextColor();
	void GetIngredientAmount();
	void GetIngredientName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
