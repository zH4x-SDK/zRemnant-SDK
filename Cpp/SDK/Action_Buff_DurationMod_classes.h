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

// BlueprintGeneratedClass Action_Buff_DurationMod.Action_Buff_DurationMod_C
// 0x0000
class UAction_Buff_DurationMod_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Buff_DurationMod.Action_Buff_DurationMod_C");
		return ptr;
	}



	void PotencyTraitGetDuration();
	void OnActionStart();
	void OnReapplyBuff();
	void ExecuteUbergraph_Action_Buff_DurationMod();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
