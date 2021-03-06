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

// Function Consumable_HydroCoolant.Consumable_HydroCoolant_C.ModifyInspectInfo
// ()
void AConsumable_HydroCoolant_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_HydroCoolant.Consumable_HydroCoolant_C.ModifyInspectInfo");

	AConsumable_HydroCoolant_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_HydroCoolant.Consumable_HydroCoolant_C.DoAction
// ()
void AConsumable_HydroCoolant_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_HydroCoolant.Consumable_HydroCoolant_C.DoAction");

	AConsumable_HydroCoolant_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_HydroCoolant.Consumable_HydroCoolant_C.ExecuteUbergraph_Consumable_HydroCoolant
// ()
void AConsumable_HydroCoolant_C::ExecuteUbergraph_Consumable_HydroCoolant()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_HydroCoolant.Consumable_HydroCoolant_C.ExecuteUbergraph_Consumable_HydroCoolant");

	AConsumable_HydroCoolant_C_ExecuteUbergraph_Consumable_HydroCoolant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
