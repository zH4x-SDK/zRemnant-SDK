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

// Function RemoveVistaComponent.RemoveVistaComponent_C.ReceiveBeginPlay
// ()
void URemoveVistaComponent_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoveVistaComponent.RemoveVistaComponent_C.ReceiveBeginPlay");

	URemoveVistaComponent_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function RemoveVistaComponent.RemoveVistaComponent_C.ExecuteUbergraph_RemoveVistaComponent
// ()
void URemoveVistaComponent_C::ExecuteUbergraph_RemoveVistaComponent()
{
	static auto fn = UObject::FindObject<UFunction>("Function RemoveVistaComponent.RemoveVistaComponent_C.ExecuteUbergraph_RemoveVistaComponent");

	URemoveVistaComponent_C_ExecuteUbergraph_RemoveVistaComponent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
