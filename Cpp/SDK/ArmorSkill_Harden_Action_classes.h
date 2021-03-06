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

// BlueprintGeneratedClass ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C
// 0x0000
class UArmorSkill_Harden_Action_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Harden_Action.ArmorSkill_Harden_Action_C");
		return ptr;
	}



	void PlayMaterialTransitionSound();
	void FilterIncomingDamage();
	void OnReapplyBuff();
	void OnLevelChanged();
	void OnActionStart();
	void OnActionStop();
	void ExecuteUbergraph_ArmorSkill_Harden_Action();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
