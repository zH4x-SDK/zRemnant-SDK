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

// BlueprintGeneratedClass BP_Swamp_Fatty_HidingPot.BP_Swamp_Fatty_HidingPot_C
// 0x0000
class ABP_Swamp_Fatty_HidingPot_C : public ABP_BreakableActor_2States_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Swamp_Fatty_HidingPot.BP_Swamp_Fatty_HidingPot_C");
		return ptr;
	}



	void IsEventRegionActive();
	void OnNotifyAllWorldReset();
	void ForceBreak();
	void BeginHiding();
	void Reset();
	void GettingInPot();
	void ReceiveBeginPlay();
	void OnUpstairsEnd();
	void OnNotifyDead();
	void OnWorldReset();
	void ExecuteUbergraph_BP_Swamp_Fatty_HidingPot();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
