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

// BlueprintGeneratedClass Action_Aura.Action_Aura_C
// 0x0000
class UAction_Aura_C : public UAction_Buff_C
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Aura.Action_Aura_C");
		return ptr;
	}



	void DoAction();
	void GetRadius();
	void UpdateOverlaps();
	void ValidateActor();
	void OnTick();
	void OnBeginOverlap();
	void OnEndOverlap();
	void OnActionStop();
	void ExecuteUbergraph_Action_Aura();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
