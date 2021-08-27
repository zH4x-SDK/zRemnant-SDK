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

// BlueprintGeneratedClass Resource_Scraps.Resource_Scraps_C
// 0x0000
class AResource_Scraps_C : public ABP_Item_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Resource_Scraps.Resource_Scraps_C");
		return ptr;
	}



	void ReceiveTick();
	void ExecuteUbergraph_Resource_Scraps();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
