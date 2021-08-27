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

// Function SpawnPoint_Emerge_Ground.SpawnPoint_Emerge_Ground_C.ReceiveBeginPlay
// ()
void ASpawnPoint_Emerge_Ground_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Ground.SpawnPoint_Emerge_Ground_C.ReceiveBeginPlay");

	ASpawnPoint_Emerge_Ground_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPoint_Emerge_Ground.SpawnPoint_Emerge_Ground_C.ExecuteUbergraph_SpawnPoint_Emerge_Ground
// ()
void ASpawnPoint_Emerge_Ground_C::ExecuteUbergraph_SpawnPoint_Emerge_Ground()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Emerge_Ground.SpawnPoint_Emerge_Ground_C.ExecuteUbergraph_SpawnPoint_Emerge_Ground");

	ASpawnPoint_Emerge_Ground_C_ExecuteUbergraph_SpawnPoint_Emerge_Ground_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
