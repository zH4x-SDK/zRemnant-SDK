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

// Function Dialog_OkDialogAlt.Dialog_OkDialogAlt_C.OnBeginDialog
// ()
void ADialog_OkDialogAlt_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_OkDialogAlt.Dialog_OkDialogAlt_C.OnBeginDialog");

	ADialog_OkDialogAlt_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_OkDialogAlt.Dialog_OkDialogAlt_C.OnEndDialog
// ()
void ADialog_OkDialogAlt_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_OkDialogAlt.Dialog_OkDialogAlt_C.OnEndDialog");

	ADialog_OkDialogAlt_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_OkDialogAlt.Dialog_OkDialogAlt_C.ExecuteUbergraph_Dialog_OkDialogAlt
// ()
void ADialog_OkDialogAlt_C::ExecuteUbergraph_Dialog_OkDialogAlt()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_OkDialogAlt.Dialog_OkDialogAlt_C.ExecuteUbergraph_Dialog_OkDialogAlt");

	ADialog_OkDialogAlt_C_ExecuteUbergraph_Dialog_OkDialogAlt_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
