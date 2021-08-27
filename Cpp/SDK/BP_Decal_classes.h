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

// BlueprintGeneratedClass BP_Decal.BP_Decal_C
// 0x0000
class ABP_Decal_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Decal.BP_Decal_C");
		return ptr;
	}



	void UserConstructionScript();
	void UpdateSortOrder();
	void ExecuteUbergraph_BP_Decal();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
