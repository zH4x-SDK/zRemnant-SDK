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

// Function Widget_ItemInfo_MeleeWeapon.Widget_ItemInfo_MeleeWeapon_C.OnSetItem
// ()
void UWidget_ItemInfo_MeleeWeapon_C::OnSetItem()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_MeleeWeapon.Widget_ItemInfo_MeleeWeapon_C.OnSetItem");

	UWidget_ItemInfo_MeleeWeapon_C_OnSetItem_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_MeleeWeapon.Widget_ItemInfo_MeleeWeapon_C.Init
// ()
void UWidget_ItemInfo_MeleeWeapon_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_MeleeWeapon.Widget_ItemInfo_MeleeWeapon_C.Init");

	UWidget_ItemInfo_MeleeWeapon_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_ItemInfo_MeleeWeapon.Widget_ItemInfo_MeleeWeapon_C.ExecuteUbergraph_Widget_ItemInfo_MeleeWeapon
// ()
void UWidget_ItemInfo_MeleeWeapon_C::ExecuteUbergraph_Widget_ItemInfo_MeleeWeapon()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemInfo_MeleeWeapon.Widget_ItemInfo_MeleeWeapon_C.ExecuteUbergraph_Widget_ItemInfo_MeleeWeapon");

	UWidget_ItemInfo_MeleeWeapon_C_ExecuteUbergraph_Widget_ItemInfo_MeleeWeapon_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
