﻿#pragma once

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

// BlueprintGeneratedClass Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C
// 0x0000
class UAction_DOT_Fire_Stacking_C : public UAction_DOT_Fire_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_DOT_Fire_Stacking.Action_DOT_Fire_Stacking_C");
		return ptr;
	}



	void DetermineRollDelta();
	void OnReapplyBuff();
	void OnActionStart();
	void ExecuteUbergraph_Action_DOT_Fire_Stacking();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
