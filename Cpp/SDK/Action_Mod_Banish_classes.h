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

// BlueprintGeneratedClass Action_Mod_Banish.Action_Mod_Banish_C
// 0x0000
class UAction_Mod_Banish_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Banish.Action_Mod_Banish_C");
		return ptr;
	}



	void ManualResetMaterials();
	void HasImmuneTag();
	void IsAlive();
	void FilterIncomingDamage();
	void OnUnequipItem();
	void UpdateActorMaterials();
	void OnEquipItem();
	void AllowAction();
	void IsPlayer();
	void IsBoss();
	void OnActionStart();
	void OnActionStop();
	void SetOwnerDisabled();
	void OnTick();
	void StopForCinematic();
	void ExecuteUbergraph_Action_Mod_Banish();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
