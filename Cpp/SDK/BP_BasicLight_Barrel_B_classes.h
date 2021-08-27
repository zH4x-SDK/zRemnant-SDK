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

// BlueprintGeneratedClass BP_BasicLight_Barrel_B.BP_BasicLight_Barrel_B_C
// 0x0000
class ABP_BasicLight_Barrel_B_C : public ABP_BasicLight_A_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BasicLight_Barrel_B.BP_BasicLight_Barrel_B_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_BasicLight_Barrel_B();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
