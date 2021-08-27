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

// BlueprintGeneratedClass Mod_CorrosiveAura.Mod_CorrosiveAura_C
// 0x0000
class AMod_CorrosiveAura_C : public ARangedWeapon_Mod_Action_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_CorrosiveAura.Mod_CorrosiveAura_C");
		return ptr;
	}



	void GetEnemyDefenseReductionScalar();
	void DoAction();
	void ModifyInspectInfo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
