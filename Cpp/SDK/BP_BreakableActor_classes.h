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

// BlueprintGeneratedClass BP_BreakableActor.BP_BreakableActor_C
// 0x0000
class ABP_BreakableActor_C : public ADamageableActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BreakableActor.BP_BreakableActor_C");
		return ptr;
	}



	void GetDropChance();
	void FilterIncomingDamage();
	void ReceiveBeginPlay();
	void OnEnd_Event_1();
	void Reset();
	void OnNotifyDead();
	void ExecuteUbergraph_BP_BreakableActor();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
