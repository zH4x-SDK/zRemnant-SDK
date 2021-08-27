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

// Function Action_Consumable_EtherealOrb.Action_Consumable_EtherealOrb_C.PlayFX
// ()
void UAction_Consumable_EtherealOrb_C::PlayFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_EtherealOrb.Action_Consumable_EtherealOrb_C.PlayFX");

	UAction_Consumable_EtherealOrb_C_PlayFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_EtherealOrb.Action_Consumable_EtherealOrb_C.OnComputeStats
// ()
void UAction_Consumable_EtherealOrb_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_EtherealOrb.Action_Consumable_EtherealOrb_C.OnComputeStats");

	UAction_Consumable_EtherealOrb_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_EtherealOrb.Action_Consumable_EtherealOrb_C.OnActionStart
// ()
void UAction_Consumable_EtherealOrb_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_EtherealOrb.Action_Consumable_EtherealOrb_C.OnActionStart");

	UAction_Consumable_EtherealOrb_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_EtherealOrb.Action_Consumable_EtherealOrb_C.OnReapplyBuff
// ()
void UAction_Consumable_EtherealOrb_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_EtherealOrb.Action_Consumable_EtherealOrb_C.OnReapplyBuff");

	UAction_Consumable_EtherealOrb_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_EtherealOrb.Action_Consumable_EtherealOrb_C.ExecuteUbergraph_Action_Consumable_EtherealOrb
// ()
void UAction_Consumable_EtherealOrb_C::ExecuteUbergraph_Action_Consumable_EtherealOrb()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_EtherealOrb.Action_Consumable_EtherealOrb_C.ExecuteUbergraph_Action_Consumable_EtherealOrb");

	UAction_Consumable_EtherealOrb_C_ExecuteUbergraph_Action_Consumable_EtherealOrb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
