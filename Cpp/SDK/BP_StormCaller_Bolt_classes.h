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

// BlueprintGeneratedClass BP_StormCaller_Bolt.BP_StormCaller_Bolt_C
// 0x0000
class ABP_StormCaller_Bolt_C : public AActor
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_StormCaller_Bolt.BP_StormCaller_Bolt_C");
		return ptr;
	}



	void Snap_to_Ceiling_and_floor();
	void Floor_Check();
	void Ceiling_Check();
	void PlaySpawnFX();
	void PlayStrikeFX();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_StormCaller_Bolt();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
