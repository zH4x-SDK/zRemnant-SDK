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

// BlueprintGeneratedClass BP_Light_A.BP_Light_A_C
// 0x0000
class ABP_Light_A_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Light_A.BP_Light_A_C");
		return ptr;
	}



	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Light_A();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
