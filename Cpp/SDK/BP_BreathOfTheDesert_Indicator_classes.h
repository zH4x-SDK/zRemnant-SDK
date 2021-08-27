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

// BlueprintGeneratedClass BP_BreathOfTheDesert_Indicator.BP_BreathOfTheDesert_Indicator_C
// 0x0000
class ABP_BreathOfTheDesert_Indicator_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_BreathOfTheDesert_Indicator.BP_BreathOfTheDesert_Indicator_C");
		return ptr;
	}



	void ReceiveTick();
	void ExecuteUbergraph_BP_BreathOfTheDesert_Indicator();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
