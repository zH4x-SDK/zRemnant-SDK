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

// BlueprintGeneratedClass Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C
// 0x0000
class ACharacter_Root_Priest_Projectile_C : public ABP_Projectile_GroundTarget_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Priest_Projectile.Character_Root_Priest_Projectile_C");
		return ptr;
	}



	void GetCharacter();
	void OnHitGround();
	void ExecuteUbergraph_Character_Root_Priest_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
