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

// Function Quest_Dungeon_Base.Quest_Dungeon_Base_C.DoEncounter
// ()
void AQuest_Dungeon_Base_C::DoEncounter()
{
	static auto fn = UObject::FindObject<UFunction>("Function Quest_Dungeon_Base.Quest_Dungeon_Base_C.DoEncounter");

	AQuest_Dungeon_Base_C_DoEncounter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
