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

// Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.UpdateSaveInfo
// ()
void UBP_RemnantSaveGame_C::UpdateSaveInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.UpdateSaveInfo");

	UBP_RemnantSaveGame_C_UpdateSaveInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.UpdateTimePlayed
// ()
void UBP_RemnantSaveGame_C::UpdateTimePlayed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.UpdateTimePlayed");

	UBP_RemnantSaveGame_C_UpdateTimePlayed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.PreCommit
// ()
void UBP_RemnantSaveGame_C::PreCommit()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.PreCommit");

	UBP_RemnantSaveGame_C_PreCommit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.ExecuteUbergraph_BP_RemnantSaveGame
// ()
void UBP_RemnantSaveGame_C::ExecuteUbergraph_BP_RemnantSaveGame()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantSaveGame.BP_RemnantSaveGame_C.ExecuteUbergraph_BP_RemnantSaveGame");

	UBP_RemnantSaveGame_C_ExecuteUbergraph_BP_RemnantSaveGame_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
