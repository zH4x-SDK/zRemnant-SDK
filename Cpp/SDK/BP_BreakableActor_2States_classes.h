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

// BlueprintGeneratedClass BP_BreakableActor_2States.BP_BreakableActor_2States_C
// 0x0000
class ABP_BreakableActor_2States_C : public ABP_BreakableActor_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BreakableActor_2States.BP_BreakableActor_2States_C");
		return ptr;
	}



	void EnableCollisionOn2ndState();
	void UserConstructionScript();
	void BndEvt__Breakable_K2Node_ComponentBoundEvent_1_BreakableEvent__DelegateSignature();
	void ExecuteUbergraph_BP_BreakableActor_2States();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
