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

// Function Widget_HealthBar.Widget_HealthBar_C.Init
// ()
void UWidget_HealthBar_C::Init()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HealthBar.Widget_HealthBar_C.Init");

	UWidget_HealthBar_C_Init_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HealthBar.Widget_HealthBar_C.Get_Health_Percent_1
// ()
void UWidget_HealthBar_C::Get_Health_Percent_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HealthBar.Widget_HealthBar_C.Get_Health_Percent_1");

	UWidget_HealthBar_C_Get_Health_Percent_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HealthBar.Widget_HealthBar_C.OnTargetInvalid
// ()
void UWidget_HealthBar_C::OnTargetInvalid()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HealthBar.Widget_HealthBar_C.OnTargetInvalid");

	UWidget_HealthBar_C_OnTargetInvalid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Widget_HealthBar.Widget_HealthBar_C.ExecuteUbergraph_Widget_HealthBar
// ()
void UWidget_HealthBar_C::ExecuteUbergraph_Widget_HealthBar()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_HealthBar.Widget_HealthBar_C.ExecuteUbergraph_Widget_HealthBar");

	UWidget_HealthBar_C_ExecuteUbergraph_Widget_HealthBar_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
