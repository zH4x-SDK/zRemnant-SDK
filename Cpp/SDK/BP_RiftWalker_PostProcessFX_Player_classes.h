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

// BlueprintGeneratedClass BP_RiftWalker_PostProcessFX_Player.BP_RiftWalker_PostProcessFX_Player_C
// 0x0000
class ABP_RiftWalker_PostProcessFX_Player_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RiftWalker_PostProcessFX_Player.BP_RiftWalker_PostProcessFX_Player_C");
		return ptr;
	}



	void DistortionAndColor__FinishedFunc();
	void DistortionAndColor__UpdateFunc();
	void Intensity__FinishedFunc();
	void Intensity__UpdateFunc();
	void OnNotifyAllWorldReset();
	void ReceiveBeginPlay();
	void OnWorldReset();
	void RiftTrigger_User();
	void ExecuteUbergraph_BP_RiftWalker_PostProcessFX_Player();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
