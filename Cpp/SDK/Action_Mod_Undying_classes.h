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

// BlueprintGeneratedClass Action_Mod_Undying.Action_Mod_Undying_C
// 0x0000
class UAction_Mod_Undying_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mod_Undying.Action_Mod_Undying_C");
		return ptr;
	}



	void GetShieldValue();
	void IsInAbortableInteractive();
	void GetOwnerHealth();
	void UpdateReviving();
	void OnRep_Reviving();
	void FilterIncomingDamage();
	void OnStateChanged();
	void OnActionStart();
	void OnActionStop();
	void DamageTaken();
	void ExecuteUbergraph_Action_Mod_Undying();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
