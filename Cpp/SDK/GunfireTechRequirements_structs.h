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

// Enum GunfireTechRequirements.ERevokeType
enum class GunfireTechRequirements_ERevokeType : uint8_t
{
	ERevokeType__Default           = 0,
	ERevokeType__Remove            = 1,
	ERevokeType__Disable           = 2,
	ERevokeType__ERevokeType_MAX   = 3,

};

// Enum GunfireTechRequirements.EAlternateLoginType
enum class GunfireTechRequirements_EAlternateLoginType : uint8_t
{
	EAlternateLoginType__DEFAULT   = 0,
	EAlternateLoginType__EPIC_LOGIN_EXTERNAL = 1,
	EAlternateLoginType__EPIC_LINK_HEADLESS = 2,
	EAlternateLoginType__EPIC_LINK_EXTERNAL = 3,
	EAlternateLoginType__EAlternateLoginType_MAX = 4,

};

// Enum GunfireTechRequirements.EPresenceContent
enum class GunfireTechRequirements_EPresenceContent : uint8_t
{
	EPresenceContent__MENU         = 0,
	EPresenceContent__TUTORIAL     = 1,
	EPresenceContent__CITY_ADVENTURE = 2,
	EPresenceContent__CITY_CAMPAIGN = 3,
	EPresenceContent__CITY_SURVIVAL = 4,
	EPresenceContent__CORSUS_ADVENTURE = 5,
	EPresenceContent__CORSUS_CAMPAIGN = 6,
	EPresenceContent__CORSUS_SURVIVAL = 7,
	EPresenceContent__RHOM_ADVENTURE = 8,
	EPresenceContent__RHOM_CAMPAIGN = 9,
	EPresenceContent__RHOM_SURVIVAL = 10,
	EPresenceContent__YAESHA_ADVENTURE = 11,
	EPresenceContent__YAESHA_CAMPAIGN = 12,
	EPresenceContent__YAESHA_SURVIVAL = 13,
	EPresenceContent__RURAL_ADVENTURE = 14,
	EPresenceContent__RURAL_CAMPAIGN = 15,
	EPresenceContent__RURAL_SURVIVAL = 16,
	EPresenceContent__REISUM_ADVENTURE = 17,
	EPresenceContent__REISUM_CAMPAIGN = 18,
	EPresenceContent__REISUM_SURVIVAL = 19,
	EPresenceContent__LABYRINTH_CAMPAIGN = 20,
	EPresenceContent__LABYRINTH_SURVIVAL = 21,
	EPresenceContent__WARD13       = 22,
	EPresenceContent__WARD17       = 23,
	EPresenceContent__WARD_PRIME   = 24,
	EPresenceContent__EPresenceContent_MAX = 25,

};

// Enum GunfireTechRequirements.ELicensedContent
enum class GunfireTechRequirements_ELicensedContent : uint8_t
{
	ELicensedContent__PreOrderGladiator = 0,
	ELicensedContent__PreOrderSurvivor = 1,
	ELicensedContent__PreOrderNightstalker = 2,
	ELicensedContent__PreOrderDoomsayer = 3,
	ELicensedContent__PreOrderTwitch = 4,
	ELicensedContent__PreOrderSteam = 5,
	ELicensedContent__GreenXCap    = 6,
	ELicensedContent__GoldCap      = 7,
	ELicensedContent__DLC1         = 8,
	ELicensedContent__DLC2         = 9,
	ELicensedContent__None         = 10,
	ELicensedContent__ELicensedContent_MAX = 11,

};

// Enum GunfireTechRequirements.ETechReqStatusChange
enum class GunfireTechRequirements_ETechReqStatusChange : uint8_t
{
	ETechReqStatusChange__ConnectionLost = 0,
	ETechReqStatusChange__InternetLost = 1,
	ETechReqStatusChange__LiveLost = 2,
	ETechReqStatusChange__PlusLost = 3,
	ETechReqStatusChange__SessionLost = 4,
	ETechReqStatusChange__UpdateRequired = 5,
	ETechReqStatusChange__PatchRequired = 6,
	ETechReqStatusChange__AgeRestricted = 7,
	ETechReqStatusChange__UserNotLoggedIn = 8,
	ETechReqStatusChange__NeedsFullInstall = 9,
	ETechReqStatusChange__DlcLicenseLost = 10,
	ETechReqStatusChange__Normal   = 11,
	ETechReqStatusChange__Unknown  = 12,
	ETechReqStatusChange__ProfileAgeRestricted = 13,
	ETechReqStatusChange__PreOrderInstalled = 14,
	ETechReqStatusChange__MissingDLCParty = 15,
	ETechReqStatusChange__MissingDLC1 = 16,
	ETechReqStatusChange__MissingDLC2 = 17,
	ETechReqStatusChange__MissingDLC2Party = 18,
	ETechReqStatusChange__ETechReqStatusChange_MAX = 19,

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
