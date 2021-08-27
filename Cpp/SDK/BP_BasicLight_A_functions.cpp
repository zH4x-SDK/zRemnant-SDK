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

// Function BP_BasicLight_A.BP_BasicLight_A_C.Destroy All Light Components
// ()
void ABP_BasicLight_A_C::Destroy_All_Light_Components()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasicLight_A.BP_BasicLight_A_C.Destroy All Light Components");

	ABP_BasicLight_A_C_Destroy_All_Light_Components_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BasicLight_A.BP_BasicLight_A_C.UserConstructionScript
// ()
void ABP_BasicLight_A_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasicLight_A.BP_BasicLight_A_C.UserConstructionScript");

	ABP_BasicLight_A_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BasicLight_A.BP_BasicLight_A_C.ReceiveBeginPlay
// ()
void ABP_BasicLight_A_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasicLight_A.BP_BasicLight_A_C.ReceiveBeginPlay");

	ABP_BasicLight_A_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_BasicLight_A.BP_BasicLight_A_C.ExecuteUbergraph_BP_BasicLight_A
// ()
void ABP_BasicLight_A_C::ExecuteUbergraph_BP_BasicLight_A()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_BasicLight_A.BP_BasicLight_A_C.ExecuteUbergraph_BP_BasicLight_A");

	ABP_BasicLight_A_C_ExecuteUbergraph_BP_BasicLight_A_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
