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

// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.OnNotifyTakeDamage
// ()
void ABP_Root_Rot_Bomb_C::OnNotifyTakeDamage()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.OnNotifyTakeDamage");

	ABP_Root_Rot_Bomb_C_OnNotifyTakeDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.ReceiveBeginPlay
// ()
void ABP_Root_Rot_Bomb_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.ReceiveBeginPlay");

	ABP_Root_Rot_Bomb_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.OnTimer
// ()
void ABP_Root_Rot_Bomb_C::OnTimer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.OnTimer");

	ABP_Root_Rot_Bomb_C_OnTimer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.ExecuteUbergraph_BP_Root_Rot_Bomb
// ()
void ABP_Root_Rot_Bomb_C::ExecuteUbergraph_BP_Root_Rot_Bomb()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Root_Rot_Bomb.BP_Root_Rot_Bomb_C.ExecuteUbergraph_BP_Root_Rot_Bomb");

	ABP_Root_Rot_Bomb_C_ExecuteUbergraph_BP_Root_Rot_Bomb_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
