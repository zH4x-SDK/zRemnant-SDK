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

// BlueprintGeneratedClass Character_Beam_Target.Character_Beam_Target_C
// 0x0000
class ACharacter_Beam_Target_C : public AAICharacter
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Beam_Target.Character_Beam_Target_C");
		return ptr;
	}



	void FilterIncomingDamage();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
