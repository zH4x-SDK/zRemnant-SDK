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

// Function Main.Main_C.ReceiveBeginPlay
// ()
void AMain_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main.Main_C.ReceiveBeginPlay");

	AMain_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Main.Main_C.ExecuteUbergraph_Main
// ()
void AMain_C::ExecuteUbergraph_Main()
{
	static auto fn = UObject::FindObject<UFunction>("Function Main.Main_C.ExecuteUbergraph_Main");

	AMain_C_ExecuteUbergraph_Main_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
