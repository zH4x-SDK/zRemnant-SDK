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

// Function Action_Buff_Movement_RiftWalker.Action_Buff_Movement_RiftWalker_C.OnComputeStats
// ()
void UAction_Buff_Movement_RiftWalker_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_Movement_RiftWalker.Action_Buff_Movement_RiftWalker_C.OnComputeStats");

	UAction_Buff_Movement_RiftWalker_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Buff_Movement_RiftWalker.Action_Buff_Movement_RiftWalker_C.OnActionStart
// ()
void UAction_Buff_Movement_RiftWalker_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_Movement_RiftWalker.Action_Buff_Movement_RiftWalker_C.OnActionStart");

	UAction_Buff_Movement_RiftWalker_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Buff_Movement_RiftWalker.Action_Buff_Movement_RiftWalker_C.ExecuteUbergraph_Action_Buff_Movement_RiftWalker
// ()
void UAction_Buff_Movement_RiftWalker_C::ExecuteUbergraph_Action_Buff_Movement_RiftWalker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Buff_Movement_RiftWalker.Action_Buff_Movement_RiftWalker_C.ExecuteUbergraph_Action_Buff_Movement_RiftWalker");

	UAction_Buff_Movement_RiftWalker_C_ExecuteUbergraph_Action_Buff_Movement_RiftWalker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
