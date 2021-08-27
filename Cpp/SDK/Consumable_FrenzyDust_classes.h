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

// BlueprintGeneratedClass Consumable_FrenzyDust.Consumable_FrenzyDust_C
// 0x0000
class AConsumable_FrenzyDust_C : public AItem_Potion_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Consumable_FrenzyDust.Consumable_FrenzyDust_C");
		return ptr;
	}



	void Get_Reload_Speed();
	void Get_FireSpeed();
	void ParamDuration();
	void Get_Ranged_Damage_Mod();
	void ModifyInspectInfo();
	void OnActivate();
	void DoAction();
	void ExecuteUbergraph_Consumable_FrenzyDust();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
