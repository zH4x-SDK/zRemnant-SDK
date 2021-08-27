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

// BlueprintGeneratedClass Mod_Swarm.Mod_Swarm_C
// 0x0000
class AMod_Swarm_C : public ARangedWeapon_Mod_Action_MultiTarget_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_Swarm.Mod_Swarm_C");
		return ptr;
	}



	void GetDuration();
	void ModifyDamage();
	void DoAction();
	void ModifyInspectInfo();
	void OnBeginUse();
	void OnEndUse();
	void OnPreviewStart();
	void ExecuteUbergraph_Mod_Swarm();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
