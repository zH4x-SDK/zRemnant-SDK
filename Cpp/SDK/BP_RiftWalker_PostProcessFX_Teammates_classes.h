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

// BlueprintGeneratedClass BP_RiftWalker_PostProcessFX_Teammates.BP_RiftWalker_PostProcessFX_Teammates_C
// 0x0000
class ABP_RiftWalker_PostProcessFX_Teammates_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RiftWalker_PostProcessFX_Teammates.BP_RiftWalker_PostProcessFX_Teammates_C");
		return ptr;
	}



	void DistortionAndColor__FinishedFunc();
	void DistortionAndColor__UpdateFunc();
	void IntensityAndContrast__FinishedFunc();
	void IntensityAndContrast__UpdateFunc();
	void OnNotifyAllWorldReset();
	void ReceiveBeginPlay();
	void OnWorldReset();
	void RiftTrigger_Team();
	void ExecuteUbergraph_BP_RiftWalker_PostProcessFX_Teammates();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
