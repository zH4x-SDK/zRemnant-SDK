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

// BlueprintGeneratedClass Mod_RiftWalker.Mod_RiftWalker_C
// 0x0000
class AMod_RiftWalker_C : public ARangedWeapon_Mod_Action_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_RiftWalker.Mod_RiftWalker_C");
		return ptr;
	}



	void GetDamage();
	void GetPlayerMaxHealth();
	void GetHealthMax();
	void ModifyDamage();
	void DoAction();
	void ModifyInspectInfo();
	void AddModPower();
	void ExecuteUbergraph_Mod_RiftWalker();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
