﻿#pragma once

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

// BlueprintGeneratedClass Consumable_Adrenaline.Consumable_Adrenaline_C
// 0x0000
class AConsumable_Adrenaline_C : public AItem_Potion_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Consumable_Adrenaline.Consumable_Adrenaline_C");
		return ptr;
	}



	void ModifyInspectInfo();
	void DoAction();
	void ExecuteUbergraph_Consumable_Adrenaline();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
