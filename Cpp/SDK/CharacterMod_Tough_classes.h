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

// BlueprintGeneratedClass CharacterMod_Tough.CharacterMod_Tough_C
// 0x0000
class UCharacterMod_Tough_C : public UCharacterMod_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CharacterMod_Tough.CharacterMod_Tough_C");
		return ptr;
	}



	void OnComputeStats();
	void ExecuteUbergraph_CharacterMod_Tough();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
