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

// Class NVIDIAGfeSDK.HighlightsFunctionLibrary
// 0x0000
class UHighlightsFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsFunctionLibrary");
		return ptr;
	}



	void Poll();
	void ChekIfHighlightsAvailable();
};

// Class NVIDIAGfeSDK.InitHighlights
// 0x0000
class UInitHighlights : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.InitHighlights");
		return ptr;
	}



	void InitHighlights();
};

// Class NVIDIAGfeSDK.HighlightsConfigureAsync
// 0x0000
class UHighlightsConfigureAsync : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsConfigureAsync");
		return ptr;
	}



	void HighlightsConfigure();
};

// Class NVIDIAGfeSDK.HighlightsOpenGroupAsync
// 0x0000
class UHighlightsOpenGroupAsync : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsOpenGroupAsync");
		return ptr;
	}



	void HighlightsOpenGroup();
};

// Class NVIDIAGfeSDK.HighlightsCloseGroupAsync
// 0x0000
class UHighlightsCloseGroupAsync : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsCloseGroupAsync");
		return ptr;
	}



	void HighlightsCloseGroup();
};

// Class NVIDIAGfeSDK.HighlightsSetScreenshotAsync
// 0x0000
class UHighlightsSetScreenshotAsync : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsSetScreenshotAsync");
		return ptr;
	}



	void HighlightsSetScreenshot();
};

// Class NVIDIAGfeSDK.HighlightsSetVideoAsync
// 0x0000
class UHighlightsSetVideoAsync : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsSetVideoAsync");
		return ptr;
	}



	void HighlightsSetVideo();
};

// Class NVIDIAGfeSDK.HighlightsSummaryAsync
// 0x0000
class UHighlightsSummaryAsync : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsSummaryAsync");
		return ptr;
	}



	void HighlightsOpenSummary();
};

// Class NVIDIAGfeSDK.HighlightsGetNumberAsync
// 0x0000
class UHighlightsGetNumberAsync : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.HighlightsGetNumberAsync");
		return ptr;
	}



	void HighlightsGetNumberOfHighlights();
};

// Class NVIDIAGfeSDK.RequestPermissionsAsync
// 0x0000
class URequestPermissionsAsync : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class NVIDIAGfeSDK.RequestPermissionsAsync");
		return ptr;
	}



	void GFERequestPermissions();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
