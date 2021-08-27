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

// BlueprintGeneratedClass Action_Character_Wasteland_Sentinel_Sound_Awareness.Action_Character_Wasteland_Sentinel_Sound_Awareness_C
// 0x0000
class UAction_Character_Wasteland_Sentinel_Sound_Awareness_C : public UAction_Sound_Awareness_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Character_Wasteland_Sentinel_Sound_Awareness.Action_Character_Wasteland_Sentinel_Sound_Awareness_C");
		return ptr;
	}



	void OnActionStart();
	void ExecuteUbergraph_Action_Character_Wasteland_Sentinel_Sound_Awareness();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
