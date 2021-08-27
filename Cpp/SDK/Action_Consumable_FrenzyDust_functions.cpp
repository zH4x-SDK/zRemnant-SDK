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

// Function Action_Consumable_FrenzyDust.Action_Consumable_FrenzyDust_C.OnActionStart
// ()
void UAction_Consumable_FrenzyDust_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_FrenzyDust.Action_Consumable_FrenzyDust_C.OnActionStart");

	UAction_Consumable_FrenzyDust_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_FrenzyDust.Action_Consumable_FrenzyDust_C.OnActionStop
// ()
void UAction_Consumable_FrenzyDust_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_FrenzyDust.Action_Consumable_FrenzyDust_C.OnActionStop");

	UAction_Consumable_FrenzyDust_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_FrenzyDust.Action_Consumable_FrenzyDust_C.ExecuteUbergraph_Action_Consumable_FrenzyDust
// ()
void UAction_Consumable_FrenzyDust_C::ExecuteUbergraph_Action_Consumable_FrenzyDust()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_FrenzyDust.Action_Consumable_FrenzyDust_C.ExecuteUbergraph_Action_Consumable_FrenzyDust");

	UAction_Consumable_FrenzyDust_C_ExecuteUbergraph_Action_Consumable_FrenzyDust_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
