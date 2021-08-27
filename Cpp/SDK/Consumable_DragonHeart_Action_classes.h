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

// BlueprintGeneratedClass Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C
// 0x0000
class UConsumable_DragonHeart_Action_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Consumable_DragonHeart_Action.Consumable_DragonHeart_Action_C");
		return ptr;
	}



	void OnPostComputeStats();
	void OnActionStart();
	void ExecuteUbergraph_Consumable_DragonHeart_Action();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
