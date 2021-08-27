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

// AnimBlueprintGeneratedClass Mod_IronSentinel_AnimBP.Mod_IronSentinel_AnimBP_C
// 0x0000
class UMod_IronSentinel_AnimBP_C : public URemnantAnimInstance
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Mod_IronSentinel_AnimBP.Mod_IronSentinel_AnimBP_C");
		return ptr;
	}



	void EvaluateGraphExposedInputs_ExecuteUbergraph_Mod_IronSentinel_AnimBP_AnimGraphNode_ModifyBone_D8DCAC9046B0A276F92513976643F22C();
	void BlueprintUpdateAnimation();
	void ExecuteUbergraph_Mod_IronSentinel_AnimBP();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
