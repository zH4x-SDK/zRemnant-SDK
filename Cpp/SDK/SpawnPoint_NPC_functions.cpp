﻿// Name: Remnant, Version: 1.0

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

// Function SpawnPoint_NPC.SpawnPoint_NPC_C.UserConstructionScript
// ()
void ASpawnPoint_NPC_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_NPC.SpawnPoint_NPC_C.UserConstructionScript");

	ASpawnPoint_NPC_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
