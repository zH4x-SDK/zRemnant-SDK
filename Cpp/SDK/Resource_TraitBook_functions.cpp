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

// Function Resource_TraitBook.Resource_TraitBook_C.PreAdd
// ()
void AResource_TraitBook_C::PreAdd()
{
	static auto fn = UObject::FindObject<UFunction>("Function Resource_TraitBook.Resource_TraitBook_C.PreAdd");

	AResource_TraitBook_C_PreAdd_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Resource_TraitBook.Resource_TraitBook_C.OnPickedUp
// ()
void AResource_TraitBook_C::OnPickedUp()
{
	static auto fn = UObject::FindObject<UFunction>("Function Resource_TraitBook.Resource_TraitBook_C.OnPickedUp");

	AResource_TraitBook_C_OnPickedUp_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Resource_TraitBook.Resource_TraitBook_C.ExecuteUbergraph_Resource_TraitBook
// ()
void AResource_TraitBook_C::ExecuteUbergraph_Resource_TraitBook()
{
	static auto fn = UObject::FindObject<UFunction>("Function Resource_TraitBook.Resource_TraitBook_C.ExecuteUbergraph_Resource_TraitBook");

	AResource_TraitBook_C_ExecuteUbergraph_Resource_TraitBook_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
