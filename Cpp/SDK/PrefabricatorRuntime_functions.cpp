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

// Function PrefabricatorRuntime.PrefabActor.SavePrefab
// ()
void APrefabActor::SavePrefab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.SavePrefab");

	APrefabActor_SavePrefab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabricatorRuntime.PrefabActor.RandomizeSeed
// ()
void APrefabActor::RandomizeSeed()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.RandomizeSeed");

	APrefabActor_RandomizeSeed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabricatorRuntime.PrefabActor.LoadPrefab
// ()
void APrefabActor::LoadPrefab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.LoadPrefab");

	APrefabActor_LoadPrefab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated
// ()
void APrefabActor::IsPrefabOutdated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.IsPrefabOutdated");

	APrefabActor_IsPrefabOutdated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset
// ()
void APrefabActor::GetPrefabAsset()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabActor.GetPrefabAsset");

	APrefabActor_GetPrefabAsset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabricatorRuntime.PrefabRandomizer.Randomize
// ()
void APrefabRandomizer::Randomize()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabRandomizer.Randomize");

	APrefabRandomizer_Randomize_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn
// ()
void UPrefabricatorEventListener::PostSpawn()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorEventListener.PostSpawn");

	UPrefabricatorEventListener_PostSpawn_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab
// ()
void UPrefabricatorBlueprintLibrary::SpawnPrefab()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.SpawnPrefab");

	UPrefabricatorBlueprintLibrary_SpawnPrefab_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors
// ()
void UPrefabricatorBlueprintLibrary::GetAllAttachedActors()
{
	static auto fn = UObject::FindObject<UFunction>("Function PrefabricatorRuntime.PrefabricatorBlueprintLibrary.GetAllAttachedActors");

	UPrefabricatorBlueprintLibrary_GetAllAttachedActors_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
