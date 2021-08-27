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

// Function Consumable_Spiceroot.Consumable_Spiceroot_C.ModifyInspectInfo
// ()
void AConsumable_Spiceroot_C::ModifyInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_Spiceroot.Consumable_Spiceroot_C.ModifyInspectInfo");

	AConsumable_Spiceroot_C_ModifyInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_Spiceroot.Consumable_Spiceroot_C.DoAction
// ()
void AConsumable_Spiceroot_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_Spiceroot.Consumable_Spiceroot_C.DoAction");

	AConsumable_Spiceroot_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Consumable_Spiceroot.Consumable_Spiceroot_C.ExecuteUbergraph_Consumable_Spiceroot
// ()
void AConsumable_Spiceroot_C::ExecuteUbergraph_Consumable_Spiceroot()
{
	static auto fn = UObject::FindObject<UFunction>("Function Consumable_Spiceroot.Consumable_Spiceroot_C.ExecuteUbergraph_Consumable_Spiceroot");

	AConsumable_Spiceroot_C_ExecuteUbergraph_Consumable_Spiceroot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
