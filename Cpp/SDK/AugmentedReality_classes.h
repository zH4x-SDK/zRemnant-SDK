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

// Class AugmentedReality.ARBlueprintLibrary
// 0x0000
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBlueprintLibrary");
		return ptr;
	}



	void UnpinComponent();
	void StopARSession();
	void StartARSession();
	void SetAlignmentTransform();
	void RemovePin();
	void PinComponentToTraceResult();
	void PinComponent();
	void PauseARSession();
	void LineTraceTrackedObjects3D();
	void LineTraceTrackedObjects();
	void IsSessionTypeSupported();
	void GetWorldMappingStatus();
	void GetTrackingQuality();
	void GetSupportedVideoFormats();
	void GetSessionConfig();
	void GetPointCloud();
	void GetCurrentLightEstimate();
	void GetCameraImage();
	void GetCameraDepth();
	void GetARSessionStatus();
	void GetAllTrackedPoints();
	void GetAllTrackedPlanes();
	void GetAllTrackedImages();
	void GetAllTrackedEnvironmentCaptureProbes();
	void GetAllPins();
	void GetAllGeometries();
	void DebugDrawTrackedGeometry();
	void DebugDrawPin();
	void AddRuntimeCandidateImage();
	void AddManualEnvironmentCaptureProbe();
};

// Class AugmentedReality.ARTraceResultLibrary
// 0x0000
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultLibrary");
		return ptr;
	}



	void GetTrackedGeometry();
	void GetTraceChannel();
	void GetLocalToWorldTransform();
	void GetLocalToTrackingTransform();
	void GetDistanceFromCamera();
};

// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
// 0x0000
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy");
		return ptr;
	}



};

// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
// 0x0000
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy");
		return ptr;
	}



	void ARSaveWorld();
};

// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
// 0x0000
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy");
		return ptr;
	}



	void ARGetCandidateObject();
};

// Class AugmentedReality.ARLightEstimate
// 0x0000
class UARLightEstimate : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARLightEstimate");
		return ptr;
	}



};

// Class AugmentedReality.ARBasicLightEstimate
// 0x0000
class UARBasicLightEstimate : public UARLightEstimate
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARBasicLightEstimate");
		return ptr;
	}



	void GetAmbientIntensityLumens();
	void GetAmbientColorTemperatureKelvin();
	void GetAmbientColor();
};

// Class AugmentedReality.ARPin
// 0x0000
class UARPin : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARPin");
		return ptr;
	}



	void GetTrackingState();
	void GetTrackedGeometry();
	void GetPinnedComponent();
	void GetLocalToWorldTransform();
	void GetLocalToTrackingTransform();
	void GetDebugName();
	void DebugDraw();
};

// Class AugmentedReality.ARSessionConfig
// 0x0000
class UARSessionConfig : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSessionConfig");
		return ptr;
	}



	void ShouldResetTrackedObjects();
	void ShouldResetCameraTracking();
	void ShouldRenderCameraOverlay();
	void ShouldEnableCameraTracking();
	void ShouldEnableAutoFocus();
	void SetWorldMapData();
	void SetResetTrackedObjects();
	void SetResetCameraTracking();
	void SetFaceTrackingUpdate();
	void SetFaceTrackingDirection();
	void SetEnableAutoFocus();
	void SetDesiredVideoFormat();
	void SetCandidateObjectList();
	void GetWorldMapData();
	void GetWorldAlignment();
	void GetSessionType();
	void GetPlaneDetectionMode();
	void GetMaxNumSimultaneousImagesTracked();
	void GetLightEstimationMode();
	void GetFrameSyncMode();
	void GetFaceTrackingUpdate();
	void GetFaceTrackingDirection();
	void GetEnvironmentCaptureProbeType();
	void GetDesiredVideoFormat();
	void GetCandidateObjectList();
	void GetCandidateImageList();
	void AddCandidateObject();
	void AddCandidateImage();
};

// Class AugmentedReality.ARSharedWorldGameMode
// 0x0000
class AARSharedWorldGameMode : public AGameMode
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameMode");
		return ptr;
	}



	void SetPreviewImageData();
	void SetARWorldSharingIsReady();
	void SetARSharedWorldData();
	void GetARSharedWorldGameState();
};

// Class AugmentedReality.ARSharedWorldGameState
// 0x0000
class AARSharedWorldGameState : public AGameState
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldGameState");
		return ptr;
	}



	void K2_OnARWorldMapIsReady();
};

// Class AugmentedReality.ARSharedWorldPlayerController
// 0x0000
class AARSharedWorldPlayerController : public APlayerController
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSharedWorldPlayerController");
		return ptr;
	}



	void ServerMarkReadyForReceiving();
	void ClientUpdatePreviewImageData();
	void ClientUpdateARWorldData();
	void ClientInitSharedWorld();
};

// Class AugmentedReality.ARSkyLight
// 0x0000
class AARSkyLight : public ASkyLight
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARSkyLight");
		return ptr;
	}



	void SetEnvironmentCaptureProbe();
};

// Class AugmentedReality.ARTexture
// 0x0000
class UARTexture : public UTexture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTexture");
		return ptr;
	}



};

// Class AugmentedReality.ARTextureCameraImage
// 0x0000
class UARTextureCameraImage : public UARTexture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraImage");
		return ptr;
	}



};

// Class AugmentedReality.ARTextureCameraDepth
// 0x0000
class UARTextureCameraDepth : public UARTexture
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTextureCameraDepth");
		return ptr;
	}



};

// Class AugmentedReality.AREnvironmentCaptureProbeTexture
// 0x0000
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbeTexture");
		return ptr;
	}



};

// Class AugmentedReality.ARTraceResultDummy
// 0x0000
class UARTraceResultDummy : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTraceResultDummy");
		return ptr;
	}



};

// Class AugmentedReality.ARTrackedGeometry
// 0x0000
class UARTrackedGeometry : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedGeometry");
		return ptr;
	}



	void IsTracked();
	void GetTrackingState();
	void GetLocalToWorldTransform();
	void GetLocalToTrackingTransform();
	void GetLastUpdateTimestamp();
	void GetLastUpdateFrameNumber();
	void GetDebugName();
};

// Class AugmentedReality.ARPlaneGeometry
// 0x0000
class UARPlaneGeometry : public UARTrackedGeometry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARPlaneGeometry");
		return ptr;
	}



	void GetSubsumedBy();
	void GetExtent();
	void GetCenter();
	void GetBoundaryPolygonInLocalSpace();
};

// Class AugmentedReality.ARTrackedPoint
// 0x0000
class UARTrackedPoint : public UARTrackedGeometry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedPoint");
		return ptr;
	}



};

// Class AugmentedReality.ARTrackedImage
// 0x0000
class UARTrackedImage : public UARTrackedGeometry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedImage");
		return ptr;
	}



	void GetEstimateSize();
	void GetDetectedImage();
};

// Class AugmentedReality.ARFaceGeometry
// 0x0000
class UARFaceGeometry : public UARTrackedGeometry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARFaceGeometry");
		return ptr;
	}



	void GetWorldSpaceEyeTransform();
	void GetLocalSpaceEyeTransform();
	void GetBlendShapeValue();
	void GetBlendShapes();
};

// Class AugmentedReality.AREnvironmentCaptureProbe
// 0x0000
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.AREnvironmentCaptureProbe");
		return ptr;
	}



	void GetExtent();
	void GetEnvironmentCaptureTexture();
};

// Class AugmentedReality.ARTrackedObject
// 0x0000
class UARTrackedObject : public UARTrackedGeometry
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTrackedObject");
		return ptr;
	}



	void GetDetectedObject();
};

// Class AugmentedReality.ARTypesDummyClass
// 0x0000
class UARTypesDummyClass : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARTypesDummyClass");
		return ptr;
	}



};

// Class AugmentedReality.ARCandidateImage
// 0x0000
class UARCandidateImage : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARCandidateImage");
		return ptr;
	}



	void GetPhysicalWidth();
	void GetPhysicalHeight();
	void GetOrientation();
	void GetFriendlyName();
	void GetCandidateTexture();
};

// Class AugmentedReality.ARCandidateObject
// 0x0000
class UARCandidateObject : public UDataAsset
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class AugmentedReality.ARCandidateObject");
		return ptr;
	}



	void SetCandidateObjectData();
	void SetBoundingBox();
	void GetFriendlyName();
	void GetCandidateObjectData();
	void GetBoundingBox();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
