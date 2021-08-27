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

// Function Item_Potion_Base.Item_Potion_Base_C.ValidateUse
// ()
void AItem_Potion_Base_C::ValidateUse()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Potion_Base.Item_Potion_Base_C.ValidateUse");

	AItem_Potion_Base_C_ValidateUse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Potion_Base.Item_Potion_Base_C.DoAction
// ()
void AItem_Potion_Base_C::DoAction()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Potion_Base.Item_Potion_Base_C.DoAction");

	AItem_Potion_Base_C_DoAction_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Potion_Base.Item_Potion_Base_C.Use
// ()
void AItem_Potion_Base_C::Use()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Potion_Base.Item_Potion_Base_C.Use");

	AItem_Potion_Base_C_Use_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Potion_Base.Item_Potion_Base_C.OnActivate
// ()
void AItem_Potion_Base_C::OnActivate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Potion_Base.Item_Potion_Base_C.OnActivate");

	AItem_Potion_Base_C_OnActivate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Item_Potion_Base.Item_Potion_Base_C.ExecuteUbergraph_Item_Potion_Base
// ()
void AItem_Potion_Base_C::ExecuteUbergraph_Item_Potion_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function Item_Potion_Base.Item_Potion_Base_C.ExecuteUbergraph_Item_Potion_Base");

	AItem_Potion_Base_C_ExecuteUbergraph_Item_Potion_Base_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
