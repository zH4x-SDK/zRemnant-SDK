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

// Function Action_Consumable_GreenLeaf.Action_Consumable_GreenLeaf_C.PlayFX
// ()
void UAction_Consumable_GreenLeaf_C::PlayFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_GreenLeaf.Action_Consumable_GreenLeaf_C.PlayFX");

	UAction_Consumable_GreenLeaf_C_PlayFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_GreenLeaf.Action_Consumable_GreenLeaf_C.OnComputeStats
// ()
void UAction_Consumable_GreenLeaf_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_GreenLeaf.Action_Consumable_GreenLeaf_C.OnComputeStats");

	UAction_Consumable_GreenLeaf_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_GreenLeaf.Action_Consumable_GreenLeaf_C.OnActionStart
// ()
void UAction_Consumable_GreenLeaf_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_GreenLeaf.Action_Consumable_GreenLeaf_C.OnActionStart");

	UAction_Consumable_GreenLeaf_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_GreenLeaf.Action_Consumable_GreenLeaf_C.OnReapplyBuff
// ()
void UAction_Consumable_GreenLeaf_C::OnReapplyBuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_GreenLeaf.Action_Consumable_GreenLeaf_C.OnReapplyBuff");

	UAction_Consumable_GreenLeaf_C_OnReapplyBuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_GreenLeaf.Action_Consumable_GreenLeaf_C.ExecuteUbergraph_Action_Consumable_GreenLeaf
// ()
void UAction_Consumable_GreenLeaf_C::ExecuteUbergraph_Action_Consumable_GreenLeaf()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_GreenLeaf.Action_Consumable_GreenLeaf_C.ExecuteUbergraph_Action_Consumable_GreenLeaf");

	UAction_Consumable_GreenLeaf_C_ExecuteUbergraph_Action_Consumable_GreenLeaf_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
