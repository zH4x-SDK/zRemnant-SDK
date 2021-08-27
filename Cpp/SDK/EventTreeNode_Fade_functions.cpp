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

// Function EventTreeNode_Fade.EventTreeNode_Fade_C.Begin
// ()
void UEventTreeNode_Fade_C::Begin()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_Fade.EventTreeNode_Fade_C.Begin");

	UEventTreeNode_Fade_C_Begin_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function EventTreeNode_Fade.EventTreeNode_Fade_C.ExecuteUbergraph_EventTreeNode_Fade
// ()
void UEventTreeNode_Fade_C::ExecuteUbergraph_EventTreeNode_Fade()
{
	static auto fn = UObject::FindObject<UFunction>("Function EventTreeNode_Fade.EventTreeNode_Fade_C.ExecuteUbergraph_EventTreeNode_Fade");

	UEventTreeNode_Fade_C_ExecuteUbergraph_EventTreeNode_Fade_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
