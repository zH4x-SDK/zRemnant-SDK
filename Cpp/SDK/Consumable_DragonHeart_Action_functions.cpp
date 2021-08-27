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

// Function Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C.OnPostComputeStats
// ()
void UConsumable_DragonHeart_Action_C::OnPostComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C.OnPostComputeStats");

	UConsumable_DragonHeart_Action_C_OnPostComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C.OnActionStart
// ()
void UConsumable_DragonHeart_Action_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C.OnActionStart");

	UConsumable_DragonHeart_Action_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C.ExecuteUbergraph_Consumable_DragonHeart_Action
// ()
void UConsumable_DragonHeart_Action_C::ExecuteUbergraph_Consumable_DragonHeart_Action()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C.ExecuteUbergraph_Consumable_DragonHeart_Action");

	UConsumable_DragonHeart_Action_C_ExecuteUbergraph_Consumable_DragonHeart_Action_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
