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

// Function BP_ActionBase.BP_ActionBase_C.SetAggroGroup
// ()
void UBP_ActionBase_C::SetAggroGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionBase.BP_ActionBase_C.SetAggroGroup");

	UBP_ActionBase_C_SetAggroGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ActionBase.BP_ActionBase_C.SpawnActor
// ()
void UBP_ActionBase_C::SpawnActor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionBase.BP_ActionBase_C.SpawnActor");

	UBP_ActionBase_C_SpawnActor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ActionBase.BP_ActionBase_C.SpawnCharacter
// ()
void UBP_ActionBase_C::SpawnCharacter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionBase.BP_ActionBase_C.SpawnCharacter");

	UBP_ActionBase_C_SpawnCharacter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ActionBase.BP_ActionBase_C.ScatterHorizontal
// ()
void UBP_ActionBase_C::ScatterHorizontal()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ActionBase.BP_ActionBase_C.ScatterHorizontal");

	UBP_ActionBase_C_ScatterHorizontal_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
