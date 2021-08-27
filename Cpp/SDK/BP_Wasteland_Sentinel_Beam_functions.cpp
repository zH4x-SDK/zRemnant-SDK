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

// Function BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C.ReceiveBeginPlay
// ()
void ABP_Wasteland_Sentinel_Beam_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C.ReceiveBeginPlay");

	ABP_Wasteland_Sentinel_Beam_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C.ExecuteUbergraph_BP_Wasteland_Sentinel_Beam
// ()
void ABP_Wasteland_Sentinel_Beam_C::ExecuteUbergraph_BP_Wasteland_Sentinel_Beam()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C.ExecuteUbergraph_BP_Wasteland_Sentinel_Beam");

	ABP_Wasteland_Sentinel_Beam_C_ExecuteUbergraph_BP_Wasteland_Sentinel_Beam_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
