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

// Function BPI_TriggerObject.BPI_TriggerObject_C.SetTriggerState
// ()
void UBPI_TriggerObject_C::SetTriggerState()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPI_TriggerObject.BPI_TriggerObject_C.SetTriggerState");

	UBPI_TriggerObject_C_SetTriggerState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
