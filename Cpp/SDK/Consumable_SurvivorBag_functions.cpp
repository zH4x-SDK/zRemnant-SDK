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

// Function Consumable_SurvivorBag.Consumable_SurvivorBag_C.ValidateUse
// ()
void AConsumable_SurvivorBag_C::ValidateUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_SurvivorBag.Consumable_SurvivorBag_C.ValidateUse");

	AConsumable_SurvivorBag_C_ValidateUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_SurvivorBag.Consumable_SurvivorBag_C.ModifyInspectInfo
// ()
void AConsumable_SurvivorBag_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_SurvivorBag.Consumable_SurvivorBag_C.ModifyInspectInfo");

	AConsumable_SurvivorBag_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_SurvivorBag.Consumable_SurvivorBag_C.Use
// ()
void AConsumable_SurvivorBag_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_SurvivorBag.Consumable_SurvivorBag_C.Use");

	AConsumable_SurvivorBag_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_SurvivorBag.Consumable_SurvivorBag_C.ExecuteUbergraph_Consumable_SurvivorBag
// ()
void AConsumable_SurvivorBag_C::ExecuteUbergraph_Consumable_SurvivorBag()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_SurvivorBag.Consumable_SurvivorBag_C.ExecuteUbergraph_Consumable_SurvivorBag");

	AConsumable_SurvivorBag_C_ExecuteUbergraph_Consumable_SurvivorBag_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
