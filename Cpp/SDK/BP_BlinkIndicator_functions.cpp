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

// Function BP_BlinkIndicator.BP_BlinkIndicator_C.ReceiveBeginPlay
// ()
void ABP_BlinkIndicator_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlinkIndicator.BP_BlinkIndicator_C.ReceiveBeginPlay");

	ABP_BlinkIndicator_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BlinkIndicator.BP_BlinkIndicator_C.ReceiveEndPlay
// ()
void ABP_BlinkIndicator_C::ReceiveEndPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlinkIndicator.BP_BlinkIndicator_C.ReceiveEndPlay");

	ABP_BlinkIndicator_C_ReceiveEndPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BlinkIndicator.BP_BlinkIndicator_C.ExecuteUbergraph_BP_BlinkIndicator
// ()
void ABP_BlinkIndicator_C::ExecuteUbergraph_BP_BlinkIndicator()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BlinkIndicator.BP_BlinkIndicator_C.ExecuteUbergraph_BP_BlinkIndicator");

	ABP_BlinkIndicator_C_ExecuteUbergraph_BP_BlinkIndicator_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
