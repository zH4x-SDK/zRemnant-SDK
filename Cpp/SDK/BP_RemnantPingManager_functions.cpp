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

// Function BP_RemnantPingManager.BP_RemnantPingManager_C.ReceiveBeginPlay
// ()
void UBP_RemnantPingManager_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantPingManager.BP_RemnantPingManager_C.ReceiveBeginPlay");

	UBP_RemnantPingManager_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RemnantPingManager.BP_RemnantPingManager_C.OnCharacterPing_Event_1
// ()
void UBP_RemnantPingManager_C::OnCharacterPing_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantPingManager.BP_RemnantPingManager_C.OnCharacterPing_Event_1");

	UBP_RemnantPingManager_C_OnCharacterPing_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RemnantPingManager.BP_RemnantPingManager_C.ExecuteUbergraph_BP_RemnantPingManager
// ()
void UBP_RemnantPingManager_C::ExecuteUbergraph_BP_RemnantPingManager()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantPingManager.BP_RemnantPingManager_C.ExecuteUbergraph_BP_RemnantPingManager");

	UBP_RemnantPingManager_C_ExecuteUbergraph_BP_RemnantPingManager_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
