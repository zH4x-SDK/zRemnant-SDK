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

// BlueprintGeneratedClass Ammo_Base.Ammo_Base_C
// 0x0000
class AAmmo_Base_C : public ABP_Item_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ammo_Base.Ammo_Base_C");
		return ptr;
	}



	void SplitAmmoAmongPlayers();
	void GetAmmoPickupMod();
	void PreAdd();
	void ValidateAdd();
	void ReceiveTick();
	void ExecuteUbergraph_Ammo_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
