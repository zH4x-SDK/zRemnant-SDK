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

// BlueprintGeneratedClass BP_Decal_RandomBillboard.BP_Decal_RandomBillboard_C
// 0x0000
class ABP_Decal_RandomBillboard_C : public ABP_Decal_RandomAd_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Decal_RandomBillboard.BP_Decal_RandomBillboard_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Decal_RandomBillboard();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
