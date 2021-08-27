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

// Function BP_Item.BP_Item_C.OnPickupFailed
// ()
void ABP_Item_C::OnPickupFailed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item.BP_Item_C.OnPickupFailed");

	ABP_Item_C_OnPickupFailed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Item.BP_Item_C.OnPickedUp
// ()
void ABP_Item_C::OnPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item.BP_Item_C.OnPickedUp");

	ABP_Item_C_OnPickedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Item.BP_Item_C.ExecuteUbergraph_BP_Item
// ()
void ABP_Item_C::ExecuteUbergraph_BP_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Item.BP_Item_C.ExecuteUbergraph_BP_Item");

	ABP_Item_C_ExecuteUbergraph_BP_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
