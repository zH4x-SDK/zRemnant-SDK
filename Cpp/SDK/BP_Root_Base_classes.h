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

// BlueprintGeneratedClass BP_Root_Base.BP_Root_Base_C
// 0x0000
class ABP_Root_Base_C : public ASplineBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Root_Base.BP_Root_Base_C");
		return ptr;
	}



	void Snap_Spline_Point_To_Grid();
	void CheckForSplinePointSnap();
	void CreateStartCap();
	void CreateSplinePointMeshes();
	void GetNearestTime();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Root_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
