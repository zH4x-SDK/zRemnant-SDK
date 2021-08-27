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

// Function Tutorial.Tutorial_C.WriteKey
// ()
void UTutorial_C::WriteKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial_C.WriteKey");

	UTutorial_C_WriteKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial.Tutorial_C.HasKey
// ()
void UTutorial_C::HasKey()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial_C.HasKey");

	UTutorial_C_HasKey_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial.Tutorial_C.Validate
// ()
void UTutorial_C::Validate()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial_C.Validate");

	UTutorial_C_Validate_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Tutorial.Tutorial_C.Show
// ()
void UTutorial_C::Show()
{
	static auto fn = UObject::FindObject<UFunction>("Function Tutorial.Tutorial_C.Show");

	UTutorial_C_Show_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
