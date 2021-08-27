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

// Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject
// 0x0000
class UChromaSDKPluginAnimation1DObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginAnimation1DObject");
		return ptr;
	}



	void Unload();
	void IsLoaded();
};

// Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject
// 0x0000
class UChromaSDKPluginAnimation2DObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginAnimation2DObject");
		return ptr;
	}



	void Unload();
	void IsLoaded();
};

// Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary
// 0x0000
class UChromaSDKPluginBPLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class ChromaSDKPlugin.ChromaSDKPluginBPLibrary");
		return ptr;
	}



	void UnloadAnimationName();
	void UnloadAnimation();
	void TrimStartFramesName();
	void TrimStartFrames();
	void TrimFrameName();
	void TrimFrame();
	void TrimEndFramesName();
	void TrimEndFrames();
	void ToLinearColor();
	void ToBGR();
	void SubtractNonZeroTargetAllKeysAllFramesOffsetName();
	void SubtractNonZeroTargetAllKeysAllFramesOffset();
	void SubtractNonZeroTargetAllKeysAllFramesName();
	void SubtractNonZeroTargetAllKeysAllFrames();
	void SubtractNonZeroAllKeysName();
	void SubtractNonZeroAllKeysAllFramesOffsetName();
	void SubtractNonZeroAllKeysAllFramesOffset();
	void SubtractNonZeroAllKeysAllFramesName();
	void SubtractNonZeroAllKeysAllFrames();
	void SubtractNonZeroAllKeys();
	void StopAnimationType();
	void StopAnimations();
	void StopAnimationComposite();
	void StopAnimation();
	void StopAll();
	void SetMouseLedColor();
	void SetKeysNonZeroColorName();
	void SetKeysNonZeroColorAllFramesName();
	void SetKeysNonZeroColorAllFrames();
	void SetKeysNonZeroColor();
	void SetKeysColorRGBName();
	void SetKeysColorRGB();
	void SetKeysColorName();
	void SetKeysColorAllFramesRGBName();
	void SetKeysColorAllFramesRGB();
	void SetKeysColorAllFramesName();
	void SetKeysColorAllFrames();
	void SetKeysColor();
	void SetKeyNonZeroColorName();
	void SetKeyNonZeroColorAllFramesName();
	void SetKeyNonZeroColorAllFrames();
	void SetKeyNonZeroColor();
	void SetKeyColorName();
	void SetKeyColorAllFramesName();
	void SetKeyColorAllFrames();
	void SetKeyColor();
	void SetKeyboardKeyColor();
	void SetChromaCustomFlagName();
	void SetChromaCustomColorAllFramesName();
	void ReverseAllFramesName();
	void ReverseAllFrames();
	void ReduceFramesName();
	void ReduceFrames();
	void PreviewFrameName();
	void PreviewFrame();
	void PlayAnimations();
	void PlayAnimationName();
	void PlayAnimationComposite();
	void PlayAnimation();
	void OverrideFrameDurationName();
	void OffsetNonZeroColorsName();
	void OffsetNonZeroColorsAllFramesName();
	void OffsetNonZeroColorsAllFrames();
	void OffsetNonZeroColors();
	void OffsetColorsName();
	void OffsetColorsAllFramesName();
	void OffsetColorsAllFrames();
	void OffsetColors();
	void MultiplyTargetColorLerpAllFramesName();
	void MultiplyTargetColorLerpAllFrames();
	void MultiplyNonZeroTargetColorLerpAllFramesName();
	void MultiplyNonZeroTargetColorLerpAllFrames();
	void MultiplyIntensityRGBName();
	void MultiplyIntensityRGB();
	void MultiplyIntensityName();
	void MultiplyIntensityColorName();
	void MultiplyIntensityColorAllFramesName();
	void MultiplyIntensityColorAllFrames();
	void MultiplyIntensityColor();
	void MultiplyIntensityAllFramesRGBName();
	void MultiplyIntensityAllFramesRGB();
	void MultiplyIntensityAllFramesName();
	void MultiplyIntensityAllFrames();
	void MultiplyIntensity();
	void MultiplyColorLerpAllFramesName();
	void MultiplyColorLerpAllFrames();
	void MakeBlankFramesRGBName();
	void MakeBlankFramesRGB();
	void MakeBlankFramesRandomName();
	void MakeBlankFramesRandomBlackAndWhiteName();
	void MakeBlankFramesRandomBlackAndWhite();
	void MakeBlankFramesRandom();
	void MakeBlankFramesName();
	void MakeBlankFrames();
	void LoadAnimationName();
	void LoadAnimation();
	void LerpColorBGR();
	void LerpColor();
	void Lerp();
	void IsPlatformWindows();
	void IsInitialized();
	void IsAnimationTypePlaying();
	void IsAnimationPlaying();
	void InvertColorsAllFramesName();
	void InvertColorsAllFrames();
	void InsertFrameName();
	void InsertFrame();
	void InsertDelayName();
	void InsertDelay();
	void GetRGB();
	void GetPlayingAnimationId();
	void GetPlayingAnimationCount();
	void GetMouseLedColor();
	void GetMaxRow();
	void GetMaxLeds();
	void GetMaxColumn();
	void GetKeyColorName();
	void GetKeyColor();
	void GetKeyboardRazerKey();
	void GetKeyboardKeyColor();
	void GetFrameCountName();
	void GetFrameCount();
	void GetAnimationName();
	void GetAnimationIdByIndex();
	void GetAnimationId();
	void GetAnimationCount();
	void GetAnimation();
	void FillZeroColorRGBName();
	void FillZeroColorRGB();
	void FillZeroColorName();
	void FillZeroColorAllFramesRGBName();
	void FillZeroColorAllFramesRGB();
	void FillZeroColorAllFramesName();
	void FillZeroColorAllFrames();
	void FillZeroColor();
	void FillThresholdRGBColorsAllFramesRGBName();
	void FillThresholdRGBColorsAllFramesRGB();
	void FillThresholdColorsMinMaxAllFramesRGBName();
	void FillThresholdColorsMinMaxAllFramesRGB();
	void FillThresholdColorsAllFramesRGBName();
	void FillThresholdColorsAllFramesRGB();
	void FillThresholdColorsAllFramesName();
	void FillThresholdColorsAllFrames();
	void FillRandomColorsName();
	void FillRandomColorsBlackAndWhiteName();
	void FillRandomColorsBlackAndWhiteAllFramesName();
	void FillRandomColorsBlackAndWhiteAllFrames();
	void FillRandomColorsBlackAndWhite();
	void FillRandomColorsAllFramesName();
	void FillRandomColorsAllFrames();
	void FillRandomColors();
	void FillNonZeroColorRGBName();
	void FillNonZeroColorRGB();
	void FillNonZeroColorName();
	void FillNonZeroColorAllFramesRGBName();
	void FillNonZeroColorAllFramesRGB();
	void FillNonZeroColorAllFramesName();
	void FillNonZeroColorAllFrames();
	void FillNonZeroColor();
	void FillColorRGBName();
	void FillColorRGB();
	void FillColorName();
	void FillColorAllFramesRGBName();
	void FillColorAllFramesRGB();
	void FillColorAllFramesName();
	void FillColorAllFrames();
	void FillColor();
	void FadeStartFramesName();
	void FadeStartFrames();
	void FadeEndFramesName();
	void FadeEndFrames();
	void DuplicateMirrorFramesName();
	void DuplicateMirrorFrames();
	void DuplicateFramesName();
	void DuplicateFrames();
	void DuplicateFirstFrameName();
	void DuplicateFirstFrame();
	void CreateRandomColorsBlackAndWhite2D();
	void CreateRandomColorsBlackAndWhite1D();
	void CreateRandomColors2D();
	void CreateRandomColors1D();
	void CreateColors2D();
	void CreateColors1D();
	void CopyNonZeroTargetAllKeysName();
	void CopyNonZeroTargetAllKeysAllFramesOffsetName();
	void CopyNonZeroTargetAllKeysAllFramesOffset();
	void CopyNonZeroTargetAllKeysAllFramesName();
	void CopyNonZeroTargetAllKeysAllFrames();
	void CopyNonZeroTargetAllKeys();
	void CopyNonZeroKeysColorName();
	void CopyNonZeroKeysColorAllFramesName();
	void CopyNonZeroKeysColorAllFrames();
	void CopyNonZeroKeysColor();
	void CopyNonZeroKeyColorName();
	void CopyNonZeroKeyColor();
	void CopyNonZeroAllKeysOffsetName();
	void CopyNonZeroAllKeysOffset();
	void CopyNonZeroAllKeysName();
	void CopyNonZeroAllKeysAllFramesOffsetName();
	void CopyNonZeroAllKeysAllFramesOffset();
	void CopyNonZeroAllKeysAllFramesName();
	void CopyNonZeroAllKeysAllFrames();
	void CopyNonZeroAllKeys();
	void CopyKeysColorName();
	void CopyKeysColorAllFramesName();
	void CopyKeysColorAllFrames();
	void CopyKeysColor();
	void CopyKeyColorName();
	void CopyKeyColor();
	void CopyAnimationName();
	void CopyAnimation();
	void CopyAllKeysName();
	void CopyAllKeysAllFramesName();
	void CopyAllKeysAllFrames();
	void CopyAllKeys();
	void CloseAnimationName();
	void CloseAnimation();
	void ClearAnimationType();
	void ClearAll();
	void ChromaSDKUnInit();
	void ChromaSDKSetEffect();
	void ChromaSDKInit();
	void ChromaSDKDeleteEffect();
	void ChromaSDKCreateEffectStatic();
	void ChromaSDKCreateEffectNone();
	void ChromaSDKCreateEffectKeyboardCustom2D();
	void ChromaSDKCreateEffectCustom2D();
	void ChromaSDKCreateEffectCustom1D();
	void AppendAllFramesName();
	void AppendAllFrames();
	void AddNonZeroTargetAllKeysAllFramesOffsetName();
	void AddNonZeroTargetAllKeysAllFramesOffset();
	void AddNonZeroTargetAllKeysAllFramesName();
	void AddNonZeroTargetAllKeysAllFrames();
	void AddNonZeroAllKeysName();
	void AddNonZeroAllKeysAllFramesOffsetName();
	void AddNonZeroAllKeysAllFramesOffset();
	void AddNonZeroAllKeysAllFramesName();
	void AddNonZeroAllKeysAllFrames();
	void AddNonZeroAllKeys();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
