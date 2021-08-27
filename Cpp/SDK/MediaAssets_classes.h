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

// Class MediaAssets.MediaSource
// 0x0000
class UMediaSource : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSource");
		return ptr;
	}



	void Validate();
	void GetUrl();
};

// Class MediaAssets.BaseMediaSource
// 0x0000
class UBaseMediaSource : public UMediaSource
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.BaseMediaSource");
		return ptr;
	}



};

// Class MediaAssets.FileMediaSource
// 0x0000
class UFileMediaSource : public UBaseMediaSource
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.FileMediaSource");
		return ptr;
	}



	void SetFilePath();
};

// Class MediaAssets.MediaBlueprintFunctionLibrary
// 0x0000
class UMediaBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaBlueprintFunctionLibrary");
		return ptr;
	}



	void EnumerateWebcamCaptureDevices();
	void EnumerateVideoCaptureDevices();
	void EnumerateAudioCaptureDevices();
};

// Class MediaAssets.MediaPlayer
// 0x0000
class UMediaPlayer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlayer");
		return ptr;
	}



	void SupportsSeeking();
	void SupportsScrubbing();
	void SupportsRate();
	void SetViewRotation();
	void SetViewField();
	void SetVideoTrackFrameRate();
	void SetTrackFormat();
	void SetTimeDelay();
	void SetRate();
	void SetNativeVolume();
	void SetLooping();
	void SetDesiredPlayerName();
	void SetBlockOnTime();
	void SelectTrack();
	void Seek();
	void Rewind();
	void Reopen();
	void Previous();
	void Play();
	void Pause();
	void OpenUrl();
	void OpenSourceWithOptions();
	void OpenSourceLatent();
	void OpenSource();
	void OpenPlaylistIndex();
	void OpenPlaylist();
	void OpenFile();
	void Next();
	void IsReady();
	void IsPreparing();
	void IsPlaying();
	void IsPaused();
	void IsLooping();
	void IsConnecting();
	void IsClosed();
	void IsBuffering();
	void HasError();
	void GetViewRotation();
	void GetVideoTrackType();
	void GetVideoTrackFrameRates();
	void GetVideoTrackFrameRate();
	void GetVideoTrackDimensions();
	void GetVideoTrackAspectRatio();
	void GetVerticalFieldOfView();
	void GetUrl();
	void GetTrackLanguage();
	void GetTrackFormat();
	void GetTrackDisplayName();
	void GetTimeDelay();
	void GetTime();
	void GetSupportedRates();
	void GetSelectedTrack();
	void GetRate();
	void GetPlaylistIndex();
	void GetPlaylist();
	void GetPlayerName();
	void GetNumTracks();
	void GetNumTrackFormats();
	void GetMediaName();
	void GetLastVideoSampleProcessedTime();
	void GetLastAudioSampleProcessedTime();
	void GetHorizontalFieldOfView();
	void GetDuration();
	void GetDesiredPlayerName();
	void GetAudioTrackType();
	void GetAudioTrackSampleRate();
	void GetAudioTrackChannels();
	void Close();
	void CanPlayUrl();
	void CanPlaySource();
	void CanPause();
};

// Class MediaAssets.MediaPlaylist
// 0x0000
class UMediaPlaylist : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaPlaylist");
		return ptr;
	}



	void Replace();
	void RemoveAt();
	void Remove();
	void Num();
	void Insert();
	void GetRandom();
	void GetPrevious();
	void GetNext();
	void Get();
	void AddUrl();
	void AddFile();
	void Add();
};

// Class MediaAssets.MediaSoundComponent
// 0x0000
class UMediaSoundComponent : public USynthComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaSoundComponent");
		return ptr;
	}



	void SetSpectralAnalysisSettings();
	void SetMediaPlayer();
	void SetEnvelopeFollowingsettings();
	void SetEnableSpectralAnalysis();
	void SetEnableEnvelopeFollowing();
	void GetSpectralData();
	void GetMediaPlayer();
	void GetEnvelopeValue();
	void BP_GetAttenuationSettingsToApply();
};

// Class MediaAssets.MediaTexture
// 0x0000
class UMediaTexture : public UTexture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.MediaTexture");
		return ptr;
	}



	void SetMediaPlayer();
	void GetWidth();
	void GetMediaPlayer();
	void GetHeight();
	void GetAspectRatio();
};

// Class MediaAssets.PlatformMediaSource
// 0x0000
class UPlatformMediaSource : public UMediaSource
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.PlatformMediaSource");
		return ptr;
	}



};

// Class MediaAssets.StreamMediaSource
// 0x0000
class UStreamMediaSource : public UBaseMediaSource
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.StreamMediaSource");
		return ptr;
	}



};

// Class MediaAssets.TimeSynchronizableMediaSource
// 0x0000
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MediaAssets.TimeSynchronizableMediaSource");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
