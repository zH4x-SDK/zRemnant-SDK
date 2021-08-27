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

// Enum OnlineSubsystem.EInAppPurchaseState
enum class OnlineSubsystem_EInAppPurchaseState : uint8_t
{
	EInAppPurchaseState__Unknown   = 0,
	EInAppPurchaseState__Success   = 1,
	EInAppPurchaseState__Failed    = 2,
	EInAppPurchaseState__Cancelled = 3,
	EInAppPurchaseState__Invalid   = 4,
	EInAppPurchaseState__NotAllowed = 5,
	EInAppPurchaseState__Restored  = 6,
	EInAppPurchaseState__AlreadyOwned = 7,
	EInAppPurchaseState__EInAppPurchaseState_MAX = 8,

};

// Enum OnlineSubsystem.EMPMatchOutcome
enum class OnlineSubsystem_EMPMatchOutcome : uint8_t
{
	EMPMatchOutcome__None          = 0,
	EMPMatchOutcome__Quit          = 1,
	EMPMatchOutcome__Won           = 2,
	EMPMatchOutcome__Lost          = 3,
	EMPMatchOutcome__Tied          = 4,
	EMPMatchOutcome__TimeExpired   = 5,
	EMPMatchOutcome__First         = 6,
	EMPMatchOutcome__Second        = 7,
	EMPMatchOutcome__Third         = 8,
	EMPMatchOutcome__Fourth        = 9,
	EMPMatchOutcome__EMPMatchOutcome_MAX = 10,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystem.InAppPurchaseProductInfo
// 0x0000
struct FInAppPurchaseProductInfo
{

};

// ScriptStruct OnlineSubsystem.InAppPurchaseRestoreInfo
// 0x0000
struct FInAppPurchaseRestoreInfo
{

};

// ScriptStruct OnlineSubsystem.NamedInterfaceDef
// 0x0000
struct FNamedInterfaceDef
{

};

// ScriptStruct OnlineSubsystem.NamedInterface
// 0x0000
struct FNamedInterface
{

};

// ScriptStruct OnlineSubsystem.InAppPurchaseProductRequest
// 0x0000
struct FInAppPurchaseProductRequest
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
