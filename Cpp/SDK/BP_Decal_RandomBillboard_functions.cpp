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

// Function BP_Decal_RandomBillboard.BP_Decal_RandomBillboard_C.UserConstructionScript
// ()
void ABP_Decal_RandomBillboard_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decal_RandomBillboard.BP_Decal_RandomBillboard_C.UserConstructionScript");

	ABP_Decal_RandomBillboard_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Decal_RandomBillboard.BP_Decal_RandomBillboard_C.ReceiveBeginPlay
// ()
void ABP_Decal_RandomBillboard_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decal_RandomBillboard.BP_Decal_RandomBillboard_C.ReceiveBeginPlay");

	ABP_Decal_RandomBillboard_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Decal_RandomBillboard.BP_Decal_RandomBillboard_C.ExecuteUbergraph_BP_Decal_RandomBillboard
// ()
void ABP_Decal_RandomBillboard_C::ExecuteUbergraph_BP_Decal_RandomBillboard()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Decal_RandomBillboard.BP_Decal_RandomBillboard_C.ExecuteUbergraph_BP_Decal_RandomBillboard");

	ABP_Decal_RandomBillboard_C_ExecuteUbergraph_BP_Decal_RandomBillboard_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
