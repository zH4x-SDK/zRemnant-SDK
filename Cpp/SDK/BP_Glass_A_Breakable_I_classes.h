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

// BlueprintGeneratedClass BP_Glass_A_Breakable_I.BP_Glass_A_Breakable_I_C
// 0x0000
class ABP_Glass_A_Breakable_I_C : public ABP_BreakableActor_2States_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Glass_A_Breakable_I.BP_Glass_A_Breakable_I_C");
		return ptr;
	}



	void BndEvt__Breakable_K2Node_ComponentBoundEvent_0_BreakableEvent__DelegateSignature();
	void ExecuteUbergraph_BP_Glass_A_Breakable_I();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
