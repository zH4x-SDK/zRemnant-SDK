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

// Function BP_PowerSource.BP_PowerSource_C.SetEnabled
// ()
void ABP_PowerSource_C::SetEnabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerSource.BP_PowerSource_C.SetEnabled");

	ABP_PowerSource_C_SetEnabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PowerSource.BP_PowerSource_C.OnRep_Enabled
// ()
void ABP_PowerSource_C::OnRep_Enabled()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerSource.BP_PowerSource_C.OnRep_Enabled");

	ABP_PowerSource_C_OnRep_Enabled_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PowerSource.BP_PowerSource_C.ReceiveBeginPlay
// ()
void ABP_PowerSource_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerSource.BP_PowerSource_C.ReceiveBeginPlay");

	ABP_PowerSource_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PowerSource.BP_PowerSource_C.SetTriggerState
// ()
void ABP_PowerSource_C::SetTriggerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerSource.BP_PowerSource_C.SetTriggerState");

	ABP_PowerSource_C_SetTriggerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PowerSource.BP_PowerSource_C.ExecuteUbergraph_BP_PowerSource
// ()
void ABP_PowerSource_C::ExecuteUbergraph_BP_PowerSource()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerSource.BP_PowerSource_C.ExecuteUbergraph_BP_PowerSource");

	ABP_PowerSource_C_ExecuteUbergraph_BP_PowerSource_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_PowerSource.BP_PowerSource_C.OnEnabled__DelegateSignature
// ()
void ABP_PowerSource_C::OnEnabled__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_PowerSource.BP_PowerSource_C.OnEnabled__DelegateSignature");

	ABP_PowerSource_C_OnEnabled__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
