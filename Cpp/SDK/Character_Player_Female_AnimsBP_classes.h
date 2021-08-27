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

// AnimBlueprintGeneratedClass Character_Player_Female_AnimsBP.Character_Player_Female_AnimsBP_C
// 0x0000
class UCharacter_Player_Female_AnimsBP_C : public UGunnerAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Character_Player_Female_AnimsBP.Character_Player_Female_AnimsBP_C");
		return ptr;
	}



	void GetTurnSpeedAbs();
	void Get_Camera_World_Rotation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_Character_Player_Female_AnimsBP_AnimGraphNode_TransitionResult_8C9F42DB468BEB6BA0D72BA86C52028F();
	void BlueprintUpdateAnimation();
	void ExecuteUbergraph_Character_Player_Female_AnimsBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
