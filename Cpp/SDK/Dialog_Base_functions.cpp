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

// Function Dialog_Base.Dialog_Base_C.ToggleInputMode
// ()
void ADialog_Base_C::ToggleInputMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Base.Dialog_Base_C.ToggleInputMode");

	ADialog_Base_C_ToggleInputMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Base.Dialog_Base_C.UpdateMouse
// ()
void ADialog_Base_C::UpdateMouse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Base.Dialog_Base_C.UpdateMouse");

	ADialog_Base_C_UpdateMouse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Base.Dialog_Base_C.OnInputDeviceChanged
// ()
void ADialog_Base_C::OnInputDeviceChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Base.Dialog_Base_C.OnInputDeviceChanged");

	ADialog_Base_C_OnInputDeviceChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Dialog_Base.Dialog_Base_C.ExecuteUbergraph_Dialog_Base
// ()
void ADialog_Base_C::ExecuteUbergraph_Dialog_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function Dialog_Base.Dialog_Base_C.ExecuteUbergraph_Dialog_Base");

	ADialog_Base_C_ExecuteUbergraph_Dialog_Base_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
