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

// Function BP_RemnantTrait.BP_RemnantTrait_C.DoActionOnTarget
// ()
void UBP_RemnantTrait_C::DoActionOnTarget()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantTrait.BP_RemnantTrait_C.DoActionOnTarget");

	UBP_RemnantTrait_C_DoActionOnTarget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RemnantTrait.BP_RemnantTrait_C.IsTargetAggro
// ()
void UBP_RemnantTrait_C::IsTargetAggro()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantTrait.BP_RemnantTrait_C.IsTargetAggro");

	UBP_RemnantTrait_C_IsTargetAggro_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RemnantTrait.BP_RemnantTrait_C.DoAction
// ()
void UBP_RemnantTrait_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantTrait.BP_RemnantTrait_C.DoAction");

	UBP_RemnantTrait_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_RemnantTrait.BP_RemnantTrait_C.GetCharacter
// ()
void UBP_RemnantTrait_C::GetCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_RemnantTrait.BP_RemnantTrait_C.GetCharacter");

	UBP_RemnantTrait_C_GetCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
