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

// BlueprintGeneratedClass Action_Buff_Movement_RiftWalker.Action_Buff_Movement_RiftWalker_C
// 0x0000
class UAction_Buff_Movement_RiftWalker_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Buff_Movement_RiftWalker.Action_Buff_Movement_RiftWalker_C");
		return ptr;
	}



	void OnComputeStats();
	void OnActionStart();
	void ExecuteUbergraph_Action_Buff_Movement_RiftWalker();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
