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

// Function BP_Quality_Spec.BP_Quality_Spec_C.ReceiveBeginPlay
// ()
void ABP_Quality_Spec_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Quality_Spec.BP_Quality_Spec_C.ReceiveBeginPlay");

	ABP_Quality_Spec_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Quality_Spec.BP_Quality_Spec_C.ExecuteUbergraph_BP_Quality_Spec
// ()
void ABP_Quality_Spec_C::ExecuteUbergraph_BP_Quality_Spec()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Quality_Spec.BP_Quality_Spec_C.ExecuteUbergraph_BP_Quality_Spec");

	ABP_Quality_Spec_C_ExecuteUbergraph_BP_Quality_Spec_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
