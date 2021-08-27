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

// Class MovieScene.MovieSceneSignedObject
// 0x0000
class UMovieSceneSignedObject : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSignedObject");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSection
// 0x0000
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSection");
		return ptr;
	}



	void SetRowIndex();
	void SetPreRollFrames();
	void SetPostRollFrames();
	void SetOverlapPriority();
	void SetIsLocked();
	void SetIsActive();
	void IsLocked();
	void IsActive();
	void GetRowIndex();
	void GetPreRollFrames();
	void GetPostRollFrames();
	void GetOverlapPriority();
};

// Class MovieScene.MovieSceneTrack
// 0x0000
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneTrack");
		return ptr;
	}



};

// Class MovieScene.MovieSceneNameableTrack
// 0x0000
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneNameableTrack");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSequence
// 0x0000
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequence");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSequencePlayer
// 0x0000
class UMovieSceneSequencePlayer : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSequencePlayer");
		return ptr;
	}



	void StopAtCurrentTime();
	void Stop();
	void SetTimeRange();
	void SetPlayRate();
	void SetPlaybackRange();
	void SetPlaybackPosition();
	void SetFrameRate();
	void SetFrameRange();
	void SetDisableCameraCuts();
	void ScrubToSeconds();
	void ScrubToMarkedFrame();
	void ScrubToFrame();
	void Scrub();
	void RPC_OnStopEvent();
	void RPC_ExplicitServerUpdateEvent();
	void PlayToSeconds();
	void PlayToMarkedFrame();
	void PlayToFrame();
	void PlayReverse();
	void PlayLooping();
	void Play();
	void Pause();
	void JumpToSeconds();
	void JumpToPosition();
	void JumpToMarkedFrame();
	void JumpToFrame();
	void IsReversed();
	void IsPlaying();
	void IsPaused();
	void GoToEndAndStop();
	void GetStartTime();
	void GetPlayRate();
	void GetPlaybackStart();
	void GetPlaybackPosition();
	void GetPlaybackEnd();
	void GetObjectBindings();
	void GetLength();
	void GetFrameRate();
	void GetFrameDuration();
	void GetEndTime();
	void GetDuration();
	void GetDisableCameraCuts();
	void GetCurrentTime();
	void GetBoundObjects();
	void ChangePlaybackDirection();
};

// Class MovieScene.MovieScenePlaybackClient
// 0x0000
class UMovieScenePlaybackClient : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScenePlaybackClient");
		return ptr;
	}



};

// Class MovieScene.MovieScene
// 0x0000
class UMovieScene : public UMovieSceneSignedObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieScene");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBindingOverrides
// 0x0000
class UMovieSceneBindingOverrides : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOverrides");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBindingOwnerInterface
// 0x0000
class UMovieSceneBindingOwnerInterface : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBindingOwnerInterface");
		return ptr;
	}



};

// Class MovieScene.MovieSceneBuiltInEasingFunction
// 0x0000
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneBuiltInEasingFunction");
		return ptr;
	}



};

// Class MovieScene.MovieSceneEasingExternalCurve
// 0x0000
class UMovieSceneEasingExternalCurve : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingExternalCurve");
		return ptr;
	}



};

// Class MovieScene.MovieSceneEasingFunction
// 0x0000
class UMovieSceneEasingFunction : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneEasingFunction");
		return ptr;
	}



	void OnEvaluate();
};

// Class MovieScene.MovieSceneFolder
// 0x0000
class UMovieSceneFolder : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneFolder");
		return ptr;
	}



};

// Class MovieScene.MovieSceneKeyProxy
// 0x0000
class UMovieSceneKeyProxy : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneKeyProxy");
		return ptr;
	}



};

// Class MovieScene.MovieSceneSubSection
// 0x0000
class UMovieSceneSubSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSubSection");
		return ptr;
	}



	void SetSequence();
	void GetSequence();
};

// Class MovieScene.MovieSceneSubTrack
// 0x0000
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.MovieSceneSubTrack");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneTrack
// 0x0000
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneTrack");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneSection
// 0x0000
class UTestMovieSceneSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSection");
		return ptr;
	}



};

// Class MovieScene.TestMovieSceneSequence
// 0x0000
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieScene.TestMovieSceneSequence");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
