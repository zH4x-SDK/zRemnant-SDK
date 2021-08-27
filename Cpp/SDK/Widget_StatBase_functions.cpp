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

// Function Widget_StatBase.Widget_StatBase_C.Init
// ()
void UWidget_StatBase_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatBase.Widget_StatBase_C.Init");

	UWidget_StatBase_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_StatBase.Widget_StatBase_C.InitFromInspectInfo
// ()
void UWidget_StatBase_C::InitFromInspectInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_StatBase.Widget_StatBase_C.InitFromInspectInfo");

	UWidget_StatBase_C_InitFromInspectInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
