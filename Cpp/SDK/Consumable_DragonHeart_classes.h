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

// BlueprintGeneratedClass Consumable_DragonHeart.Consumable_DragonHeart_C
// 0x0000
class AConsumable_DragonHeart_C : public ADragonHeart
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Consumable_DragonHeart.Consumable_DragonHeart_C");
		return ptr;
	}



	void IsDeathwish();
	void IsReckless();
	void DoVolatile();
	void DoDiscord();
	void ShouldDoBenevolence();
	void GetCharactersForBenevolence();
	void ValidateUse();
	void DoBenevolence();
	void UseCharge();
	void Use();
	void ClientOnUseDragonHeart();
	void OnUseDragonHeart();
	void OnActivate();
	void ExecuteUbergraph_Consumable_DragonHeart();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
