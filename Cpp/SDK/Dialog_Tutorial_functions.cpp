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

// Function Dialog_Tutorial.Dialog_Tutorial_C.Init
// ()
void ADialog_Tutorial_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Tutorial.Dialog_Tutorial_C.Init");

	ADialog_Tutorial_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Tutorial.Dialog_Tutorial_C.OnEndDialog
// ()
void ADialog_Tutorial_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Tutorial.Dialog_Tutorial_C.OnEndDialog");

	ADialog_Tutorial_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Tutorial.Dialog_Tutorial_C.ExecuteUbergraph_Dialog_Tutorial
// ()
void ADialog_Tutorial_C::ExecuteUbergraph_Dialog_Tutorial()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Tutorial.Dialog_Tutorial_C.ExecuteUbergraph_Dialog_Tutorial");

	ADialog_Tutorial_C_ExecuteUbergraph_Dialog_Tutorial_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
