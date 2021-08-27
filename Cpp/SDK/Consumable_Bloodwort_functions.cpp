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

// Function Consumable_Bloodwort.Consumable_Bloodwort_C.GetHealthRegenDisplay
// ()
void AConsumable_Bloodwort_C::GetHealthRegenDisplay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_Bloodwort.Consumable_Bloodwort_C.GetHealthRegenDisplay");

	AConsumable_Bloodwort_C_GetHealthRegenDisplay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_Bloodwort.Consumable_Bloodwort_C.ModifyInspectInfo
// ()
void AConsumable_Bloodwort_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_Bloodwort.Consumable_Bloodwort_C.ModifyInspectInfo");

	AConsumable_Bloodwort_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_Bloodwort.Consumable_Bloodwort_C.DoAction
// ()
void AConsumable_Bloodwort_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_Bloodwort.Consumable_Bloodwort_C.DoAction");

	AConsumable_Bloodwort_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_Bloodwort.Consumable_Bloodwort_C.ExecuteUbergraph_Consumable_Bloodwort
// ()
void AConsumable_Bloodwort_C::ExecuteUbergraph_Consumable_Bloodwort()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_Bloodwort.Consumable_Bloodwort_C.ExecuteUbergraph_Consumable_Bloodwort");

	AConsumable_Bloodwort_C_ExecuteUbergraph_Consumable_Bloodwort_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
