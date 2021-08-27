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

// BlueprintGeneratedClass Action_RiftWalkerCooldown.Action_RiftWalkerCooldown_C
// 0x0000
class UAction_RiftWalkerCooldown_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_RiftWalkerCooldown.Action_RiftWalkerCooldown_C");
		return ptr;
	}



	void OnActionStart();
	void OnActionStop();
	void ExecuteUbergraph_Action_RiftWalkerCooldown();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
