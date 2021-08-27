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

// BlueprintGeneratedClass Trinket_SoulEmber.Trinket_SoulEmber_C
// 0x0000
class ATrinket_SoulEmber_C : public AItem_Trinket_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trinket_SoulEmber.Trinket_SoulEmber_C");
		return ptr;
	}



	void ModifyInspectInfo();
	void OnEquipped();
	void OnUnequipped();
	void ExecuteUbergraph_Trinket_SoulEmber();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
