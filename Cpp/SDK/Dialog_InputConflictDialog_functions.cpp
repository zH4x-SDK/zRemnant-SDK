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

// Function Dialog_InputConflictDialog.Dialog_InputConflictDialog_C.OnBeginDialog
// ()
void ADialog_InputConflictDialog_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_InputConflictDialog.Dialog_InputConflictDialog_C.OnBeginDialog");

	ADialog_InputConflictDialog_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_InputConflictDialog.Dialog_InputConflictDialog_C.OnEndDialog
// ()
void ADialog_InputConflictDialog_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_InputConflictDialog.Dialog_InputConflictDialog_C.OnEndDialog");

	ADialog_InputConflictDialog_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_InputConflictDialog.Dialog_InputConflictDialog_C.ExecuteUbergraph_Dialog_InputConflictDialog
// ()
void ADialog_InputConflictDialog_C::ExecuteUbergraph_Dialog_InputConflictDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_InputConflictDialog.Dialog_InputConflictDialog_C.ExecuteUbergraph_Dialog_InputConflictDialog");

	ADialog_InputConflictDialog_C_ExecuteUbergraph_Dialog_InputConflictDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
