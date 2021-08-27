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

// Class MovieSceneTracks.MovieSceneTransformOrigin
// 0x0000
class UMovieSceneTransformOrigin : public UInterface
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformOrigin");
		return ptr;
	}



	void BP_GetTransformOrigin();
};

// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x0000
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return ptr;
	}



	void SetConstraintBindingID();
	void GetConstraintBindingID();
};

// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0000
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0000
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DPathSection
// 0x0000
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0000
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0000
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0000
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneActorReferenceSection
// 0x0000
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// 0x0000
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneAudioSection
// 0x0000
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioSection");
		return ptr;
	}



	void SetStartOffset();
	void SetSound();
	void GetStartOffset();
	void GetSound();
};

// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0000
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneBoolSection
// 0x0000
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0000
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneByteSection
// 0x0000
class UMovieSceneByteSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0000
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraAnimSection
// 0x0000
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// 0x0000
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraCutSection
// 0x0000
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutSection");
		return ptr;
	}



	void SetCameraBindingID();
	void GetCameraBindingID();
};

// Class MovieSceneTracks.MovieSceneCameraCutTrack
// 0x0000
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraShakeSection
// 0x0000
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// 0x0000
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneCinematicShotSection
// 0x0000
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotSection");
		return ptr;
	}



	void SetShotDisplayName();
	void GetShotDisplayName();
};

// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// 0x0000
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneColorSection
// 0x0000
class UMovieSceneColorSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0000
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEnumSection
// 0x0000
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEnumTrack
// 0x0000
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEulerTransformTrack
// 0x0000
class UMovieSceneEulerTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEulerTransformTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEventSectionBase
// 0x0000
class UMovieSceneEventSectionBase : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSectionBase");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEventRepeaterSection
// 0x0000
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventRepeaterSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEventSection
// 0x0000
class UMovieSceneEventSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0000
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneEventTriggerSection
// 0x0000
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTriggerSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFloatSection
// 0x0000
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0000
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0000
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneIntegerSection
// 0x0000
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneIntegerTrack
// 0x0000
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// 0x0000
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilitySection");
		return ptr;
	}



	void SetVisibility();
	void SetLevelNames();
	void GetVisibility();
	void GetLevelNames();
};

// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// 0x0000
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0000
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// 0x0000
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0000
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneObjectPropertySection
// 0x0000
class UMovieSceneObjectPropertySection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneObjectPropertySection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneObjectPropertyTrack
// 0x0000
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneObjectPropertyTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0000
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParameterSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x0000
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleParameterTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParticleSection
// 0x0000
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0000
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialSection
// 0x0000
class UMovieScenePrimitiveMaterialSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack
// 0x0000
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieScenePrimitiveMaterialTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x0000
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0000
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x0000
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0000
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSpawnSection
// 0x0000
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneSpawnTrack
// 0x0000
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneStringSection
// 0x0000
class UMovieSceneStringSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneStringTrack
// 0x0000
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneTransformTrack
// 0x0000
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneVectorSection
// 0x0000
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorSection");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0000
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorTrack");
		return ptr;
	}



};

// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return ptr;
	}



};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
