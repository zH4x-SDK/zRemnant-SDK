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

// BlueprintGeneratedClass Trinket_AbrasiveAmulet.Trinket_AbrasiveAmulet_C
// 0x0000
class ATrinket_AbrasiveAmulet_C : public AItem_Trinket_TriggerOnMeleeHit_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trinket_AbrasiveAmulet.Trinket_AbrasiveAmulet_C");
		return ptr;
	}



	void ModifyInspectInfo();
	void Trigger();
	void OnEquipped();
	void OnUnequipped();
	void ExecuteUbergraph_Trinket_AbrasiveAmulet();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
