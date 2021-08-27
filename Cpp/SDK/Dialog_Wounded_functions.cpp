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

// Function Dialog_Wounded.Dialog_Wounded_C.OnBeginDialog
// ()
void ADialog_Wounded_C::OnBeginDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Wounded.Dialog_Wounded_C.OnBeginDialog");

	ADialog_Wounded_C_OnBeginDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Wounded.Dialog_Wounded_C.OnWoundedState_Event_1
// ()
void ADialog_Wounded_C::OnWoundedState_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Wounded.Dialog_Wounded_C.OnWoundedState_Event_1");

	ADialog_Wounded_C_OnWoundedState_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Wounded.Dialog_Wounded_C.OnEndDialog
// ()
void ADialog_Wounded_C::OnEndDialog()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Wounded.Dialog_Wounded_C.OnEndDialog");

	ADialog_Wounded_C_OnEndDialog_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Wounded.Dialog_Wounded_C.ExecuteUbergraph_Dialog_Wounded
// ()
void ADialog_Wounded_C::ExecuteUbergraph_Dialog_Wounded()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Wounded.Dialog_Wounded_C.ExecuteUbergraph_Dialog_Wounded");

	ADialog_Wounded_C_ExecuteUbergraph_Dialog_Wounded_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
