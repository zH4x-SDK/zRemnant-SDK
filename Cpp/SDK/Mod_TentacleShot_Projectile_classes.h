﻿#pragma once

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

// BlueprintGeneratedClass Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C
// 0x0000
class AMod_TentacleShot_Projectile_C : public ABP_Projectile_GroundTarget_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_TentacleShot_Projectile.Mod_TentacleShot_Projectile_C");
		return ptr;
	}



	void Init();
	void Get_Owning_Character_Aggro_Group();
	void OnHitGround();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Mod_TentacleShot_Projectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
