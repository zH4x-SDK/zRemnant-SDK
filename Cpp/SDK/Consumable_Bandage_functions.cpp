﻿// Name: Remnant, Version: 1.0

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

// Function Consumable_Bandage.Consumable_Bandage_C.ValidateUse
// ()
void AConsumable_Bandage_C::ValidateUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_Bandage.Consumable_Bandage_C.ValidateUse");

	AConsumable_Bandage_C_ValidateUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_Bandage.Consumable_Bandage_C.ModifyInspectInfo
// ()
void AConsumable_Bandage_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_Bandage.Consumable_Bandage_C.ModifyInspectInfo");

	AConsumable_Bandage_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
