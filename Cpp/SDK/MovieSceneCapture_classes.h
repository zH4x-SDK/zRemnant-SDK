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

// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// 0x0000
class UMovieSceneCaptureProtocolBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureProtocolBase");
		return ptr;
	}



	void IsCapturing();
	void GetState();
};

// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// 0x0000
class UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase");
		return ptr;
	}



};

// Class MovieSceneCapture.NullAudioCaptureProtocol
// 0x0000
class UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.NullAudioCaptureProtocol");
		return ptr;
	}



};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// 0x0000
class UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol");
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// 0x0000
class UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase");
		return ptr;
	}



};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// 0x0000
class UCompositionGraphCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.CompositionGraphCaptureProtocol");
		return ptr;
	}



};

// Class MovieSceneCapture.FrameGrabberProtocol
// 0x0000
class UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.FrameGrabberProtocol");
		return ptr;
	}



};

// Class MovieSceneCapture.ImageSequenceProtocol
// 0x0000
class UImageSequenceProtocol : public UFrameGrabberProtocol
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol");
		return ptr;
	}



};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
// 0x0000
class UCompressedImageSequenceProtocol : public UImageSequenceProtocol
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.CompressedImageSequenceProtocol");
		return ptr;
	}



};

// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// 0x0000
class UImageSequenceProtocol_BMP : public UImageSequenceProtocol
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_BMP");
		return ptr;
	}



};

// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// 0x0000
class UImageSequenceProtocol_PNG : public UCompressedImageSequenceProtocol
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_PNG");
		return ptr;
	}



};

// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// 0x0000
class UImageSequenceProtocol_JPG : public UCompressedImageSequenceProtocol
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_JPG");
		return ptr;
	}



};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// 0x0000
class UImageSequenceProtocol_EXR : public UImageSequenceProtocol
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.ImageSequenceProtocol_EXR");
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCaptureInterface
// 0x0000
class UMovieSceneCaptureInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureInterface");
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCapture
// 0x0000
class UMovieSceneCapture : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCapture");
		return ptr;
	}



	void SetImageCaptureProtocolType();
	void SetAudioCaptureProtocolType();
	void GetImageCaptureProtocol();
	void GetAudioCaptureProtocol();
};

// Class MovieSceneCapture.LevelCapture
// 0x0000
class ULevelCapture : public UMovieSceneCapture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.LevelCapture");
		return ptr;
	}



};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// 0x0000
class UMovieSceneCaptureEnvironment : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.MovieSceneCaptureEnvironment");
		return ptr;
	}



	void IsCaptureInProgress();
	void GetCaptureFrameNumber();
	void GetCaptureElapsedTime();
	void FindImageCaptureProtocol();
	void FindAudioCaptureProtocol();
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
// 0x0000
class UUserDefinedCaptureProtocol : public UMovieSceneImageCaptureProtocolBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedCaptureProtocol");
		return ptr;
	}



	void StopCapturingFinalPixels();
	void StartCapturingFinalPixels();
	void ResolveBuffer();
	void OnWarmUp();
	void OnTick();
	void OnStartCapture();
	void OnSetup();
	void OnPreTick();
	void OnPixelsReceived();
	void OnPauseCapture();
	void OnFinalize();
	void OnCaptureFrame();
	void OnCanFinalize();
	void OnBeginFinalize();
	void GetCurrentFrameMetrics();
	void GenerateFilename();
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// 0x0000
class UUserDefinedImageCaptureProtocol : public UUserDefinedCaptureProtocol
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.UserDefinedImageCaptureProtocol");
		return ptr;
	}



	void WriteImageToDisk();
	void GenerateFilenameForCurrentFrame();
	void GenerateFilenameForBuffer();
};

// Class MovieSceneCapture.VideoCaptureProtocol
// 0x0000
class UVideoCaptureProtocol : public UFrameGrabberProtocol
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneCapture.VideoCaptureProtocol");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
