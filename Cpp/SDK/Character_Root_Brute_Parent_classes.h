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

// BlueprintGeneratedClass Character_Root_Brute_Parent.Character_Root_Brute_Parent_C
// 0x0000
class ACharacter_Root_Brute_Parent_C : public ABP_Monster_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Character_Root_Brute_Parent.Character_Root_Brute_Parent_C");
		return ptr;
	}



	void OnEnraged();
	void IntroComplete();
	void OnEnragedEnd();
	void SFX_Loop_Start();
	void SFX_Loop_Stop();
	void SFX_Loop_Stop_Fast();
	void OnSprint();
	void OnSprintEnd();
	void ExecuteUbergraph_Character_Root_Brute_Parent();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
