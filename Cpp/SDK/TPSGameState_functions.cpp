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

// Function TPSGameState.TPSGameState_C.UpdateTimePlayed
// ()
void ATPSGameState_C::UpdateTimePlayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSGameState.TPSGameState_C.UpdateTimePlayed");

	ATPSGameState_C_UpdateTimePlayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TPSGameState.TPSGameState_C.ReceiveTick
// ()
void ATPSGameState_C::ReceiveTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSGameState.TPSGameState_C.ReceiveTick");

	ATPSGameState_C_ReceiveTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TPSGameState.TPSGameState_C.BndEvt__MusicDirector_K2Node_ComponentBoundEvent_12_MusicIntensityDelegate__DelegateSignature
// ()
void ATPSGameState_C::BndEvt__MusicDirector_K2Node_ComponentBoundEvent_12_MusicIntensityDelegate__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSGameState.TPSGameState_C.BndEvt__MusicDirector_K2Node_ComponentBoundEvent_12_MusicIntensityDelegate__DelegateSignature");

	ATPSGameState_C_BndEvt__MusicDirector_K2Node_ComponentBoundEvent_12_MusicIntensityDelegate__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function TPSGameState.TPSGameState_C.ExecuteUbergraph_TPSGameState
// ()
void ATPSGameState_C::ExecuteUbergraph_TPSGameState()
{
	static auto fn = UObject::FindObject<UFunction>("Function TPSGameState.TPSGameState_C.ExecuteUbergraph_TPSGameState");

	ATPSGameState_C_ExecuteUbergraph_TPSGameState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
