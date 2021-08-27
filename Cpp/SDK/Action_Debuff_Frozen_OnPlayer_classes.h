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

// BlueprintGeneratedClass Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C
// 0x0000
class UAction_Debuff_Frozen_OnPlayer_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Debuff_Frozen_OnPlayer.Action_Debuff_Frozen_OnPlayer_C");
		return ptr;
	}



	void PlayFrozenMeltFX_WithoutSpiceroot();
	void OnActionStop();
	void OnActionStart();
	void OnComputeStats();
	void SFX_Frozen_DeActivate();
	void ExecuteUbergraph_Action_Debuff_Frozen_OnPlayer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
