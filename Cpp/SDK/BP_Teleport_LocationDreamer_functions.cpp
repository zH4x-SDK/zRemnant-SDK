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

// Function BP_Teleport_LocationDreamer.BP_Teleport_LocationDreamer_C.OnTeleportFX
// ()
void ABP_Teleport_LocationDreamer_C::OnTeleportFX()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_LocationDreamer.BP_Teleport_LocationDreamer_C.OnTeleportFX");

	ABP_Teleport_LocationDreamer_C_OnTeleportFX_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleport_LocationDreamer.BP_Teleport_LocationDreamer_C.Teleport
// ()
void ABP_Teleport_LocationDreamer_C::Teleport()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_LocationDreamer.BP_Teleport_LocationDreamer_C.Teleport");

	ABP_Teleport_LocationDreamer_C_Teleport_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Teleport_LocationDreamer.BP_Teleport_LocationDreamer_C.ExecuteUbergraph_BP_Teleport_LocationDreamer
// ()
void ABP_Teleport_LocationDreamer_C::ExecuteUbergraph_BP_Teleport_LocationDreamer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Teleport_LocationDreamer.BP_Teleport_LocationDreamer_C.ExecuteUbergraph_BP_Teleport_LocationDreamer");

	ABP_Teleport_LocationDreamer_C_ExecuteUbergraph_BP_Teleport_LocationDreamer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
