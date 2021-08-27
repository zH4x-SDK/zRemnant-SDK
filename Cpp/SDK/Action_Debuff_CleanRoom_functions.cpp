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

// Function Action_Debuff_CleanRoom.Action_Debuff_CleanRoom_C.CanDoDamage
// ()
void UAction_Debuff_CleanRoom_C::CanDoDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_CleanRoom.Action_Debuff_CleanRoom_C.CanDoDamage");

	UAction_Debuff_CleanRoom_C_CanDoDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_CleanRoom.Action_Debuff_CleanRoom_C.OnActionStop
// ()
void UAction_Debuff_CleanRoom_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_CleanRoom.Action_Debuff_CleanRoom_C.OnActionStop");

	UAction_Debuff_CleanRoom_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_CleanRoom.Action_Debuff_CleanRoom_C.PauseCleanRoomDebuff
// ()
void UAction_Debuff_CleanRoom_C::PauseCleanRoomDebuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_CleanRoom.Action_Debuff_CleanRoom_C.PauseCleanRoomDebuff");

	UAction_Debuff_CleanRoom_C_PauseCleanRoomDebuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_CleanRoom.Action_Debuff_CleanRoom_C.MultiCastPauseCleanRoomDebuff
// ()
void UAction_Debuff_CleanRoom_C::MultiCastPauseCleanRoomDebuff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_CleanRoom.Action_Debuff_CleanRoom_C.MultiCastPauseCleanRoomDebuff");

	UAction_Debuff_CleanRoom_C_MultiCastPauseCleanRoomDebuff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_CleanRoom.Action_Debuff_CleanRoom_C.OnHitTarget
// ()
void UAction_Debuff_CleanRoom_C::OnHitTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_CleanRoom.Action_Debuff_CleanRoom_C.OnHitTarget");

	UAction_Debuff_CleanRoom_C_OnHitTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Debuff_CleanRoom.Action_Debuff_CleanRoom_C.ExecuteUbergraph_Action_Debuff_CleanRoom
// ()
void UAction_Debuff_CleanRoom_C::ExecuteUbergraph_Action_Debuff_CleanRoom()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Debuff_CleanRoom.Action_Debuff_CleanRoom_C.ExecuteUbergraph_Action_Debuff_CleanRoom");

	UAction_Debuff_CleanRoom_C_ExecuteUbergraph_Action_Debuff_CleanRoom_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
