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

// Function Consumable_EtherealOrb.Consumable_EtherealOrb_C.ModifyInspectInfo
// ()
void AConsumable_EtherealOrb_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_EtherealOrb.Consumable_EtherealOrb_C.ModifyInspectInfo");

	AConsumable_EtherealOrb_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_EtherealOrb.Consumable_EtherealOrb_C.DoAction
// ()
void AConsumable_EtherealOrb_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_EtherealOrb.Consumable_EtherealOrb_C.DoAction");

	AConsumable_EtherealOrb_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_EtherealOrb.Consumable_EtherealOrb_C.ExecuteUbergraph_Consumable_EtherealOrb
// ()
void AConsumable_EtherealOrb_C::ExecuteUbergraph_Consumable_EtherealOrb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_EtherealOrb.Consumable_EtherealOrb_C.ExecuteUbergraph_Consumable_EtherealOrb");

	AConsumable_EtherealOrb_C_ExecuteUbergraph_Consumable_EtherealOrb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
