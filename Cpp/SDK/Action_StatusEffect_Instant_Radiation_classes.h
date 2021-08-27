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

// BlueprintGeneratedClass Action_StatusEffect_Instant_Radiation.Action_StatusEffect_Instant_Radiation_C
// 0x0000
class UAction_StatusEffect_Instant_Radiation_C : public UAction_StatusEffect_Instant_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_StatusEffect_Instant_Radiation.Action_StatusEffect_Instant_Radiation_C");
		return ptr;
	}



	void OnValueChanged();
	void ExecuteUbergraph_Action_StatusEffect_Instant_Radiation();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
