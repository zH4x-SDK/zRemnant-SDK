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

// Function Quest_Church_Shockwave_KillAll.Quest_Church_Shockwave_KillAll_C.ReceiveBeginPlay
// ()
void AQuest_Church_Shockwave_KillAll_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Church_Shockwave_KillAll.Quest_Church_Shockwave_KillAll_C.ReceiveBeginPlay");

	AQuest_Church_Shockwave_KillAll_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function Quest_Church_Shockwave_KillAll.Quest_Church_Shockwave_KillAll_C.ExecuteUbergraph_Quest_Church_Shockwave_KillAll
// ()
void AQuest_Church_Shockwave_KillAll_C::ExecuteUbergraph_Quest_Church_Shockwave_KillAll()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Church_Shockwave_KillAll.Quest_Church_Shockwave_KillAll_C.ExecuteUbergraph_Quest_Church_Shockwave_KillAll");

	AQuest_Church_Shockwave_KillAll_C_ExecuteUbergraph_Quest_Church_Shockwave_KillAll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
