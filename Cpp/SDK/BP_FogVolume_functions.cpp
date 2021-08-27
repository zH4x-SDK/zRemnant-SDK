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

// Function BP_FogVolume.BP_FogVolume_C.UserConstructionScript
// ()
void ABP_FogVolume_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogVolume.BP_FogVolume_C.UserConstructionScript");

	ABP_FogVolume_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FogVolume.BP_FogVolume_C.Changeopacity
// ()
void ABP_FogVolume_C::Changeopacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogVolume.BP_FogVolume_C.Changeopacity");

	ABP_FogVolume_C_Changeopacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FogVolume.BP_FogVolume_C.UpdateFogVolumeOpacity
// ()
void ABP_FogVolume_C::UpdateFogVolumeOpacity()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogVolume.BP_FogVolume_C.UpdateFogVolumeOpacity");

	ABP_FogVolume_C_UpdateFogVolumeOpacity_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_FogVolume.BP_FogVolume_C.ExecuteUbergraph_BP_FogVolume
// ()
void ABP_FogVolume_C::ExecuteUbergraph_BP_FogVolume()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_FogVolume.BP_FogVolume_C.ExecuteUbergraph_BP_FogVolume");

	ABP_FogVolume_C_ExecuteUbergraph_BP_FogVolume_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
