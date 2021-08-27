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

// Function Consumable_OilskinTonic.Consumable_OilskinTonic_C.ModifyInspectInfo
// ()
void AConsumable_OilskinTonic_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OilskinTonic.Consumable_OilskinTonic_C.ModifyInspectInfo");

	AConsumable_OilskinTonic_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_OilskinTonic.Consumable_OilskinTonic_C.DoAction
// ()
void AConsumable_OilskinTonic_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OilskinTonic.Consumable_OilskinTonic_C.DoAction");

	AConsumable_OilskinTonic_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_OilskinTonic.Consumable_OilskinTonic_C.ExecuteUbergraph_Consumable_OilskinTonic
// ()
void AConsumable_OilskinTonic_C::ExecuteUbergraph_Consumable_OilskinTonic()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_OilskinTonic.Consumable_OilskinTonic_C.ExecuteUbergraph_Consumable_OilskinTonic");

	AConsumable_OilskinTonic_C_ExecuteUbergraph_Consumable_OilskinTonic_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
