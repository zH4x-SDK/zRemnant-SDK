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

// BlueprintGeneratedClass Action_Debuff_Parasite.Action_Debuff_Parasite_C
// 0x0000
class UAction_Debuff_Parasite_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Debuff_Parasite.Action_Debuff_Parasite_C");
		return ptr;
	}



	void OnPostComputeStats();
	void OnActionStop();
	void ExecuteUbergraph_Action_Debuff_Parasite();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
