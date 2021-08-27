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

// BlueprintGeneratedClass Trait_FlashCaster.Trait_FlashCaster_C
// 0x0000
class UTrait_FlashCaster_C : public UBP_RemnantTrait_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Trait_FlashCaster.Trait_FlashCaster_C");
		return ptr;
	}



	void GetModCastingSpeedAnimPlayRate();
	void ModifyInspectInfo();
	void GetModCastingSpeedMod();
	void OnComputeStats();
	void OnPostComputeStats();
	void ExecuteUbergraph_Trait_FlashCaster();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
