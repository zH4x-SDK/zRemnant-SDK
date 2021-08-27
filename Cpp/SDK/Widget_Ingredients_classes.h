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

// WidgetBlueprintGeneratedClass Widget_Ingredients.Widget_Ingredients_C
// 0x0000
class UWidget_Ingredients_C : public UWidget_UserWidget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Ingredients.Widget_Ingredients_C");
		return ptr;
	}



	void IsScrap();
	void BuildIngredientList();
	void SetRecipe();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
