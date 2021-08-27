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

// Function Action_Consumable_AmmoBox.Action_Consumable_AmmoBox_C.OnActionStart
// ()
void UAction_Consumable_AmmoBox_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_AmmoBox.Action_Consumable_AmmoBox_C.OnActionStart");

	UAction_Consumable_AmmoBox_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Action_Consumable_AmmoBox.Action_Consumable_AmmoBox_C.ExecuteUbergraph_Action_Consumable_AmmoBox
// ()
void UAction_Consumable_AmmoBox_C::ExecuteUbergraph_Action_Consumable_AmmoBox()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Consumable_AmmoBox.Action_Consumable_AmmoBox_C.ExecuteUbergraph_Action_Consumable_AmmoBox");

	UAction_Consumable_AmmoBox_C_ExecuteUbergraph_Action_Consumable_AmmoBox_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
