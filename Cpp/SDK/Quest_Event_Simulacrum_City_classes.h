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

// BlueprintGeneratedClass Quest_Event_Simulacrum_City.Quest_Event_Simulacrum_City_C
// 0x0000
class AQuest_Event_Simulacrum_City_C : public AQuest_Event_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Quest_Event_Simulacrum_City.Quest_Event_Simulacrum_City_C");
		return ptr;
	}



	void AllDestroyed();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
