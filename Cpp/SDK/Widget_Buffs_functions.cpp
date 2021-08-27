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

// Function Widget_Buffs.Widget_Buffs_C.RemoveAction
// ()
void UWidget_Buffs_C::RemoveAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buffs.Widget_Buffs_C.RemoveAction");

	UWidget_Buffs_C_RemoveAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Buffs.Widget_Buffs_C.AddAction
// ()
void UWidget_Buffs_C::AddAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buffs.Widget_Buffs_C.AddAction");

	UWidget_Buffs_C_AddAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Buffs.Widget_Buffs_C.Construct
// ()
void UWidget_Buffs_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buffs.Widget_Buffs_C.Construct");

	UWidget_Buffs_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Buffs.Widget_Buffs_C.OnActionRemoved_Event_1
// ()
void UWidget_Buffs_C::OnActionRemoved_Event_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buffs.Widget_Buffs_C.OnActionRemoved_Event_1");

	UWidget_Buffs_C_OnActionRemoved_Event_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Buffs.Widget_Buffs_C.On Action Added
// ()
void UWidget_Buffs_C::On_Action_Added()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buffs.Widget_Buffs_C.On Action Added");

	UWidget_Buffs_C_On_Action_Added_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_Buffs.Widget_Buffs_C.ExecuteUbergraph_Widget_Buffs
// ()
void UWidget_Buffs_C::ExecuteUbergraph_Widget_Buffs()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_Buffs.Widget_Buffs_C.ExecuteUbergraph_Widget_Buffs");

	UWidget_Buffs_C_ExecuteUbergraph_Widget_Buffs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
