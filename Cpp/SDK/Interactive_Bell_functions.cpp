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

// Function Interactive_Bell.Interactive_Bell_C.MulticastRingBell
// ()
void AInteractive_Bell_C::MulticastRingBell()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Bell.Interactive_Bell_C.MulticastRingBell");

	AInteractive_Bell_C_MulticastRingBell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Bell.Interactive_Bell_C.OnNotifyTakeDamage
// ()
void AInteractive_Bell_C::OnNotifyTakeDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Bell.Interactive_Bell_C.OnNotifyTakeDamage");

	AInteractive_Bell_C_OnNotifyTakeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Bell.Interactive_Bell_C.RingBell
// ()
void AInteractive_Bell_C::RingBell()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Bell.Interactive_Bell_C.RingBell");

	AInteractive_Bell_C_RingBell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Bell.Interactive_Bell_C.ExecuteUbergraph_Interactive_Bell
// ()
void AInteractive_Bell_C::ExecuteUbergraph_Interactive_Bell()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Bell.Interactive_Bell_C.ExecuteUbergraph_Interactive_Bell");

	AInteractive_Bell_C_ExecuteUbergraph_Interactive_Bell_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Interactive_Bell.Interactive_Bell_C.OnRingBell__DelegateSignature
// ()
void AInteractive_Bell_C::OnRingBell__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Bell.Interactive_Bell_C.OnRingBell__DelegateSignature");

	AInteractive_Bell_C_OnRingBell__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
