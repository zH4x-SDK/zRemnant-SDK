﻿#pragma once

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

// Enum NVIDIAGfeSDK.EGfeSDKReturnCode
enum class NVIDIAGfeSDK_EGfeSDKReturnCode : uint8_t
{
	EGfeSDKReturnCode__Success     = 0,
	EGfeSDKReturnCode__SuccessIpcOldSdk = 1,
	EGfeSDKReturnCode__SuccessIpcOldGfe = 2,
	EGfeSDKReturnCode__Error       = 3,
	EGfeSDKReturnCode__ErrorGfeVersion = 4,
	EGfeSDKReturnCode__ErrorSdkVersion = 5,
	EGfeSDKReturnCode__ErrorModuleNotLoaded = 6,
	EGfeSDKReturnCode__ErrorWrongTimeRangeSet = 7,
	EGfeSDKReturnCode__ErrorGeneric = 8,
	EGfeSDKReturnCode__ErrorNotImplemented = 9,
	EGfeSDKReturnCode__ErrorInvalidParameter = 10,
	EGfeSDKReturnCode__ErrorNotSet = 11,
	EGfeSDKReturnCode__ErrorShadowplayIRDisabled = 12,
	EGfeSDKReturnCode__ErrorSDKInUse = 13,
	EGfeSDKReturnCode__ErrorGroupNotFound = 14,
	EGfeSDKReturnCode__ErrorFileNotFound = 15,
	EGfeSDKReturnCode__ErrorHighlightsSetupFailed = 16,
	EGfeSDKReturnCode__ErrorHighlightsNotConfigured = 17,
	EGfeSDKReturnCode__ErrorHighlightSaveFailed = 18,
	EGfeSDKReturnCode__ErrorUnexpectedException = 19,
	EGfeSDKReturnCode__ErrorNoHighlights = 20,
	EGfeSDKReturnCode__ErrorNoConnection = 21,
	EGfeSDKReturnCode__ErrorPermissionNotGranted = 22,
	EGfeSDKReturnCode__ErrorPermissionDenied = 23,
	EGfeSDKReturnCode__ErrorInvalidHandle = 24,
	EGfeSDKReturnCode__ErrorUnhandledException = 25,
	EGfeSDKReturnCode__ErrorOutOfMemory = 26,
	EGfeSDKReturnCode__ErrorLoadLibrary = 27,
	EGfeSDKReturnCode__ErrorLibraryCallFailed = 28,
	EGfeSDKReturnCode__ErrorIPCFailed = 29,
	EGfeSDKReturnCode__ErrorConnection = 30,
	EGfeSDKReturnCode__ErrorLibCallTimeout = 31,
	EGfeSDKReturnCode__ErrorApplicationLookupFailed = 32,
	EGfeSDKReturnCode__ErrorApplicationNotKnown = 33,
	EGfeSDKReturnCode__ErrorFeatureDisabled = 34,
	EGfeSDKReturnCode__ErrorAppNoOptimization = 35,
	EGfeSDKReturnCode__ErrorAppSettingsRead = 36,
	EGfeSDKReturnCode__ErrorAppSettingsWrite = 37,
	EGfeSDKReturnCode__EGfeSDKReturnCode_MAX = 38,

};

// Enum NVIDIAGfeSDK.EGfeSDKScope
enum class NVIDIAGfeSDK_EGfeSDKScope : uint8_t
{
	EGfeSDKScope__Highlights       = 0,
	EGfeSDKScope__HighlightsRecordVideo = 1,
	EGfeSDKScope__HighlightsRecordScreenshot = 2,
	EGfeSDKScope__MAX              = 3,

};

// Enum NVIDIAGfeSDK.EGfeSDKPermission
enum class NVIDIAGfeSDK_EGfeSDKPermission : uint8_t
{
	EGfeSDKPermission__Granted     = 0,
	EGfeSDKPermission__Denied      = 1,
	EGfeSDKPermission__MustAsk     = 2,
	EGfeSDKPermission__Unknown     = 3,
	EGfeSDKPermission__MAX         = 4,

};

// Enum NVIDIAGfeSDK.EGfeSDKHighlightSignificance
enum class NVIDIAGfeSDK_EGfeSDKHighlightSignificance : uint8_t
{
	EGfeSDKHighlightSignificance__NONE = 0,
	EGfeSDKHighlightSignificance__ExtremelyBad = 1,
	EGfeSDKHighlightSignificance__VeryBad = 2,
	EGfeSDKHighlightSignificance__Bad = 3,
	EGfeSDKHighlightSignificance__Neutral = 4,
	EGfeSDKHighlightSignificance__Good = 5,
	EGfeSDKHighlightSignificance__VeryGood = 6,
	EGfeSDKHighlightSignificance__ExtremelyGood = 7,
	EGfeSDKHighlightSignificance__MAX = 8,

};

// Enum NVIDIAGfeSDK.EGfeSDKHighlightType
enum class NVIDIAGfeSDK_EGfeSDKHighlightType : uint8_t
{
	EGfeSDKHighlightType__NONE     = 0,
	EGfeSDKHighlightType__Milestone = 1,
	EGfeSDKHighlightType__Achievement = 2,
	EGfeSDKHighlightType__Incident = 3,
	EGfeSDKHighlightType__StateChange = 4,
	EGfeSDKHighlightType__Unannounced = 5,
	EGfeSDKHighlightType__MAX      = 6,

};

//---------------------------------------------------------------------------
// Script Structs
//---------------------------------------------------------------------------

// ScriptStruct NVIDIAGfeSDK.GfeSDKCreateResponse
// 0x0000
struct FGfeSDKCreateResponse
{

};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightSummaryParams
// 0x0000
struct FGfeSDKHighlightSummaryParams
{

};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightGroupView
// 0x0000
struct FGfeSDKHighlightGroupView
{

};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightVideoParams
// 0x0000
struct FGfeSDKHighlightVideoParams
{

};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightScreenshotParams
// 0x0000
struct FGfeSDKHighlightScreenshotParams
{

};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightCloseGroupParams
// 0x0000
struct FGfeSDKHighlightCloseGroupParams
{

};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightOpenGroupParams
// 0x0000
struct FGfeSDKHighlightOpenGroupParams
{

};

// ScriptStruct NVIDIAGfeSDK.GfeSDKPermissionsChangedData
// 0x0000
struct FGfeSDKPermissionsChangedData
{

};

// ScriptStruct NVIDIAGfeSDK.GfeSDKRequestPermissionsParams
// 0x0000
struct FGfeSDKRequestPermissionsParams
{

};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightConfigParams
// 0x0000
struct FGfeSDKHighlightConfigParams
{

};

// ScriptStruct NVIDIAGfeSDK.GfeSDKHighlightDefinition
// 0x0000
struct FGfeSDKHighlightDefinition
{

};

// ScriptStruct NVIDIAGfeSDK.GfeSDKCreateInputParams
// 0x0000
struct FGfeSDKCreateInputParams
{

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
