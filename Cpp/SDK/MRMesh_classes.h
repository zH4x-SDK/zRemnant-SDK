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

// Class MRMesh.MeshReconstructorBase
// 0x0000
class UMeshReconstructorBase : public UObject
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		return ptr;
	}



	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	void IsReconstructionStarted();
	void IsReconstructionPaused();
	void DisconnectMRMesh();
	void ConnectMRMesh();
};

// Class MRMesh.MockDataMeshTrackerComponent
// 0x0000
class UMockDataMeshTrackerComponent : public USceneComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MockDataMeshTrackerComponent");
		return ptr;
	}



	void OnMockDataMeshTrackerUpdated__DelegateSignature();
	void DisconnectMRMesh();
	void ConnectMRMesh();
};

// Class MRMesh.MRMeshComponent
// 0x0000
class UMRMeshComponent : public UPrimitiveComponent
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MRMeshComponent");
		return ptr;
	}



	void IsConnected();
	void ForceNavMeshUpdate();
	void Clear();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
