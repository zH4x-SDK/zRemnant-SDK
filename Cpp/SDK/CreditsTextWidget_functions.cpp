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

// Function CreditsTextWidget.CreditsTextWidget_C.Construct
// ()
void UCreditsTextWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsTextWidget.CreditsTextWidget_C.Construct");

	UCreditsTextWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function CreditsTextWidget.CreditsTextWidget_C.ExecuteUbergraph_CreditsTextWidget
// ()
void UCreditsTextWidget_C::ExecuteUbergraph_CreditsTextWidget()
{
	static auto fn = UObject::FindObject<UFunction>("Function CreditsTextWidget.CreditsTextWidget_C.ExecuteUbergraph_CreditsTextWidget");

	UCreditsTextWidget_C_ExecuteUbergraph_CreditsTextWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
