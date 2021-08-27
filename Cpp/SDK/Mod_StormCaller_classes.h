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

// BlueprintGeneratedClass Mod_StormCaller.Mod_StormCaller_C
// 0x0000
class AMod_StormCaller_C : public ARangedWeapon_Mod_Action_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_StormCaller.Mod_StormCaller_C");
		return ptr;
	}



	void CanDeactivateMod();
	void CanUse();
	void ModifyDamage();
	void DoAction();
	void ModifyInspectInfo();
	void OnAttached();
	void OnCharacterEvent();
	void OnActivateTimerElapsed();
	void ExecuteUbergraph_Mod_StormCaller();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
