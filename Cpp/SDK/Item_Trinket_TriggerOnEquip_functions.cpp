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

// Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.OnEquipped
// ()
void AItem_Trinket_TriggerOnEquip_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.OnEquipped");

	AItem_Trinket_TriggerOnEquip_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.OnUnequipped
// ()
void AItem_Trinket_TriggerOnEquip_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.OnUnequipped");

	AItem_Trinket_TriggerOnEquip_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.ExecuteUbergraph_Item_Trinket_TriggerOnEquip
// ()
void AItem_Trinket_TriggerOnEquip_C::ExecuteUbergraph_Item_Trinket_TriggerOnEquip()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Trinket_TriggerOnEquip.Item_Trinket_TriggerOnEquip_C.ExecuteUbergraph_Item_Trinket_TriggerOnEquip");

	AItem_Trinket_TriggerOnEquip_C_ExecuteUbergraph_Item_Trinket_TriggerOnEquip_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
