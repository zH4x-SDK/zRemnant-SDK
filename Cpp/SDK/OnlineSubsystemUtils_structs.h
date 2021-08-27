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

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class OnlineSubsystemUtils_EBeaconConnectionState : uint8_t
{
	EBeaconConnectionState__Invalid = 0,
	EBeaconConnectionState__Closed = 1,
	EBeaconConnectionState__Pending = 2,
	EBeaconConnectionState__Open   = 3,
	EBeaconConnectionState__EBeaconConnectionState_MAX = 4,

};

// Enum OnlineSubsystemUtils.EClientRequestType
enum class OnlineSubsystemUtils_EClientRequestType : uint8_t
{
	EClientRequestType__NonePending = 0,
	EClientRequestType__ExistingSessionReservation = 1,
	EClientRequestType__ReservationUpdate = 2,
	EClientRequestType__EmptyServerReservation = 3,
	EClientRequestType__Reconnect  = 4,
	EClientRequestType__Abandon    = 5,
	EClientRequestType__EClientRequestType_MAX = 6,

};

// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class OnlineSubsystemUtils_EPartyReservationResult : uint8_t
{
	EPartyReservationResult__NoResult = 0,
	EPartyReservationResult__RequestPending = 1,
	EPartyReservationResult__GeneralError = 2,
	EPartyReservationResult__PartyLimitReached = 3,
	EPartyReservationResult__IncorrectPlayerCount = 4,
	EPartyReservationResult__RequestTimedOut = 5,
	EPartyReservationResult__ReservationDuplicate = 6,
	EPartyReservationResult__ReservationNotFound = 7,
	EPartyReservationResult__ReservationAccepted = 8,
	EPartyReservationResult__ReservationDenied = 9,
	EPartyReservationResult__ReservationDenied_CrossPlayRestriction = 10,
	EPartyReservationResult__ReservationDenied_Banned = 11,
	EPartyReservationResult__ReservationRequestCanceled = 12,
	EPartyReservationResult__ReservationInvalid = 13,
	EPartyReservationResult__BadSessionId = 14,
	EPartyReservationResult__ReservationDenied_ContainsExistingPlayers = 15,
	EPartyReservationResult__EPartyReservationResult_MAX = 16,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct OnlineSubsystemUtils.BlueprintSessionResult
// 0x0000
struct FBlueprintSessionResult
{

};

// ScriptStruct OnlineSubsystemUtils.PIELoginSettingsInternal
// 0x0000
struct FPIELoginSettingsInternal
{

};

// ScriptStruct OnlineSubsystemUtils.PartyReservation
// 0x0000
struct FPartyReservation
{

};

// ScriptStruct OnlineSubsystemUtils.PlayerReservation
// 0x0000
struct FPlayerReservation
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
