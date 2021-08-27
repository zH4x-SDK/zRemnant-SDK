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

// Enum GameplayTags.EGameplayTagQueryExprType
enum class GameplayTags_EGameplayTagQueryExprType : uint8_t
{
	EGameplayTagQueryExprType__Undefined = 0,
	EGameplayTagQueryExprType__AnyTagsMatch = 1,
	EGameplayTagQueryExprType__AllTagsMatch = 2,
	EGameplayTagQueryExprType__NoTagsMatch = 3,
	EGameplayTagQueryExprType__AnyExprMatch = 4,
	EGameplayTagQueryExprType__AllExprMatch = 5,
	EGameplayTagQueryExprType__NoExprMatch = 6,
	EGameplayTagQueryExprType__EGameplayTagQueryExprType_MAX = 7,

};

// Enum GameplayTags.EGameplayContainerMatchType
enum class GameplayTags_EGameplayContainerMatchType : uint8_t
{
	EGameplayContainerMatchType__Any = 0,
	EGameplayContainerMatchType__All = 1,
	EGameplayContainerMatchType__EGameplayContainerMatchType_MAX = 2,

};

// Enum GameplayTags.EGameplayTagMatchType
enum class GameplayTags_EGameplayTagMatchType : uint8_t
{
	EGameplayTagMatchType__Explicit = 0,
	EGameplayTagMatchType__IncludeParentTags = 1,
	EGameplayTagMatchType__EGameplayTagMatchType_MAX = 2,

};

// Enum GameplayTags.EGameplayTagSelectionType
enum class GameplayTags_EGameplayTagSelectionType : uint8_t
{
	EGameplayTagSelectionType__None = 0,
	EGameplayTagSelectionType__NonRestrictedOnly = 1,
	EGameplayTagSelectionType__RestrictedOnly = 2,
	EGameplayTagSelectionType__All = 3,
	EGameplayTagSelectionType__EGameplayTagSelectionType_MAX = 4,

};

// Enum GameplayTags.EGameplayTagSourceType
enum class GameplayTags_EGameplayTagSourceType : uint8_t
{
	EGameplayTagSourceType__Native = 0,
	EGameplayTagSourceType__DefaultTagList = 1,
	EGameplayTagSourceType__TagList = 2,
	EGameplayTagSourceType__RestrictedTagList = 3,
	EGameplayTagSourceType__DataTable = 4,
	EGameplayTagSourceType__Invalid = 5,
	EGameplayTagSourceType__EGameplayTagSourceType_MAX = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct GameplayTags.GameplayTagQuery
// 0x0000
struct FGameplayTagQuery
{

};

// ScriptStruct GameplayTags.GameplayTag
// 0x0000
struct FGameplayTag
{

};

// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// 0x0000
struct FGameplayTagCreationWidgetHelper
{

};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// 0x0000
struct FGameplayTagReferenceHelper
{

};

// ScriptStruct GameplayTags.GameplayTagContainer
// 0x0000
struct FGameplayTagContainer
{

};

// ScriptStruct GameplayTags.GameplayTagNode
// 0x0000
struct FGameplayTagNode
{

};

// ScriptStruct GameplayTags.GameplayTagSource
// 0x0000
struct FGameplayTagSource
{

};

// ScriptStruct GameplayTags.GameplayTagTableRow
// 0x0000
struct FGameplayTagTableRow : public FTableRowBase
{

};

// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// 0x0000
struct FRestrictedGameplayTagTableRow : public FGameplayTagTableRow
{

};

// ScriptStruct GameplayTags.RestrictedConfigInfo
// 0x0000
struct FRestrictedConfigInfo
{

};

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// 0x0000
struct FGameplayTagCategoryRemap
{

};

// ScriptStruct GameplayTags.GameplayTagRedirect
// 0x0000
struct FGameplayTagRedirect
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
