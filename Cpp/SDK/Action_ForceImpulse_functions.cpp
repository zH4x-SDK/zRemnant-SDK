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

// Function Action_ForceImpulse.Action_ForceImpulse_C.ApplyOffset
// ()
void UAction_ForceImpulse_C::ApplyOffset()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ForceImpulse.Action_ForceImpulse_C.ApplyOffset");

	UAction_ForceImpulse_C_ApplyOffset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ForceImpulse.Action_ForceImpulse_C.GetMassScale
// ()
void UAction_ForceImpulse_C::GetMassScale()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ForceImpulse.Action_ForceImpulse_C.GetMassScale");

	UAction_ForceImpulse_C_GetMassScale_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ForceImpulse.Action_ForceImpulse_C.OnTick
// ()
void UAction_ForceImpulse_C::OnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ForceImpulse.Action_ForceImpulse_C.OnTick");

	UAction_ForceImpulse_C_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ForceImpulse.Action_ForceImpulse_C.OnActionStart
// ()
void UAction_ForceImpulse_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ForceImpulse.Action_ForceImpulse_C.OnActionStart");

	UAction_ForceImpulse_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_ForceImpulse.Action_ForceImpulse_C.ExecuteUbergraph_Action_ForceImpulse
// ()
void UAction_ForceImpulse_C::ExecuteUbergraph_Action_ForceImpulse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_ForceImpulse.Action_ForceImpulse_C.ExecuteUbergraph_Action_ForceImpulse");

	UAction_ForceImpulse_C_ExecuteUbergraph_Action_ForceImpulse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
