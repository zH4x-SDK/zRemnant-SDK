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

// BlueprintGeneratedClass Action_StopAction_Bleed.Action_StopAction_Bleed_C
// 0x0000
class UAction_StopAction_Bleed_C : public UAction_StopAction_Base_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_StopAction_Bleed.Action_StopAction_Bleed_C");
		return ptr;
	}



	void Stop_Action();
	void ExecuteUbergraph_Action_StopAction_Bleed();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
