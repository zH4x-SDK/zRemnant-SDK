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

// BlueprintGeneratedClass Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C
// 0x0000
class AWeapon_Rural_WorldsEdge_C : public AWeapon_Sword_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Weapon_Rural_WorldsEdge.Weapon_Rural_WorldsEdge_C");
		return ptr;
	}



	void WorldsEdgeFireProjectiles();
	void ModifyInspectInfo();
	void Set_Light_Intensity();
	void OnNotInHand();
	void OnActivated();
	void OnInHand();
	void OnCharacterEvent();
	void Server_FireProjectiles();
	void ExecuteUbergraph_Weapon_Rural_WorldsEdge();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
