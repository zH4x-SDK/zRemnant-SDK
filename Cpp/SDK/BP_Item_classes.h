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

// BlueprintGeneratedClass BP_Item.BP_Item_C
// 0x0000
class ABP_Item_C : public AItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Item.BP_Item_C");
		return ptr;
	}



	void OnPickupFailed();
	void OnPickedUp();
	void ExecuteUbergraph_BP_Item();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
