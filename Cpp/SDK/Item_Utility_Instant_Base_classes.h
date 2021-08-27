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

// BlueprintGeneratedClass Item_Utility_Instant_Base.Item_Utility_Instant_Base_C
// 0x0000
class AItem_Utility_Instant_Base_C : public AUtilityItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Utility_Instant_Base.Item_Utility_Instant_Base_C");
		return ptr;
	}



	void DoAction();
	void OnUse();
	void OnActivate();
	void OnUnequipped();
	void ExecuteUbergraph_Item_Utility_Instant_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
