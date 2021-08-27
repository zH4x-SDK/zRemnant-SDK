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

// Function NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll
// ()
void UHighlightsFunctionLibrary::Poll()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsFunctionLibrary.Poll");

	UHighlightsFunctionLibrary_Poll_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable
// ()
void UHighlightsFunctionLibrary::ChekIfHighlightsAvailable()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsFunctionLibrary.ChekIfHighlightsAvailable");

	UHighlightsFunctionLibrary_ChekIfHighlightsAvailable_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NVIDIAGfeSDK.InitHighlights.InitHighlights
// ()
void UInitHighlights::InitHighlights()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.InitHighlights.InitHighlights");

	UInitHighlights_InitHighlights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure
// ()
void UHighlightsConfigureAsync::HighlightsConfigure()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsConfigureAsync.HighlightsConfigure");

	UHighlightsConfigureAsync_HighlightsConfigure_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup
// ()
void UHighlightsOpenGroupAsync::HighlightsOpenGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsOpenGroupAsync.HighlightsOpenGroup");

	UHighlightsOpenGroupAsync_HighlightsOpenGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup
// ()
void UHighlightsCloseGroupAsync::HighlightsCloseGroup()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsCloseGroupAsync.HighlightsCloseGroup");

	UHighlightsCloseGroupAsync_HighlightsCloseGroup_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot
// ()
void UHighlightsSetScreenshotAsync::HighlightsSetScreenshot()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSetScreenshotAsync.HighlightsSetScreenshot");

	UHighlightsSetScreenshotAsync_HighlightsSetScreenshot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo
// ()
void UHighlightsSetVideoAsync::HighlightsSetVideo()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSetVideoAsync.HighlightsSetVideo");

	UHighlightsSetVideoAsync_HighlightsSetVideo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary
// ()
void UHighlightsSummaryAsync::HighlightsOpenSummary()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsSummaryAsync.HighlightsOpenSummary");

	UHighlightsSummaryAsync_HighlightsOpenSummary_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights
// ()
void UHighlightsGetNumberAsync::HighlightsGetNumberOfHighlights()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.HighlightsGetNumberAsync.HighlightsGetNumberOfHighlights");

	UHighlightsGetNumberAsync_HighlightsGetNumberOfHighlights_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions
// ()
void URequestPermissionsAsync::GFERequestPermissions()
{
	static auto fn = UObject::FindObject<UFunction>("Function NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions");

	URequestPermissionsAsync_GFERequestPermissions_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
