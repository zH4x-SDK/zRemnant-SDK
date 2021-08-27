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

// Function Consumable_Adrenaline.Consumable_Adrenaline_C.ModifyInspectInfo
// ()
void AConsumable_Adrenaline_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_Adrenaline.Consumable_Adrenaline_C.ModifyInspectInfo");

	AConsumable_Adrenaline_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_Adrenaline.Consumable_Adrenaline_C.DoAction
// ()
void AConsumable_Adrenaline_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_Adrenaline.Consumable_Adrenaline_C.DoAction");

	AConsumable_Adrenaline_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_Adrenaline.Consumable_Adrenaline_C.ExecuteUbergraph_Consumable_Adrenaline
// ()
void AConsumable_Adrenaline_C::ExecuteUbergraph_Consumable_Adrenaline()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_Adrenaline.Consumable_Adrenaline_C.ExecuteUbergraph_Consumable_Adrenaline");

	AConsumable_Adrenaline_C_ExecuteUbergraph_Consumable_Adrenaline_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
