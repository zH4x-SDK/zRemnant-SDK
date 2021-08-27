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

// BlueprintGeneratedClass Action_AOE_Attack.Action_AOE_Attack_C
// 0x0000
class UAction_AOE_Attack_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AOE_Attack.Action_AOE_Attack_C");
		return ptr;
	}



	void GetFilterActor();
	void PreprocessAOE();
	void DoSecondaryEffect();
	void GetDamage();
	void IsValidTarget();
	void PostDamage();
	void Get_Impact_Point();
	void Do_Damage_Falloff();
	void GetImpactDirection();
	void Get_Socket_Location();
	void OnActionStart();
	void ExecuteUbergraph_Action_AOE_Attack();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
