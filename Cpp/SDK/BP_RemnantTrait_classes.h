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

// BlueprintGeneratedClass BP_RemnantTrait.BP_RemnantTrait_C
// 0x0000
class UBP_RemnantTrait_C : public UTrait
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_RemnantTrait.BP_RemnantTrait_C");
		return ptr;
	}



	void DoActionOnTarget();
	void IsTargetAggro();
	void DoAction();
	void GetCharacter();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
