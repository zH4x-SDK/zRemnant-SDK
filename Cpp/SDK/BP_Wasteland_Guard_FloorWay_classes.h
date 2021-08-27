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

// BlueprintGeneratedClass BP_Wasteland_Guard_FloorWay.BP_Wasteland_Guard_FloorWay_C
// 0x0000
class ABP_Wasteland_Guard_FloorWay_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wasteland_Guard_FloorWay.BP_Wasteland_Guard_FloorWay_C");
		return ptr;
	}



	void Set_Particle();
	void ShowParticle();
	void StopParticle();
	void ReceiveBeginPlay();
	void ShowVisibility();
	void EventRegionStateUpdate();
	void UpdateActiveState();
	void ExecuteUbergraph_BP_Wasteland_Guard_FloorWay();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
