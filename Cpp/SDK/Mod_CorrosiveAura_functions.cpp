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

// Function Mod_CorrosiveAura.Mod_CorrosiveAura_C.GetEnemyDefenseReductionScalar
// ()
void AMod_CorrosiveAura_C::GetEnemyDefenseReductionScalar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_CorrosiveAura.Mod_CorrosiveAura_C.GetEnemyDefenseReductionScalar");

	AMod_CorrosiveAura_C_GetEnemyDefenseReductionScalar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_CorrosiveAura.Mod_CorrosiveAura_C.DoAction
// ()
void AMod_CorrosiveAura_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_CorrosiveAura.Mod_CorrosiveAura_C.DoAction");

	AMod_CorrosiveAura_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_CorrosiveAura.Mod_CorrosiveAura_C.ModifyInspectInfo
// ()
void AMod_CorrosiveAura_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_CorrosiveAura.Mod_CorrosiveAura_C.ModifyInspectInfo");

	AMod_CorrosiveAura_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
