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

// Function SpawnPoint_Item.SpawnPoint_Item_C.ReceiveBeginPlay
// ()
void ASpawnPoint_Item_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Item.SpawnPoint_Item_C.ReceiveBeginPlay");

	ASpawnPoint_Item_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function SpawnPoint_Item.SpawnPoint_Item_C.ExecuteUbergraph_SpawnPoint_Item
// ()
void ASpawnPoint_Item_C::ExecuteUbergraph_SpawnPoint_Item()
{
	static auto fn = UObject::FindObject<UFunction>("Function SpawnPoint_Item.SpawnPoint_Item_C.ExecuteUbergraph_SpawnPoint_Item");

	ASpawnPoint_Item_C_ExecuteUbergraph_SpawnPoint_Item_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
