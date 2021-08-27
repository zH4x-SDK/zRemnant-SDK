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

// Class MobilePatchingUtils.MobileInstalledContent
// 0x0000
class UMobileInstalledContent : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MobilePatchingUtils.MobileInstalledContent");
		return ptr;
	}



	void Mount();
	void GetInstalledContentSize();
	void GetDiskFreeSpace();
};

// Class MobilePatchingUtils.MobilePendingContent
// 0x0000
class UMobilePendingContent : public UMobileInstalledContent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MobilePatchingUtils.MobilePendingContent");
		return ptr;
	}



	void StartInstall();
	void GetTotalDownloadedSize();
	void GetRequiredDiskSpace();
	void GetInstallProgress();
	void GetDownloadStatusText();
	void GetDownloadSpeed();
	void GetDownloadSize();
};

// Class MobilePatchingUtils.MobilePatchingLibrary
// 0x0000
class UMobilePatchingLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MobilePatchingUtils.MobilePatchingLibrary");
		return ptr;
	}



	void RequestContent();
	void HasActiveWiFiConnection();
	void GetSupportedPlatformNames();
	void GetInstalledContent();
	void GetActiveDeviceProfileName();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
