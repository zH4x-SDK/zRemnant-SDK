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

// Function Consumable_HeavyWaterElixir.Consumable_HeavyWaterElixir_C.ModifyInspectInfo
// ()
void AConsumable_HeavyWaterElixir_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_HeavyWaterElixir.Consumable_HeavyWaterElixir_C.ModifyInspectInfo");

	AConsumable_HeavyWaterElixir_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_HeavyWaterElixir.Consumable_HeavyWaterElixir_C.DoAction
// ()
void AConsumable_HeavyWaterElixir_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_HeavyWaterElixir.Consumable_HeavyWaterElixir_C.DoAction");

	AConsumable_HeavyWaterElixir_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_HeavyWaterElixir.Consumable_HeavyWaterElixir_C.ExecuteUbergraph_Consumable_HeavyWaterElixir
// ()
void AConsumable_HeavyWaterElixir_C::ExecuteUbergraph_Consumable_HeavyWaterElixir()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_HeavyWaterElixir.Consumable_HeavyWaterElixir_C.ExecuteUbergraph_Consumable_HeavyWaterElixir");

	AConsumable_HeavyWaterElixir_C_ExecuteUbergraph_Consumable_HeavyWaterElixir_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
