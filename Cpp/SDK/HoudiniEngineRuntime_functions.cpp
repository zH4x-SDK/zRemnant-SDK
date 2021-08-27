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

// Function HoudiniEngineRuntime.HoudiniAssetComponent.GetAssetId
// ()
void UHoudiniAssetComponent::GetAssetId()
{
	static auto fn = UObject::FindObject<UFunction>("Function HoudiniEngineRuntime.HoudiniAssetComponent.GetAssetId");

	UHoudiniAssetComponent_GetAssetId_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
