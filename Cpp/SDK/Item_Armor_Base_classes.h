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

// BlueprintGeneratedClass Item_Armor_Base.Item_Armor_Base_C
// 0x0000
class AItem_Armor_Base_C : public AArmor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Armor_Base.Item_Armor_Base_C");
		return ptr;
	}



	void ModifyInspectInfo();
	void OnEquipped();
	void OnUnequipped();
	void ExecuteUbergraph_Item_Armor_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
