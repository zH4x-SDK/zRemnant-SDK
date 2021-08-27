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

// BlueprintGeneratedClass Trinket_RingOfTheUnclean.Trinket_RingOfTheUnclean_C
// 0x0000
class ATrinket_RingOfTheUnclean_C : public AItem_Trinket_TriggerOnEquip_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trinket_RingOfTheUnclean.Trinket_RingOfTheUnclean_C");
		return ptr;
	}



	void ModifyInspectInfo();
	void OnPostComputeStats();
	void OnEquipped();
	void OnUnequipped();
	void ExecuteUbergraph_Trinket_RingOfTheUnclean();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
