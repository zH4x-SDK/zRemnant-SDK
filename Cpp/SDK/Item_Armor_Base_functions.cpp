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

// Function Item_Armor_Base.Item_Armor_Base_C.ModifyInspectInfo
// ()
void AItem_Armor_Base_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Armor_Base.Item_Armor_Base_C.ModifyInspectInfo");

	AItem_Armor_Base_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Armor_Base.Item_Armor_Base_C.OnEquipped
// ()
void AItem_Armor_Base_C::OnEquipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Armor_Base.Item_Armor_Base_C.OnEquipped");

	AItem_Armor_Base_C_OnEquipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Armor_Base.Item_Armor_Base_C.OnUnequipped
// ()
void AItem_Armor_Base_C::OnUnequipped()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Armor_Base.Item_Armor_Base_C.OnUnequipped");

	AItem_Armor_Base_C_OnUnequipped_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Armor_Base.Item_Armor_Base_C.ExecuteUbergraph_Item_Armor_Base
// ()
void AItem_Armor_Base_C::ExecuteUbergraph_Item_Armor_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Armor_Base.Item_Armor_Base_C.ExecuteUbergraph_Item_Armor_Base");

	AItem_Armor_Base_C_ExecuteUbergraph_Item_Armor_Base_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
