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

// BlueprintGeneratedClass BP_ActionBase.BP_ActionBase_C
// 0x0000
class UBP_ActionBase_C : public UActionBase
{
public:


	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ActionBase.BP_ActionBase_C");
		return ptr;
	}



	void SetAggroGroup();
	void SpawnActor();
	void SpawnCharacter();
	void ScatterHorizontal();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
