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

// Function BP_SpotLight.BP_SpotLight_C.UserConstructionScript
// ()
void ABP_SpotLight_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpotLight.BP_SpotLight_C.UserConstructionScript");

	ABP_SpotLight_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpotLight.BP_SpotLight_C.ReceiveBeginPlay
// ()
void ABP_SpotLight_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpotLight.BP_SpotLight_C.ReceiveBeginPlay");

	ABP_SpotLight_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function BP_SpotLight.BP_SpotLight_C.ExecuteUbergraph_BP_SpotLight
// ()
void ABP_SpotLight_C::ExecuteUbergraph_BP_SpotLight()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_SpotLight.BP_SpotLight_C.ExecuteUbergraph_BP_SpotLight");

	ABP_SpotLight_C_ExecuteUbergraph_BP_SpotLight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
