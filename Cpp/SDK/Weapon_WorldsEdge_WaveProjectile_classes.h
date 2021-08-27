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

// BlueprintGeneratedClass Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C
// 0x0000
class AWeapon_WorldsEdge_WaveProjectile_C : public AProjectileBox
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_WorldsEdge_WaveProjectile.Weapon_WorldsEdge_WaveProjectile_C");
		return ptr;
	}



	void SetRoll();
	void ReceiveTick();
	void ReceiveBeginPlay();
	void OnProjectileHit();
	void ExecuteUbergraph_Weapon_WorldsEdge_WaveProjectile();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
