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

// BlueprintGeneratedClass Item_Material_Base.Item_Material_Base_C
// 0x0000
class AItem_Material_Base_C : public ABP_Item_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Item_Material_Base.Item_Material_Base_C");
		return ptr;
	}



	void ReceiveTick();
	void ExecuteUbergraph_Item_Material_Base();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
