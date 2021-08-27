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
// Classes
//---------------------------------------------------------------------------

// Class GunfireTechRequirements.EntitlementComponent
// 0x0000
class UEntitlementComponent : public UActorComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireTechRequirements.EntitlementComponent");
		return ptr;
	}



	void ShowRevokedDialog();
	void RevokeLicense();
	void HasEntitlement();
	void GetRequiredLicense();
	void CheckLicense();
};

// Class GunfireTechRequirements.GunfireTechRequirementsImpl
// 0x0000
class UGunfireTechRequirementsImpl : public UGameInstanceSubsystem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireTechRequirements.GunfireTechRequirementsImpl");
		return ptr;
	}



	void ShowSwitchPlatformGameProfile();
	void ShowOfflineMessage();
	void SetVoipEnabled();
	void SetUsingMultiplayerFeatures();
	void SetPresenceLocation();
	void SetHasSeenLegalScreen();
	void SetActiveController();
	void PrepForPressAnyKeyDialog();
	void MuteVOIP();
	void MainMenuLoaded();
	void IsVoipPTTEnabled();
	void IsVoipMuted();
	void IsVoipEnabled();
	void IsUsingMultiplayerFeatures();
	void IsProfileValid();
	void IsPremiumServiceAvailable();
	void IsFullGameAvailable();
	void IsControllerConnected();
	void IsChatRestricted();
	void HasLicense();
	void HasCheckedOnlinePrivilege();
	void GetPresenceLocation();
	void GetPlatformGameProfileUserName();
	void GetLicensedContent();
	void GetGunfireTechRequirementsImpl();
	void EnableVoipPTT();
	void CustomLogin();
	void CheckOnlinePrivilege();
	void CheckOnlineCommunicationPrivilege();
	void CanRequestCustomLogin();
	void AnyKeyPressed();
	void AdjustCameraFoVForAspect();
	void AddStatusChangedEvent();
};

// Class GunfireTechRequirements.GunfireTechRequirementsImplWin64
// 0x0000
class UGunfireTechRequirementsImplWin64 : public UGunfireTechRequirementsImpl
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class GunfireTechRequirements.GunfireTechRequirementsImplWin64");
		return ptr;
	}



	void VoipHotkeyReleased();
	void VoipHotkeyPressed();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
