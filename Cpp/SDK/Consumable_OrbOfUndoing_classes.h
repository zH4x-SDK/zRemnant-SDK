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

// BlueprintGeneratedClass Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C
// 0x0000
class AConsumable_OrbOfUndoing_C : public AItem_Potion_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Consumable_OrbOfUndoing.Consumable_OrbOfUndoing_C");
		return ptr;
	}



	void ModifyInspectInfo();
	void OnActivate();
	void ClientInitTraitChange();
	void SetTraitLevels();
	void ServerTraitChange();
	void OnEquipped();
	void ExecuteUbergraph_Consumable_OrbOfUndoing();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
