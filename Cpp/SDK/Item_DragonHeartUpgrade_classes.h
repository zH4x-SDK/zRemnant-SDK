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

// BlueprintGeneratedClass Item_DragonHeartUpgrade.Item_DragonHeartUpgrade_C
// 0x0000
class AItem_DragonHeartUpgrade_C : public AItem
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_DragonHeartUpgrade.Item_DragonHeartUpgrade_C");
		return ptr;
	}



	void GetMaxQuantity();
	void PreAdd();
	void ModifyInspectInfo();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
