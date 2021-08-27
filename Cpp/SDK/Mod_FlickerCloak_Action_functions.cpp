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

// Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.GetShieldDecay
// ()
void UMod_FlickerCloak_Action_C::GetShieldDecay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.GetShieldDecay");

	UMod_FlickerCloak_Action_C_GetShieldDecay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.GetShieldMax
// ()
void UMod_FlickerCloak_Action_C::GetShieldMax()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.GetShieldMax");

	UMod_FlickerCloak_Action_C_GetShieldMax_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.OnTick
// ()
void UMod_FlickerCloak_Action_C::OnTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.OnTick");

	UMod_FlickerCloak_Action_C_OnTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.ExecuteUbergraph_Mod_FlickerCloak_Action
// ()
void UMod_FlickerCloak_Action_C::ExecuteUbergraph_Mod_FlickerCloak_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_FlickerCloak_Action.Mod_FlickerCloak_Action_C.ExecuteUbergraph_Mod_FlickerCloak_Action");

	UMod_FlickerCloak_Action_C_ExecuteUbergraph_Mod_FlickerCloak_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
