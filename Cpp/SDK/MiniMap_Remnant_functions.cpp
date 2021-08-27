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

// Function MiniMap_Remnant.MiniMap_Remnant_C.AddToActiveMinimap
// ()
void UMiniMap_Remnant_C::AddToActiveMinimap()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Remnant.MiniMap_Remnant_C.AddToActiveMinimap");

	UMiniMap_Remnant_C_AddToActiveMinimap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MiniMap_Remnant.MiniMap_Remnant_C.ReceiveBeginPlay
// ()
void UMiniMap_Remnant_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Remnant.MiniMap_Remnant_C.ReceiveBeginPlay");

	UMiniMap_Remnant_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MiniMap_Remnant.MiniMap_Remnant_C.ReceiveEndPlay
// ()
void UMiniMap_Remnant_C::ReceiveEndPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Remnant.MiniMap_Remnant_C.ReceiveEndPlay");

	UMiniMap_Remnant_C_ReceiveEndPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MiniMap_Remnant.MiniMap_Remnant_C.AutoAddToMiniMap
// ()
void UMiniMap_Remnant_C::AutoAddToMiniMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Remnant.MiniMap_Remnant_C.AutoAddToMiniMap");

	UMiniMap_Remnant_C_AutoAddToMiniMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function MiniMap_Remnant.MiniMap_Remnant_C.ExecuteUbergraph_MiniMap_Remnant
// ()
void UMiniMap_Remnant_C::ExecuteUbergraph_MiniMap_Remnant()
{
	static auto fn = UObject::FindObject<UFunction>("Function MiniMap_Remnant.MiniMap_Remnant_C.ExecuteUbergraph_MiniMap_Remnant");

	UMiniMap_Remnant_C_ExecuteUbergraph_MiniMap_Remnant_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
