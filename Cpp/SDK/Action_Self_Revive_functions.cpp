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

// Function Action_Self_Revive.Action_Self_Revive_C.Set Dragon Heart Quantity
// ()
void UAction_Self_Revive_C::Set_Dragon_Heart_Quantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Self_Revive.Action_Self_Revive_C.Set Dragon Heart Quantity");

	UAction_Self_Revive_C_Set_Dragon_Heart_Quantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Self_Revive.Action_Self_Revive_C.OnActionStart
// ()
void UAction_Self_Revive_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Self_Revive.Action_Self_Revive_C.OnActionStart");

	UAction_Self_Revive_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Self_Revive.Action_Self_Revive_C.ExecuteUbergraph_Action_Self_Revive
// ()
void UAction_Self_Revive_C::ExecuteUbergraph_Action_Self_Revive()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Self_Revive.Action_Self_Revive_C.ExecuteUbergraph_Action_Self_Revive");

	UAction_Self_Revive_C_ExecuteUbergraph_Action_Self_Revive_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
