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

// BlueprintGeneratedClass Character_Swamp_SlimeHulk_Projectile_Debuff.Character_Swamp_SlimeHulk_Projectile_Debuff_C
// 0x0000
class UCharacter_Swamp_SlimeHulk_Projectile_Debuff_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Swamp_SlimeHulk_Projectile_Debuff.Character_Swamp_SlimeHulk_Projectile_Debuff_C");
		return ptr;
	}



	void OnPostComputeStats();
	void ExecuteUbergraph_Character_Swamp_SlimeHulk_Projectile_Debuff();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
