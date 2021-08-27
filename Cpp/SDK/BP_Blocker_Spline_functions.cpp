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

// Function BP_Blocker_Spline.BP_Blocker_Spline_C.NewFunction_1
// ()
void ABP_Blocker_Spline_C::NewFunction_1()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blocker_Spline.BP_Blocker_Spline_C.NewFunction_1");

	ABP_Blocker_Spline_C_NewFunction_1_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Blocker_Spline.BP_Blocker_Spline_C.GetNearestTime
// ()
void ABP_Blocker_Spline_C::GetNearestTime()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blocker_Spline.BP_Blocker_Spline_C.GetNearestTime");

	ABP_Blocker_Spline_C_GetNearestTime_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_Blocker_Spline.BP_Blocker_Spline_C.UserConstructionScript
// ()
void ABP_Blocker_Spline_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_Blocker_Spline.BP_Blocker_Spline_C.UserConstructionScript");

	ABP_Blocker_Spline_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
