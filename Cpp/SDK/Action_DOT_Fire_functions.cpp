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

// Function Action_DOT_Fire.Action_DOT_Fire_C.OnActionStart
// ()
void UAction_DOT_Fire_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire.Action_DOT_Fire_C.OnActionStart");

	UAction_DOT_Fire_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_DOT_Fire.Action_DOT_Fire_C.OnCharacterEvent
// ()
void UAction_DOT_Fire_C::OnCharacterEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire.Action_DOT_Fire_C.OnCharacterEvent");

	UAction_DOT_Fire_C_OnCharacterEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_DOT_Fire.Action_DOT_Fire_C.OnActionStop
// ()
void UAction_DOT_Fire_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire.Action_DOT_Fire_C.OnActionStop");

	UAction_DOT_Fire_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_DOT_Fire.Action_DOT_Fire_C.ExecuteUbergraph_Action_DOT_Fire
// ()
void UAction_DOT_Fire_C::ExecuteUbergraph_Action_DOT_Fire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_DOT_Fire.Action_DOT_Fire_C.ExecuteUbergraph_Action_DOT_Fire");

	UAction_DOT_Fire_C_ExecuteUbergraph_Action_DOT_Fire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
