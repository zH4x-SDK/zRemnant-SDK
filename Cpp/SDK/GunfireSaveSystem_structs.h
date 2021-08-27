#pragma once

// Name: Remnant, Version: 1.0


/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Enums
//---------------------------------------------------------------------------

// Enum GunfireSaveSystem.EPersistenceSaveResult
enum class GunfireSaveSystem_EPersistenceSaveResult : uint8_t
{
	EPersistenceSaveResult__Success = 0,
	EPersistenceSaveResult__Disabled = 1,
	EPersistenceSaveResult__Busy   = 2,
	EPersistenceSaveResult__Unknown = 3,
	EPersistenceSaveResult__EPersistenceSaveResult_MAX = 4,

};

// Enum GunfireSaveSystem.EPersistenceLoadResult
enum class GunfireSaveSystem_EPersistenceLoadResult : uint8_t
{
	EPersistenceLoadResult__Success = 0,
	EPersistenceLoadResult__DoesNotExist = 1,
	EPersistenceLoadResult__Corrupt = 2,
	EPersistenceLoadResult__TooNew = 3,
	EPersistenceLoadResult__Unknown = 4,
	EPersistenceLoadResult__EPersistenceLoadResult_MAX = 5,

};

// Enum GunfireSaveSystem.EPersistenceHasResult
enum class GunfireSaveSystem_EPersistenceHasResult : uint8_t
{
	EPersistenceHasResult__Empty   = 0,
	EPersistenceHasResult__Exists  = 1,
	EPersistenceHasResult__Corrupt = 2,
	EPersistenceHasResult__Unknown = 3,
	EPersistenceHasResult__EPersistenceHasResult_MAX = 4,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GunfireSaveSystem.PersistentReference
// 0x0000
struct FPersistentReference
{

};

// ScriptStruct GunfireSaveSystem.PersistenceKey
// 0x0000
struct FPersistenceKey
{

};

// ScriptStruct GunfireSaveSystem.PersistenceBlob
// 0x0000
struct FPersistenceBlob
{

};

// ScriptStruct GunfireSaveSystem.SaveGameAchievementProgress
// 0x0000
struct FSaveGameAchievementProgress
{

};

// ScriptStruct GunfireSaveSystem.SaveGameUserSetting
// 0x0000
struct FSaveGameUserSetting
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
