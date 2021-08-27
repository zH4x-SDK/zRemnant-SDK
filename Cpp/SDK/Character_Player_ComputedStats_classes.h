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

// BlueprintGeneratedClass Character_Player_ComputedStats.Character_Player_ComputedStats_C
// 0x0000
class UCharacter_Player_ComputedStats_C : public UComputedStats
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Player_ComputedStats.Character_Player_ComputedStats_C");
		return ptr;
	}



	void ClampEncumbrance();
	void ModifyDamageVisualStats();
	void GenerateTotalDamageModStat();
	void ModifyCritChance();
	void ModifyEquipLoad();
	void ModifyDamageBonus();
	void ModifyDamageBonuses();
	void ModifyResistances();
	void OnComputeStats();
	void OnPostComputeStats();
	void OnComputeDerivedStats();
	void ExecuteUbergraph_Character_Player_ComputedStats();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
