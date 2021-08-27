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

// BlueprintGeneratedClass BP_City_Roadblock_A_Breakable_A.BP_City_Roadblock_A_Breakable_A_C
// 0x0000
class ABP_City_Roadblock_A_Breakable_A_C : public ABP_BreakableActor_2States_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_City_Roadblock_A_Breakable_A.BP_City_Roadblock_A_Breakable_A_C");
		return ptr;
	}



	void BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature();
	void ExecuteUbergraph_BP_City_Roadblock_A_Breakable_A();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
