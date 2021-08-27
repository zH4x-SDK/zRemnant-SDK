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

// WidgetBlueprintGeneratedClass Widget_RecipeList.Widget_RecipeList_C
// 0x0000
class UWidget_RecipeList_C : public UUserWidget
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_RecipeList.Widget_RecipeList_C");
		return ptr;
	}



	void GetItemFromRecipe();
	void GetVisibility_1();
	void _4_Itemlist();
	void _3_Itemlist();
	void _2_Itemlist();
	void _1_Itemlist();
	void _0_ItemsList();
	void Get_EmptyVisibility();
	void SetContext();
	void Refresh();
	void IsEmpty();
	void AddRecipe();
	void Focus();
	void BuildRecipeList();
	void Construct();
	void SelectRecipeCallback();
	void ClearRecipeCallback();
	void AttemptedCraftCallback();
	void ExecuteUbergraph_Widget_RecipeList();
	void OnAttemptedCraft__DelegateSignature();
	void OnClearRecipes__DelegateSignature();
	void OnRecipeClick__DelegateSignature();
	void OnSelectRecipe__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
