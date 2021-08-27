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

// Function Action_list.Action_List_C.OnActionStart
// ()
void UAction_List_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_list.Action_List_C.OnActionStart");

	UAction_List_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_list.Action_List_C.OnActionStop
// ()
void UAction_List_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_list.Action_List_C.OnActionStop");

	UAction_List_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_list.Action_List_C.ExecuteUbergraph_Action_List
// ()
void UAction_List_C::ExecuteUbergraph_Action_List()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_list.Action_List_C.ExecuteUbergraph_Action_List");

	UAction_List_C_ExecuteUbergraph_Action_List_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
