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

// Function Dialog_NetWait.Dialog_NetWait_C.EndDialog
// ()
void ADialog_NetWait_C::EndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_NetWait.Dialog_NetWait_C.EndDialog");

	ADialog_NetWait_C_EndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_NetWait.Dialog_NetWait_C.OnBeginDialog
// ()
void ADialog_NetWait_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_NetWait.Dialog_NetWait_C.OnBeginDialog");

	ADialog_NetWait_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_NetWait.Dialog_NetWait_C.OnWaitDialog_Event_1
// ()
void ADialog_NetWait_C::OnWaitDialog_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_NetWait.Dialog_NetWait_C.OnWaitDialog_Event_1");

	ADialog_NetWait_C_OnWaitDialog_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_NetWait.Dialog_NetWait_C.ReceiveDestroyed
// ()
void ADialog_NetWait_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_NetWait.Dialog_NetWait_C.ReceiveDestroyed");

	ADialog_NetWait_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_NetWait.Dialog_NetWait_C.ExecuteUbergraph_Dialog_NetWait
// ()
void ADialog_NetWait_C::ExecuteUbergraph_Dialog_NetWait()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_NetWait.Dialog_NetWait_C.ExecuteUbergraph_Dialog_NetWait");

	ADialog_NetWait_C_ExecuteUbergraph_Dialog_NetWait_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
