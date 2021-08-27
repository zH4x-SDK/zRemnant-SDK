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

// Function Consumable_LiquidEscape.Consumable_LiquidEscape_C.ModifyInspectInfo
// ()
void AConsumable_LiquidEscape_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_LiquidEscape.Consumable_LiquidEscape_C.ModifyInspectInfo");

	AConsumable_LiquidEscape_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_LiquidEscape.Consumable_LiquidEscape_C.OnUse
// ()
void AConsumable_LiquidEscape_C::OnUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_LiquidEscape.Consumable_LiquidEscape_C.OnUse");

	AConsumable_LiquidEscape_C_OnUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_LiquidEscape.Consumable_LiquidEscape_C.ExecuteUbergraph_Consumable_LiquidEscape
// ()
void AConsumable_LiquidEscape_C::ExecuteUbergraph_Consumable_LiquidEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_LiquidEscape.Consumable_LiquidEscape_C.ExecuteUbergraph_Consumable_LiquidEscape");

	AConsumable_LiquidEscape_C_ExecuteUbergraph_Consumable_LiquidEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
