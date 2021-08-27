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

// Function Action_AOE_Flop.Action_AOE_Flop_C.GetDamageScalar
// ()
void UAction_AOE_Flop_C::GetDamageScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Flop.Action_AOE_Flop_C.GetDamageScalar");

	UAction_AOE_Flop_C_GetDamageScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Flop.Action_AOE_Flop_C.GetDamage
// ()
void UAction_AOE_Flop_C::GetDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Flop.Action_AOE_Flop_C.GetDamage");

	UAction_AOE_Flop_C_GetDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Flop.Action_AOE_Flop_C.OnActionStart
// ()
void UAction_AOE_Flop_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Flop.Action_AOE_Flop_C.OnActionStart");

	UAction_AOE_Flop_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Flop.Action_AOE_Flop_C.ExecuteUbergraph_Action_AOE_Flop
// ()
void UAction_AOE_Flop_C::ExecuteUbergraph_Action_AOE_Flop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Flop.Action_AOE_Flop_C.ExecuteUbergraph_Action_AOE_Flop");

	UAction_AOE_Flop_C_ExecuteUbergraph_Action_AOE_Flop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
