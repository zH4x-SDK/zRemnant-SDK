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

// BlueprintGeneratedClass Trinket_StormAmulet.Trinket_StormAmulet_C
// 0x0000
class ATrinket_StormAmulet_C : public AItem_Trinket_TriggerOnEquip_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trinket_StormAmulet.Trinket_StormAmulet_C");
		return ptr;
	}



	void ModifyInspectInfo();
	void OnComputeStats();
	void ExecuteUbergraph_Trinket_StormAmulet();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
