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

// Function Item_DragonHeartUpgrade.Item_DragonHeartUpgrade_C.GetMaxQuantity
// ()
void AItem_DragonHeartUpgrade_C::GetMaxQuantity()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_DragonHeartUpgrade.Item_DragonHeartUpgrade_C.GetMaxQuantity");

	AItem_DragonHeartUpgrade_C_GetMaxQuantity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_DragonHeartUpgrade.Item_DragonHeartUpgrade_C.PreAdd
// ()
void AItem_DragonHeartUpgrade_C::PreAdd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_DragonHeartUpgrade.Item_DragonHeartUpgrade_C.PreAdd");

	AItem_DragonHeartUpgrade_C_PreAdd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_DragonHeartUpgrade.Item_DragonHeartUpgrade_C.ModifyInspectInfo
// ()
void AItem_DragonHeartUpgrade_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_DragonHeartUpgrade.Item_DragonHeartUpgrade_C.ModifyInspectInfo");

	AItem_DragonHeartUpgrade_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
