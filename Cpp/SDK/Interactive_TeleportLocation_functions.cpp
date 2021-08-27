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

// Function Interactive_TeleportLocation.Interactive_TeleportLocation_C.SetTriggerState
// ()
void AInteractive_TeleportLocation_C::SetTriggerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_TeleportLocation.Interactive_TeleportLocation_C.SetTriggerState");

	AInteractive_TeleportLocation_C_SetTriggerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_TeleportLocation.Interactive_TeleportLocation_C.Teleport
// ()
void AInteractive_TeleportLocation_C::Teleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_TeleportLocation.Interactive_TeleportLocation_C.Teleport");

	AInteractive_TeleportLocation_C_Teleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_TeleportLocation.Interactive_TeleportLocation_C.ExecuteUbergraph_Interactive_TeleportLocation
// ()
void AInteractive_TeleportLocation_C::ExecuteUbergraph_Interactive_TeleportLocation()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_TeleportLocation.Interactive_TeleportLocation_C.ExecuteUbergraph_Interactive_TeleportLocation");

	AInteractive_TeleportLocation_C_ExecuteUbergraph_Interactive_TeleportLocation_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
