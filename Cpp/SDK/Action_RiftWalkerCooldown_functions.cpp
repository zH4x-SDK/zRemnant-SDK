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

// Function Action_RiftWalkerCooldown.Action_RiftWalkerCooldown_C.OnActionStart
// ()
void UAction_RiftWalkerCooldown_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_RiftWalkerCooldown.Action_RiftWalkerCooldown_C.OnActionStart");

	UAction_RiftWalkerCooldown_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_RiftWalkerCooldown.Action_RiftWalkerCooldown_C.OnActionStop
// ()
void UAction_RiftWalkerCooldown_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_RiftWalkerCooldown.Action_RiftWalkerCooldown_C.OnActionStop");

	UAction_RiftWalkerCooldown_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_RiftWalkerCooldown.Action_RiftWalkerCooldown_C.ExecuteUbergraph_Action_RiftWalkerCooldown
// ()
void UAction_RiftWalkerCooldown_C::ExecuteUbergraph_Action_RiftWalkerCooldown()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_RiftWalkerCooldown.Action_RiftWalkerCooldown_C.ExecuteUbergraph_Action_RiftWalkerCooldown");

	UAction_RiftWalkerCooldown_C_ExecuteUbergraph_Action_RiftWalkerCooldown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
