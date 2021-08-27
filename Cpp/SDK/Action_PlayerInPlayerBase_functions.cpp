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

// Function Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C.OnTick
// ()
void UAction_PlayerInPlayerBase_C::OnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C.OnTick");

	UAction_PlayerInPlayerBase_C_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C.ExecuteUbergraph_Action_PlayerInPlayerBase
// ()
void UAction_PlayerInPlayerBase_C::ExecuteUbergraph_Action_PlayerInPlayerBase()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_PlayerInPlayerBase.Action_PlayerInPlayerBase_C.ExecuteUbergraph_Action_PlayerInPlayerBase");

	UAction_PlayerInPlayerBase_C_ExecuteUbergraph_Action_PlayerInPlayerBase_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
