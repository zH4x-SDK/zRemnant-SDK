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

// BlueprintGeneratedClass BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C
// 0x0000
class ABP_Wasteland_Sentinel_Beam_C : public ABP_Beam_Projectile_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Wasteland_Sentinel_Beam.BP_Wasteland_Sentinel_Beam_C");
		return ptr;
	}



	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Wasteland_Sentinel_Beam();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
