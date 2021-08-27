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

// Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.ModifyDamage
// ()
void UAction_AOE_Mod_RiftWalker_C::ModifyDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.ModifyDamage");

	UAction_AOE_Mod_RiftWalker_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.OnActionStart
// ()
void UAction_AOE_Mod_RiftWalker_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.OnActionStart");

	UAction_AOE_Mod_RiftWalker_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.ExecuteUbergraph_Action_AOE_Mod_RiftWalker
// ()
void UAction_AOE_Mod_RiftWalker_C::ExecuteUbergraph_Action_AOE_Mod_RiftWalker()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Mod_RiftWalker.Action_AOE_Mod_RiftWalker_C.ExecuteUbergraph_Action_AOE_Mod_RiftWalker");

	UAction_AOE_Mod_RiftWalker_C_ExecuteUbergraph_Action_AOE_Mod_RiftWalker_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
