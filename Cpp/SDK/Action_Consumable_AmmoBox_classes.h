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

// BlueprintGeneratedClass Action_Consumable_AmmoBox.Action_Consumable_AmmoBox_C
// 0x0000
class UAction_Consumable_AmmoBox_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Consumable_AmmoBox.Action_Consumable_AmmoBox_C");
		return ptr;
	}



	void OnActionStart();
	void ExecuteUbergraph_Action_Consumable_AmmoBox();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
