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

// Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.PreDraw
// ()
void ABP_ProjectileVisualization_Base_C::PreDraw()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.PreDraw");

	ABP_ProjectileVisualization_Base_C_PreDraw_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.GetRadius
// ()
void ABP_ProjectileVisualization_Base_C::GetRadius()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.GetRadius");

	ABP_ProjectileVisualization_Base_C_GetRadius_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.PostDrawPath
// ()
void ABP_ProjectileVisualization_Base_C::PostDrawPath()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.PostDrawPath");

	ABP_ProjectileVisualization_Base_C_PostDrawPath_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.ExecuteUbergraph_BP_ProjectileVisualization_Base
// ()
void ABP_ProjectileVisualization_Base_C::ExecuteUbergraph_BP_ProjectileVisualization_Base()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ProjectileVisualization_Base.BP_ProjectileVisualization_Base_C.ExecuteUbergraph_BP_ProjectileVisualization_Base");

	ABP_ProjectileVisualization_Base_C_ExecuteUbergraph_BP_ProjectileVisualization_Base_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
