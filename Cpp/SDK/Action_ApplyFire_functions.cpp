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

// Function Action_ApplyFire.Action_ApplyFire_C.OnActionStart
// ()
void UAction_ApplyFire_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyFire.Action_ApplyFire_C.OnActionStart");

	UAction_ApplyFire_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ApplyFire.Action_ApplyFire_C.ExecuteUbergraph_Action_ApplyFire
// ()
void UAction_ApplyFire_C::ExecuteUbergraph_Action_ApplyFire()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ApplyFire.Action_ApplyFire_C.ExecuteUbergraph_Action_ApplyFire");

	UAction_ApplyFire_C_ExecuteUbergraph_Action_ApplyFire_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
