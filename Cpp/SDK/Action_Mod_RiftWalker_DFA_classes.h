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

// BlueprintGeneratedClass Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C
// 0x0000
class UAction_Mod_RiftWalker_DFA_C : public UAction_DFA_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_RiftWalker_DFA.Action_Mod_RiftWalker_DFA_C");
		return ptr;
	}



	void ClearInvulnerability();
	void SetInvulnerable();
	void FilterIncomingDamage();
	void SpawnCharacter();
	void Get_Player_Gender();
	void OnActionStart();
	void OnActionStop();
	void ExecuteUbergraph_Action_Mod_RiftWalker_DFA();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
