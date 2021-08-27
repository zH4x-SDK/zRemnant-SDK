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

// BlueprintGeneratedClass Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C
// 0x0000
class AItem_Trinket_TriggerOnMeleeHit_C : public AItem_Trinket_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Trinket_TriggerOnMeleeHit.Item_Trinket_TriggerOnMeleeHit_C");
		return ptr;
	}



	void Trigger();
	void OnHitTarget();
	void ExecuteUbergraph_Item_Trinket_TriggerOnMeleeHit();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
