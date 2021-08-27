// Name: Remnant, Version: 1.0

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function Widget_Ingredients.Widget_Ingredients_C.IsScrap
// ()
void UWidget_Ingredients_C::IsScrap()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ingredients.Widget_Ingredients_C.IsScrap");

	UWidget_Ingredients_C_IsScrap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Ingredients.Widget_Ingredients_C.BuildIngredientList
// ()
void UWidget_Ingredients_C::BuildIngredientList()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ingredients.Widget_Ingredients_C.BuildIngredientList");

	UWidget_Ingredients_C_BuildIngredientList_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Ingredients.Widget_Ingredients_C.SetRecipe
// ()
void UWidget_Ingredients_C::SetRecipe()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Ingredients.Widget_Ingredients_C.SetRecipe");

	UWidget_Ingredients_C_SetRecipe_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
