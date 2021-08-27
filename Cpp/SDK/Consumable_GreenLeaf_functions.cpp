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

// Function Consumable_GreenLeaf.Consumable_GreenLeaf_C.ModifyInspectInfo
// ()
void AConsumable_GreenLeaf_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_GreenLeaf.Consumable_GreenLeaf_C.ModifyInspectInfo");

	AConsumable_GreenLeaf_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_GreenLeaf.Consumable_GreenLeaf_C.DoAction
// ()
void AConsumable_GreenLeaf_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_GreenLeaf.Consumable_GreenLeaf_C.DoAction");

	AConsumable_GreenLeaf_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_GreenLeaf.Consumable_GreenLeaf_C.ExecuteUbergraph_Consumable_GreenLeaf
// ()
void AConsumable_GreenLeaf_C::ExecuteUbergraph_Consumable_GreenLeaf()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_GreenLeaf.Consumable_GreenLeaf_C.ExecuteUbergraph_Consumable_GreenLeaf");

	AConsumable_GreenLeaf_C_ExecuteUbergraph_Consumable_GreenLeaf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
