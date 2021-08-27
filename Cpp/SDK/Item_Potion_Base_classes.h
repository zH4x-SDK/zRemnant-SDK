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

// BlueprintGeneratedClass Item_Potion_Base.Item_Potion_Base_C
// 0x0000
class AItem_Potion_Base_C : public AUseableItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Potion_Base.Item_Potion_Base_C");
		return ptr;
	}



	void ValidateUse();
	void DoAction();
	void Use();
	void OnActivate();
	void ExecuteUbergraph_Item_Potion_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
