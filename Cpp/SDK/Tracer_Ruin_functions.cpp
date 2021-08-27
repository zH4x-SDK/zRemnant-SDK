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

// Function Tracer_Ruin.Tracer_Ruin_C.ReceiveBeginPlay
// ()
void ATracer_Ruin_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_Ruin.Tracer_Ruin_C.ReceiveBeginPlay");

	ATracer_Ruin_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tracer_Ruin.Tracer_Ruin_C.ExecuteUbergraph_Tracer_Ruin
// ()
void ATracer_Ruin_C::ExecuteUbergraph_Tracer_Ruin()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tracer_Ruin.Tracer_Ruin_C.ExecuteUbergraph_Tracer_Ruin");

	ATracer_Ruin_C_ExecuteUbergraph_Tracer_Ruin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
