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

// Function BP_InspectableComponent.BP_InspectableComponent_C.ReceiveBeginPlay
// ()
void UBP_InspectableComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InspectableComponent.BP_InspectableComponent_C.ReceiveBeginPlay");

	UBP_InspectableComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_InspectableComponent.BP_InspectableComponent_C.ExecuteUbergraph_BP_InspectableComponent
// ()
void UBP_InspectableComponent_C::ExecuteUbergraph_BP_InspectableComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_InspectableComponent.BP_InspectableComponent_C.ExecuteUbergraph_BP_InspectableComponent");

	UBP_InspectableComponent_C_ExecuteUbergraph_BP_InspectableComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
