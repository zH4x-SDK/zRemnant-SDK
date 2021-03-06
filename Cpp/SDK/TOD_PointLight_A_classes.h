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

// BlueprintGeneratedClass TOD_PointLight_A.TOD_PointLight_A_C
// 0x0000
class ATOD_PointLight_A_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass TOD_PointLight_A.TOD_PointLight_A_C");
		return ptr;
	}



	void MatchSunColor();
	void TODLight();
	void UserConstructionScript();
	void ReceiveTick();
	void ExecuteUbergraph_TOD_PointLight_A();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
