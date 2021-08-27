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

// BlueprintGeneratedClass Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C
// 0x0000
class UAction_Trinket_BloodlettersInsignia_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Trinket_BloodlettersInsignia.Action_Trinket_BloodlettersInsignia_C");
		return ptr;
	}



	void GetLifeSteal();
	void DoDevoted();
	void GetCharactersForDevotion();
	void GetSiphonerTraitLifeStealMod();
	void IsDamageTypeBleed();
	void ModifyDamage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
