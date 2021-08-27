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

// BlueprintGeneratedClass BP_TOD_GF.BP_TOD_GF_C
// 0x0000
class ABP_TOD_GF_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_TOD_GF.BP_TOD_GF_C");
		return ptr;
	}



	void GetTimeOfDay();
	void Set_Material_Variables();
	void Set_Solar_Angle();
	void UserConstructionScript();
	void SkyLight_Fade__FinishedFunc();
	void SkyLight_Fade__UpdateFunc();
	void ReceiveBeginPlay();
	void ReceiveTick();
	void SkyLight_Darken();
	void SkyLight_Brighten();
	void ExecuteUbergraph_BP_TOD_GF();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
